using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;

public class NetworkLineHandler : NetworkBehaviour
{

    private LineRenderer line;
    private GameObject lineObject;

    [SerializeField]
    GameObject linePrefab;


    [ClientRpc]
    public void setFirstPointPositionClientRpc(Vector3 givenPoint){
        
        if(line){
            line.SetPosition(0, givenPoint);
        }
    }

    [ClientRpc]
    public void setNormalPointPositionClientRpc(Vector3 givenPoint){
        
        if(line){
            line.positionCount++;
            line.SetPosition(line.positionCount - 1, givenPoint);
        }
    }

    [ClientRpc]
    public void createNewLineClientRpc(){

        lineObject = Instantiate(linePrefab, new Vector3(0f, 0f, 0f), Quaternion.identity);
        lineObject.transform.parent = this.transform;
        line = lineObject.GetComponent<LineRenderer>();

    }



    [ServerRpc(RequireOwnership = false)]
    public void setFirstPointPositionServerRpc(Vector3 givenPoint){
        setFirstPointPositionClientRpc(givenPoint);
    }

    [ServerRpc(RequireOwnership = false)]
    public void setNormalPointPositionServerRpc(Vector3 givenPoint){
        setNormalPointPositionClientRpc(givenPoint);
    }

    [ServerRpc(RequireOwnership = false)]
    public void createNewLineServerRpc(){
        createNewLineClientRpc();
    }
}
