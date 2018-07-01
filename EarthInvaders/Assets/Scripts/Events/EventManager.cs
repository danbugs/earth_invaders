using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;


public static class EventManager {

    // PlayerShoot support
    static List<Player> playerShootInvokers = new List<Player>();
    static List<UnityAction<Vector3, Characters>> playerShootListeners = new List<UnityAction<Vector3, Characters>>();

    public static void AddPlayerShootInvoker(Player invoker)
    {
        playerShootInvokers.Add(invoker);
        foreach(UnityAction<Vector3, Characters> listener in playerShootListeners)
        {
            invoker.AddPlayerShootListener(listener);
        }
    }

    public static void AddPlayerShootListener(UnityAction<Vector3, Characters> listener)
    {
        playerShootListeners.Add(listener);
        foreach(Player invoker in playerShootInvokers)
        {
            invoker.AddPlayerShootListener(listener);
        }
    }


}
