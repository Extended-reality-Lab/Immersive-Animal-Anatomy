using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Animations;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;

public class ModelInteractionController : MonoBehaviour
{

    public Vector3 ContainerPosition;
    public Quaternion ContainerRotation;
    public List <Vector3> LocalModelPositions;
    public List <Quaternion> LocalModelRotations;

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

    void LeftControllerGripped(InputAction.CallbackContext ctx)
    {
        
        if(largeJointMade == false && smallJointMade == false && Animal){
            
            //establish locks
            Animal.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezeAll;

            smallJointMade = true;

            //gain control over the greater model
            Animal.GetComponent<AnimalOwnerShipManager>().gimmieOwnershipPleaseServerRpc();

            //check for all the individual parts selected
            foreach (GameObject model in ModelArray){

                Material material = model.GetComponent<Renderer>().material;

                //if it has the selected color, we know it's been selected
                if((material.color.r == selectedColor.r) && (material.color.g == selectedColor.g) && (material.color.b == selectedColor.b)){

                    //keep track of what we are moving (used for when we break the joints in case someone deselects the part while we're moving it)
                    //SelectedModels.Add(model);

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

            //release any current locks
            Animal.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.None;

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

    public void DeselectAll(){
        
        foreach (GameObject model in ModelArray){

            model.GetComponent<SelectionHandler>().playerNegativeBoolServerRpc();
            
        }
    }

    public void SelectAll(){

        foreach (GameObject model in ModelArray){

            model.GetComponent<SelectionHandler>().playerPositiveBoolServerRpc();
            
        }
    }

    public void plusButton(){

        Debug.Log("Pluh!");
        
        //find which models are currently selected in the scene
        foreach (GameObject model in ModelArray){

            Material material = model.GetComponent<Renderer>().material;

            //if it has the selected color, we know it's been selected
            if((material.color.r == selectedColor.r) && (material.color.g == selectedColor.g) && (material.color.b == selectedColor.b)){

                //alter the alpha
                Color color = material.color;

                Debug.Log("To be transparency: " + (color.a + .2f));

                //take a look at it's current alpha and make a decision on how to proceed
                if((color.a + .2f) > .9f){
                    model.GetComponent<Renderer>().enabled = true;
                    material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
                    material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.Zero);
                    material.SetInt("_ZWrite", 1);
                    material.DisableKeyword("_ALPHATEST_ON");
                    material.DisableKeyword("_ALPHABLEND_ON");
                    material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                    material.renderQueue = -1;
                    model.GetComponent<BoxCollider>().enabled = true;

                    color.a = 1;
                    material.color = color;
                }
                else if((color.a + .2f) < .9f){
                    model.GetComponent<Renderer>().enabled = true;
                    material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
                    material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
                    material.SetInt("_ZWrite", 0);
                    material.DisableKeyword("_ALPHATEST_ON");
                    material.EnableKeyword("_ALPHABLEND_ON");
                    material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                    material.renderQueue = 2999;
                    model.GetComponent<BoxCollider>().enabled = true;

                    color.a += .2f;
                    material.color = color;
                }

            }

        }

    }

    public void minusButton(){

        Debug.Log("Pluh!");
        
        //find which models are currently selected in the scene
        foreach (GameObject model in ModelArray){

            Material material = model.GetComponent<Renderer>().material;

            //if it has the selected color, we know it's been selected
            if((material.color.r == selectedColor.r) && (material.color.g == selectedColor.g) && (material.color.b == selectedColor.b)){
                //alter the alpha
                Color color = material.color;

                Debug.Log("To be transparency: " + (color.a - .2f));

                //take a look at it's current alpha and make a decision on how to proceed
                if((color.a - .2f) < .1f){

                    color.a = 0;
                    material.color = color;

                    model.GetComponent<Renderer>().enabled = false;
                    model.GetComponent<BoxCollider>().enabled = false;
                }
                else if((color.a - .2f) > .1f){
                    model.GetComponent<Renderer>().enabled = true;
                    material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
                    material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
                    material.SetInt("_ZWrite", 0);
                    material.DisableKeyword("_ALPHATEST_ON");
                    material.EnableKeyword("_ALPHABLEND_ON");
                    material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                    material.renderQueue = 2999;
                    model.GetComponent<BoxCollider>().enabled = true;

                    color.a -= .2f;
                    material.color = color;
                }

            }

        }

    }
    public void invisButton(){
        Debug.Log("invisible!");
        foreach (GameObject model in ModelArray){

            Material material = model.GetComponent<Renderer>().material;

            //if it has the selected color, we know it's been selected
            if((material.color.r == selectedColor.r) && (material.color.g == selectedColor.g) && (material.color.b == selectedColor.b)){
                //alter the alpha
                Color color = material.color;
                color.a = 0;
                material.color = color;
                model.GetComponent<Renderer>().enabled = false;
                model.GetComponent<BoxCollider>().enabled = false;
            }
        }
    }

    public void opaqueButton(){
        Debug.Log("isible!");
        foreach (GameObject model in ModelArray){

            Material material = model.GetComponent<Renderer>().material;

            //if it has the selected color, we know it's been selected
            if((material.color.r == selectedColor.r) && (material.color.g == selectedColor.g) && (material.color.b == selectedColor.b)){

                //alter the alpha
                Color color = material.color;
                model.GetComponent<Renderer>().enabled = true;
                material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
                material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.Zero);
                material.SetInt("_ZWrite", 1);
                material.DisableKeyword("_ALPHATEST_ON");
                material.DisableKeyword("_ALPHABLEND_ON");
                material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                material.renderQueue = -1;
                model.GetComponent<BoxCollider>().enabled = true;

                color.a = 1;
                material.color = color;
            }
        }
    }


    public void ClearArrays(){
        ModelArray.Clear();
    }

    public void FillArrays(){
        Debug.Log("Fill Arrays");
        if(GameObject.FindWithTag("Model")!=null){

            ContainerPosition = GameObject.Find("AnatomyHolder").transform.position;
            ContainerRotation = GameObject.Find("AnatomyHolder").transform.rotation;
            Debug.Log("Container Position: " + ContainerPosition);
            Debug.Log("Container Rotation: " + ContainerRotation);
            // Find all children of the body object
            Transform[] allBodyChildren = GameObject.Find("Model Body").GetComponentsInChildren<Transform>();
            foreach (Transform child in allBodyChildren)
            { 
                if(child.gameObject.name != "Model Body"&&child.gameObject.tag != "Label"){
                    ModelArray.Add(child.gameObject);
                    LocalModelPositions.Add(child.gameObject.transform.localPosition);
                    LocalModelRotations.Add(child.gameObject.transform.localRotation);
                }
               
            }
            
            // Find all children of the Skeleton object
            Transform[] allSkeleChildren = GameObject.Find("Model Skeleton").GetComponentsInChildren<Transform>();
            foreach (Transform child in allSkeleChildren)
            { 
                if(child.gameObject.name != "Model Skeleton"&&child.gameObject.tag != "Label"){
                    ModelArray.Add(child.gameObject);
                    LocalModelPositions.Add(child.gameObject.transform.localPosition);
                    LocalModelRotations.Add(child.gameObject.transform.localRotation);
                }
               
            }
            // Find all children of the Organ object
            Transform[] allOrgChildren = GameObject.Find("Model Organs").GetComponentsInChildren<Transform>();
            foreach (Transform child in allOrgChildren)
            { 
                if(child.gameObject.name != "Model Organs"&&child.gameObject.tag != "Label"){
                    ModelArray.Add(child.gameObject);
                    LocalModelPositions.Add(child.gameObject.transform.localPosition);
                    LocalModelRotations.Add(child.gameObject.transform.localRotation);
                }
                
            }
            //Find all objects in Model Lymphatic_system
            Transform[] allLymphChildren = GameObject.Find("Model Lymphatic_system").GetComponentsInChildren<Transform>();
            foreach (Transform child in allLymphChildren)
            { 
                if(child.gameObject.name != "Model Lymphatic_system"&&child.gameObject.tag != "Label"){
                    ModelArray.Add(child.gameObject);
                    LocalModelPositions.Add(child.gameObject.transform.localPosition);
                    LocalModelRotations.Add(child.gameObject.transform.localRotation);
                }
                
            }
            //Find all objects in model muscle system
            Transform[] allMuscleChildren = GameObject.Find("Model Muscles").GetComponentsInChildren<Transform>();
            foreach (Transform child in allMuscleChildren)
            { 
                if(child.gameObject.name != "Model Muscles"&&child.gameObject.tag != "Label"){
                    ModelArray.Add(child.gameObject);
                    LocalModelPositions.Add(child.gameObject.transform.localPosition);
                    LocalModelRotations.Add(child.gameObject.transform.localRotation);
                }
                
            }
            //Find all objects in Model Nervous_system
            Transform[] allNervChildren = GameObject.Find("Model Nervous_system").GetComponentsInChildren<Transform>();
            foreach (Transform child in allNervChildren)
            { 
                if(child.gameObject.name != "Model Nervous_system"&&child.gameObject.tag != "Label"){
                    ModelArray.Add(child.gameObject);
                    LocalModelPositions.Add(child.gameObject.transform.localPosition);
                    LocalModelRotations.Add(child.gameObject.transform.localRotation);
                }
                
            }
            //Find all objects in Model Vascular_system
            Transform[] allVascChildren = GameObject.Find("Model Vascular_system").GetComponentsInChildren<Transform>();
            foreach (Transform child in allVascChildren)
            { 
                if(child.gameObject.name != "Model Vascular_system"&&child.gameObject.tag != "Label"){
                    ModelArray.Add(child.gameObject);
                    LocalModelPositions.Add(child.gameObject.transform.localPosition);
                    LocalModelRotations.Add(child.gameObject.transform.localRotation);
                }
                
            }
            
            }
            else{
                ClearArrays();
            }
    }
    public void ResetSelectedModels(){
        Debug.Log("Add Selected Models");
        if(ModelArray!=null){
            foreach (GameObject model in ModelArray){
                Material material = model.GetComponent<Renderer>().material;
                if((material.color.r == selectedColor.r) && (material.color.g == selectedColor.g) && (material.color.b == selectedColor.b)){
                    SelectedModels.Add(model);
                }
            }
        }
        foreach (GameObject model in SelectedModels){
            model.GetComponent<AnimalPartOwnershipController>().gimmiePartOwnershipPleaseServerRpc();
            model.transform.localPosition = LocalModelPositions[ModelArray.IndexOf(model)];
            model.transform.localRotation = LocalModelRotations[ModelArray.IndexOf(model)];
        }
        SelectedModels.Clear();
    }
    public void ResetModelPositions(){
        Debug.Log("Reset Model Positions");
        if(ModelArray!=null){
            foreach (GameObject model in ModelArray){
                model.GetComponent<AnimalPartOwnershipController>().gimmiePartOwnershipPleaseServerRpc();
                model.transform.localPosition = LocalModelPositions[ModelArray.IndexOf(model)];
                model.transform.localRotation = LocalModelRotations[ModelArray.IndexOf(model)];
            }
            ModelArray[0].transform.parent.transform.parent.GetComponent<AnimalOwnerShipManager>().gimmieOwnershipPleaseServerRpc();
            ModelArray[0].transform.parent.transform.parent.transform.position = ContainerPosition;
            ModelArray[0].transform.parent.transform.parent.transform.rotation = ContainerRotation;
        }
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
        ClearArrays();
        FillArrays();

    }
}
