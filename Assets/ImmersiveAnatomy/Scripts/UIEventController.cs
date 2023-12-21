using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Animations;

public class UIEventController : MonoBehaviour
{
    [SerializeField] public GameObject ControllerL;
    [SerializeField] public GameObject ControllerR;
    [SerializeField] public GameObject UIObject; // reference to UI object

    // Start is called before the first frame update
    public InputActionReference xButton; // reference to left controller x button
    public InputActionReference aButton; // reference to right controller a button
    public bool uiShowing = false; // bool to track if UI is showing or not
    void Start()
    {
        xButton.action.started += XButtonPressed;
        aButton.action.started += AButtonPressed;
    }

    // Update is called once per frame
    void Update()
    {
        if (uiShowing == true)
        {
            //show UI
            UIObject.SetActive(true);
        }
        else
        {
            //hide UI
            UIObject.SetActive(false);
        }
    }
    void XButtonPressed(InputAction.CallbackContext ctx)
{
    if (uiShowing == false)
    {
        //show UI
        uiShowing = true;
    }
    else
    {
        //hide UI
        uiShowing = false;
    }
    Debug.Log("X Button Pressed");
}

void AButtonPressed(InputAction.CallbackContext ctx)
{
     if (uiShowing == false)
    {
        //show UI
        uiShowing = true;
    }
    else
    {
        //hide UI
        uiShowing = false;
    }
    Debug.Log("A Button Pressed");
}

}

