using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;

public class NetworkLineHandler : NetworkBehaviour
{

    //create a synced counter, this will allow line points to have an "id" they belong to
    public NetworkVariable<int> lineCounter = new NetworkVariable<int>(0, NetworkVariableReadPermission.Everyone);

    private LineRenderer line;
    private GameObject lineObject;

    [SerializeField]
    GameObject linePrefab;

    /*
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
    */

    [ClientRpc]
    public void killAllLinesClientRpc(){

        //go through and delete all lines

        foreach (Transform child in transform){
            Destroy(child.gameObject);
        }
    }

    [ClientRpc]
    public void buildLineClientRpc(Vector3[] pointList){

        Debug.Log(pointList);

        
        lineObject = Instantiate(linePrefab, new Vector3(0f, 0f, 0f), Quaternion.identity);
        lineObject.transform.parent = this.transform;
        line = lineObject.GetComponent<LineRenderer>();

        //fill out all the points
        for(int i = 0; i < pointList.Length; i++){
            line.positionCount++;
            line.SetPosition(i, pointList[i]);
        }   
        
    }


    /*
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
    */

    [ServerRpc(RequireOwnership = false)]
    public void buildLineServerRpc(Vector3[] pointList){

        buildLineClientRpc(pointList);

    }

    [ServerRpc(RequireOwnership = false)]
    public void killAllLinesServerRpc(){

        killAllLinesClientRpc();

    }
}
