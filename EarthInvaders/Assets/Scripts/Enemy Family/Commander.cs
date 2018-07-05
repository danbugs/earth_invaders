using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Commander : Enemy {

    // Use this for initialization
    protected override void Start()
    {

        points = Constants.CommanderPoints;
        base.Start();
    }

    // Update is called once per frames
    void Update()
    {
        if (currentlyShooting && !shootRan)
        {
            InvokeRepeating("CommanderShoot", 1, 1);
            shootRan = true;
        }
    }

    protected override void Shoot(int checkId)
    {
        if (this.ID == checkId)
        {
            GameObject projectile = Instantiate(Resources.Load<GameObject>("Commander Projectile"), transform.position, Quaternion.identity) as GameObject;
            currentlyShooting = true;
        }
    }

    void CommanderShoot()
    {
        GameObject projectile = Instantiate(Resources.Load<GameObject>("Commander Projectile"), transform.position, Quaternion.identity) as GameObject;
    }
}
