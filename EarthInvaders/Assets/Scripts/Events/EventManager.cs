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

    // EnemyDead support
    static List<Enemy> enemyDeadInvokers = new List<Enemy>();
    static List<UnityAction<Enemy>> enemyDeadListeners = new List<UnityAction<Enemy>>();

    public static void AddEnemyDeadInvoker(Enemy invoker)
    {
        enemyDeadInvokers.Add(invoker);
        foreach (UnityAction<Enemy> listener in enemyDeadListeners)
        {
            invoker.AddEnemyDeadListener(listener);
        }
    }

    public static void AddEnemyDeadListener(UnityAction<Enemy> listener)
    {
        enemyDeadListeners.Add(listener);
        foreach (Enemy invoker in enemyDeadInvokers)
        {
            invoker.AddEnemyDeadListener(listener);
        }
    }

    // EnemyMove support
    static List<EnemyMovementManager> enemyMoveInvokers = new List<EnemyMovementManager>();
    static List<UnityAction<EnemyMovements>> enemyMoveListeners = new List<UnityAction<EnemyMovements>>();

    public static void AddEnemyMoveInvoker(EnemyMovementManager invoker)
    {
        enemyMoveInvokers.Add(invoker);
        foreach (UnityAction<EnemyMovements> listener in enemyMoveListeners)
        {
            invoker.AddEnemyMoveListener(listener);
        }
    }

    public static void AddEnemyMoveListener(UnityAction<EnemyMovements> listener)
    {
        enemyMoveListeners.Add(listener);
        foreach (EnemyMovementManager invoker in enemyMoveInvokers)
        {
            invoker.AddEnemyMoveListener(listener);
        }
    }

    // EnemyShoot support
    static List<EnemyGraphBuilder> enemyShootInvokers = new List<EnemyGraphBuilder>();
    static List<UnityAction<int>> enemyShootListeners = new List<UnityAction<int>>();

    public static void AddEnemyShootInvoker(EnemyGraphBuilder invoker)
    {
        enemyShootInvokers.Add(invoker);
        foreach (UnityAction<int> listener in enemyShootListeners)
        {
            invoker.AddEnemyShootListener(listener);
        }
    }

    public static void AddEnemyShootListener(UnityAction<int> listener)
    {
        enemyShootListeners.Add(listener);
        foreach (EnemyGraphBuilder invoker in enemyShootInvokers)
        {
            invoker.AddEnemyShootListener(listener);
        }
    }

    // Hurt support
    static List<Projectile> hurtInvokers = new List<Projectile>();
    static List<UnityAction<int>> hurtListeners = new List<UnityAction<int>>();

    public static void AddHurtInvokers(Projectile invoker)
    {
        hurtInvokers.Add(invoker);
        foreach (UnityAction<int> listener in hurtListeners)
        {
            invoker.AddHurtListener(listener);
        }
    }

    public static void AddHurtListeners(UnityAction<int> listener)
    {
        hurtListeners.Add(listener);
        foreach (Projectile invoker in hurtInvokers)
        {
            invoker.AddHurtListener(listener);
        }
    }

    // GameOver support
    static List<HUD> gameOverInvokers = new List<HUD>();
    static List<UnityAction<int>> gameOverListeners = new List<UnityAction<int>>();

    public static void AddGameOverInvokers(HUD invoker)
    {
        gameOverInvokers.Add(invoker);
        foreach (UnityAction<int> listener in gameOverListeners)
        {
            invoker.AddGameOverListener(listener);
        }
    }

    public static void AddGameOverListeners(UnityAction<int> listener)
    {
        gameOverListeners.Add(listener);
        foreach (HUD invoker in gameOverInvokers)
        {
            invoker.AddGameOverListener(listener);
        }
    }

    //ChangeLevel support
    static List<MenuManager> changeLevelInvokers = new List<MenuManager>();
    static List<UnityAction> changeLevelListeners = new List<UnityAction>();

    public static void AddChangeLevelInvokers(MenuManager invoker)
    {
        changeLevelInvokers.Add(invoker);
        foreach (UnityAction listener in changeLevelListeners)
        {
            invoker.AddChangeLevelListeners(listener);
        }
    }

    public static void AddChangeLevelListener(UnityAction listener)
    {
        changeLevelListeners.Add(listener);
        foreach (MenuManager invoker in changeLevelInvokers)
        {
            invoker.AddChangeLevelListeners(listener);
        }
    }

    //AllEnemiesDead support

    static List<EnemyGraphBuilder> allEnemiesDeadInvokers = new List<EnemyGraphBuilder>();
    static List<UnityAction> allEnemiesDeadListeners = new List<UnityAction>();

    public static void AddAllEnemiesDeadInvokers(EnemyGraphBuilder invoker)
    {
        allEnemiesDeadInvokers.Add(invoker);
        foreach (UnityAction listener in allEnemiesDeadListeners)
        {
            invoker.AddAllEnemiesdeadListener(listener);
        }
    }

    public static void AddAllEnemiesDeadListeners(UnityAction listener)
    {
        allEnemiesDeadListeners.Add(listener);
        foreach (EnemyGraphBuilder invoker in allEnemiesDeadInvokers)
        {
            invoker.AddAllEnemiesdeadListener(listener);
        }
    }

    //GameWin support

    static List<EnemyGraphBuilder> gameWinInvokers = new List<EnemyGraphBuilder>();
    static List<UnityAction> gameWinListeners = new List<UnityAction>();

    public static void AddGameWinInvokers(EnemyGraphBuilder invoker)
    {
        gameWinInvokers.Add(invoker);
        foreach (UnityAction listener in gameWinListeners)
        {
            invoker.AddGameWinListener(listener);
        }
    }

    public static void AddGameWinListeners(UnityAction listener)
    {
        gameWinListeners.Add(listener);
        foreach (EnemyGraphBuilder invoker in gameWinInvokers)
        {
            invoker.AddGameWinListener(listener);
        }
    }

    //ResetPlayerHealth support

    static List<MenuManager> resetPlayerHealthInvokers = new List<MenuManager>();
    static List<UnityAction> resetPlayerHealthListeners = new List<UnityAction>();

    public static void AddResetPlayerHealthInvokers(MenuManager invoker)
    {
        resetPlayerHealthInvokers.Add(invoker);
        foreach (UnityAction listener in resetPlayerHealthListeners)
        {
            invoker.AddResetPlayerHealthListener(listener);
        }
    }

    public static void AddResetPlayerHealthListeners(UnityAction listener)
    {
        resetPlayerHealthListeners.Add(listener);
        foreach (MenuManager invoker in resetPlayerHealthInvokers)
        {
            invoker.AddResetPlayerHealthListener(listener);
        }
    }

    //ResumeGameplay support

    static List<MenuManager> resumeGameplayInvokers = new List<MenuManager>();
    static List<UnityAction> resumeGameplayListerners = new List<UnityAction>();

    public static void AddResumeGameplayInvokers(MenuManager invoker)
    {
        resumeGameplayInvokers.Add(invoker);
        foreach (UnityAction listener in resumeGameplayListerners)
        {
            invoker.AddResumeGameplayListener(listener);
        }
    }

    public static void AddResumeGamplayListeners(UnityAction listener)
    {
        resumeGameplayListerners.Add(listener);
        foreach (MenuManager invoker in resumeGameplayInvokers)
        {
            invoker.AddResumeGameplayListener(listener);
        }
    }

}
