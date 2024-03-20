using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;

public class AnimalOwnerShipManager : NetworkBehaviour
{

    [ServerRpc(RequireOwnership = false)]
    public void gimmieOwnershipPleaseServerRpc(ServerRpcParams serverRpcParams = default){

        this.NetworkObject.ChangeOwnership(serverRpcParams.Receive.SenderClientId);

    }

}
