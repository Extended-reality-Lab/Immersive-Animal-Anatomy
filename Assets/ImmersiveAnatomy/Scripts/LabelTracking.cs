using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using TMPro;

public class LabelOperation : MonoBehaviour
{

    public Transform playerCamera;
    // Start is called before the first frame update
    void Start()
    {
    }
    void Update()
    {
        transform.LookAt(playerCamera, Vector3.up);
    }

}
