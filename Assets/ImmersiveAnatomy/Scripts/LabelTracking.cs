using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using TMPro;
using UnityEngine.InputSystem;

public class LabelTracking : MonoBehaviour
{
    public Transform playerCamera;
    public bool uiShowing = false;
    // Start is called before the first frame update
    void Start()
    {
    }
    void Update()
    {
        transform.LookAt(playerCamera, Vector3.up);
        transform.Rotate(0, 180, 0);
    }


}

