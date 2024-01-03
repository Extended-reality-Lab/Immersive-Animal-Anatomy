using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModelMaterialInstancing : MonoBehaviour
{
    public List<GameObject> SkeletonArray;
    private MaterialPropertyBlock matBlock;

    // Start is called before the first frame update
    void Start()
    {
        if (GameObject.FindWithTag("Model") != null)
        {
            // Find all children of the Skeleton object
            Transform[] allSkeleChildren = GameObject.Find("Model Skeleton").GetComponentsInChildren<Transform>();
            foreach (Transform child in allSkeleChildren)
            {
                if (child.gameObject.name != "Model Skeleton")
                {
                    SkeletonArray.Add(child.gameObject);
                }

            }
                
            for (int i = 0; i < SkeletonArray.Count; i++)
            {
                Renderer rend = SkeletonArray[i].GetComponent<Renderer>();
                Debug.Log("---------------------");
                Debug.Log("Renderer: " + rend.name);
                Debug.Log("---------------------");
                if(matBlock == null){
                    matBlock = new MaterialPropertyBlock();
                }
                rend.GetPropertyBlock(matBlock);
                Debug.Log("Color: " + rend.material.color);
                matBlock.SetColor("_Color", GetRandomColor());
                Debug.Log("Color: " + rend.material.color);
                rend.SetPropertyBlock(matBlock);
            }
        }
    }
     static Color GetRandomColor()
    {
        return Color.HSVToRGB(Random.value, 1, .9f);
    }

    
}
