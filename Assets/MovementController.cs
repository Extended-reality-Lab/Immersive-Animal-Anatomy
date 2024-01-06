using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class MovementController : MonoBehaviour
{

    public InputActionReference leftStick;

    [SerializeField]
    public Vector2 inputVector;
    [SerializeField]
    public GameObject CameraObject;

    public Vector3 moveDirection;

    public Transform orientation;

    public float moveSpeed;

    Rigidbody rb;


    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        rb.freezeRotation = true;
    }

    // Update is called once per frame
    void Update()
    {
        //log the input of the joystick
        inputVector = leftStick.action.ReadValue<Vector2>();

        //figure out the orientation of the player in 2d (top-down)
        orientation.rotation = Quaternion.Euler(0f, CameraObject.transform.rotation.y, 0f);

        //determine the desired direction based on orientation and 
        moveDirection = orientation.forward * inputVector.y + orientation.transform.right * inputVector.x;

        //apply movement
        rb.AddForce(moveDirection.normalized * moveSpeed * 10f, ForceMode.Force);

    }
}
