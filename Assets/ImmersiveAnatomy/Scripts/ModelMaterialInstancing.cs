using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModelMaterialInstancing : MonoBehaviour
{
    public List<GameObject> SkeletonArray;
    public Color MaterialColor;
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
                Debug.Log("Renderer: " + rend.name);
                matBlock = new MaterialPropertyBlock();
                MaterialColor.r = Random.Range(0, 255);
                MaterialColor.g = Random.Range(0, 255);
                MaterialColor.b = Random.Range(0, 255);
                MaterialColor.a = 255;
                matBlock.SetColor("_Color", MaterialColor);
                Debug.Log("Color: " + MaterialColor);
                rend.SetPropertyBlock(matBlock);
            }
        }
    }
}
