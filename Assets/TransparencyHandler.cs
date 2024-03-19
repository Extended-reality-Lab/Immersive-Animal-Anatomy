using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;
using UnityEngine.UI;

public class TransparencyHandler : NetworkBehaviour
{
    public NetworkVariable<float> transparency = new NetworkVariable<float>(1, NetworkVariableReadPermission.Everyone);

    public float recentMaterialTransparency = 1;
    public float currentMaterialTransparency = 1;
    public GameObject partSlider = null;

    public override void OnNetworkSpawn(){
        transparency.OnValueChanged += OnTransparencyValueChanged;
    }

    // Start is called before the first frame update
    void Start()
    {
        //find the slider holder
        partSlider = GameObject.Find("/SharedSpacesCameraRig/TrackingSpace/LeftHandAnchor/LeftControllerAnchor/Canvas/SliderCanvas/Scroll View/Viewport/Content");

    }

    // Update is called once per frame
    void Update()
    {
        currentMaterialTransparency = this.GetComponent<Renderer>().material.color.a;

        //check to see if the transparency changed
        if(recentMaterialTransparency != currentMaterialTransparency){
            //check to see if this update is actually different than the networked value (prevents infinite propogation)
            if(currentMaterialTransparency != transparency.Value){
                changeTransparencyServerRpc(currentMaterialTransparency);
            }
        }

        recentMaterialTransparency = currentMaterialTransparency;
    }

    //runs whenever the network detects a variable change
    private void OnTransparencyValueChanged(float previous, float current){

        //call the external function for all clients other than the one that already changed
        if(currentMaterialTransparency != transparency.Value){
            changeTransparency();
        }
    }

    //alter the UI
    private void changeTransparency(){

        partSlider.GetComponent<DynamicSliders>().SliderExternallyChanged(transparency.Value, this.name);
    }

    //send a message out to the other clients
    [ServerRpc(RequireOwnership = false)]
    public void changeTransparencyServerRpc(float curTrans)
    {

        transparency.Value = curTrans;

    }

}
