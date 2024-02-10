using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class LabelOperation : MonoBehaviour
{
    public GameObject Label;
    public Transform playerCamera;
    // Start is called before the first frame update
    void Start()
    {
        setLabel();
    }

    // Update is called once per frame
    void setLabel()
    {
        Label.GetComponentInChildren<Text>().text = transform.parent.name;
    }
    public void showLabel()
    {  

        if(Label.activeInHierarchy == true){
            Label.SetActive(false);
            trackLabel();
        }
        if(Label.activeInHierarchy == false){
            Label.SetActive(true);
        }
    }
    void trackLabel()
    {
        Label.transform.LookAt(playerCamera);
    }
}
