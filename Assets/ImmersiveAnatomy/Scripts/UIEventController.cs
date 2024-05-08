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
    [SerializeField] public GameObject ToolTipLeft;
    [SerializeField] public GameObject ToolTipRight;
    public InputActionReference xButton; // reference to left controller x button
    public InputActionReference yButton; // reference to left controller x button
    public bool uiShowing = false; // bool to track if UI is showing or not
    bool xButtonPressed = true; // bool to track if x button is pressed
    void Start()
    {
        yButton.action.started += YButtonPressed;
        xButton.action.started += XButtonPressed;
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
        if(xButtonPressed == true)
        {
            //show tooltip
            ToolTipLeft.SetActive(true);
            ToolTipRight.SetActive(true);
        }
        else
        {
            //hide tooltip
            ToolTipLeft.SetActive(false);
            ToolTipRight.SetActive(false);
        }
    }
    void YButtonPressed(InputAction.CallbackContext ctx)
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
        Debug.Log("Y Button Pressed");
    }
    void XButtonPressed(InputAction.CallbackContext ctx)
    {
        if (xButtonPressed == false)
        {
            //show UI
            xButtonPressed = true;
        }
        else
        {
            //hide UI
            xButtonPressed = false;
        }
        Debug.Log("X Button Pressed");
    }

}


