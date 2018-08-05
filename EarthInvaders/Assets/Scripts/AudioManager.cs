using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public static class AudioManager
{

    static Dictionary<SFXs, AudioClip> audios = new Dictionary<SFXs, AudioClip>();
    static AudioSource audioSource;
    static bool initialized = false;

    public static bool Initialized
    {
        get { return initialized; }
    }

    public static void Initialize(AudioSource source)
    {
        initialized = true;
        audioSource = source;
        audios.Add(SFXs.click, Resources.Load<AudioClip>(@"SFXs/click"));
        audios.Add(SFXs.player, Resources.Load<AudioClip>(@"SFXs/player"));
        audios.Add(SFXs.gameWin, Resources.Load<AudioClip>(@"SFXs/gameWin"));
        audios.Add(SFXs.soldier, Resources.Load<AudioClip>(@"SFXs/soldier"));
        audios.Add(SFXs.gameOver, Resources.Load<AudioClip>(@"SFXs/gameOver"));
        audios.Add(SFXs.commander, Resources.Load<AudioClip>(@"SFXs/commander"));
        audios.Add(SFXs.passedLevel, Resources.Load<AudioClip>(@"SFXs/passedLevel"));


    }

    public static void PlayAudio(SFXs name)
    {
        audioSource.PlayOneShot(audios[name]);
    }
}
