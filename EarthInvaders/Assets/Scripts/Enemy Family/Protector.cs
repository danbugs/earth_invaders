using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Protector : Enemy {

    // Use this for initialization
    protected override void Start()
    {

        points = Constants.ProtectorPoints;

        base.Start();
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    protected override void Shoot(int checkId)
    {
        // DO NOTHING //
    }
}
