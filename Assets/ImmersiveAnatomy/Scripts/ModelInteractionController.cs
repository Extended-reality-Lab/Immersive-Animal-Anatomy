using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Animations;
using UnityEngine.SceneManagement;

public class ModelInteractionController : MonoBehaviour
{

    [SerializeField]
    public List <GameObject> ModelArray;
    public List <GameObject> SelectedModels;

    [SerializeField] public GameObject Animal;
    [SerializeField] public GameObject ControllerL;
    [SerializeField] public GameObject ControllerR;

    public InputActionReference rightGripButton; // reference to right controller grip button
    public InputActionReference leftGripButton; // reference to right controller grip button

    public float currentDist;
    public float oldDist;
    public float deltaDist;

    public bool largeJointMade = false;
    public bool smallJointMade = false;
    public bool leftHandGripping = false;
    public bool rightHandGripping = false;
    public bool animalPresent = false;
    public bool leftGripJustBegan = false;

    private Color selectedColor = new Color(0.75f, 0.75f,0.75f, 1.0f);


    // Start is called before the first frame update
    void Start()
    {
        leftGripButton.action.started += LeftControllerGripped;
        leftGripButton.action.canceled += LeftControllerReleased;
        rightGripButton.action.started += RightControllerGripped;
        rightGripButton.action.canceled += RightControllerReleased;

        SceneManager.activeSceneChanged += ChangedActiveScene;

    }


    private void ChangedActiveScene(Scene current, Scene next)
    {

        //check to see if there is an animal in this scene
        Animal = GameObject.Find("/AnatomyHolder");

        if (Animal != null)
        {
            animalPresent = true;
        }
        else
        {
            animalPresent = false;
        }

        //get an array of the model
        if(GameObject.FindWithTag("Model")!=null){
            // Find all children of the Skeleton object
            Transform[] allSkeleChildren = GameObject.Find("Model Skeleton").GetComponentsInChildren<Transform>();
            foreach (Transform child in allSkeleChildren)
            { 
                if(child.gameObject.name != "Model Skeleton"&&child.gameObject.tag != "Label"){
                    ModelArray.Add(child.gameObject);
                }
               
            }
            // Find all children of the Organ object
            Transform[] allOrgChildren = GameObject.Find("Model Internal Organs").GetComponentsInChildren<Transform>();
            foreach (Transform child in allOrgChildren)
            { 
                if(child.gameObject.name != "Model Internal Organs"&&child.gameObject.tag != "Label"){
                    ModelArray.Add(child.gameObject);
                }
                
            }
            
            // Find all children of the Skin object
            Transform[] allSkinChildren = GameObject.Find("Model External Organs").GetComponentsInChildren<Transform>();
            foreach (Transform child in allSkinChildren)
            { 
                if(child.gameObject.name != "Model External Organs"&&child.gameObject.tag != "Label"){
                    ModelArray.Add(child.gameObject);
                }
                
            }
        }

    }



    void LeftControllerGripped(InputAction.CallbackContext ctx)
    {
        
        

        if(largeJointMade == false && smallJointMade == false && Animal){
            
            smallJointMade = true;

            //gain control over the greater model
            Animal.GetComponent<AnimalOwnerShipManager>().gimmieOwnershipPleaseServerRpc();

            //check for all the individual parts selected
            foreach (GameObject model in ModelArray){

                Material material = model.GetComponent<Renderer>().material;

                //if it has the selected color, we know it's been selected
                if((material.color.r == selectedColor.r) && (material.color.g == selectedColor.g) && (material.color.b == selectedColor.b)){

                    //keep track of what we are moving (used for when we break the joints in case someone deselects the part while we're moving it)
                    SelectedModels.Add(model);

                    //gain control over the individual part in question
                    model.GetComponent<AnimalPartOwnershipController>().gimmiePartOwnershipPleaseServerRpc();

                    ConstraintSource source = new ConstraintSource();
                    source.sourceTransform = ControllerL.transform;
                    source.weight = 1f;

                    model.AddComponent<ParentConstraint>();
                    model.GetComponent<ParentConstraint>().AddSource(source);

                    //var positionDelta = model.transform.position - ControllerL.transform.position;
                    var rotationDelta = Quaternion.Inverse(ControllerL.transform.rotation) * model.transform.rotation;
                    model.GetComponent<ParentConstraint>().SetTranslationOffset(0, ControllerL.transform.InverseTransformPoint(model.transform.position));
                    model.GetComponent<ParentConstraint>().SetRotationOffset(0, rotationDelta.eulerAngles);

                    model.GetComponent<ParentConstraint>().weight = 1f;
                    model.GetComponent<ParentConstraint>().constraintActive = true;

                    //https://discussions.unity.com/t/how-to-activate-parent-constraint-via-api-the-same-way-as-activate-button-does/218717?clickref=1101lyp5bwBV&utm_source=partnerize&utm_medium=affiliate&utm_campaign=unity_affiliate
                }

            }

        }
    }

    void LeftControllerReleased(InputAction.CallbackContext ctx)
    {
        //go through and break 
        foreach (GameObject model in ModelArray){
            Destroy(model.GetComponent<ParentConstraint>());
        }
        
        smallJointMade = false;
    }

    void RightControllerGripped(InputAction.CallbackContext ctx)
    {
        if (largeJointMade == false && smallJointMade == false && Animal != null)
        {
            largeJointMade = true;

            //send a message to the server to gain ownership of the model
            Animal.GetComponent<AnimalOwnerShipManager>().gimmieOwnershipPleaseServerRpc();

            //get control over all parts
            foreach (GameObject model in ModelArray){
                model.GetComponent<AnimalPartOwnershipController>().gimmiePartOwnershipPleaseServerRpc();
            }

            //create joint
            ControllerR.AddComponent<FixedJoint>();
            ControllerR.GetComponent<FixedJoint>().connectedBody = Animal.GetComponent<Rigidbody>();
        }
    }

    void RightControllerReleased(InputAction.CallbackContext ctx)
    {
        //break any joints if they exist
        if(largeJointMade == true){
            Destroy(ControllerR.GetComponent<FixedJoint>());
            largeJointMade = false;
        }
    }

}
