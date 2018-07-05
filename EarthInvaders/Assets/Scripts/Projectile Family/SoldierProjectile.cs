using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoldierProjectile : Projectile {

    // Use this for initialization
    protected override void Start()
    {
        
        base.Start();

        rb2d.AddForce(new Vector2(0, -1) * Constants.SoldierProjectileSpeed, ForceMode2D.Impulse);
        damageCaused = Constants.SoldierDamage;

    }

    // Update is called once per frame
    void Update()
    {

    }

    protected override void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            hurtEvent.Invoke(damageCaused);
        }
    }
}
