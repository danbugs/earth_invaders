using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerProjectile : Projectile {


    // Use this for initialization
    protected override void Start () {

        base.Start();

        spriteRenderer.sprite = Resources.Load<Sprite>(@"Projectiles/playerProjectile");
        rb2d.AddForce(new Vector2(0, 1) * Constants.PlayerProjectileSpeed, ForceMode2D.Impulse);
        damageCaused = Constants.PlayerDamage;
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    protected override void OnTriggerEnter2D(Collider2D other)
    {
        // DO NOTHING //
    }
}
