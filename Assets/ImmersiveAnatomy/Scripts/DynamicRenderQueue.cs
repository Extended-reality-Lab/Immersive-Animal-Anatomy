using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class DynamicRenderQueue : MonoBehaviour
{
    private string currentScene;
    private int renderQueue = 3000;
    private bool isModel = true;
    public List<GameObject> ModelArray;
    private MaterialPropertyBlock matBlock;
    public Camera Camera;
    // Start is called before the first frame update
    void Start()
    {
        currentScene = SceneManager.GetActiveScene().name;
        if(GameObject.FindWithTag("Model")!=null){
            isModel = true;
        }
        else{
            isModel = false;
        }
    }

    
    void FixedUpdate()
    {
        if(SceneManager.GetActiveScene().name != currentScene){
            currentScene = SceneManager.GetActiveScene().name;
            if(GameObject.FindWithTag("Model")!=null){
                isModel = true;
                // Find all children of the Skeleton object
                Transform[] allSkeleChildren = GameObject.Find("Model Skeleton").GetComponentsInChildren<Transform>();
                foreach (Transform child in allSkeleChildren)
                {
                    if (child.gameObject.name != "Model Skeleton")
                    {
                        ModelArray.Add(child.gameObject);
                    }

                }
                // Find all children of the Organ object
                Transform[] allOrgChildren = GameObject.Find("Model Internal Organs").GetComponentsInChildren<Transform>();
                foreach (Transform child in allOrgChildren)
                { 
                    if(child.gameObject.name != "Model Internal Organs"){
                        ModelArray.Add(child.gameObject);
                    }
                    
                }
                
                // Find all children of the Skin object
                Transform[] allSkinChildren = GameObject.Find("Model External Organs").GetComponentsInChildren<Transform>();
                foreach (Transform child in allSkinChildren)
                { 
                    if(child.gameObject.name != "Model External Organs"){
                        ModelArray.Add(child.gameObject);
                    }
                    
                }
            }
            else{
                isModel = false;
            }
        }
        if(isModel){
            for (int i = 0; i < ModelArray.Count; i++)
            {
                DistFromCamera(ModelArray[i]);
                Renderer rend = ModelArray[i].GetComponent<Renderer>();
                rend.GetPropertyBlock(matBlock);
                matBlock.SetFloat("_RenderQueue", 3000-renderQueue);
                rend.SetPropertyBlock(matBlock);
                Debug.Log("object render queue:"+rend.material.renderQueue);
            }
        }
    }

    void DistFromCamera(GameObject obj)
    {
        renderQueue = (int)Vector3.Distance(Camera.main.transform.position, obj.transform.position);
    }
}
