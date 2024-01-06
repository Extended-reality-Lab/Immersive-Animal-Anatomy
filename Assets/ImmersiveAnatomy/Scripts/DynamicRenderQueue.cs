using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class DynamicRenderQueue : MonoBehaviour
{
    private string currentScene;
    private int renderQueue = 3000;
    private Vector3 cameraPosition;
    public List<GameObject> ModelArray;
    private MaterialPropertyBlock matBlock;
    public Camera Camera;

    // Start is called before the first frame update
    void Start()
    {
        cameraPosition = Camera.transform.position;
        Debug.Log("Camera Position: " + cameraPosition);
        currentScene = SceneManager.GetActiveScene().name;
    }
    void FixedUpdate()
    {
        ;
        if(SceneManager.GetActiveScene().name != currentScene){
            currentScene = SceneManager.GetActiveScene().name;
            if(GameObject.FindWithTag("Model")!=null){
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
                for (int i=0; i<ModelArray.Count; i++){
                    Renderer rend = ModelArray[i].GetComponent<Renderer>();
                    if(matBlock == null){
                        matBlock = new MaterialPropertyBlock();
                    }
                    rend.GetPropertyBlock(matBlock);
                    matBlock.SetFloat("_RenderQueue", renderQueue);
                    matBlock.SetFloat("_RenderQueue", renderQueue-(Vector3.Distance(Camera.transform.position, ModelArray[i].transform.position)*10));
                    rend.SetPropertyBlock(matBlock);
                    Debug.Log("matBlock renderQueue: " + matBlock.GetFloat("_RenderQueue"));
                }
            }
        }
        RenderQueueUpdate();
        cameraPosition = Camera.transform.position;
    }

    void RenderQueueUpdate()
    {
        if (Camera.transform.position.x >= cameraPosition.x + 1 || Camera.transform.position.x <= cameraPosition.x - 1 || Camera.transform.position.y >= cameraPosition.y + 1 || Camera.transform.position.y <= cameraPosition.y - 1 || Camera.transform.position.z >= cameraPosition.z + 1 || Camera.transform.position.z <= cameraPosition.z - 1)
        {
            for (int i = 0; i < ModelArray.Count; i++)
            {
                Renderer rend = ModelArray[i].GetComponent<Renderer>();
                if (matBlock == null)
                {
                    matBlock = new MaterialPropertyBlock();
                }
                rend.GetPropertyBlock(matBlock);
                float distance = Vector3.Distance(Camera.transform.position, ModelArray[i].transform.position);
                matBlock.SetFloat("_RenderQueue", renderQueue - (distance * 10));
                rend.SetPropertyBlock(matBlock);
                rend.material.renderQueue = (int)matBlock.GetFloat("_RenderQueue");
                Debug.Log("Renderer renderQueue: " + rend.material.renderQueue + " bodyPart " + ModelArray[i].name + " bodyMat" + ModelArray[i].GetComponent<Renderer>().material.name);
            }
        }
    }
    
}