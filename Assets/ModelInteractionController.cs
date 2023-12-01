using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Animations;

public class ModelInteractionController : MonoBehaviour
{

    [SerializeField] public GameObject Animal;
    [SerializeField] public GameObject ControllerL;
    [SerializeField] public GameObject ControllerR;

    public InputActionReference rightGripButton; // reference to right controller grip button
    public InputActionReference leftGripButton; // reference to right controller grip button

    public bool leftHandGripping = false;
    public bool rightHandGripping = false;


    // Start is called before the first frame update
    void Start()
    {
        leftGripButton.action.started += LeftControllerGripped;
        leftGripButton.action.canceled += LeftControllerReleased;
        rightGripButton.action.started += RightControllerGripped;
        rightGripButton.action.canceled += RightControllerReleased;
    }

    // Update is called once per frame
    void Update()
    {

        //if only right controller is gripping, do rotation/position
        if (rightHandGripping == true && leftHandGripping == false)
        {
            //enable the parent constraint between the controller and object
            Animal.GetComponent<ParentConstraint>().constraintActive = true;
        }

        if (rightHandGripping == true && leftHandGripping == true)
        {
            //perform an instance of scaling
        }

        if (rightHandGripping == false)
        {
            Animal.GetComponent<ParentConstraint>().constraintActive = false;
        }

    }

    void LeftControllerGripped(InputAction.CallbackContext ctx)
    {
        leftHandGripping = true;
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
