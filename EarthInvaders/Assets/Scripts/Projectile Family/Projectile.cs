using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public abstract class Projectile : MonoBehaviour
{
    protected Rigidbody2D rb2d;
    protected SpriteRenderer spriteRenderer;
    protected Vector3 direction;
    protected Sprite sprite;
    protected int damageCaused;

    protected Hurt hurtEvent = new Hurt();

    protected virtual void Start()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        rb2d = GetComponent<Rigidbody2D>();
        EventManager.AddHurtInvokers(this);
    }

    private void OnBecameInvisible()
    {
        
        Destroy(gameObject);
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        Destroy(gameObject);
    }

    protected abstract void OnTriggerEnter2D(Collider2D other);

    // event related methods

    public void AddHurtListener(UnityAction<int> listener)
    {
        hurtEvent.AddListener(listener);
    }

}
