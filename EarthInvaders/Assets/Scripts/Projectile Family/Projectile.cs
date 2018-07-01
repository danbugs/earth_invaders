using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Projectile : MonoBehaviour
{
    protected Rigidbody2D rb2d;
    protected SpriteRenderer spriteRenderer;
    protected Vector3 direction;
    protected Sprite sprite;
    protected int damageCaused;

    protected virtual void Start()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        rb2d = GetComponent<Rigidbody2D>();
    }

    private void OnBecameInvisible()
    {
        
        Destroy(gameObject);
    }
}
