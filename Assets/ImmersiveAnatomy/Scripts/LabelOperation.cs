using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using TMPro;

public class LabelOperation : MonoBehaviour
{
    public GameObject Label;
    public Camera playerCamera;
    // Start is called before the first frame update
    void Start()
    {
        playerCamera=Camera.main;
        Label.SetActive(false);
        setLabel();
    }
    void Update()
    {
        Label.transform.rotation=Quaternion.LookRotation(Label.transform.position - playerCamera.transform.position);
    }
    // Update is called once per frame
    void setLabel()
    {
        Debug.Log(Label.transform.parent.name);
        Debug.Log(Label.GetComponentInChildren<TMP_Text>().text);
        Label.GetComponentInChildren<TMP_Text>().text = Label.transform.parent.name;
        
    }
    public void showLabel()
    {  
        Debug.Log("Label is active: "+Label.activeInHierarchy);
        if(Label.activeInHierarchy){
            Debug.Log("in true condition");
            Label.SetActive(false);
        }
        else if(!Label.activeInHierarchy){
            Debug.Log("in false condition");
            Label.SetActive(true);
        }
    }
}
