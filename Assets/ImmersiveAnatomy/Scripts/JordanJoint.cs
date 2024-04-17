using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JordanJoint : MonoBehaviour
{
    Vector3 HandInitPos;
    Vector3 HandInitRot;
    Vector3 PartInitPos;
    Vector3 PartInitRot;

    public Transform Target;

    //BoxCollider Bounds;

    void Start()
    {
        HandInitPos = this.transform.position;
        //HandInitRot = this.transform.eulerAngles;

        PartInitPos = Target.position;
        //PartInitRot = Target.eulerAngles;

        //Bounds = Target.GetComponent<BoxCollider>();
    }

    void Update()
    {
        Target.transform.position = PartInitPos + ((this.transform.position - HandInitPos) * 3f);

        Target.transform.LookAt(this.transform.position);

        //Target.transform.RotateAround(Target.transform.position - Bounds.center, Target.transform.up, PartInitRot.x + (this.transform.eulerAngles.x - HandInitRot.x));

        //Target.transform.eulerAngles = PartInitRot + (this.transform.eulerAngles - HandInitRot);
    }
}
