using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Animations;
using UnityEngine.SceneManagement;

public class MovementController : MonoBehaviour
{

    public InputActionReference leftStick;
    public InputActionReference leftTrigger;

    [SerializeField]
    public Vector2 inputVector;
    [SerializeField]
    public GameObject CameraObject;
    [SerializeField]
    public GameObject LeftController;

    public Vector3 moveDirection;

    public Transform orientation;

    public float moveSpeed;

    public bool showRay = false;

    Rigidbody rb;

    RaycastHit hit;


    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        rb.freezeRotation = true;

        leftTrigger.action.started += triggerPulled;
        leftTrigger.action.canceled += triggerReleased;
    }

    // Update is called once per frame
    void Update()
    {
        //log the input of the joystick
        inputVector = leftStick.action.ReadValue<Vector2>();

        //figure out the orientation of the player in 2d (top-down)
        orientation.rotation = Quaternion.Euler(0f, CameraObject.transform.eulerAngles.y, 0f);

        //determine the desired direction based on orientation and 
        moveDirection = orientation.forward * inputVector.y + orientation.transform.right * inputVector.x;

        //apply movement
        rb.AddForce(moveDirection.normalized * moveSpeed * 10f, ForceMode.Force);

        //show teleport aim ray
        if (showRay == true)
        {
            Debug.DrawRay(LeftController.transform.position, LeftController.transform.TransformDirection(Vector3.forward) * 100f, Color.blue);
        }

    }

    void triggerPulled(InputAction.CallbackContext ctx)
    {

        //toggle bool
        showRay = true;

    }

    void triggerReleased(InputAction.CallbackContext ctx)
    {

        //toggle bool and teleport
        showRay = false;

        //find where the ray collides, teleport to that location
        if (Physics.Raycast(LeftController.transform.position, LeftController.transform.TransformDirection(Vector3.forward), out hit))
        {
            this.transform.position = new Vector3(hit.point.x, this.transform.position.y, hit.point.z);
        }


    }
}
