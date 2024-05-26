using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;

public class AnimalPartOwnershipController : NetworkBehaviour
{
    [ServerRpc(RequireOwnership = false)]
    public void gimmiePartOwnershipPleaseServerRpc(ServerRpcParams serverRpcParams = default){

        this.NetworkObject.ChangeOwnership(serverRpcParams.Receive.SenderClientId);

    }
}
