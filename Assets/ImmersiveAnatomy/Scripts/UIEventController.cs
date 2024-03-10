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

    public InputActionReference xButton; // reference to left controller x button
    public bool uiShowing = false; // bool to track if UI is showing or not
    void Start()
    {
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

}

