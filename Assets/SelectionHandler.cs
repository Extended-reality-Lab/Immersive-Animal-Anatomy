using Unity.Netcode;
using UnityEngine;
using System.Collections;
using Unity.Collections;
using System.Collections.Generic;
using TMPro;

public class SelectionHandler : NetworkBehaviour
{

    public NetworkVariable<bool> isSelected = new NetworkVariable<bool>(false, NetworkVariableReadPermission.Everyone);

    public TMP_Text Label;
    public GameObject labelParent;
    public LineRenderer Line;
    public Camera playerCamera;
    private const bool initialValue = false;

    private Color customColor = new Color(0.75f, 0.75f,0.75f, 1.0f);

    public override void OnNetworkSpawn(){
        isSelected.OnValueChanged += OnSelectionValueChanged;

        //check for late joiners
        if(isSelected.Value != initialValue){
            //correct the status of the client scene
            toggleSelection();
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        //dynamically finds the objects label
        Label = this.transform.GetChild(0).GetChild(0).GetChild(2).gameObject.GetComponent<TMP_Text>();
        labelParent = this.transform.GetChild(0).GetChild(0).gameObject;
        Line = this.transform.GetChild(0).gameObject.GetComponent<LineRenderer>();
        Label.text = (transform.name).Replace("_"," ");
        playerCamera = Camera.main;
        Label.enabled = false;
        Line.enabled = false;

    }

    // Update is called once per frame
    void Update()
    {
        //update the rotation of the label to correctly face the player
        labelParent.transform.rotation=Quaternion.LookRotation(labelParent.transform.position - playerCamera.transform.position);

    }

    public void tintOn(){
        Material material = this.GetComponent<Renderer>().material;

        material.EnableKeyword("_EMISSION");

    }

    public void tintOff(){
        Material material = this.GetComponent<Renderer>().material;

        material.DisableKeyword("_EMISSION");
    }

    //runs whenever the network detects a variable change
    private void OnSelectionValueChanged(bool previous, bool current){

        //call the changer functionsss
        toggleSelection();

    }

    public void toggleSelection(){

        //grab the current color
        Material material = this.GetComponent<Renderer>().material;
        Color color = material.color;

        if(isSelected.Value == true){
            //change the color to the custom color, but leave the alpha alone
            color.r = 0.75f;
            color.g = 0.75f;
            color.b = 0.75f;
            material.color = color;

            //turn on the label
            Label.enabled = true;
            Line.enabled = true;
        }
        else{
            //change the color to the custom color, but leave the alpha alone
            color.r = 1f;
            color.g = 1f;
            color.b = 1f;
            material.color = color;

            //turn off the label
            Label.enabled = false;
            Line.enabled = false;
        }
    }
    
    //this is the function that will actually be called by the exterior functionality that detects selection in a physical space, only here is the bool written
    [ServerRpc(RequireOwnership = false)]
    public void playerToggledBoolServerRpc()
    {
        isSelected.Value = !isSelected.Value;

    }

    [ServerRpc(RequireOwnership = false)]
    public void playerPositiveBoolServerRpc()
    {
        isSelected.Value = true;

    }

    [ServerRpc(RequireOwnership = false)]
    public void playerNegativeBoolServerRpc()
    {
        isSelected.Value = false;

    }
}