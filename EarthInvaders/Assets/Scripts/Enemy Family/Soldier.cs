using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Soldier : Enemy {

	// Use this for initialization
	protected override void Start () {
        
        damage = Constants.SoldierDamage;
        points = Constants.SoldierPoints;

        base.Start();
	}
	
	// Update is called once per frames
	void Update () {
		
	}
}
