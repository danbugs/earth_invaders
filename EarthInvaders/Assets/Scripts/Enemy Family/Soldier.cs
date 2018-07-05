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
        if(currentlyShooting && !shootRan)
        {
            InvokeRepeating("SoldierShoot", 2, 2);
            shootRan = true;
        }
	}

    protected override void Shoot(int checkId)
    {
        if(this.ID == checkId)
        {
            GameObject projectile = Instantiate(Resources.Load<GameObject>("Soldier Projectile"), transform.position, Quaternion.identity) as GameObject;
            currentlyShooting = true;
        }
    }

    void SoldierShoot()
    {
        GameObject projectile = Instantiate(Resources.Load<GameObject>("Soldier Projectile"), transform.position, Quaternion.identity) as GameObject;
    }
}
