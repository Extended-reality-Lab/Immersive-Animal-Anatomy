using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorChanger : MonoBehaviour
{
    public GameObject selectedObject;
    bool isColorChanged = false;

    public void ChangeColor()
    {
        if (isColorChanged)
        {
            selectedObject.GetComponent<Renderer>().material.color = Color.white;
            isColorChanged = false;
            Debug.Log("Color Changed To White");
        }
        else
        {
            selectedObject.GetComponent<Renderer>().material.color = Color.blue;
            isColorChanged = true;
            Debug.Log("Color Changed To Blue");
        }

    }
}
