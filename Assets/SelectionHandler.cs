using Unity.Netcode;
using UnityEngine;
using System.Collections;
using Unity.Collections;
using System.Collections.Generic;
using TMPro;


public class SelectionHandler : NetworkBehaviour
{

    public NetworkVariable<bool> isSelected = new NetworkVariable<bool>(false, NetworkVariableReadPermission.Everyone, NetworkVariableWritePermission.Owner);

    public GameObject Label;
    public Camera playerCamera;

    private Color customColor = new Color(0.75f, 0.75f,0.75f, 1.0f);

    public override void OnNetworkSpawn(){
        isSelected.OnValueChanged += OnSelectionValueChanged;
        Debug.Log("omgbruh");
    }

    // Start is called before the first frame update
    void Start()
    {
        //dynamically finds the objects label
        Label.GetComponentInChildren<TMP_Text>().text = Label.transform.parent.name;
        playerCamera=Camera.main;
        Label.SetActive(false);

    }

    // Update is called once per frame
    void Update()
    {
        //update the rotation of the label to correctly face the player
        Label.transform.rotation=Quaternion.LookRotation(Label.transform.position - playerCamera.transform.position);

    }

    //runs whenever the network detects a variable change
    private void OnSelectionValueChanged(bool previous, bool current){
        
        Debug.Log("In the variable changed function");

        //call the changer functionsss
        toggleSelection();

    }
    
    //this is the function that will actually be called by the exterior functionality that detects selection in a physical space, only here is the bool written
    public void playerToggledBool(){
        isSelected.Value = !isSelected.Value;
        
        //react to the variable change 
        //if(IsOwner){
        //    toggleSelection();
        //}
    }
     
    public void toggleSelection(){

        if(isSelected.Value == true){
            //change the color
            this.GetComponent<Renderer>().material.color = customColor;
            Debug.Log("Color Changed To Selection color");

            //turn on the label
            Label.SetActive(true);
        }
        else{
            //change the color
            this.GetComponent<Renderer>().material.color = Color.white;
            Debug.Log("Color Changed To White");

            //turn off the label
            Label.SetActive(false);
        }
    }


}
