using Unity.Netcode;
using UnityEngine;
using System.Collections;
using Unity.Collections;
using System.Collections.Generic;
using TMPro;

public class NetworkedQuizController : NetworkBehaviour
{
    public NetworkVariable<FixedString128Bytes> partName = new NetworkVariable<FixedString128Bytes>("null", NetworkVariableReadPermission.Everyone);
    
    [SerializeField]
    TextMeshPro textComponent;
    [SerializeField]
    GameObject Animal;
    [SerializeField]
    GameObject partChoice;

    bool partWasSelected = false;
    bool partIsSelected = false;

    private FixedString128Bytes initialValue = "null"; 

    private Color selectedColor = new Color(0.75f, 0.75f,0.75f, 1.0f);

    public override void OnNetworkSpawn(){

        partName.OnValueChanged += OnTextValueChanged;

        //check for late joiners
        if(partName.Value != initialValue){
            //correct the status of the client scene
            changeQuizText();
        }

    }

    [ServerRpc]
    void ChangePartServerRpc()
    {
        //pick a random new part
        int childCount = Animal.transform.childCount;
        int childChoiceNum = Random.Range(0, childCount);

        GameObject childChoice = Animal.transform.GetChild(childChoiceNum).gameObject;

        int partCount = childChoice.transform.childCount;
        int partChoiceNum = Random.Range(0, partCount);

        partChoice = childChoice.transform.GetChild(partChoiceNum).gameObject;

        //update the network variable
        partName.Value = partChoice.name;

        //check to see if it's currently selected so you can set the "was selected variable"
    }

    void Update()
    {
        
        if(IsHost){
            //check to see if the part just got selected
            if(partChoice){
                //if (partChoice.GetComponent<Renderer>().material.color == selectedColor)
                if((partChoice.GetComponent<Renderer>().material.color.r == selectedColor.r) && (partChoice.GetComponent<Renderer>().material.color.g == selectedColor.g) && (partChoice.GetComponent<Renderer>().material.color.b == selectedColor.b))
                {
                    partIsSelected = true;
                }
                else
                {
                    partIsSelected = false;
                }
            }

            if (partIsSelected == true && partWasSelected == false)
            {
                partIsSelected = false;
                partWasSelected = false;
                partChoice = null;
                ChangePartServerRpc();
            }

            partWasSelected = partIsSelected;
        }
    }

    //respond to the change of name
    private void OnTextValueChanged(FixedString128Bytes previous, FixedString128Bytes current){

        //call the changer functionsss
        changeQuizText();

    }

    public void changeQuizText(){
        
        //change the actual quiz tmp text
        textComponent.text = "Please Locate The " + partName.Value.ToString() + " And Indicate It With Your Controller";
        
    }

}