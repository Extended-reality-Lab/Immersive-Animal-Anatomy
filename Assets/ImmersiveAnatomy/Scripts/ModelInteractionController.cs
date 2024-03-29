using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Animations;
using UnityEngine.SceneManagement;

public class ModelInteractionController : MonoBehaviour
{

    [SerializeField] public GameObject Animal;
    [SerializeField] public GameObject ControllerL;
    [SerializeField] public GameObject ControllerR;

    public InputActionReference rightGripButton; // reference to right controller grip button
    public InputActionReference leftGripButton; // reference to right controller grip button

    public float currentDist;
    public float oldDist;
    public float deltaDist;

    public bool jointMade = false;
    public bool leftHandGripping = false;
    public bool rightHandGripping = false;
    public bool animalPresent = false;
    public bool leftGripJustBegan = false;


    // Start is called before the first frame update
    void Start()
    {
        leftGripButton.action.started += LeftControllerGripped;
        leftGripButton.action.canceled += LeftControllerReleased;
        rightGripButton.action.started += RightControllerGripped;
        rightGripButton.action.canceled += RightControllerReleased;

        SceneManager.activeSceneChanged += ChangedActiveScene;

    }

    // Update is called once per frame
    void Update()
    {
        
        //if only right controller is gripping, do rotation/position
        if (rightHandGripping == true && leftHandGripping == false && jointMade == false)
        {
            //create joint
            //Animal.GetComponent<Rigidbody>().isKinematic = true;
            ControllerR.AddComponent<FixedJoint>();
            ControllerR.GetComponent<FixedJoint>().connectedBody = Animal.GetComponent<Rigidbody>();
            jointMade = true;
        }
        //right released, break any existing joints
        if (rightHandGripping == false && jointMade == true)
        {
            //break joint
            Destroy(ControllerR.GetComponent<FixedJoint>());
            jointMade = false;

        }
        /*
        //perform an instance of scaling
        if (rightHandGripping == true && leftHandGripping == true)
        {
            //break any existing joints
            if (jointMade == true)
            {
                Destroy(ControllerR.GetComponent<FixedJoint>());
                jointMade = false;
            }

            //see if scaling just began
            if(leftGripJustBegan == true){
                leftGripJustBegan = false;

                deltaDist = 0;
            }
            //otherwise, it's a consecutive scale, so we actually have an "old" distance
            else{
                //get position delta 
                currentDist = Vector3.Distance(ControllerL.transform.position, ControllerR.transform.position);
                deltaDist = currentDist - oldDist;
            }

            //get position delta 
            currentDist = Vector3.Distance(ControllerL.transform.position, ControllerR.transform.position);
            deltaDist = currentDist - oldDist;
            //if negative, hands came closer together
            if (deltaDist < -.001f)
            {
                //scale down by .025
                Animal.transform.localScale -= new Vector3(.01f, .01f, .01f);
            }
            //if positive, hands separated
            if (deltaDist > .001f)
            {
                //scale up by .025
                Animal.transform.localScale += new Vector3(.01f, .01f, .01f);
            }

            oldDist = currentDist;
        }
        */

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

    }

    void LeftControllerGripped(InputAction.CallbackContext ctx)
    {
        leftHandGripping = true;
        leftGripJustBegan = true;
    }

    void LeftControllerReleased(InputAction.CallbackContext ctx)
    {
        leftHandGripping = false;
    }

    void RightControllerGripped(InputAction.CallbackContext ctx)
    {
        rightHandGripping = true;
    }

    void RightControllerReleased(InputAction.CallbackContext ctx)
    {
        rightHandGripping = false;
    }
}
