using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

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
        
    }

    void LeftControllerGripped(InputAction.CallbackContext ctx)
    {
        leftHandGripping = true;
        Debug.Log("Bruh");
    }

    void LeftControllerReleased(InputAction.CallbackContext ctx)
    {
        leftHandGripping = false;
        Debug.Log("Kms");
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
