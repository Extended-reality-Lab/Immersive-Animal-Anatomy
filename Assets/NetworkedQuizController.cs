using Unity.Netcode;
using UnityEngine;
using System.Collections;
using Unity.Collections;
using System.Collections.Generic;
using TMPro;

public class NetworkedQuizController : NetworkBehaviour
{
    public NetworkVariable<int> partName = new NetworkVariable<int>(0, NetworkVariableReadPermission.Everyone);
    
    [SerializeField]
    TextMeshPro textObject;

    void NameChanged()
    {
        partName.Value = partName.Value + 1;
    }

    void Update()
    {
        if(IsHost){
            NameChanged();
        }

        textObject.text = partName.Value.ToString();
    }

}