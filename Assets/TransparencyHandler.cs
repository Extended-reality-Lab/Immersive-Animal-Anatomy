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

    private const float initialValue = 1;

    public override void OnNetworkSpawn(){
        transparency.OnValueChanged += OnTransparencyValueChanged;

        //check for late joiners
        if(transparency.Value != initialValue){
            //correct the status of the client scene
            changeTransparency();
        }
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
        
        //checks to see if this client is the one who already changed their scene
        changeTransparency();
    }

    //alter the UI
    private void changeTransparency(){
        //call the external function for all clients other than the one that already changed
        if(currentMaterialTransparency != transparency.Value){

            Material material = this.GetComponent<Renderer>().material;
            Color color = material.color;
            
            //checks for full alpha (checks for >.9 rather than ==1 due to the inprecision of floats)
            if(transparency.Value > .9f){
                this.GetComponent<Renderer>().enabled = true;
                material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
                material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.Zero);
                material.SetInt("_ZWrite", 1);
                material.DisableKeyword("_ALPHATEST_ON");
                material.DisableKeyword("_ALPHABLEND_ON");
                material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                material.renderQueue = -1;
                this.GetComponent<BoxCollider>().enabled = true;

                color.a = 1;
                material.color = color;
            }
            //checks for no transparency (checks for <.1 rather than ==0 due to the inprecision of floats)
            else if(transparency.Value < .1f){

                color.a = 0;
                material.color = color;

                this.GetComponent<Renderer>().enabled = false;
                this.GetComponent<BoxCollider>().enabled = false;
            }
            //in between
            else{
                this.GetComponent<Renderer>().enabled = true;
                material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
                material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
                material.SetInt("_ZWrite", 0);
                material.DisableKeyword("_ALPHATEST_ON");
                material.EnableKeyword("_ALPHABLEND_ON");
                material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                material.renderQueue = 2999;
                this.GetComponent<BoxCollider>().enabled = true;

                color.a = transparency.Value;
                material.color = color;
            }

        }
    }

    //send a message out to the other clients
    [ServerRpc(RequireOwnership = false)]
    public void changeTransparencyServerRpc(float curTrans)
    {

        transparency.Value = curTrans;

    }

}
