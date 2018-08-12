#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// AllEnemiesDead
struct AllEnemiesDead_t1977689189;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t2581268647;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<SFXs,UnityEngine.AudioClip>
struct Dictionary_2_t2413753268;
// System.Collections.Generic.Dictionary`2<SFXs,System.Object>
struct Dictionary_2_t1812969767;
// ChangeLevel
struct ChangeLevel_t3391930331;
// Commander
struct Commander_t765419416;
// Enemy
struct Enemy_t1765729589;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// CommanderProjectile
struct CommanderProjectile_t390287407;
// Projectile
struct Projectile_t1440994518;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t939494601;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t3832605257;
// EdgeRenderer
struct EdgeRenderer_t3830357436;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// EnemyGraph`1<Enemy>
struct EnemyGraph_1_t514571901;
// System.Collections.Generic.IList`1<EnemyNode`1<Enemy>>
struct IList_1_t3127455631;
// EnemyGraph`1<System.Object>
struct EnemyGraph_1_t1828948476;
// System.Collections.Generic.IList`1<EnemyNode`1<System.Object>>
struct IList_1_t146864910;
// EnemyNode`1<Enemy>
struct EnemyNode_1_t1312135848;
// EnemyNode`1<System.Object>
struct EnemyNode_1_t2626512423;
// UnityEngine.LineRenderer
struct LineRenderer_t3154350270;
// UnityEngine.Shader
struct Shader_t4151988712;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// EndHUD
struct EndHUD_t3967053958;
// EnemyDead
struct EnemyDead_t715039781;
// EnemyReady
struct EnemyReady_t749052965;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t3581341831;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// UnityEngine.Events.UnityAction`1<EnemyMovements>
struct UnityAction_1_t3524528990;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t3535781894;
// UnityEngine.Collision2D
struct Collision2D_t2842956331;
// UnityEngine.Events.UnityEvent`2<Enemy,System.Int32>
struct UnityEvent_2_t3942823277;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Int32>
struct UnityEvent_2_t485107986;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Events.UnityAction`2<Enemy,System.Int32>
struct UnityAction_2_t2317559471;
// UnityEngine.Events.UnityAction`2<System.Object,System.Int32>
struct UnityAction_2_t3154811476;
// EnemyGraphBuilder
struct EnemyGraphBuilder_t3679222799;
// EnemyShoot
struct EnemyShoot_t243830779;
// System.Collections.Generic.List`1<EnemyNode`1<Enemy>>
struct List_1_t2784210590;
// GameWin
struct GameWin_t775063857;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// EnemyMove
struct EnemyMove_t2177327048;
// UnityEngine.Events.UnityEvent`1<EnemyMovements>
struct UnityEvent_1_t3821352353;
// EnemyMovementManager
struct EnemyMovementManager_t568016177;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t978947469;
// Player
struct Player_t3266647312;
// System.Collections.Generic.List`1<Player>
struct List_1_t443754758;
// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`2<UnityEngine.Vector3,Characters>>
struct List_1_t3329208553;
// UnityEngine.Events.UnityAction`2<UnityEngine.Vector3,Characters>
struct UnityAction_2_t1857133811;
// System.Collections.Generic.List`1<Enemy>
struct List_1_t3237804331;
// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`2<Enemy,System.Int32>>
struct List_1_t3789634213;
// System.Collections.Generic.List`1<EnemyMovementManager>
struct List_1_t2040090919;
// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`1<EnemyMovements>>
struct List_1_t701636436;
// System.Collections.Generic.List`1<EnemyGraphBuilder>
struct List_1_t856330245;
// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`1<System.Int32>>
struct List_1_t712889340;
// System.Collections.Generic.List`1<Projectile>
struct List_1_t2913069260;
// HUD
struct HUD_t2848727240;
// System.Collections.Generic.List`1<HUD>
struct List_1_t25834686;
// MenuManager
struct MenuManager_t2761117704;
// System.Collections.Generic.List`1<MenuManager>
struct List_1_t4233192446;
// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction>
struct List_1_t422900045;
// Wall
struct Wall_t2206666577;
// System.Collections.Generic.List`1<Wall>
struct List_1_t3678741319;
// GameAudioSource
struct GameAudioSource_t1717720176;
// GameOver
struct GameOver_t2355536572;
// HitWall
struct HitWall_t625646887;
// Hurt
struct Hurt_t2217771330;
// ResetPlayerHealth
struct ResetPlayerHealth_t3732752359;
// ResumeGameplay
struct ResumeGameplay_t3033387813;
// PauseGame
struct PauseGame_t12111239;
// PlayerShoot
struct PlayerShoot_t3350012305;
// UnityEngine.Events.UnityEvent`2<UnityEngine.Vector3,Characters>
struct UnityEvent_2_t3482397617;
// PlayerProjectile
struct PlayerProjectile_t331371730;
// UnityEngine.Sprite
struct Sprite_t280657092;
// PlayerShootingManager
struct PlayerShootingManager_t269660542;
// Protector
struct Protector_t3558790336;
// UnityEngine.Camera
struct Camera_t4157153871;
// Soldier
struct Soldier_t1302779916;
// SoldierProjectile
struct SoldierProjectile_t2485004912;
// Timer
struct Timer_t4185932343;
// EnemyNode`1<Enemy>[]
struct EnemyNode_1U5BU5D_t1003068857;
// Player[]
struct PlayerU5BU5D_t2044535985;
// UnityEngine.Events.UnityAction`2<UnityEngine.Vector3,Characters>[]
struct UnityAction_2U5BU5D_t4036037090;
// Enemy[]
struct EnemyU5BU5D_t2006687320;
// UnityEngine.Events.UnityAction`2<Enemy,System.Int32>[]
struct UnityAction_2U5BU5D_t1433589174;
// EnemyMovementManager[]
struct EnemyMovementManagerU5BU5D_t3508558572;
// UnityEngine.Events.UnityAction`1<EnemyMovements>[]
struct UnityAction_1U5BU5D_t3357750635;
// EnemyGraphBuilder[]
struct EnemyGraphBuilderU5BU5D_t3415580374;
// UnityEngine.Events.UnityAction`1<System.Int32>[]
struct UnityAction_1U5BU5D_t3479769379;
// Projectile[]
struct ProjectileU5BU5D_t3885137683;
// HUD[]
struct HUDU5BU5D_t1370397465;
// MenuManager[]
struct MenuManagerU5BU5D_t175802073;
// UnityEngine.Events.UnityAction[]
struct UnityActionU5BU5D_t1672898414;
// Wall[]
struct WallU5BU5D_t3444923468;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// SFXs[]
struct SFXsU5BU5D_t229396644;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t143221404;
// System.Collections.Generic.IEqualityComparer`1<SFXs>
struct IEqualityComparer_1_t3720787339;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<SFXs,UnityEngine.AudioClip,System.Collections.DictionaryEntry>
struct Transform_1_t2515334968;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t96683501;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* AudioManager_t3267510698_il2cpp_TypeInfo_var;
extern const uint32_t AudioManager_get_Initialized_m496913330_MetadataUsageId;
extern const RuntimeMethod* Resources_Load_TisAudioClip_t3680889665_m1361768364_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m2995842380_RuntimeMethod_var;
extern String_t* _stringLiteral4110344589;
extern String_t* _stringLiteral1454340691;
extern String_t* _stringLiteral2866201229;
extern String_t* _stringLiteral519640984;
extern String_t* _stringLiteral971258816;
extern String_t* _stringLiteral1165482865;
extern String_t* _stringLiteral521007175;
extern const uint32_t AudioManager_Initialize_m1220441737_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Item_m4199337316_RuntimeMethod_var;
extern const uint32_t AudioManager_PlayAudio_m3468175270_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2413753268_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2683429040_RuntimeMethod_var;
extern const uint32_t AudioManager__cctor_m3496499288_MetadataUsageId;
extern RuntimeClass* Constants_t701097383_il2cpp_TypeInfo_var;
extern const uint32_t Commander_Start_m1864593849_MetadataUsageId;
extern String_t* _stringLiteral1449208746;
extern const uint32_t Commander_Update_m86803832_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Resources_Load_TisGameObject_t1113636619_m1734345100_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var;
extern String_t* _stringLiteral1244728132;
extern const uint32_t Commander_Shoot_m151439820_MetadataUsageId;
extern const uint32_t Commander_CommanderShoot_m555685010_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const uint32_t CommanderProjectile_Start_m4226890276_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_1_Invoke_m3604335408_RuntimeMethod_var;
extern String_t* _stringLiteral2261822918;
extern const uint32_t CommanderProjectile_OnTriggerEnter2D_m4210952957_MetadataUsageId;
extern const uint32_t Constants__cctor_m3925784307_MetadataUsageId;
extern RuntimeClass* List_1_t2585711361_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t291988737_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1744706316_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* Material_t340375123_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1424466557_RuntimeMethod_var;
extern const RuntimeMethod* EnemyGraph_1_get_Nodes_m2229328446_RuntimeMethod_var;
extern const RuntimeMethod* EnemyNode_1_get_Neighbors_m1597861993_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisLineRenderer_t3154350270_m2920077551_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2765963565_RuntimeMethod_var;
extern const RuntimeMethod* EnemyNode_1_get_Value_m854677982_RuntimeMethod_var;
extern String_t* _stringLiteral2116314999;
extern String_t* _stringLiteral163873836;
extern const uint32_t EdgeRenderer_Start_m2724734088_MetadataUsageId;
extern String_t* _stringLiteral1383380143;
extern const uint32_t EndHUD__ctor_m3578529565_MetadataUsageId;
extern RuntimeClass* PointsManager_t882499681_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t EndHUD_Start_m1831966461_MetadataUsageId;
extern RuntimeClass* EnemyDead_t715039781_il2cpp_TypeInfo_var;
extern RuntimeClass* EnemyReady_t749052965_il2cpp_TypeInfo_var;
extern const uint32_t Enemy__ctor_m2535212804_MetadataUsageId;
extern RuntimeClass* EventManager_t1594656820_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_1_t3524528990_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_1_t3535781894_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var;
extern const RuntimeMethod* Enemy_Move_m3242315493_RuntimeMethod_var;
extern const RuntimeMethod* UnityAction_1__ctor_m2369862071_RuntimeMethod_var;
extern const RuntimeMethod* UnityAction_1__ctor_m3081378164_RuntimeMethod_var;
extern const uint32_t Enemy_Start_m3612231678_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_2_Invoke_m1150875179_RuntimeMethod_var;
extern String_t* _stringLiteral4055562318;
extern String_t* _stringLiteral297955522;
extern String_t* _stringLiteral2553965942;
extern const uint32_t Enemy_OnCollisionEnter2D_m3315294300_MetadataUsageId;
extern const uint32_t Enemy_Move_m3242315493_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_2_AddListener_m1516503271_RuntimeMethod_var;
extern const uint32_t Enemy_AddEnemyDeadListener_m3032586755_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_2__ctor_m405530561_RuntimeMethod_var;
extern const uint32_t EnemyDead__ctor_m3176842491_MetadataUsageId;
extern RuntimeClass* EnemyShoot_t243830779_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2784210590_il2cpp_TypeInfo_var;
extern RuntimeClass* AllEnemiesDead_t1977689189_il2cpp_TypeInfo_var;
extern RuntimeClass* GameWin_t775063857_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1784492279_RuntimeMethod_var;
extern const uint32_t EnemyGraphBuilder__ctor_m1643694955_MetadataUsageId;
extern RuntimeClass* EnemyGraphBuilder_t3679222799_il2cpp_TypeInfo_var;
extern const uint32_t EnemyGraphBuilder_get_EnemyGraph_m3588443397_MetadataUsageId;
extern RuntimeClass* EnemyGraph_1_t514571901_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_2_t2317559471_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisEnemy_t1765729589_m2539763118_RuntimeMethod_var;
extern const RuntimeMethod* EnemyGraph_1__ctor_m1111478957_RuntimeMethod_var;
extern const RuntimeMethod* EnemyGraph_1_AddNode_m2464653358_RuntimeMethod_var;
extern const RuntimeMethod* EnemyNode_1_AddNeighbor_m2610891233_RuntimeMethod_var;
extern const RuntimeMethod* EnemyGraphBuilder_EnemyDead_m3436227563_RuntimeMethod_var;
extern const RuntimeMethod* UnityAction_2__ctor_m332998619_RuntimeMethod_var;
extern String_t* _stringLiteral760905195;
extern const uint32_t EnemyGraphBuilder_Awake_m2228199267_MetadataUsageId;
extern const uint32_t EnemyGraphBuilder_Start_m3342651133_MetadataUsageId;
extern String_t* _stringLiteral1234020770;
extern const uint32_t EnemyGraphBuilder_Update_m3271700259_MetadataUsageId;
extern RuntimeClass* ICollection_1_t4140288082_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EnemyGraph_1_Find_m558392393_RuntimeMethod_var;
extern const RuntimeMethod* EnemyNode_1_RemoveNeighbor_m4222683935_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m3543675651_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m6361519_RuntimeMethod_var;
extern const RuntimeMethod* EnemyNode_1_RemoveAllNeighbors_m2037517301_RuntimeMethod_var;
extern const RuntimeMethod* EnemyGraph_1_RemoveNode_m2145224796_RuntimeMethod_var;
extern const uint32_t EnemyGraphBuilder_EnemyDead_m3436227563_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_1_AddListener_m3158408092_RuntimeMethod_var;
extern const uint32_t EnemyGraphBuilder_AddEnemyShootListener_m2521104292_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_1__ctor_m1630793919_RuntimeMethod_var;
extern const uint32_t EnemyMove__ctor_m140768884_MetadataUsageId;
extern RuntimeClass* EnemyMove_t2177327048_il2cpp_TypeInfo_var;
extern const uint32_t EnemyMovementManager__ctor_m1975033658_MetadataUsageId;
extern RuntimeClass* UnityAction_t3245792599_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EnemyMovementManager_BuildMovement_m2264769216_RuntimeMethod_var;
extern String_t* _stringLiteral2435509343;
extern const uint32_t EnemyMovementManager_Start_m3348018426_MetadataUsageId;
extern const RuntimeMethod* List_1_Contains_m2263725670_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_1_Invoke_m3449286906_RuntimeMethod_var;
extern const uint32_t EnemyMovementManager_Move_m761072713_MetadataUsageId;
extern RuntimeClass* List_1_t128053199_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1628857705_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m2154023298_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m697420525_RuntimeMethod_var;
extern String_t* _stringLiteral1233824162;
extern const uint32_t EnemyMovementManager_BuildMovement_m2264769216_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_1_AddListener_m2373938285_RuntimeMethod_var;
extern const uint32_t EnemyMovementManager_AddEnemyMoveListener_m279179560_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_1__ctor_m3777630589_RuntimeMethod_var;
extern const uint32_t EnemyReady__ctor_m929021895_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_1__ctor_m3816765192_RuntimeMethod_var;
extern const uint32_t EnemyShoot__ctor_m1274202978_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m1166605055_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2876168057_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m504749272_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m4045413164_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1728194597_RuntimeMethod_var;
extern const uint32_t EventManager_AddPlayerShootInvoker_m628552642_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m180231583_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1309886926_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m292849492_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2560389903_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1700708725_RuntimeMethod_var;
extern const uint32_t EventManager_AddPlayerShootListener_m2748103306_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m3099710085_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2737121052_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m819868031_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1336153447_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3708720284_RuntimeMethod_var;
extern const uint32_t EventManager_AddEnemyDeadInvoker_m4263453055_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m265676858_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2721116048_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3193589029_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m78709395_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2306102398_RuntimeMethod_var;
extern const uint32_t EventManager_AddEnemyDeadListener_m1380855738_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m795866590_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m524926328_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1917494879_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2170042991_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m4074715281_RuntimeMethod_var;
extern const uint32_t EventManager_AddEnemyMoveInvoker_m1104154367_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m1239235046_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m772517586_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3880894684_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m447620283_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2242910240_RuntimeMethod_var;
extern const uint32_t EventManager_AddEnemyMoveListener_m248040199_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m4256644050_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1528445380_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3223965356_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2286289861_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1583079528_RuntimeMethod_var;
extern const uint32_t EventManager_AddEnemyShootInvoker_m800474143_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m3269965598_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2207855688_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3736471016_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3492017894_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m374448751_RuntimeMethod_var;
extern const uint32_t EventManager_AddEnemyShootListener_m299670043_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m1510553286_RuntimeMethod_var;
extern const uint32_t EventManager_AddHurtInvokers_m2948630802_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m3410811909_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2783283318_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3625746136_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1483808685_RuntimeMethod_var;
extern const uint32_t EventManager_AddHurtListeners_m2511215371_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m3725185082_RuntimeMethod_var;
extern const uint32_t EventManager_AddGameOverInvokers_m1177628869_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m3565223301_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3747609950_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m753713209_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3152480181_RuntimeMethod_var;
extern const uint32_t EventManager_AddGameOverListeners_m2500187535_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m3201442980_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1102057371_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m163445187_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2661491481_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2601112073_RuntimeMethod_var;
extern const uint32_t EventManager_AddChangeLevelInvokers_m2654112070_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m2393690792_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2174501561_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3754399433_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m604781295_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3402286335_RuntimeMethod_var;
extern const uint32_t EventManager_AddChangeLevelListener_m2308153550_MetadataUsageId;
extern const uint32_t EventManager_AddAllEnemiesDeadInvokers_m2293543861_MetadataUsageId;
extern const uint32_t EventManager_AddAllEnemiesDeadListeners_m3112965797_MetadataUsageId;
extern const uint32_t EventManager_AddGameWinInvokers_m2102898517_MetadataUsageId;
extern const uint32_t EventManager_AddGameWinListeners_m1916835654_MetadataUsageId;
extern const uint32_t EventManager_AddResetPlayerHealthInvokers_m1866287769_MetadataUsageId;
extern const uint32_t EventManager_AddResetPlayerHealthListeners_m2338253130_MetadataUsageId;
extern const uint32_t EventManager_AddResumeGameplayInvokers_m1693508513_MetadataUsageId;
extern const uint32_t EventManager_AddResumeGamplayListeners_m1799618919_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m84018515_RuntimeMethod_var;
extern const uint32_t EventManager_AddHitWallInvokers_m1381144606_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m2400680462_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1945220726_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1555745609_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3169737812_RuntimeMethod_var;
extern const uint32_t EventManager_AddHitWallListeners_m4195144851_MetadataUsageId;
extern RuntimeClass* List_1_t443754758_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3329208553_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3237804331_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3789634213_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2040090919_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t701636436_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t856330245_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t712889340_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2913069260_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t25834686_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t4233192446_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t422900045_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3678741319_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3898495391_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2657057201_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1084649037_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3923604068_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m746486840_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3075294956_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2322504938_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m772083332_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3381526530_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3827184848_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m824091018_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2598345712_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m4059846077_RuntimeMethod_var;
extern const uint32_t EventManager__cctor_m427558894_MetadataUsageId;
extern const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t3935305588_m2869327390_RuntimeMethod_var;
extern const uint32_t GameAudioSource_Awake_m2305334770_MetadataUsageId;
extern const uint32_t GameOver__ctor_m1412511381_MetadataUsageId;
extern RuntimeClass* GameOver_t2355536572_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral674690895;
extern const uint32_t HUD__ctor_m1144534689_MetadataUsageId;
extern RuntimeClass* HUD_t2848727240_il2cpp_TypeInfo_var;
extern const uint32_t HUD_get_PlayerHealth_m451828848_MetadataUsageId;
extern const uint32_t HUD_set_PlayerHealth_m1546771577_MetadataUsageId;
extern const RuntimeMethod* HUD_UpdateHealth_m1448011672_RuntimeMethod_var;
extern const RuntimeMethod* HUD_ResetHealth_m1731872613_RuntimeMethod_var;
extern const RuntimeMethod* HUD_HitWall_m570736504_RuntimeMethod_var;
extern const RuntimeMethod* HUD_AddPoints_m655010607_RuntimeMethod_var;
extern const uint32_t HUD_Start_m3058418947_MetadataUsageId;
extern const uint32_t HUD_UpdateHealth_m1448011672_MetadataUsageId;
extern const uint32_t HUD_ResetHealth_m1731872613_MetadataUsageId;
extern const uint32_t HUD_AddGameOverListener_m2077170894_MetadataUsageId;
extern const uint32_t HUD_HitWall_m570736504_MetadataUsageId;
extern const uint32_t HUD_AddPoints_m655010607_MetadataUsageId;
extern const uint32_t HUD__cctor_m2013208929_MetadataUsageId;
extern const uint32_t Hurt__ctor_m1656134574_MetadataUsageId;
extern RuntimeClass* ChangeLevel_t3391930331_il2cpp_TypeInfo_var;
extern RuntimeClass* ResetPlayerHealth_t3732752359_il2cpp_TypeInfo_var;
extern RuntimeClass* ResumeGameplay_t3033387813_il2cpp_TypeInfo_var;
extern const uint32_t MenuManager__ctor_m426485761_MetadataUsageId;
extern String_t* _stringLiteral1756293310;
extern const uint32_t MenuManager_Awake_m236443593_MetadataUsageId;
extern const RuntimeMethod* MenuManager_Die_m3930625520_RuntimeMethod_var;
extern const RuntimeMethod* MenuManager_GoToNextLevel_m3895188263_RuntimeMethod_var;
extern const RuntimeMethod* MenuManager_GoToWin_m1568253110_RuntimeMethod_var;
extern const uint32_t MenuManager_Start_m2906916493_MetadataUsageId;
extern const uint32_t MenuManager_ClickPlay_m114251555_MetadataUsageId;
extern String_t* _stringLiteral2751939251;
extern const uint32_t MenuManager_GoHelp_m4106305758_MetadataUsageId;
extern String_t* _stringLiteral2793515199;
extern const uint32_t MenuManager_GoBack_m421640775_MetadataUsageId;
extern String_t* _stringLiteral1238149538;
extern const uint32_t MenuManager_GoToLvls_m3020589112_MetadataUsageId;
extern const uint32_t MenuManager_GoToLvl1_m3020589050_MetadataUsageId;
extern const uint32_t MenuManager_GoToLvl2_m3020589047_MetadataUsageId;
extern const uint32_t MenuManager_GoToMainMenu_m4127735967_MetadataUsageId;
extern String_t* _stringLiteral1953642114;
extern const uint32_t MenuManager_Resume_m3851989355_MetadataUsageId;
extern const uint32_t MenuManager_GoToNextLevel_m3895188263_MetadataUsageId;
extern String_t* _stringLiteral4065206759;
extern const uint32_t MenuManager_GoToWin_m1568253110_MetadataUsageId;
extern String_t* _stringLiteral1350712178;
extern const uint32_t MenuManager_Die_m3930625520_MetadataUsageId;
extern const uint32_t MenuManager_UpdateScene_m4108045979_MetadataUsageId;
extern const RuntimeMethod* PauseGame_Unpause_m2814715243_RuntimeMethod_var;
extern const uint32_t PauseGame_Start_m1724322029_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t PauseGame_Update_m412982442_MetadataUsageId;
extern RuntimeClass* PlayerShoot_t3350012305_il2cpp_TypeInfo_var;
extern const uint32_t Player__ctor_m509448900_MetadataUsageId;
extern const uint32_t Player_Start_m250748966_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_2_Invoke_m1006745064_RuntimeMethod_var;
extern String_t* _stringLiteral1828639942;
extern const uint32_t Player_FixedUpdate_m170756310_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_2_AddListener_m3257760133_RuntimeMethod_var;
extern const uint32_t Player_AddPlayerShootListener_m1115830263_MetadataUsageId;
extern const RuntimeMethod* Resources_Load_TisSprite_t280657092_m4144667290_RuntimeMethod_var;
extern String_t* _stringLiteral1311455409;
extern const uint32_t PlayerProjectile_Start_m3477049789_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_2__ctor_m483165201_RuntimeMethod_var;
extern const uint32_t PlayerShoot__ctor_m1259916230_MetadataUsageId;
extern RuntimeClass* UnityAction_2_t1857133811_il2cpp_TypeInfo_var;
extern const RuntimeMethod* PlayerShootingManager_PlayerShooting_m3008384760_RuntimeMethod_var;
extern const RuntimeMethod* UnityAction_2__ctor_m3863610767_RuntimeMethod_var;
extern const uint32_t PlayerShootingManager_Start_m2817349083_MetadataUsageId;
extern const uint32_t PlayerShootingManager_PlayerShooting_m3008384760_MetadataUsageId;
extern const uint32_t PointsManager_get_Points_m2028628492_MetadataUsageId;
extern const uint32_t PointsManager_set_Points_m1397397401_MetadataUsageId;
extern const uint32_t PointsManager__cctor_m4167075909_MetadataUsageId;
extern RuntimeClass* Hurt_t2217771330_il2cpp_TypeInfo_var;
extern const uint32_t Projectile__ctor_m2984814897_MetadataUsageId;
extern const uint32_t Projectile_Start_m1343777743_MetadataUsageId;
extern const uint32_t Projectile_OnBecameInvisible_m3038562845_MetadataUsageId;
extern const uint32_t Projectile_OnCollisionEnter2D_m2849902966_MetadataUsageId;
extern const uint32_t Projectile_AddHurtListener_m3502376813_MetadataUsageId;
extern const uint32_t Protector_Start_m671816572_MetadataUsageId;
extern RuntimeClass* ScreenUtils_t317983799_il2cpp_TypeInfo_var;
extern const uint32_t ScreenUtils_get_ScreenRight_m555408866_MetadataUsageId;
extern const uint32_t ScreenUtils_get_ScreenLeft_m4016222789_MetadataUsageId;
extern const uint32_t ScreenUtils_get_ScreenTop_m73875077_MetadataUsageId;
extern const uint32_t ScreenUtils_get_ScreenBottom_m666689270_MetadataUsageId;
extern const uint32_t ScreenUtils_get_ZWorld_m1697726886_MetadataUsageId;
extern const uint32_t ScreenUtils_Initialize_m2443190515_MetadataUsageId;
extern const uint32_t Soldier_Start_m4241482778_MetadataUsageId;
extern String_t* _stringLiteral3220462371;
extern const uint32_t Soldier_Update_m302139691_MetadataUsageId;
extern String_t* _stringLiteral3713036360;
extern const uint32_t Soldier_Shoot_m2464201062_MetadataUsageId;
extern const uint32_t Soldier_SoldierShoot_m63507386_MetadataUsageId;
extern const uint32_t SoldierProjectile_Start_m1912986262_MetadataUsageId;
extern const uint32_t SoldierProjectile_OnTriggerEnter2D_m1913464136_MetadataUsageId;
extern RuntimeClass* HitWall_t625646887_il2cpp_TypeInfo_var;
extern const uint32_t Wall__ctor_m559063296_MetadataUsageId;
extern const uint32_t Wall_Start_m1066291526_MetadataUsageId;
struct ContactPoint2D_t3390240644 ;

struct GameObjectU5BU5D_t3328599146;


#ifndef U3CMODULEU3E_T692745545_H
#define U3CMODULEU3E_T692745545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745545 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745545_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T2585711361_H
#define LIST_1_T2585711361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t2585711361  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t3328599146* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____items_1)); }
	inline GameObjectU5BU5D_t3328599146* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t3328599146* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2585711361_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GameObjectU5BU5D_t3328599146* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2585711361_StaticFields, ___EmptyArray_4)); }
	inline GameObjectU5BU5D_t3328599146* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GameObjectU5BU5D_t3328599146* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2585711361_H
#ifndef LIST_1_T2784210590_H
#define LIST_1_T2784210590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<EnemyNode`1<Enemy>>
struct  List_1_t2784210590  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EnemyNode_1U5BU5D_t1003068857* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2784210590, ____items_1)); }
	inline EnemyNode_1U5BU5D_t1003068857* get__items_1() const { return ____items_1; }
	inline EnemyNode_1U5BU5D_t1003068857** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EnemyNode_1U5BU5D_t1003068857* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2784210590, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2784210590, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2784210590_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	EnemyNode_1U5BU5D_t1003068857* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2784210590_StaticFields, ___EmptyArray_4)); }
	inline EnemyNode_1U5BU5D_t1003068857* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline EnemyNode_1U5BU5D_t1003068857** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(EnemyNode_1U5BU5D_t1003068857* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2784210590_H
#ifndef EVENTMANAGER_T1594656820_H
#define EVENTMANAGER_T1594656820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EventManager
struct  EventManager_t1594656820  : public RuntimeObject
{
public:

public:
};

struct EventManager_t1594656820_StaticFields
{
public:
	// System.Collections.Generic.List`1<Player> EventManager::playerShootInvokers
	List_1_t443754758 * ___playerShootInvokers_0;
	// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`2<UnityEngine.Vector3,Characters>> EventManager::playerShootListeners
	List_1_t3329208553 * ___playerShootListeners_1;
	// System.Collections.Generic.List`1<Enemy> EventManager::enemyDeadInvokers
	List_1_t3237804331 * ___enemyDeadInvokers_2;
	// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`2<Enemy,System.Int32>> EventManager::enemyDeadListeners
	List_1_t3789634213 * ___enemyDeadListeners_3;
	// System.Collections.Generic.List`1<EnemyMovementManager> EventManager::enemyMoveInvokers
	List_1_t2040090919 * ___enemyMoveInvokers_4;
	// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`1<EnemyMovements>> EventManager::enemyMoveListeners
	List_1_t701636436 * ___enemyMoveListeners_5;
	// System.Collections.Generic.List`1<EnemyGraphBuilder> EventManager::enemyShootInvokers
	List_1_t856330245 * ___enemyShootInvokers_6;
	// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`1<System.Int32>> EventManager::enemyShootListeners
	List_1_t712889340 * ___enemyShootListeners_7;
	// System.Collections.Generic.List`1<Projectile> EventManager::hurtInvokers
	List_1_t2913069260 * ___hurtInvokers_8;
	// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`1<System.Int32>> EventManager::hurtListeners
	List_1_t712889340 * ___hurtListeners_9;
	// System.Collections.Generic.List`1<HUD> EventManager::gameOverInvokers
	List_1_t25834686 * ___gameOverInvokers_10;
	// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`1<System.Int32>> EventManager::gameOverListeners
	List_1_t712889340 * ___gameOverListeners_11;
	// System.Collections.Generic.List`1<MenuManager> EventManager::changeLevelInvokers
	List_1_t4233192446 * ___changeLevelInvokers_12;
	// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction> EventManager::changeLevelListeners
	List_1_t422900045 * ___changeLevelListeners_13;
	// System.Collections.Generic.List`1<EnemyGraphBuilder> EventManager::allEnemiesDeadInvokers
	List_1_t856330245 * ___allEnemiesDeadInvokers_14;
	// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction> EventManager::allEnemiesDeadListeners
	List_1_t422900045 * ___allEnemiesDeadListeners_15;
	// System.Collections.Generic.List`1<EnemyGraphBuilder> EventManager::gameWinInvokers
	List_1_t856330245 * ___gameWinInvokers_16;
	// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction> EventManager::gameWinListeners
	List_1_t422900045 * ___gameWinListeners_17;
	// System.Collections.Generic.List`1<MenuManager> EventManager::resetPlayerHealthInvokers
	List_1_t4233192446 * ___resetPlayerHealthInvokers_18;
	// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction> EventManager::resetPlayerHealthListeners
	List_1_t422900045 * ___resetPlayerHealthListeners_19;
	// System.Collections.Generic.List`1<MenuManager> EventManager::resumeGameplayInvokers
	List_1_t4233192446 * ___resumeGameplayInvokers_20;
	// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction> EventManager::resumeGameplayListerners
	List_1_t422900045 * ___resumeGameplayListerners_21;
	// System.Collections.Generic.List`1<Wall> EventManager::hitWallInvokers
	List_1_t3678741319 * ___hitWallInvokers_22;
	// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction> EventManager::hitWallListeners
	List_1_t422900045 * ___hitWallListeners_23;

public:
	inline static int32_t get_offset_of_playerShootInvokers_0() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___playerShootInvokers_0)); }
	inline List_1_t443754758 * get_playerShootInvokers_0() const { return ___playerShootInvokers_0; }
	inline List_1_t443754758 ** get_address_of_playerShootInvokers_0() { return &___playerShootInvokers_0; }
	inline void set_playerShootInvokers_0(List_1_t443754758 * value)
	{
		___playerShootInvokers_0 = value;
		Il2CppCodeGenWriteBarrier((&___playerShootInvokers_0), value);
	}

	inline static int32_t get_offset_of_playerShootListeners_1() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___playerShootListeners_1)); }
	inline List_1_t3329208553 * get_playerShootListeners_1() const { return ___playerShootListeners_1; }
	inline List_1_t3329208553 ** get_address_of_playerShootListeners_1() { return &___playerShootListeners_1; }
	inline void set_playerShootListeners_1(List_1_t3329208553 * value)
	{
		___playerShootListeners_1 = value;
		Il2CppCodeGenWriteBarrier((&___playerShootListeners_1), value);
	}

	inline static int32_t get_offset_of_enemyDeadInvokers_2() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___enemyDeadInvokers_2)); }
	inline List_1_t3237804331 * get_enemyDeadInvokers_2() const { return ___enemyDeadInvokers_2; }
	inline List_1_t3237804331 ** get_address_of_enemyDeadInvokers_2() { return &___enemyDeadInvokers_2; }
	inline void set_enemyDeadInvokers_2(List_1_t3237804331 * value)
	{
		___enemyDeadInvokers_2 = value;
		Il2CppCodeGenWriteBarrier((&___enemyDeadInvokers_2), value);
	}

	inline static int32_t get_offset_of_enemyDeadListeners_3() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___enemyDeadListeners_3)); }
	inline List_1_t3789634213 * get_enemyDeadListeners_3() const { return ___enemyDeadListeners_3; }
	inline List_1_t3789634213 ** get_address_of_enemyDeadListeners_3() { return &___enemyDeadListeners_3; }
	inline void set_enemyDeadListeners_3(List_1_t3789634213 * value)
	{
		___enemyDeadListeners_3 = value;
		Il2CppCodeGenWriteBarrier((&___enemyDeadListeners_3), value);
	}

	inline static int32_t get_offset_of_enemyMoveInvokers_4() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___enemyMoveInvokers_4)); }
	inline List_1_t2040090919 * get_enemyMoveInvokers_4() const { return ___enemyMoveInvokers_4; }
	inline List_1_t2040090919 ** get_address_of_enemyMoveInvokers_4() { return &___enemyMoveInvokers_4; }
	inline void set_enemyMoveInvokers_4(List_1_t2040090919 * value)
	{
		___enemyMoveInvokers_4 = value;
		Il2CppCodeGenWriteBarrier((&___enemyMoveInvokers_4), value);
	}

	inline static int32_t get_offset_of_enemyMoveListeners_5() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___enemyMoveListeners_5)); }
	inline List_1_t701636436 * get_enemyMoveListeners_5() const { return ___enemyMoveListeners_5; }
	inline List_1_t701636436 ** get_address_of_enemyMoveListeners_5() { return &___enemyMoveListeners_5; }
	inline void set_enemyMoveListeners_5(List_1_t701636436 * value)
	{
		___enemyMoveListeners_5 = value;
		Il2CppCodeGenWriteBarrier((&___enemyMoveListeners_5), value);
	}

	inline static int32_t get_offset_of_enemyShootInvokers_6() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___enemyShootInvokers_6)); }
	inline List_1_t856330245 * get_enemyShootInvokers_6() const { return ___enemyShootInvokers_6; }
	inline List_1_t856330245 ** get_address_of_enemyShootInvokers_6() { return &___enemyShootInvokers_6; }
	inline void set_enemyShootInvokers_6(List_1_t856330245 * value)
	{
		___enemyShootInvokers_6 = value;
		Il2CppCodeGenWriteBarrier((&___enemyShootInvokers_6), value);
	}

	inline static int32_t get_offset_of_enemyShootListeners_7() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___enemyShootListeners_7)); }
	inline List_1_t712889340 * get_enemyShootListeners_7() const { return ___enemyShootListeners_7; }
	inline List_1_t712889340 ** get_address_of_enemyShootListeners_7() { return &___enemyShootListeners_7; }
	inline void set_enemyShootListeners_7(List_1_t712889340 * value)
	{
		___enemyShootListeners_7 = value;
		Il2CppCodeGenWriteBarrier((&___enemyShootListeners_7), value);
	}

	inline static int32_t get_offset_of_hurtInvokers_8() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___hurtInvokers_8)); }
	inline List_1_t2913069260 * get_hurtInvokers_8() const { return ___hurtInvokers_8; }
	inline List_1_t2913069260 ** get_address_of_hurtInvokers_8() { return &___hurtInvokers_8; }
	inline void set_hurtInvokers_8(List_1_t2913069260 * value)
	{
		___hurtInvokers_8 = value;
		Il2CppCodeGenWriteBarrier((&___hurtInvokers_8), value);
	}

	inline static int32_t get_offset_of_hurtListeners_9() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___hurtListeners_9)); }
	inline List_1_t712889340 * get_hurtListeners_9() const { return ___hurtListeners_9; }
	inline List_1_t712889340 ** get_address_of_hurtListeners_9() { return &___hurtListeners_9; }
	inline void set_hurtListeners_9(List_1_t712889340 * value)
	{
		___hurtListeners_9 = value;
		Il2CppCodeGenWriteBarrier((&___hurtListeners_9), value);
	}

	inline static int32_t get_offset_of_gameOverInvokers_10() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___gameOverInvokers_10)); }
	inline List_1_t25834686 * get_gameOverInvokers_10() const { return ___gameOverInvokers_10; }
	inline List_1_t25834686 ** get_address_of_gameOverInvokers_10() { return &___gameOverInvokers_10; }
	inline void set_gameOverInvokers_10(List_1_t25834686 * value)
	{
		___gameOverInvokers_10 = value;
		Il2CppCodeGenWriteBarrier((&___gameOverInvokers_10), value);
	}

	inline static int32_t get_offset_of_gameOverListeners_11() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___gameOverListeners_11)); }
	inline List_1_t712889340 * get_gameOverListeners_11() const { return ___gameOverListeners_11; }
	inline List_1_t712889340 ** get_address_of_gameOverListeners_11() { return &___gameOverListeners_11; }
	inline void set_gameOverListeners_11(List_1_t712889340 * value)
	{
		___gameOverListeners_11 = value;
		Il2CppCodeGenWriteBarrier((&___gameOverListeners_11), value);
	}

	inline static int32_t get_offset_of_changeLevelInvokers_12() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___changeLevelInvokers_12)); }
	inline List_1_t4233192446 * get_changeLevelInvokers_12() const { return ___changeLevelInvokers_12; }
	inline List_1_t4233192446 ** get_address_of_changeLevelInvokers_12() { return &___changeLevelInvokers_12; }
	inline void set_changeLevelInvokers_12(List_1_t4233192446 * value)
	{
		___changeLevelInvokers_12 = value;
		Il2CppCodeGenWriteBarrier((&___changeLevelInvokers_12), value);
	}

	inline static int32_t get_offset_of_changeLevelListeners_13() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___changeLevelListeners_13)); }
	inline List_1_t422900045 * get_changeLevelListeners_13() const { return ___changeLevelListeners_13; }
	inline List_1_t422900045 ** get_address_of_changeLevelListeners_13() { return &___changeLevelListeners_13; }
	inline void set_changeLevelListeners_13(List_1_t422900045 * value)
	{
		___changeLevelListeners_13 = value;
		Il2CppCodeGenWriteBarrier((&___changeLevelListeners_13), value);
	}

	inline static int32_t get_offset_of_allEnemiesDeadInvokers_14() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___allEnemiesDeadInvokers_14)); }
	inline List_1_t856330245 * get_allEnemiesDeadInvokers_14() const { return ___allEnemiesDeadInvokers_14; }
	inline List_1_t856330245 ** get_address_of_allEnemiesDeadInvokers_14() { return &___allEnemiesDeadInvokers_14; }
	inline void set_allEnemiesDeadInvokers_14(List_1_t856330245 * value)
	{
		___allEnemiesDeadInvokers_14 = value;
		Il2CppCodeGenWriteBarrier((&___allEnemiesDeadInvokers_14), value);
	}

	inline static int32_t get_offset_of_allEnemiesDeadListeners_15() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___allEnemiesDeadListeners_15)); }
	inline List_1_t422900045 * get_allEnemiesDeadListeners_15() const { return ___allEnemiesDeadListeners_15; }
	inline List_1_t422900045 ** get_address_of_allEnemiesDeadListeners_15() { return &___allEnemiesDeadListeners_15; }
	inline void set_allEnemiesDeadListeners_15(List_1_t422900045 * value)
	{
		___allEnemiesDeadListeners_15 = value;
		Il2CppCodeGenWriteBarrier((&___allEnemiesDeadListeners_15), value);
	}

	inline static int32_t get_offset_of_gameWinInvokers_16() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___gameWinInvokers_16)); }
	inline List_1_t856330245 * get_gameWinInvokers_16() const { return ___gameWinInvokers_16; }
	inline List_1_t856330245 ** get_address_of_gameWinInvokers_16() { return &___gameWinInvokers_16; }
	inline void set_gameWinInvokers_16(List_1_t856330245 * value)
	{
		___gameWinInvokers_16 = value;
		Il2CppCodeGenWriteBarrier((&___gameWinInvokers_16), value);
	}

	inline static int32_t get_offset_of_gameWinListeners_17() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___gameWinListeners_17)); }
	inline List_1_t422900045 * get_gameWinListeners_17() const { return ___gameWinListeners_17; }
	inline List_1_t422900045 ** get_address_of_gameWinListeners_17() { return &___gameWinListeners_17; }
	inline void set_gameWinListeners_17(List_1_t422900045 * value)
	{
		___gameWinListeners_17 = value;
		Il2CppCodeGenWriteBarrier((&___gameWinListeners_17), value);
	}

	inline static int32_t get_offset_of_resetPlayerHealthInvokers_18() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___resetPlayerHealthInvokers_18)); }
	inline List_1_t4233192446 * get_resetPlayerHealthInvokers_18() const { return ___resetPlayerHealthInvokers_18; }
	inline List_1_t4233192446 ** get_address_of_resetPlayerHealthInvokers_18() { return &___resetPlayerHealthInvokers_18; }
	inline void set_resetPlayerHealthInvokers_18(List_1_t4233192446 * value)
	{
		___resetPlayerHealthInvokers_18 = value;
		Il2CppCodeGenWriteBarrier((&___resetPlayerHealthInvokers_18), value);
	}

	inline static int32_t get_offset_of_resetPlayerHealthListeners_19() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___resetPlayerHealthListeners_19)); }
	inline List_1_t422900045 * get_resetPlayerHealthListeners_19() const { return ___resetPlayerHealthListeners_19; }
	inline List_1_t422900045 ** get_address_of_resetPlayerHealthListeners_19() { return &___resetPlayerHealthListeners_19; }
	inline void set_resetPlayerHealthListeners_19(List_1_t422900045 * value)
	{
		___resetPlayerHealthListeners_19 = value;
		Il2CppCodeGenWriteBarrier((&___resetPlayerHealthListeners_19), value);
	}

	inline static int32_t get_offset_of_resumeGameplayInvokers_20() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___resumeGameplayInvokers_20)); }
	inline List_1_t4233192446 * get_resumeGameplayInvokers_20() const { return ___resumeGameplayInvokers_20; }
	inline List_1_t4233192446 ** get_address_of_resumeGameplayInvokers_20() { return &___resumeGameplayInvokers_20; }
	inline void set_resumeGameplayInvokers_20(List_1_t4233192446 * value)
	{
		___resumeGameplayInvokers_20 = value;
		Il2CppCodeGenWriteBarrier((&___resumeGameplayInvokers_20), value);
	}

	inline static int32_t get_offset_of_resumeGameplayListerners_21() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___resumeGameplayListerners_21)); }
	inline List_1_t422900045 * get_resumeGameplayListerners_21() const { return ___resumeGameplayListerners_21; }
	inline List_1_t422900045 ** get_address_of_resumeGameplayListerners_21() { return &___resumeGameplayListerners_21; }
	inline void set_resumeGameplayListerners_21(List_1_t422900045 * value)
	{
		___resumeGameplayListerners_21 = value;
		Il2CppCodeGenWriteBarrier((&___resumeGameplayListerners_21), value);
	}

	inline static int32_t get_offset_of_hitWallInvokers_22() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___hitWallInvokers_22)); }
	inline List_1_t3678741319 * get_hitWallInvokers_22() const { return ___hitWallInvokers_22; }
	inline List_1_t3678741319 ** get_address_of_hitWallInvokers_22() { return &___hitWallInvokers_22; }
	inline void set_hitWallInvokers_22(List_1_t3678741319 * value)
	{
		___hitWallInvokers_22 = value;
		Il2CppCodeGenWriteBarrier((&___hitWallInvokers_22), value);
	}

	inline static int32_t get_offset_of_hitWallListeners_23() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___hitWallListeners_23)); }
	inline List_1_t422900045 * get_hitWallListeners_23() const { return ___hitWallListeners_23; }
	inline List_1_t422900045 ** get_address_of_hitWallListeners_23() { return &___hitWallListeners_23; }
	inline void set_hitWallListeners_23(List_1_t422900045 * value)
	{
		___hitWallListeners_23 = value;
		Il2CppCodeGenWriteBarrier((&___hitWallListeners_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTMANAGER_T1594656820_H
#ifndef LIST_1_T443754758_H
#define LIST_1_T443754758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Player>
struct  List_1_t443754758  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PlayerU5BU5D_t2044535985* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t443754758, ____items_1)); }
	inline PlayerU5BU5D_t2044535985* get__items_1() const { return ____items_1; }
	inline PlayerU5BU5D_t2044535985** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PlayerU5BU5D_t2044535985* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t443754758, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t443754758, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t443754758_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	PlayerU5BU5D_t2044535985* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t443754758_StaticFields, ___EmptyArray_4)); }
	inline PlayerU5BU5D_t2044535985* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline PlayerU5BU5D_t2044535985** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(PlayerU5BU5D_t2044535985* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T443754758_H
#ifndef LIST_1_T3329208553_H
#define LIST_1_T3329208553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`2<UnityEngine.Vector3,Characters>>
struct  List_1_t3329208553  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UnityAction_2U5BU5D_t4036037090* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3329208553, ____items_1)); }
	inline UnityAction_2U5BU5D_t4036037090* get__items_1() const { return ____items_1; }
	inline UnityAction_2U5BU5D_t4036037090** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UnityAction_2U5BU5D_t4036037090* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3329208553, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3329208553, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3329208553_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	UnityAction_2U5BU5D_t4036037090* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3329208553_StaticFields, ___EmptyArray_4)); }
	inline UnityAction_2U5BU5D_t4036037090* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline UnityAction_2U5BU5D_t4036037090** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(UnityAction_2U5BU5D_t4036037090* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3329208553_H
#ifndef LIST_1_T3237804331_H
#define LIST_1_T3237804331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Enemy>
struct  List_1_t3237804331  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EnemyU5BU5D_t2006687320* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3237804331, ____items_1)); }
	inline EnemyU5BU5D_t2006687320* get__items_1() const { return ____items_1; }
	inline EnemyU5BU5D_t2006687320** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EnemyU5BU5D_t2006687320* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3237804331, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3237804331, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3237804331_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	EnemyU5BU5D_t2006687320* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3237804331_StaticFields, ___EmptyArray_4)); }
	inline EnemyU5BU5D_t2006687320* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline EnemyU5BU5D_t2006687320** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(EnemyU5BU5D_t2006687320* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3237804331_H
#ifndef LIST_1_T3789634213_H
#define LIST_1_T3789634213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`2<Enemy,System.Int32>>
struct  List_1_t3789634213  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UnityAction_2U5BU5D_t1433589174* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3789634213, ____items_1)); }
	inline UnityAction_2U5BU5D_t1433589174* get__items_1() const { return ____items_1; }
	inline UnityAction_2U5BU5D_t1433589174** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UnityAction_2U5BU5D_t1433589174* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3789634213, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3789634213, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3789634213_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	UnityAction_2U5BU5D_t1433589174* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3789634213_StaticFields, ___EmptyArray_4)); }
	inline UnityAction_2U5BU5D_t1433589174* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline UnityAction_2U5BU5D_t1433589174** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(UnityAction_2U5BU5D_t1433589174* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3789634213_H
#ifndef LIST_1_T2040090919_H
#define LIST_1_T2040090919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<EnemyMovementManager>
struct  List_1_t2040090919  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EnemyMovementManagerU5BU5D_t3508558572* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2040090919, ____items_1)); }
	inline EnemyMovementManagerU5BU5D_t3508558572* get__items_1() const { return ____items_1; }
	inline EnemyMovementManagerU5BU5D_t3508558572** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EnemyMovementManagerU5BU5D_t3508558572* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2040090919, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2040090919, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2040090919_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	EnemyMovementManagerU5BU5D_t3508558572* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2040090919_StaticFields, ___EmptyArray_4)); }
	inline EnemyMovementManagerU5BU5D_t3508558572* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline EnemyMovementManagerU5BU5D_t3508558572** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(EnemyMovementManagerU5BU5D_t3508558572* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2040090919_H
#ifndef LIST_1_T701636436_H
#define LIST_1_T701636436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`1<EnemyMovements>>
struct  List_1_t701636436  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UnityAction_1U5BU5D_t3357750635* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t701636436, ____items_1)); }
	inline UnityAction_1U5BU5D_t3357750635* get__items_1() const { return ____items_1; }
	inline UnityAction_1U5BU5D_t3357750635** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UnityAction_1U5BU5D_t3357750635* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t701636436, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t701636436, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t701636436_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	UnityAction_1U5BU5D_t3357750635* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t701636436_StaticFields, ___EmptyArray_4)); }
	inline UnityAction_1U5BU5D_t3357750635* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline UnityAction_1U5BU5D_t3357750635** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(UnityAction_1U5BU5D_t3357750635* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T701636436_H
#ifndef LIST_1_T856330245_H
#define LIST_1_T856330245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<EnemyGraphBuilder>
struct  List_1_t856330245  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EnemyGraphBuilderU5BU5D_t3415580374* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t856330245, ____items_1)); }
	inline EnemyGraphBuilderU5BU5D_t3415580374* get__items_1() const { return ____items_1; }
	inline EnemyGraphBuilderU5BU5D_t3415580374** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EnemyGraphBuilderU5BU5D_t3415580374* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t856330245, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t856330245, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t856330245_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	EnemyGraphBuilderU5BU5D_t3415580374* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t856330245_StaticFields, ___EmptyArray_4)); }
	inline EnemyGraphBuilderU5BU5D_t3415580374* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline EnemyGraphBuilderU5BU5D_t3415580374** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(EnemyGraphBuilderU5BU5D_t3415580374* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T856330245_H
#ifndef LIST_1_T712889340_H
#define LIST_1_T712889340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`1<System.Int32>>
struct  List_1_t712889340  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UnityAction_1U5BU5D_t3479769379* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t712889340, ____items_1)); }
	inline UnityAction_1U5BU5D_t3479769379* get__items_1() const { return ____items_1; }
	inline UnityAction_1U5BU5D_t3479769379** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UnityAction_1U5BU5D_t3479769379* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t712889340, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t712889340, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t712889340_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	UnityAction_1U5BU5D_t3479769379* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t712889340_StaticFields, ___EmptyArray_4)); }
	inline UnityAction_1U5BU5D_t3479769379* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline UnityAction_1U5BU5D_t3479769379** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(UnityAction_1U5BU5D_t3479769379* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T712889340_H
#ifndef LIST_1_T2913069260_H
#define LIST_1_T2913069260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Projectile>
struct  List_1_t2913069260  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ProjectileU5BU5D_t3885137683* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2913069260, ____items_1)); }
	inline ProjectileU5BU5D_t3885137683* get__items_1() const { return ____items_1; }
	inline ProjectileU5BU5D_t3885137683** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ProjectileU5BU5D_t3885137683* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2913069260, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2913069260, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2913069260_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ProjectileU5BU5D_t3885137683* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2913069260_StaticFields, ___EmptyArray_4)); }
	inline ProjectileU5BU5D_t3885137683* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ProjectileU5BU5D_t3885137683** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ProjectileU5BU5D_t3885137683* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2913069260_H
#ifndef LIST_1_T25834686_H
#define LIST_1_T25834686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<HUD>
struct  List_1_t25834686  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	HUDU5BU5D_t1370397465* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t25834686, ____items_1)); }
	inline HUDU5BU5D_t1370397465* get__items_1() const { return ____items_1; }
	inline HUDU5BU5D_t1370397465** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(HUDU5BU5D_t1370397465* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t25834686, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t25834686, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t25834686_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	HUDU5BU5D_t1370397465* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t25834686_StaticFields, ___EmptyArray_4)); }
	inline HUDU5BU5D_t1370397465* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline HUDU5BU5D_t1370397465** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(HUDU5BU5D_t1370397465* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T25834686_H
#ifndef LIST_1_T4233192446_H
#define LIST_1_T4233192446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<MenuManager>
struct  List_1_t4233192446  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MenuManagerU5BU5D_t175802073* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4233192446, ____items_1)); }
	inline MenuManagerU5BU5D_t175802073* get__items_1() const { return ____items_1; }
	inline MenuManagerU5BU5D_t175802073** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MenuManagerU5BU5D_t175802073* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4233192446, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4233192446, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4233192446_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	MenuManagerU5BU5D_t175802073* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4233192446_StaticFields, ___EmptyArray_4)); }
	inline MenuManagerU5BU5D_t175802073* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline MenuManagerU5BU5D_t175802073** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(MenuManagerU5BU5D_t175802073* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4233192446_H
#ifndef LIST_1_T422900045_H
#define LIST_1_T422900045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction>
struct  List_1_t422900045  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UnityActionU5BU5D_t1672898414* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t422900045, ____items_1)); }
	inline UnityActionU5BU5D_t1672898414* get__items_1() const { return ____items_1; }
	inline UnityActionU5BU5D_t1672898414** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UnityActionU5BU5D_t1672898414* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t422900045, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t422900045, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t422900045_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	UnityActionU5BU5D_t1672898414* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t422900045_StaticFields, ___EmptyArray_4)); }
	inline UnityActionU5BU5D_t1672898414* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline UnityActionU5BU5D_t1672898414** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(UnityActionU5BU5D_t1672898414* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T422900045_H
#ifndef LIST_1_T3678741319_H
#define LIST_1_T3678741319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Wall>
struct  List_1_t3678741319  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WallU5BU5D_t3444923468* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3678741319, ____items_1)); }
	inline WallU5BU5D_t3444923468* get__items_1() const { return ____items_1; }
	inline WallU5BU5D_t3444923468** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WallU5BU5D_t3444923468* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3678741319, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3678741319, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3678741319_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	WallU5BU5D_t3444923468* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3678741319_StaticFields, ___EmptyArray_4)); }
	inline WallU5BU5D_t3444923468* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline WallU5BU5D_t3444923468** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(WallU5BU5D_t3444923468* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3678741319_H
#ifndef POINTSMANAGER_T882499681_H
#define POINTSMANAGER_T882499681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PointsManager
struct  PointsManager_t882499681  : public RuntimeObject
{
public:

public:
};

struct PointsManager_t882499681_StaticFields
{
public:
	// System.Int32 PointsManager::points
	int32_t ___points_0;

public:
	inline static int32_t get_offset_of_points_0() { return static_cast<int32_t>(offsetof(PointsManager_t882499681_StaticFields, ___points_0)); }
	inline int32_t get_points_0() const { return ___points_0; }
	inline int32_t* get_address_of_points_0() { return &___points_0; }
	inline void set_points_0(int32_t value)
	{
		___points_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTSMANAGER_T882499681_H
#ifndef SCREENUTILS_T317983799_H
#define SCREENUTILS_T317983799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenUtils
struct  ScreenUtils_t317983799  : public RuntimeObject
{
public:

public:
};

struct ScreenUtils_t317983799_StaticFields
{
public:
	// System.Single ScreenUtils::screenRight
	float ___screenRight_0;
	// System.Single ScreenUtils::screenLeft
	float ___screenLeft_1;
	// System.Single ScreenUtils::screenTop
	float ___screenTop_2;
	// System.Single ScreenUtils::screenBottom
	float ___screenBottom_3;
	// System.Single ScreenUtils::zWorld
	float ___zWorld_4;

public:
	inline static int32_t get_offset_of_screenRight_0() { return static_cast<int32_t>(offsetof(ScreenUtils_t317983799_StaticFields, ___screenRight_0)); }
	inline float get_screenRight_0() const { return ___screenRight_0; }
	inline float* get_address_of_screenRight_0() { return &___screenRight_0; }
	inline void set_screenRight_0(float value)
	{
		___screenRight_0 = value;
	}

	inline static int32_t get_offset_of_screenLeft_1() { return static_cast<int32_t>(offsetof(ScreenUtils_t317983799_StaticFields, ___screenLeft_1)); }
	inline float get_screenLeft_1() const { return ___screenLeft_1; }
	inline float* get_address_of_screenLeft_1() { return &___screenLeft_1; }
	inline void set_screenLeft_1(float value)
	{
		___screenLeft_1 = value;
	}

	inline static int32_t get_offset_of_screenTop_2() { return static_cast<int32_t>(offsetof(ScreenUtils_t317983799_StaticFields, ___screenTop_2)); }
	inline float get_screenTop_2() const { return ___screenTop_2; }
	inline float* get_address_of_screenTop_2() { return &___screenTop_2; }
	inline void set_screenTop_2(float value)
	{
		___screenTop_2 = value;
	}

	inline static int32_t get_offset_of_screenBottom_3() { return static_cast<int32_t>(offsetof(ScreenUtils_t317983799_StaticFields, ___screenBottom_3)); }
	inline float get_screenBottom_3() const { return ___screenBottom_3; }
	inline float* get_address_of_screenBottom_3() { return &___screenBottom_3; }
	inline void set_screenBottom_3(float value)
	{
		___screenBottom_3 = value;
	}

	inline static int32_t get_offset_of_zWorld_4() { return static_cast<int32_t>(offsetof(ScreenUtils_t317983799_StaticFields, ___zWorld_4)); }
	inline float get_zWorld_4() const { return ___zWorld_4; }
	inline float* get_address_of_zWorld_4() { return &___zWorld_4; }
	inline void set_zWorld_4(float value)
	{
		___zWorld_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENUTILS_T317983799_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef ENEMYNODE_1_T1312135848_H
#define ENEMYNODE_1_T1312135848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyNode`1<Enemy>
struct  EnemyNode_1_t1312135848  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<EnemyNode`1<T>> EnemyNode`1::neighbors
	List_1_t2784210590 * ___neighbors_0;
	// T EnemyNode`1::value
	Enemy_t1765729589 * ___value_1;

public:
	inline static int32_t get_offset_of_neighbors_0() { return static_cast<int32_t>(offsetof(EnemyNode_1_t1312135848, ___neighbors_0)); }
	inline List_1_t2784210590 * get_neighbors_0() const { return ___neighbors_0; }
	inline List_1_t2784210590 ** get_address_of_neighbors_0() { return &___neighbors_0; }
	inline void set_neighbors_0(List_1_t2784210590 * value)
	{
		___neighbors_0 = value;
		Il2CppCodeGenWriteBarrier((&___neighbors_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(EnemyNode_1_t1312135848, ___value_1)); }
	inline Enemy_t1765729589 * get_value_1() const { return ___value_1; }
	inline Enemy_t1765729589 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Enemy_t1765729589 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYNODE_1_T1312135848_H
#ifndef ENEMYGRAPH_1_T514571901_H
#define ENEMYGRAPH_1_T514571901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyGraph`1<Enemy>
struct  EnemyGraph_1_t514571901  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<EnemyNode`1<T>> EnemyGraph`1::nodes
	List_1_t2784210590 * ___nodes_0;

public:
	inline static int32_t get_offset_of_nodes_0() { return static_cast<int32_t>(offsetof(EnemyGraph_1_t514571901, ___nodes_0)); }
	inline List_1_t2784210590 * get_nodes_0() const { return ___nodes_0; }
	inline List_1_t2784210590 ** get_address_of_nodes_0() { return &___nodes_0; }
	inline void set_nodes_0(List_1_t2784210590 * value)
	{
		___nodes_0 = value;
		Il2CppCodeGenWriteBarrier((&___nodes_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYGRAPH_1_T514571901_H
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int32U5BU5D_t385246372* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ___EmptyArray_4)); }
	inline Int32U5BU5D_t385246372* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Int32U5BU5D_t385246372** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Int32U5BU5D_t385246372* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef AUDIOMANAGER_T3267510698_H
#define AUDIOMANAGER_T3267510698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioManager
struct  AudioManager_t3267510698  : public RuntimeObject
{
public:

public:
};

struct AudioManager_t3267510698_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<SFXs,UnityEngine.AudioClip> AudioManager::audios
	Dictionary_2_t2413753268 * ___audios_0;
	// UnityEngine.AudioSource AudioManager::audioSource
	AudioSource_t3935305588 * ___audioSource_1;
	// System.Boolean AudioManager::initialized
	bool ___initialized_2;

public:
	inline static int32_t get_offset_of_audios_0() { return static_cast<int32_t>(offsetof(AudioManager_t3267510698_StaticFields, ___audios_0)); }
	inline Dictionary_2_t2413753268 * get_audios_0() const { return ___audios_0; }
	inline Dictionary_2_t2413753268 ** get_address_of_audios_0() { return &___audios_0; }
	inline void set_audios_0(Dictionary_2_t2413753268 * value)
	{
		___audios_0 = value;
		Il2CppCodeGenWriteBarrier((&___audios_0), value);
	}

	inline static int32_t get_offset_of_audioSource_1() { return static_cast<int32_t>(offsetof(AudioManager_t3267510698_StaticFields, ___audioSource_1)); }
	inline AudioSource_t3935305588 * get_audioSource_1() const { return ___audioSource_1; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_1() { return &___audioSource_1; }
	inline void set_audioSource_1(AudioSource_t3935305588 * value)
	{
		___audioSource_1 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_1), value);
	}

	inline static int32_t get_offset_of_initialized_2() { return static_cast<int32_t>(offsetof(AudioManager_t3267510698_StaticFields, ___initialized_2)); }
	inline bool get_initialized_2() const { return ___initialized_2; }
	inline bool* get_address_of_initialized_2() { return &___initialized_2; }
	inline void set_initialized_2(bool value)
	{
		___initialized_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMANAGER_T3267510698_H
#ifndef DICTIONARY_2_T2413753268_H
#define DICTIONARY_2_T2413753268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<SFXs,UnityEngine.AudioClip>
struct  Dictionary_2_t2413753268  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	SFXsU5BU5D_t229396644* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	AudioClipU5BU5D_t143221404* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2413753268, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2413753268, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2413753268, ___keySlots_6)); }
	inline SFXsU5BU5D_t229396644* get_keySlots_6() const { return ___keySlots_6; }
	inline SFXsU5BU5D_t229396644** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(SFXsU5BU5D_t229396644* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2413753268, ___valueSlots_7)); }
	inline AudioClipU5BU5D_t143221404* get_valueSlots_7() const { return ___valueSlots_7; }
	inline AudioClipU5BU5D_t143221404** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(AudioClipU5BU5D_t143221404* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2413753268, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2413753268, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2413753268, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2413753268, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2413753268, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2413753268, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2413753268, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2413753268_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2515334968 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2413753268_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2515334968 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2515334968 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2515334968 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2413753268_H
#ifndef CONSTANTS_T701097383_H
#define CONSTANTS_T701097383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Constants
struct  Constants_t701097383  : public RuntimeObject
{
public:

public:
};

struct Constants_t701097383_StaticFields
{
public:
	// System.Int32 Constants::PlayerSpeed
	int32_t ___PlayerSpeed_0;
	// System.Int32 Constants::PlayerDamage
	int32_t ___PlayerDamage_1;
	// System.Int32 Constants::PlayerProjectileSpeed
	int32_t ___PlayerProjectileSpeed_2;
	// System.Int32 Constants::MaxPlayerHealth
	int32_t ___MaxPlayerHealth_3;
	// System.Int32 Constants::ProtectorPoints
	int32_t ___ProtectorPoints_4;
	// System.Int32 Constants::SoldierDamage
	int32_t ___SoldierDamage_5;
	// System.Int32 Constants::SoldierPoints
	int32_t ___SoldierPoints_6;
	// System.Int32 Constants::SoldierProjectileSpeed
	int32_t ___SoldierProjectileSpeed_7;
	// System.Int32 Constants::CommanderDamage
	int32_t ___CommanderDamage_8;
	// System.Int32 Constants::CommanderPoints
	int32_t ___CommanderPoints_9;
	// System.Int32 Constants::CommanderProjectileSpeed
	int32_t ___CommanderProjectileSpeed_10;
	// System.Int32 Constants::EnemyReadyClock
	int32_t ___EnemyReadyClock_11;
	// System.Int32 Constants::EnemyMove
	int32_t ___EnemyMove_12;

public:
	inline static int32_t get_offset_of_PlayerSpeed_0() { return static_cast<int32_t>(offsetof(Constants_t701097383_StaticFields, ___PlayerSpeed_0)); }
	inline int32_t get_PlayerSpeed_0() const { return ___PlayerSpeed_0; }
	inline int32_t* get_address_of_PlayerSpeed_0() { return &___PlayerSpeed_0; }
	inline void set_PlayerSpeed_0(int32_t value)
	{
		___PlayerSpeed_0 = value;
	}

	inline static int32_t get_offset_of_PlayerDamage_1() { return static_cast<int32_t>(offsetof(Constants_t701097383_StaticFields, ___PlayerDamage_1)); }
	inline int32_t get_PlayerDamage_1() const { return ___PlayerDamage_1; }
	inline int32_t* get_address_of_PlayerDamage_1() { return &___PlayerDamage_1; }
	inline void set_PlayerDamage_1(int32_t value)
	{
		___PlayerDamage_1 = value;
	}

	inline static int32_t get_offset_of_PlayerProjectileSpeed_2() { return static_cast<int32_t>(offsetof(Constants_t701097383_StaticFields, ___PlayerProjectileSpeed_2)); }
	inline int32_t get_PlayerProjectileSpeed_2() const { return ___PlayerProjectileSpeed_2; }
	inline int32_t* get_address_of_PlayerProjectileSpeed_2() { return &___PlayerProjectileSpeed_2; }
	inline void set_PlayerProjectileSpeed_2(int32_t value)
	{
		___PlayerProjectileSpeed_2 = value;
	}

	inline static int32_t get_offset_of_MaxPlayerHealth_3() { return static_cast<int32_t>(offsetof(Constants_t701097383_StaticFields, ___MaxPlayerHealth_3)); }
	inline int32_t get_MaxPlayerHealth_3() const { return ___MaxPlayerHealth_3; }
	inline int32_t* get_address_of_MaxPlayerHealth_3() { return &___MaxPlayerHealth_3; }
	inline void set_MaxPlayerHealth_3(int32_t value)
	{
		___MaxPlayerHealth_3 = value;
	}

	inline static int32_t get_offset_of_ProtectorPoints_4() { return static_cast<int32_t>(offsetof(Constants_t701097383_StaticFields, ___ProtectorPoints_4)); }
	inline int32_t get_ProtectorPoints_4() const { return ___ProtectorPoints_4; }
	inline int32_t* get_address_of_ProtectorPoints_4() { return &___ProtectorPoints_4; }
	inline void set_ProtectorPoints_4(int32_t value)
	{
		___ProtectorPoints_4 = value;
	}

	inline static int32_t get_offset_of_SoldierDamage_5() { return static_cast<int32_t>(offsetof(Constants_t701097383_StaticFields, ___SoldierDamage_5)); }
	inline int32_t get_SoldierDamage_5() const { return ___SoldierDamage_5; }
	inline int32_t* get_address_of_SoldierDamage_5() { return &___SoldierDamage_5; }
	inline void set_SoldierDamage_5(int32_t value)
	{
		___SoldierDamage_5 = value;
	}

	inline static int32_t get_offset_of_SoldierPoints_6() { return static_cast<int32_t>(offsetof(Constants_t701097383_StaticFields, ___SoldierPoints_6)); }
	inline int32_t get_SoldierPoints_6() const { return ___SoldierPoints_6; }
	inline int32_t* get_address_of_SoldierPoints_6() { return &___SoldierPoints_6; }
	inline void set_SoldierPoints_6(int32_t value)
	{
		___SoldierPoints_6 = value;
	}

	inline static int32_t get_offset_of_SoldierProjectileSpeed_7() { return static_cast<int32_t>(offsetof(Constants_t701097383_StaticFields, ___SoldierProjectileSpeed_7)); }
	inline int32_t get_SoldierProjectileSpeed_7() const { return ___SoldierProjectileSpeed_7; }
	inline int32_t* get_address_of_SoldierProjectileSpeed_7() { return &___SoldierProjectileSpeed_7; }
	inline void set_SoldierProjectileSpeed_7(int32_t value)
	{
		___SoldierProjectileSpeed_7 = value;
	}

	inline static int32_t get_offset_of_CommanderDamage_8() { return static_cast<int32_t>(offsetof(Constants_t701097383_StaticFields, ___CommanderDamage_8)); }
	inline int32_t get_CommanderDamage_8() const { return ___CommanderDamage_8; }
	inline int32_t* get_address_of_CommanderDamage_8() { return &___CommanderDamage_8; }
	inline void set_CommanderDamage_8(int32_t value)
	{
		___CommanderDamage_8 = value;
	}

	inline static int32_t get_offset_of_CommanderPoints_9() { return static_cast<int32_t>(offsetof(Constants_t701097383_StaticFields, ___CommanderPoints_9)); }
	inline int32_t get_CommanderPoints_9() const { return ___CommanderPoints_9; }
	inline int32_t* get_address_of_CommanderPoints_9() { return &___CommanderPoints_9; }
	inline void set_CommanderPoints_9(int32_t value)
	{
		___CommanderPoints_9 = value;
	}

	inline static int32_t get_offset_of_CommanderProjectileSpeed_10() { return static_cast<int32_t>(offsetof(Constants_t701097383_StaticFields, ___CommanderProjectileSpeed_10)); }
	inline int32_t get_CommanderProjectileSpeed_10() const { return ___CommanderProjectileSpeed_10; }
	inline int32_t* get_address_of_CommanderProjectileSpeed_10() { return &___CommanderProjectileSpeed_10; }
	inline void set_CommanderProjectileSpeed_10(int32_t value)
	{
		___CommanderProjectileSpeed_10 = value;
	}

	inline static int32_t get_offset_of_EnemyReadyClock_11() { return static_cast<int32_t>(offsetof(Constants_t701097383_StaticFields, ___EnemyReadyClock_11)); }
	inline int32_t get_EnemyReadyClock_11() const { return ___EnemyReadyClock_11; }
	inline int32_t* get_address_of_EnemyReadyClock_11() { return &___EnemyReadyClock_11; }
	inline void set_EnemyReadyClock_11(int32_t value)
	{
		___EnemyReadyClock_11 = value;
	}

	inline static int32_t get_offset_of_EnemyMove_12() { return static_cast<int32_t>(offsetof(Constants_t701097383_StaticFields, ___EnemyMove_12)); }
	inline int32_t get_EnemyMove_12() const { return ___EnemyMove_12; }
	inline int32_t* get_address_of_EnemyMove_12() { return &___EnemyMove_12; }
	inline void set_EnemyMove_12(int32_t value)
	{
		___EnemyMove_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTS_T701097383_H
#ifndef ENUMERATOR_T832080912_H
#define ENUMERATOR_T832080912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Enemy>
struct  Enumerator_t832080912 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3237804331 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Enemy_t1765729589 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t832080912, ___l_0)); }
	inline List_1_t3237804331 * get_l_0() const { return ___l_0; }
	inline List_1_t3237804331 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3237804331 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t832080912, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t832080912, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t832080912, ___current_3)); }
	inline Enemy_t1765729589 * get_current_3() const { return ___current_3; }
	inline Enemy_t1765729589 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Enemy_t1765729589 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T832080912_H
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef UNITYEVENT_1_T3821352353_H
#define UNITYEVENT_1_T3821352353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<EnemyMovements>
struct  UnityEvent_1_t3821352353  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3821352353, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T3821352353_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef ENUMERATOR_T923485134_H
#define ENUMERATOR_T923485134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction`2<UnityEngine.Vector3,Characters>>
struct  Enumerator_t923485134 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3329208553 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	UnityAction_2_t1857133811 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t923485134, ___l_0)); }
	inline List_1_t3329208553 * get_l_0() const { return ___l_0; }
	inline List_1_t3329208553 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3329208553 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t923485134, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t923485134, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t923485134, ___current_3)); }
	inline UnityAction_2_t1857133811 * get_current_3() const { return ___current_3; }
	inline UnityAction_2_t1857133811 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UnityAction_2_t1857133811 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T923485134_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef ENUMERATOR_T2332998635_H
#define ENUMERATOR_T2332998635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Player>
struct  Enumerator_t2332998635 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t443754758 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Player_t3266647312 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2332998635, ___l_0)); }
	inline List_1_t443754758 * get_l_0() const { return ___l_0; }
	inline List_1_t443754758 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t443754758 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2332998635, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2332998635, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2332998635, ___current_3)); }
	inline Player_t3266647312 * get_current_3() const { return ___current_3; }
	inline Player_t3266647312 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Player_t3266647312 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2332998635_H
#ifndef ENUMERATOR_T1383910794_H
#define ENUMERATOR_T1383910794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction`2<Enemy,System.Int32>>
struct  Enumerator_t1383910794 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3789634213 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	UnityAction_2_t2317559471 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1383910794, ___l_0)); }
	inline List_1_t3789634213 * get_l_0() const { return ___l_0; }
	inline List_1_t3789634213 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3789634213 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1383910794, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1383910794, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1383910794, ___current_3)); }
	inline UnityAction_2_t2317559471 * get_current_3() const { return ___current_3; }
	inline UnityAction_2_t2317559471 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UnityAction_2_t2317559471 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1383910794_H
#ifndef ENUMERATOR_T2590880313_H
#define ENUMERATOR_T2590880313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction`1<EnemyMovements>>
struct  Enumerator_t2590880313 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t701636436 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	UnityAction_1_t3524528990 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2590880313, ___l_0)); }
	inline List_1_t701636436 * get_l_0() const { return ___l_0; }
	inline List_1_t701636436 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t701636436 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2590880313, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2590880313, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2590880313, ___current_3)); }
	inline UnityAction_1_t3524528990 * get_current_3() const { return ___current_3; }
	inline UnityAction_1_t3524528990 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UnityAction_1_t3524528990 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2590880313_H
#ifndef ENUMERATOR_T2602133217_H
#define ENUMERATOR_T2602133217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction`1<System.Int32>>
struct  Enumerator_t2602133217 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t712889340 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	UnityAction_1_t3535781894 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2602133217, ___l_0)); }
	inline List_1_t712889340 * get_l_0() const { return ___l_0; }
	inline List_1_t712889340 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t712889340 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2602133217, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2602133217, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2602133217, ___current_3)); }
	inline UnityAction_1_t3535781894 * get_current_3() const { return ___current_3; }
	inline UnityAction_1_t3535781894 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UnityAction_1_t3535781894 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2602133217_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef ENUMERATOR_T2745574122_H
#define ENUMERATOR_T2745574122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<EnemyGraphBuilder>
struct  Enumerator_t2745574122 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t856330245 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	EnemyGraphBuilder_t3679222799 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2745574122, ___l_0)); }
	inline List_1_t856330245 * get_l_0() const { return ___l_0; }
	inline List_1_t856330245 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t856330245 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2745574122, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2745574122, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2745574122, ___current_3)); }
	inline EnemyGraphBuilder_t3679222799 * get_current_3() const { return ___current_3; }
	inline EnemyGraphBuilder_t3679222799 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(EnemyGraphBuilder_t3679222799 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2745574122_H
#ifndef ENUMERATOR_T507345841_H
#define ENUMERATOR_T507345841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Projectile>
struct  Enumerator_t507345841 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2913069260 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Projectile_t1440994518 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t507345841, ___l_0)); }
	inline List_1_t2913069260 * get_l_0() const { return ___l_0; }
	inline List_1_t2913069260 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2913069260 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t507345841, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t507345841, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t507345841, ___current_3)); }
	inline Projectile_t1440994518 * get_current_3() const { return ___current_3; }
	inline Projectile_t1440994518 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Projectile_t1440994518 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T507345841_H
#ifndef UNITYEVENT_T2581268647_H
#define UNITYEVENT_T2581268647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t2581268647  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t2581268647, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T2581268647_H
#ifndef ENUMERATOR_T1915078563_H
#define ENUMERATOR_T1915078563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<HUD>
struct  Enumerator_t1915078563 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t25834686 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	HUD_t2848727240 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1915078563, ___l_0)); }
	inline List_1_t25834686 * get_l_0() const { return ___l_0; }
	inline List_1_t25834686 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t25834686 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1915078563, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1915078563, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1915078563, ___current_3)); }
	inline HUD_t2848727240 * get_current_3() const { return ___current_3; }
	inline HUD_t2848727240 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(HUD_t2848727240 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1915078563_H
#ifndef ENUMERATOR_T2312143922_H
#define ENUMERATOR_T2312143922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction>
struct  Enumerator_t2312143922 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t422900045 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	UnityAction_t3245792599 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2312143922, ___l_0)); }
	inline List_1_t422900045 * get_l_0() const { return ___l_0; }
	inline List_1_t422900045 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t422900045 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2312143922, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2312143922, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2312143922, ___current_3)); }
	inline UnityAction_t3245792599 * get_current_3() const { return ___current_3; }
	inline UnityAction_t3245792599 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UnityAction_t3245792599 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2312143922_H
#ifndef ENUMERATOR_T1827469027_H
#define ENUMERATOR_T1827469027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<MenuManager>
struct  Enumerator_t1827469027 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t4233192446 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	MenuManager_t2761117704 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1827469027, ___l_0)); }
	inline List_1_t4233192446 * get_l_0() const { return ___l_0; }
	inline List_1_t4233192446 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t4233192446 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1827469027, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1827469027, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1827469027, ___current_3)); }
	inline MenuManager_t2761117704 * get_current_3() const { return ___current_3; }
	inline MenuManager_t2761117704 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(MenuManager_t2761117704 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1827469027_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUMERATOR_T1273017900_H
#define ENUMERATOR_T1273017900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Wall>
struct  Enumerator_t1273017900 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3678741319 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Wall_t2206666577 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1273017900, ___l_0)); }
	inline List_1_t3678741319 * get_l_0() const { return ___l_0; }
	inline List_1_t3678741319 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3678741319 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1273017900, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1273017900, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1273017900, ___current_3)); }
	inline Wall_t2206666577 * get_current_3() const { return ___current_3; }
	inline Wall_t2206666577 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Wall_t2206666577 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1273017900_H
#ifndef UNITYEVENT_2_T3482397617_H
#define UNITYEVENT_2_T3482397617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`2<UnityEngine.Vector3,Characters>
struct  UnityEvent_2_t3482397617  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_2_t3482397617, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_2_T3482397617_H
#ifndef ENUMERATOR_T3929334796_H
#define ENUMERATOR_T3929334796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<EnemyMovementManager>
struct  Enumerator_t3929334796 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2040090919 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	EnemyMovementManager_t568016177 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3929334796, ___l_0)); }
	inline List_1_t2040090919 * get_l_0() const { return ___l_0; }
	inline List_1_t2040090919 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2040090919 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3929334796, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3929334796, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3929334796, ___current_3)); }
	inline EnemyMovementManager_t568016177 * get_current_3() const { return ___current_3; }
	inline EnemyMovementManager_t568016177 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(EnemyMovementManager_t568016177 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3929334796_H
#ifndef UNITYEVENT_2_T3942823277_H
#define UNITYEVENT_2_T3942823277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`2<Enemy,System.Int32>
struct  UnityEvent_2_t3942823277  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_2_t3942823277, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_2_T3942823277_H
#ifndef UNITYEVENT_1_T978947469_H
#define UNITYEVENT_1_T978947469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct  UnityEvent_1_t978947469  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t978947469, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T978947469_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef UNITYEVENT_1_T3832605257_H
#define UNITYEVENT_1_T3832605257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t3832605257  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3832605257, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T3832605257_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T2599294277_H
#ifndef CHANGELEVEL_T3391930331_H
#define CHANGELEVEL_T3391930331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChangeLevel
struct  ChangeLevel_t3391930331  : public UnityEvent_t2581268647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANGELEVEL_T3391930331_H
#ifndef CHARACTERS_T2778456652_H
#define CHARACTERS_T2778456652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Characters
struct  Characters_t2778456652 
{
public:
	// System.Int32 Characters::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Characters_t2778456652, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERS_T2778456652_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef HURT_T2217771330_H
#define HURT_T2217771330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Hurt
struct  Hurt_t2217771330  : public UnityEvent_1_t3832605257
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HURT_T2217771330_H
#ifndef ENEMYDEAD_T715039781_H
#define ENEMYDEAD_T715039781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyDead
struct  EnemyDead_t715039781  : public UnityEvent_2_t3942823277
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYDEAD_T715039781_H
#ifndef ENEMYREADY_T749052965_H
#define ENEMYREADY_T749052965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyReady
struct  EnemyReady_t749052965  : public UnityEvent_1_t978947469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYREADY_T749052965_H
#ifndef FORCEMODE2D_T255358695_H
#define FORCEMODE2D_T255358695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ForceMode2D
struct  ForceMode2D_t255358695 
{
public:
	// System.Int32 UnityEngine.ForceMode2D::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ForceMode2D_t255358695, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORCEMODE2D_T255358695_H
#ifndef PLAYERSHOOT_T3350012305_H
#define PLAYERSHOOT_T3350012305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerShoot
struct  PlayerShoot_t3350012305  : public UnityEvent_2_t3482397617
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSHOOT_T3350012305_H
#ifndef MENUS_T1357624810_H
#define MENUS_T1357624810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Menus
struct  Menus_t1357624810 
{
public:
	// System.Int32 Menus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Menus_t1357624810, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUS_T1357624810_H
#ifndef RESUMEGAMEPLAY_T3033387813_H
#define RESUMEGAMEPLAY_T3033387813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResumeGameplay
struct  ResumeGameplay_t3033387813  : public UnityEvent_t2581268647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESUMEGAMEPLAY_T3033387813_H
#ifndef ENEMYSHOOT_T243830779_H
#define ENEMYSHOOT_T243830779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyShoot
struct  EnemyShoot_t243830779  : public UnityEvent_1_t3832605257
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYSHOOT_T243830779_H
#ifndef RESETPLAYERHEALTH_T3732752359_H
#define RESETPLAYERHEALTH_T3732752359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResetPlayerHealth
struct  ResetPlayerHealth_t3732752359  : public UnityEvent_t2581268647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESETPLAYERHEALTH_T3732752359_H
#ifndef GAMEWIN_T775063857_H
#define GAMEWIN_T775063857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameWin
struct  GameWin_t775063857  : public UnityEvent_t2581268647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEWIN_T775063857_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef GAMEOVER_T2355536572_H
#define GAMEOVER_T2355536572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameOver
struct  GameOver_t2355536572  : public UnityEvent_1_t3832605257
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOVER_T2355536572_H
#ifndef HITWALL_T625646887_H
#define HITWALL_T625646887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HitWall
struct  HitWall_t625646887  : public UnityEvent_t2581268647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HITWALL_T625646887_H
#ifndef ENEMYMOVE_T2177327048_H
#define ENEMYMOVE_T2177327048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyMove
struct  EnemyMove_t2177327048  : public UnityEvent_1_t3821352353
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYMOVE_T2177327048_H
#ifndef ENEMYMOVEMENTS_T2939692849_H
#define ENEMYMOVEMENTS_T2939692849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyMovements
struct  EnemyMovements_t2939692849 
{
public:
	// System.Int32 EnemyMovements::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EnemyMovements_t2939692849, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYMOVEMENTS_T2939692849_H
#ifndef ALLENEMIESDEAD_T1977689189_H
#define ALLENEMIESDEAD_T1977689189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AllEnemiesDead
struct  AllEnemiesDead_t1977689189  : public UnityEvent_t2581268647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLENEMIESDEAD_T1977689189_H
#ifndef CONTACTPOINT2D_T3390240644_H
#define CONTACTPOINT2D_T3390240644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint2D
struct  ContactPoint2D_t3390240644 
{
public:
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_t2156229523  ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_t2156229523  ___m_Normal_1;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_RelativeVelocity
	Vector2_t2156229523  ___m_RelativeVelocity_2;
	// System.Single UnityEngine.ContactPoint2D::m_Separation
	float ___m_Separation_3;
	// System.Single UnityEngine.ContactPoint2D::m_NormalImpulse
	float ___m_NormalImpulse_4;
	// System.Single UnityEngine.ContactPoint2D::m_TangentImpulse
	float ___m_TangentImpulse_5;
	// System.Int32 UnityEngine.ContactPoint2D::m_Collider
	int32_t ___m_Collider_6;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherCollider
	int32_t ___m_OtherCollider_7;
	// System.Int32 UnityEngine.ContactPoint2D::m_Rigidbody
	int32_t ___m_Rigidbody_8;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_9;
	// System.Int32 UnityEngine.ContactPoint2D::m_Enabled
	int32_t ___m_Enabled_10;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Point_0)); }
	inline Vector2_t2156229523  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector2_t2156229523 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector2_t2156229523  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Normal_1)); }
	inline Vector2_t2156229523  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector2_t2156229523 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector2_t2156229523  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_2() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_RelativeVelocity_2)); }
	inline Vector2_t2156229523  get_m_RelativeVelocity_2() const { return ___m_RelativeVelocity_2; }
	inline Vector2_t2156229523 * get_address_of_m_RelativeVelocity_2() { return &___m_RelativeVelocity_2; }
	inline void set_m_RelativeVelocity_2(Vector2_t2156229523  value)
	{
		___m_RelativeVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_Separation_3() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Separation_3)); }
	inline float get_m_Separation_3() const { return ___m_Separation_3; }
	inline float* get_address_of_m_Separation_3() { return &___m_Separation_3; }
	inline void set_m_Separation_3(float value)
	{
		___m_Separation_3 = value;
	}

	inline static int32_t get_offset_of_m_NormalImpulse_4() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_NormalImpulse_4)); }
	inline float get_m_NormalImpulse_4() const { return ___m_NormalImpulse_4; }
	inline float* get_address_of_m_NormalImpulse_4() { return &___m_NormalImpulse_4; }
	inline void set_m_NormalImpulse_4(float value)
	{
		___m_NormalImpulse_4 = value;
	}

	inline static int32_t get_offset_of_m_TangentImpulse_5() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_TangentImpulse_5)); }
	inline float get_m_TangentImpulse_5() const { return ___m_TangentImpulse_5; }
	inline float* get_address_of_m_TangentImpulse_5() { return &___m_TangentImpulse_5; }
	inline void set_m_TangentImpulse_5(float value)
	{
		___m_TangentImpulse_5 = value;
	}

	inline static int32_t get_offset_of_m_Collider_6() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Collider_6)); }
	inline int32_t get_m_Collider_6() const { return ___m_Collider_6; }
	inline int32_t* get_address_of_m_Collider_6() { return &___m_Collider_6; }
	inline void set_m_Collider_6(int32_t value)
	{
		___m_Collider_6 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_7() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_OtherCollider_7)); }
	inline int32_t get_m_OtherCollider_7() const { return ___m_OtherCollider_7; }
	inline int32_t* get_address_of_m_OtherCollider_7() { return &___m_OtherCollider_7; }
	inline void set_m_OtherCollider_7(int32_t value)
	{
		___m_OtherCollider_7 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_8() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Rigidbody_8)); }
	inline int32_t get_m_Rigidbody_8() const { return ___m_Rigidbody_8; }
	inline int32_t* get_address_of_m_Rigidbody_8() { return &___m_Rigidbody_8; }
	inline void set_m_Rigidbody_8(int32_t value)
	{
		___m_Rigidbody_8 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_9() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_OtherRigidbody_9)); }
	inline int32_t get_m_OtherRigidbody_9() const { return ___m_OtherRigidbody_9; }
	inline int32_t* get_address_of_m_OtherRigidbody_9() { return &___m_OtherRigidbody_9; }
	inline void set_m_OtherRigidbody_9(int32_t value)
	{
		___m_OtherRigidbody_9 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_10() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Enabled_10)); }
	inline int32_t get_m_Enabled_10() const { return ___m_Enabled_10; }
	inline int32_t* get_address_of_m_Enabled_10() { return &___m_Enabled_10; }
	inline void set_m_Enabled_10(int32_t value)
	{
		___m_Enabled_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT2D_T3390240644_H
#ifndef SFXS_T1613455321_H
#define SFXS_T1613455321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SFXs
struct  SFXs_t1613455321 
{
public:
	// System.Int32 SFXs::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SFXs_t1613455321, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SFXS_T1613455321_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef SHADER_T4151988712_H
#define SHADER_T4151988712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t4151988712  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T4151988712_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef CACHEDCONTACTPOINTS2D_T2523437281_H
#define CACHEDCONTACTPOINTS2D_T2523437281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CachedContactPoints2D
struct  CachedContactPoints2D_t2523437281 
{
public:
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact0
	ContactPoint2D_t3390240644  ___m_Contact0_0;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact1
	ContactPoint2D_t3390240644  ___m_Contact1_1;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact2
	ContactPoint2D_t3390240644  ___m_Contact2_2;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact3
	ContactPoint2D_t3390240644  ___m_Contact3_3;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact4
	ContactPoint2D_t3390240644  ___m_Contact4_4;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact5
	ContactPoint2D_t3390240644  ___m_Contact5_5;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact6
	ContactPoint2D_t3390240644  ___m_Contact6_6;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact7
	ContactPoint2D_t3390240644  ___m_Contact7_7;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact8
	ContactPoint2D_t3390240644  ___m_Contact8_8;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact9
	ContactPoint2D_t3390240644  ___m_Contact9_9;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact10
	ContactPoint2D_t3390240644  ___m_Contact10_10;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact11
	ContactPoint2D_t3390240644  ___m_Contact11_11;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact12
	ContactPoint2D_t3390240644  ___m_Contact12_12;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact13
	ContactPoint2D_t3390240644  ___m_Contact13_13;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact14
	ContactPoint2D_t3390240644  ___m_Contact14_14;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact15
	ContactPoint2D_t3390240644  ___m_Contact15_15;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact16
	ContactPoint2D_t3390240644  ___m_Contact16_16;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact17
	ContactPoint2D_t3390240644  ___m_Contact17_17;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact18
	ContactPoint2D_t3390240644  ___m_Contact18_18;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact19
	ContactPoint2D_t3390240644  ___m_Contact19_19;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact20
	ContactPoint2D_t3390240644  ___m_Contact20_20;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact21
	ContactPoint2D_t3390240644  ___m_Contact21_21;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact22
	ContactPoint2D_t3390240644  ___m_Contact22_22;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact23
	ContactPoint2D_t3390240644  ___m_Contact23_23;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact24
	ContactPoint2D_t3390240644  ___m_Contact24_24;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact25
	ContactPoint2D_t3390240644  ___m_Contact25_25;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact26
	ContactPoint2D_t3390240644  ___m_Contact26_26;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact27
	ContactPoint2D_t3390240644  ___m_Contact27_27;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact28
	ContactPoint2D_t3390240644  ___m_Contact28_28;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact29
	ContactPoint2D_t3390240644  ___m_Contact29_29;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact30
	ContactPoint2D_t3390240644  ___m_Contact30_30;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact31
	ContactPoint2D_t3390240644  ___m_Contact31_31;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact32
	ContactPoint2D_t3390240644  ___m_Contact32_32;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact33
	ContactPoint2D_t3390240644  ___m_Contact33_33;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact34
	ContactPoint2D_t3390240644  ___m_Contact34_34;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact35
	ContactPoint2D_t3390240644  ___m_Contact35_35;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact36
	ContactPoint2D_t3390240644  ___m_Contact36_36;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact37
	ContactPoint2D_t3390240644  ___m_Contact37_37;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact38
	ContactPoint2D_t3390240644  ___m_Contact38_38;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact39
	ContactPoint2D_t3390240644  ___m_Contact39_39;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact40
	ContactPoint2D_t3390240644  ___m_Contact40_40;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact41
	ContactPoint2D_t3390240644  ___m_Contact41_41;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact42
	ContactPoint2D_t3390240644  ___m_Contact42_42;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact43
	ContactPoint2D_t3390240644  ___m_Contact43_43;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact44
	ContactPoint2D_t3390240644  ___m_Contact44_44;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact45
	ContactPoint2D_t3390240644  ___m_Contact45_45;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact46
	ContactPoint2D_t3390240644  ___m_Contact46_46;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact47
	ContactPoint2D_t3390240644  ___m_Contact47_47;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact48
	ContactPoint2D_t3390240644  ___m_Contact48_48;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact49
	ContactPoint2D_t3390240644  ___m_Contact49_49;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact50
	ContactPoint2D_t3390240644  ___m_Contact50_50;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact51
	ContactPoint2D_t3390240644  ___m_Contact51_51;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact52
	ContactPoint2D_t3390240644  ___m_Contact52_52;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact53
	ContactPoint2D_t3390240644  ___m_Contact53_53;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact54
	ContactPoint2D_t3390240644  ___m_Contact54_54;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact55
	ContactPoint2D_t3390240644  ___m_Contact55_55;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact56
	ContactPoint2D_t3390240644  ___m_Contact56_56;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact57
	ContactPoint2D_t3390240644  ___m_Contact57_57;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact58
	ContactPoint2D_t3390240644  ___m_Contact58_58;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact59
	ContactPoint2D_t3390240644  ___m_Contact59_59;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact60
	ContactPoint2D_t3390240644  ___m_Contact60_60;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact61
	ContactPoint2D_t3390240644  ___m_Contact61_61;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact62
	ContactPoint2D_t3390240644  ___m_Contact62_62;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact63
	ContactPoint2D_t3390240644  ___m_Contact63_63;

public:
	inline static int32_t get_offset_of_m_Contact0_0() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact0_0)); }
	inline ContactPoint2D_t3390240644  get_m_Contact0_0() const { return ___m_Contact0_0; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact0_0() { return &___m_Contact0_0; }
	inline void set_m_Contact0_0(ContactPoint2D_t3390240644  value)
	{
		___m_Contact0_0 = value;
	}

	inline static int32_t get_offset_of_m_Contact1_1() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact1_1)); }
	inline ContactPoint2D_t3390240644  get_m_Contact1_1() const { return ___m_Contact1_1; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact1_1() { return &___m_Contact1_1; }
	inline void set_m_Contact1_1(ContactPoint2D_t3390240644  value)
	{
		___m_Contact1_1 = value;
	}

	inline static int32_t get_offset_of_m_Contact2_2() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact2_2)); }
	inline ContactPoint2D_t3390240644  get_m_Contact2_2() const { return ___m_Contact2_2; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact2_2() { return &___m_Contact2_2; }
	inline void set_m_Contact2_2(ContactPoint2D_t3390240644  value)
	{
		___m_Contact2_2 = value;
	}

	inline static int32_t get_offset_of_m_Contact3_3() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact3_3)); }
	inline ContactPoint2D_t3390240644  get_m_Contact3_3() const { return ___m_Contact3_3; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact3_3() { return &___m_Contact3_3; }
	inline void set_m_Contact3_3(ContactPoint2D_t3390240644  value)
	{
		___m_Contact3_3 = value;
	}

	inline static int32_t get_offset_of_m_Contact4_4() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact4_4)); }
	inline ContactPoint2D_t3390240644  get_m_Contact4_4() const { return ___m_Contact4_4; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact4_4() { return &___m_Contact4_4; }
	inline void set_m_Contact4_4(ContactPoint2D_t3390240644  value)
	{
		___m_Contact4_4 = value;
	}

	inline static int32_t get_offset_of_m_Contact5_5() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact5_5)); }
	inline ContactPoint2D_t3390240644  get_m_Contact5_5() const { return ___m_Contact5_5; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact5_5() { return &___m_Contact5_5; }
	inline void set_m_Contact5_5(ContactPoint2D_t3390240644  value)
	{
		___m_Contact5_5 = value;
	}

	inline static int32_t get_offset_of_m_Contact6_6() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact6_6)); }
	inline ContactPoint2D_t3390240644  get_m_Contact6_6() const { return ___m_Contact6_6; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact6_6() { return &___m_Contact6_6; }
	inline void set_m_Contact6_6(ContactPoint2D_t3390240644  value)
	{
		___m_Contact6_6 = value;
	}

	inline static int32_t get_offset_of_m_Contact7_7() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact7_7)); }
	inline ContactPoint2D_t3390240644  get_m_Contact7_7() const { return ___m_Contact7_7; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact7_7() { return &___m_Contact7_7; }
	inline void set_m_Contact7_7(ContactPoint2D_t3390240644  value)
	{
		___m_Contact7_7 = value;
	}

	inline static int32_t get_offset_of_m_Contact8_8() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact8_8)); }
	inline ContactPoint2D_t3390240644  get_m_Contact8_8() const { return ___m_Contact8_8; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact8_8() { return &___m_Contact8_8; }
	inline void set_m_Contact8_8(ContactPoint2D_t3390240644  value)
	{
		___m_Contact8_8 = value;
	}

	inline static int32_t get_offset_of_m_Contact9_9() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact9_9)); }
	inline ContactPoint2D_t3390240644  get_m_Contact9_9() const { return ___m_Contact9_9; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact9_9() { return &___m_Contact9_9; }
	inline void set_m_Contact9_9(ContactPoint2D_t3390240644  value)
	{
		___m_Contact9_9 = value;
	}

	inline static int32_t get_offset_of_m_Contact10_10() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact10_10)); }
	inline ContactPoint2D_t3390240644  get_m_Contact10_10() const { return ___m_Contact10_10; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact10_10() { return &___m_Contact10_10; }
	inline void set_m_Contact10_10(ContactPoint2D_t3390240644  value)
	{
		___m_Contact10_10 = value;
	}

	inline static int32_t get_offset_of_m_Contact11_11() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact11_11)); }
	inline ContactPoint2D_t3390240644  get_m_Contact11_11() const { return ___m_Contact11_11; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact11_11() { return &___m_Contact11_11; }
	inline void set_m_Contact11_11(ContactPoint2D_t3390240644  value)
	{
		___m_Contact11_11 = value;
	}

	inline static int32_t get_offset_of_m_Contact12_12() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact12_12)); }
	inline ContactPoint2D_t3390240644  get_m_Contact12_12() const { return ___m_Contact12_12; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact12_12() { return &___m_Contact12_12; }
	inline void set_m_Contact12_12(ContactPoint2D_t3390240644  value)
	{
		___m_Contact12_12 = value;
	}

	inline static int32_t get_offset_of_m_Contact13_13() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact13_13)); }
	inline ContactPoint2D_t3390240644  get_m_Contact13_13() const { return ___m_Contact13_13; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact13_13() { return &___m_Contact13_13; }
	inline void set_m_Contact13_13(ContactPoint2D_t3390240644  value)
	{
		___m_Contact13_13 = value;
	}

	inline static int32_t get_offset_of_m_Contact14_14() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact14_14)); }
	inline ContactPoint2D_t3390240644  get_m_Contact14_14() const { return ___m_Contact14_14; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact14_14() { return &___m_Contact14_14; }
	inline void set_m_Contact14_14(ContactPoint2D_t3390240644  value)
	{
		___m_Contact14_14 = value;
	}

	inline static int32_t get_offset_of_m_Contact15_15() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact15_15)); }
	inline ContactPoint2D_t3390240644  get_m_Contact15_15() const { return ___m_Contact15_15; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact15_15() { return &___m_Contact15_15; }
	inline void set_m_Contact15_15(ContactPoint2D_t3390240644  value)
	{
		___m_Contact15_15 = value;
	}

	inline static int32_t get_offset_of_m_Contact16_16() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact16_16)); }
	inline ContactPoint2D_t3390240644  get_m_Contact16_16() const { return ___m_Contact16_16; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact16_16() { return &___m_Contact16_16; }
	inline void set_m_Contact16_16(ContactPoint2D_t3390240644  value)
	{
		___m_Contact16_16 = value;
	}

	inline static int32_t get_offset_of_m_Contact17_17() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact17_17)); }
	inline ContactPoint2D_t3390240644  get_m_Contact17_17() const { return ___m_Contact17_17; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact17_17() { return &___m_Contact17_17; }
	inline void set_m_Contact17_17(ContactPoint2D_t3390240644  value)
	{
		___m_Contact17_17 = value;
	}

	inline static int32_t get_offset_of_m_Contact18_18() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact18_18)); }
	inline ContactPoint2D_t3390240644  get_m_Contact18_18() const { return ___m_Contact18_18; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact18_18() { return &___m_Contact18_18; }
	inline void set_m_Contact18_18(ContactPoint2D_t3390240644  value)
	{
		___m_Contact18_18 = value;
	}

	inline static int32_t get_offset_of_m_Contact19_19() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact19_19)); }
	inline ContactPoint2D_t3390240644  get_m_Contact19_19() const { return ___m_Contact19_19; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact19_19() { return &___m_Contact19_19; }
	inline void set_m_Contact19_19(ContactPoint2D_t3390240644  value)
	{
		___m_Contact19_19 = value;
	}

	inline static int32_t get_offset_of_m_Contact20_20() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact20_20)); }
	inline ContactPoint2D_t3390240644  get_m_Contact20_20() const { return ___m_Contact20_20; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact20_20() { return &___m_Contact20_20; }
	inline void set_m_Contact20_20(ContactPoint2D_t3390240644  value)
	{
		___m_Contact20_20 = value;
	}

	inline static int32_t get_offset_of_m_Contact21_21() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact21_21)); }
	inline ContactPoint2D_t3390240644  get_m_Contact21_21() const { return ___m_Contact21_21; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact21_21() { return &___m_Contact21_21; }
	inline void set_m_Contact21_21(ContactPoint2D_t3390240644  value)
	{
		___m_Contact21_21 = value;
	}

	inline static int32_t get_offset_of_m_Contact22_22() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact22_22)); }
	inline ContactPoint2D_t3390240644  get_m_Contact22_22() const { return ___m_Contact22_22; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact22_22() { return &___m_Contact22_22; }
	inline void set_m_Contact22_22(ContactPoint2D_t3390240644  value)
	{
		___m_Contact22_22 = value;
	}

	inline static int32_t get_offset_of_m_Contact23_23() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact23_23)); }
	inline ContactPoint2D_t3390240644  get_m_Contact23_23() const { return ___m_Contact23_23; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact23_23() { return &___m_Contact23_23; }
	inline void set_m_Contact23_23(ContactPoint2D_t3390240644  value)
	{
		___m_Contact23_23 = value;
	}

	inline static int32_t get_offset_of_m_Contact24_24() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact24_24)); }
	inline ContactPoint2D_t3390240644  get_m_Contact24_24() const { return ___m_Contact24_24; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact24_24() { return &___m_Contact24_24; }
	inline void set_m_Contact24_24(ContactPoint2D_t3390240644  value)
	{
		___m_Contact24_24 = value;
	}

	inline static int32_t get_offset_of_m_Contact25_25() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact25_25)); }
	inline ContactPoint2D_t3390240644  get_m_Contact25_25() const { return ___m_Contact25_25; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact25_25() { return &___m_Contact25_25; }
	inline void set_m_Contact25_25(ContactPoint2D_t3390240644  value)
	{
		___m_Contact25_25 = value;
	}

	inline static int32_t get_offset_of_m_Contact26_26() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact26_26)); }
	inline ContactPoint2D_t3390240644  get_m_Contact26_26() const { return ___m_Contact26_26; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact26_26() { return &___m_Contact26_26; }
	inline void set_m_Contact26_26(ContactPoint2D_t3390240644  value)
	{
		___m_Contact26_26 = value;
	}

	inline static int32_t get_offset_of_m_Contact27_27() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact27_27)); }
	inline ContactPoint2D_t3390240644  get_m_Contact27_27() const { return ___m_Contact27_27; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact27_27() { return &___m_Contact27_27; }
	inline void set_m_Contact27_27(ContactPoint2D_t3390240644  value)
	{
		___m_Contact27_27 = value;
	}

	inline static int32_t get_offset_of_m_Contact28_28() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact28_28)); }
	inline ContactPoint2D_t3390240644  get_m_Contact28_28() const { return ___m_Contact28_28; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact28_28() { return &___m_Contact28_28; }
	inline void set_m_Contact28_28(ContactPoint2D_t3390240644  value)
	{
		___m_Contact28_28 = value;
	}

	inline static int32_t get_offset_of_m_Contact29_29() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact29_29)); }
	inline ContactPoint2D_t3390240644  get_m_Contact29_29() const { return ___m_Contact29_29; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact29_29() { return &___m_Contact29_29; }
	inline void set_m_Contact29_29(ContactPoint2D_t3390240644  value)
	{
		___m_Contact29_29 = value;
	}

	inline static int32_t get_offset_of_m_Contact30_30() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact30_30)); }
	inline ContactPoint2D_t3390240644  get_m_Contact30_30() const { return ___m_Contact30_30; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact30_30() { return &___m_Contact30_30; }
	inline void set_m_Contact30_30(ContactPoint2D_t3390240644  value)
	{
		___m_Contact30_30 = value;
	}

	inline static int32_t get_offset_of_m_Contact31_31() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact31_31)); }
	inline ContactPoint2D_t3390240644  get_m_Contact31_31() const { return ___m_Contact31_31; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact31_31() { return &___m_Contact31_31; }
	inline void set_m_Contact31_31(ContactPoint2D_t3390240644  value)
	{
		___m_Contact31_31 = value;
	}

	inline static int32_t get_offset_of_m_Contact32_32() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact32_32)); }
	inline ContactPoint2D_t3390240644  get_m_Contact32_32() const { return ___m_Contact32_32; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact32_32() { return &___m_Contact32_32; }
	inline void set_m_Contact32_32(ContactPoint2D_t3390240644  value)
	{
		___m_Contact32_32 = value;
	}

	inline static int32_t get_offset_of_m_Contact33_33() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact33_33)); }
	inline ContactPoint2D_t3390240644  get_m_Contact33_33() const { return ___m_Contact33_33; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact33_33() { return &___m_Contact33_33; }
	inline void set_m_Contact33_33(ContactPoint2D_t3390240644  value)
	{
		___m_Contact33_33 = value;
	}

	inline static int32_t get_offset_of_m_Contact34_34() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact34_34)); }
	inline ContactPoint2D_t3390240644  get_m_Contact34_34() const { return ___m_Contact34_34; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact34_34() { return &___m_Contact34_34; }
	inline void set_m_Contact34_34(ContactPoint2D_t3390240644  value)
	{
		___m_Contact34_34 = value;
	}

	inline static int32_t get_offset_of_m_Contact35_35() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact35_35)); }
	inline ContactPoint2D_t3390240644  get_m_Contact35_35() const { return ___m_Contact35_35; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact35_35() { return &___m_Contact35_35; }
	inline void set_m_Contact35_35(ContactPoint2D_t3390240644  value)
	{
		___m_Contact35_35 = value;
	}

	inline static int32_t get_offset_of_m_Contact36_36() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact36_36)); }
	inline ContactPoint2D_t3390240644  get_m_Contact36_36() const { return ___m_Contact36_36; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact36_36() { return &___m_Contact36_36; }
	inline void set_m_Contact36_36(ContactPoint2D_t3390240644  value)
	{
		___m_Contact36_36 = value;
	}

	inline static int32_t get_offset_of_m_Contact37_37() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact37_37)); }
	inline ContactPoint2D_t3390240644  get_m_Contact37_37() const { return ___m_Contact37_37; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact37_37() { return &___m_Contact37_37; }
	inline void set_m_Contact37_37(ContactPoint2D_t3390240644  value)
	{
		___m_Contact37_37 = value;
	}

	inline static int32_t get_offset_of_m_Contact38_38() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact38_38)); }
	inline ContactPoint2D_t3390240644  get_m_Contact38_38() const { return ___m_Contact38_38; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact38_38() { return &___m_Contact38_38; }
	inline void set_m_Contact38_38(ContactPoint2D_t3390240644  value)
	{
		___m_Contact38_38 = value;
	}

	inline static int32_t get_offset_of_m_Contact39_39() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact39_39)); }
	inline ContactPoint2D_t3390240644  get_m_Contact39_39() const { return ___m_Contact39_39; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact39_39() { return &___m_Contact39_39; }
	inline void set_m_Contact39_39(ContactPoint2D_t3390240644  value)
	{
		___m_Contact39_39 = value;
	}

	inline static int32_t get_offset_of_m_Contact40_40() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact40_40)); }
	inline ContactPoint2D_t3390240644  get_m_Contact40_40() const { return ___m_Contact40_40; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact40_40() { return &___m_Contact40_40; }
	inline void set_m_Contact40_40(ContactPoint2D_t3390240644  value)
	{
		___m_Contact40_40 = value;
	}

	inline static int32_t get_offset_of_m_Contact41_41() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact41_41)); }
	inline ContactPoint2D_t3390240644  get_m_Contact41_41() const { return ___m_Contact41_41; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact41_41() { return &___m_Contact41_41; }
	inline void set_m_Contact41_41(ContactPoint2D_t3390240644  value)
	{
		___m_Contact41_41 = value;
	}

	inline static int32_t get_offset_of_m_Contact42_42() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact42_42)); }
	inline ContactPoint2D_t3390240644  get_m_Contact42_42() const { return ___m_Contact42_42; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact42_42() { return &___m_Contact42_42; }
	inline void set_m_Contact42_42(ContactPoint2D_t3390240644  value)
	{
		___m_Contact42_42 = value;
	}

	inline static int32_t get_offset_of_m_Contact43_43() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact43_43)); }
	inline ContactPoint2D_t3390240644  get_m_Contact43_43() const { return ___m_Contact43_43; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact43_43() { return &___m_Contact43_43; }
	inline void set_m_Contact43_43(ContactPoint2D_t3390240644  value)
	{
		___m_Contact43_43 = value;
	}

	inline static int32_t get_offset_of_m_Contact44_44() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact44_44)); }
	inline ContactPoint2D_t3390240644  get_m_Contact44_44() const { return ___m_Contact44_44; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact44_44() { return &___m_Contact44_44; }
	inline void set_m_Contact44_44(ContactPoint2D_t3390240644  value)
	{
		___m_Contact44_44 = value;
	}

	inline static int32_t get_offset_of_m_Contact45_45() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact45_45)); }
	inline ContactPoint2D_t3390240644  get_m_Contact45_45() const { return ___m_Contact45_45; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact45_45() { return &___m_Contact45_45; }
	inline void set_m_Contact45_45(ContactPoint2D_t3390240644  value)
	{
		___m_Contact45_45 = value;
	}

	inline static int32_t get_offset_of_m_Contact46_46() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact46_46)); }
	inline ContactPoint2D_t3390240644  get_m_Contact46_46() const { return ___m_Contact46_46; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact46_46() { return &___m_Contact46_46; }
	inline void set_m_Contact46_46(ContactPoint2D_t3390240644  value)
	{
		___m_Contact46_46 = value;
	}

	inline static int32_t get_offset_of_m_Contact47_47() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact47_47)); }
	inline ContactPoint2D_t3390240644  get_m_Contact47_47() const { return ___m_Contact47_47; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact47_47() { return &___m_Contact47_47; }
	inline void set_m_Contact47_47(ContactPoint2D_t3390240644  value)
	{
		___m_Contact47_47 = value;
	}

	inline static int32_t get_offset_of_m_Contact48_48() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact48_48)); }
	inline ContactPoint2D_t3390240644  get_m_Contact48_48() const { return ___m_Contact48_48; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact48_48() { return &___m_Contact48_48; }
	inline void set_m_Contact48_48(ContactPoint2D_t3390240644  value)
	{
		___m_Contact48_48 = value;
	}

	inline static int32_t get_offset_of_m_Contact49_49() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact49_49)); }
	inline ContactPoint2D_t3390240644  get_m_Contact49_49() const { return ___m_Contact49_49; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact49_49() { return &___m_Contact49_49; }
	inline void set_m_Contact49_49(ContactPoint2D_t3390240644  value)
	{
		___m_Contact49_49 = value;
	}

	inline static int32_t get_offset_of_m_Contact50_50() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact50_50)); }
	inline ContactPoint2D_t3390240644  get_m_Contact50_50() const { return ___m_Contact50_50; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact50_50() { return &___m_Contact50_50; }
	inline void set_m_Contact50_50(ContactPoint2D_t3390240644  value)
	{
		___m_Contact50_50 = value;
	}

	inline static int32_t get_offset_of_m_Contact51_51() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact51_51)); }
	inline ContactPoint2D_t3390240644  get_m_Contact51_51() const { return ___m_Contact51_51; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact51_51() { return &___m_Contact51_51; }
	inline void set_m_Contact51_51(ContactPoint2D_t3390240644  value)
	{
		___m_Contact51_51 = value;
	}

	inline static int32_t get_offset_of_m_Contact52_52() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact52_52)); }
	inline ContactPoint2D_t3390240644  get_m_Contact52_52() const { return ___m_Contact52_52; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact52_52() { return &___m_Contact52_52; }
	inline void set_m_Contact52_52(ContactPoint2D_t3390240644  value)
	{
		___m_Contact52_52 = value;
	}

	inline static int32_t get_offset_of_m_Contact53_53() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact53_53)); }
	inline ContactPoint2D_t3390240644  get_m_Contact53_53() const { return ___m_Contact53_53; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact53_53() { return &___m_Contact53_53; }
	inline void set_m_Contact53_53(ContactPoint2D_t3390240644  value)
	{
		___m_Contact53_53 = value;
	}

	inline static int32_t get_offset_of_m_Contact54_54() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact54_54)); }
	inline ContactPoint2D_t3390240644  get_m_Contact54_54() const { return ___m_Contact54_54; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact54_54() { return &___m_Contact54_54; }
	inline void set_m_Contact54_54(ContactPoint2D_t3390240644  value)
	{
		___m_Contact54_54 = value;
	}

	inline static int32_t get_offset_of_m_Contact55_55() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact55_55)); }
	inline ContactPoint2D_t3390240644  get_m_Contact55_55() const { return ___m_Contact55_55; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact55_55() { return &___m_Contact55_55; }
	inline void set_m_Contact55_55(ContactPoint2D_t3390240644  value)
	{
		___m_Contact55_55 = value;
	}

	inline static int32_t get_offset_of_m_Contact56_56() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact56_56)); }
	inline ContactPoint2D_t3390240644  get_m_Contact56_56() const { return ___m_Contact56_56; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact56_56() { return &___m_Contact56_56; }
	inline void set_m_Contact56_56(ContactPoint2D_t3390240644  value)
	{
		___m_Contact56_56 = value;
	}

	inline static int32_t get_offset_of_m_Contact57_57() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact57_57)); }
	inline ContactPoint2D_t3390240644  get_m_Contact57_57() const { return ___m_Contact57_57; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact57_57() { return &___m_Contact57_57; }
	inline void set_m_Contact57_57(ContactPoint2D_t3390240644  value)
	{
		___m_Contact57_57 = value;
	}

	inline static int32_t get_offset_of_m_Contact58_58() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact58_58)); }
	inline ContactPoint2D_t3390240644  get_m_Contact58_58() const { return ___m_Contact58_58; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact58_58() { return &___m_Contact58_58; }
	inline void set_m_Contact58_58(ContactPoint2D_t3390240644  value)
	{
		___m_Contact58_58 = value;
	}

	inline static int32_t get_offset_of_m_Contact59_59() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact59_59)); }
	inline ContactPoint2D_t3390240644  get_m_Contact59_59() const { return ___m_Contact59_59; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact59_59() { return &___m_Contact59_59; }
	inline void set_m_Contact59_59(ContactPoint2D_t3390240644  value)
	{
		___m_Contact59_59 = value;
	}

	inline static int32_t get_offset_of_m_Contact60_60() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact60_60)); }
	inline ContactPoint2D_t3390240644  get_m_Contact60_60() const { return ___m_Contact60_60; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact60_60() { return &___m_Contact60_60; }
	inline void set_m_Contact60_60(ContactPoint2D_t3390240644  value)
	{
		___m_Contact60_60 = value;
	}

	inline static int32_t get_offset_of_m_Contact61_61() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact61_61)); }
	inline ContactPoint2D_t3390240644  get_m_Contact61_61() const { return ___m_Contact61_61; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact61_61() { return &___m_Contact61_61; }
	inline void set_m_Contact61_61(ContactPoint2D_t3390240644  value)
	{
		___m_Contact61_61 = value;
	}

	inline static int32_t get_offset_of_m_Contact62_62() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact62_62)); }
	inline ContactPoint2D_t3390240644  get_m_Contact62_62() const { return ___m_Contact62_62; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact62_62() { return &___m_Contact62_62; }
	inline void set_m_Contact62_62(ContactPoint2D_t3390240644  value)
	{
		___m_Contact62_62 = value;
	}

	inline static int32_t get_offset_of_m_Contact63_63() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact63_63)); }
	inline ContactPoint2D_t3390240644  get_m_Contact63_63() const { return ___m_Contact63_63; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact63_63() { return &___m_Contact63_63; }
	inline void set_m_Contact63_63(ContactPoint2D_t3390240644  value)
	{
		___m_Contact63_63 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDCONTACTPOINTS2D_T2523437281_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef RIGIDBODY2D_T939494601_H
#define RIGIDBODY2D_T939494601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t939494601  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T939494601_H
#ifndef COLLISION2D_T2842956331_H
#define COLLISION2D_T2842956331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision2D
struct  Collision2D_t2842956331  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t2156229523  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.CachedContactPoints2D UnityEngine.Collision2D::m_CachedContactPoints
	CachedContactPoints2D_t2523437281  ___m_CachedContactPoints_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContactArray
	ContactPoint2DU5BU5D_t96683501* ___m_LegacyContactArray_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_RelativeVelocity_4)); }
	inline Vector2_t2156229523  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_t2156229523 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_t2156229523  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_CachedContactPoints_7() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_CachedContactPoints_7)); }
	inline CachedContactPoints2D_t2523437281  get_m_CachedContactPoints_7() const { return ___m_CachedContactPoints_7; }
	inline CachedContactPoints2D_t2523437281 * get_address_of_m_CachedContactPoints_7() { return &___m_CachedContactPoints_7; }
	inline void set_m_CachedContactPoints_7(CachedContactPoints2D_t2523437281  value)
	{
		___m_CachedContactPoints_7 = value;
	}

	inline static int32_t get_offset_of_m_LegacyContactArray_8() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_LegacyContactArray_8)); }
	inline ContactPoint2DU5BU5D_t96683501* get_m_LegacyContactArray_8() const { return ___m_LegacyContactArray_8; }
	inline ContactPoint2DU5BU5D_t96683501** get_address_of_m_LegacyContactArray_8() { return &___m_LegacyContactArray_8; }
	inline void set_m_LegacyContactArray_8(ContactPoint2DU5BU5D_t96683501* value)
	{
		___m_LegacyContactArray_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_LegacyContactArray_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t2156229523  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	CachedContactPoints2D_t2523437281  ___m_CachedContactPoints_7;
	ContactPoint2D_t3390240644 * ___m_LegacyContactArray_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t2156229523  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	CachedContactPoints2D_t2523437281  ___m_CachedContactPoints_7;
	ContactPoint2D_t3390240644 * ___m_LegacyContactArray_8;
};
#endif // COLLISION2D_T2842956331_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef UNITYACTION_2_T1857133811_H
#define UNITYACTION_2_T1857133811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`2<UnityEngine.Vector3,Characters>
struct  UnityAction_2_t1857133811  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_2_T1857133811_H
#ifndef UNITYACTION_T3245792599_H
#define UNITYACTION_T3245792599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t3245792599  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T3245792599_H
#ifndef UNITYACTION_1_T3524528990_H
#define UNITYACTION_1_T3524528990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<EnemyMovements>
struct  UnityAction_1_t3524528990  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T3524528990_H
#ifndef UNITYACTION_1_T3535781894_H
#define UNITYACTION_1_T3535781894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Int32>
struct  UnityAction_1_t3535781894  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T3535781894_H
#ifndef UNITYACTION_2_T2317559471_H
#define UNITYACTION_2_T2317559471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`2<Enemy,System.Int32>
struct  UnityAction_2_t2317559471  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_2_T2317559471_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef LINERENDERER_T3154350270_H
#define LINERENDERER_T3154350270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LineRenderer
struct  LineRenderer_t3154350270  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINERENDERER_T3154350270_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef AUDIOBEHAVIOUR_T2879336574_H
#define AUDIOBEHAVIOUR_T2879336574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioBehaviour
struct  AudioBehaviour_t2879336574  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBEHAVIOUR_T2879336574_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef TIMER_T4185932343_H
#define TIMER_T4185932343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Timer
struct  Timer_t4185932343  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Timer::totalSeconds
	float ___totalSeconds_2;
	// System.Single Timer::elapsedSeconds
	float ___elapsedSeconds_3;
	// System.Boolean Timer::running
	bool ___running_4;
	// System.Boolean Timer::started
	bool ___started_5;

public:
	inline static int32_t get_offset_of_totalSeconds_2() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___totalSeconds_2)); }
	inline float get_totalSeconds_2() const { return ___totalSeconds_2; }
	inline float* get_address_of_totalSeconds_2() { return &___totalSeconds_2; }
	inline void set_totalSeconds_2(float value)
	{
		___totalSeconds_2 = value;
	}

	inline static int32_t get_offset_of_elapsedSeconds_3() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___elapsedSeconds_3)); }
	inline float get_elapsedSeconds_3() const { return ___elapsedSeconds_3; }
	inline float* get_address_of_elapsedSeconds_3() { return &___elapsedSeconds_3; }
	inline void set_elapsedSeconds_3(float value)
	{
		___elapsedSeconds_3 = value;
	}

	inline static int32_t get_offset_of_running_4() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___running_4)); }
	inline bool get_running_4() const { return ___running_4; }
	inline bool* get_address_of_running_4() { return &___running_4; }
	inline void set_running_4(bool value)
	{
		___running_4 = value;
	}

	inline static int32_t get_offset_of_started_5() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___started_5)); }
	inline bool get_started_5() const { return ___started_5; }
	inline bool* get_address_of_started_5() { return &___started_5; }
	inline void set_started_5(bool value)
	{
		___started_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMER_T4185932343_H
#ifndef PLAYERSHOOTINGMANAGER_T269660542_H
#define PLAYERSHOOTINGMANAGER_T269660542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerShootingManager
struct  PlayerShootingManager_t269660542  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject PlayerShootingManager::playerProjectilePrefab
	GameObject_t1113636619 * ___playerProjectilePrefab_2;
	// UnityEngine.Vector3 PlayerShootingManager::playerPosition
	Vector3_t3722313464  ___playerPosition_3;
	// UnityEngine.GameObject PlayerShootingManager::projectilePrefab
	GameObject_t1113636619 * ___projectilePrefab_4;

public:
	inline static int32_t get_offset_of_playerProjectilePrefab_2() { return static_cast<int32_t>(offsetof(PlayerShootingManager_t269660542, ___playerProjectilePrefab_2)); }
	inline GameObject_t1113636619 * get_playerProjectilePrefab_2() const { return ___playerProjectilePrefab_2; }
	inline GameObject_t1113636619 ** get_address_of_playerProjectilePrefab_2() { return &___playerProjectilePrefab_2; }
	inline void set_playerProjectilePrefab_2(GameObject_t1113636619 * value)
	{
		___playerProjectilePrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___playerProjectilePrefab_2), value);
	}

	inline static int32_t get_offset_of_playerPosition_3() { return static_cast<int32_t>(offsetof(PlayerShootingManager_t269660542, ___playerPosition_3)); }
	inline Vector3_t3722313464  get_playerPosition_3() const { return ___playerPosition_3; }
	inline Vector3_t3722313464 * get_address_of_playerPosition_3() { return &___playerPosition_3; }
	inline void set_playerPosition_3(Vector3_t3722313464  value)
	{
		___playerPosition_3 = value;
	}

	inline static int32_t get_offset_of_projectilePrefab_4() { return static_cast<int32_t>(offsetof(PlayerShootingManager_t269660542, ___projectilePrefab_4)); }
	inline GameObject_t1113636619 * get_projectilePrefab_4() const { return ___projectilePrefab_4; }
	inline GameObject_t1113636619 ** get_address_of_projectilePrefab_4() { return &___projectilePrefab_4; }
	inline void set_projectilePrefab_4(GameObject_t1113636619 * value)
	{
		___projectilePrefab_4 = value;
		Il2CppCodeGenWriteBarrier((&___projectilePrefab_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSHOOTINGMANAGER_T269660542_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef GAMEAUDIOSOURCE_T1717720176_H
#define GAMEAUDIOSOURCE_T1717720176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameAudioSource
struct  GameAudioSource_t1717720176  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioSource GameAudioSource::audioSource
	AudioSource_t3935305588 * ___audioSource_2;

public:
	inline static int32_t get_offset_of_audioSource_2() { return static_cast<int32_t>(offsetof(GameAudioSource_t1717720176, ___audioSource_2)); }
	inline AudioSource_t3935305588 * get_audioSource_2() const { return ___audioSource_2; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_2() { return &___audioSource_2; }
	inline void set_audioSource_2(AudioSource_t3935305588 * value)
	{
		___audioSource_2 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEAUDIOSOURCE_T1717720176_H
#ifndef PROJECTILE_T1440994518_H
#define PROJECTILE_T1440994518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Projectile
struct  Projectile_t1440994518  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Rigidbody2D Projectile::rb2d
	Rigidbody2D_t939494601 * ___rb2d_2;
	// UnityEngine.SpriteRenderer Projectile::spriteRenderer
	SpriteRenderer_t3235626157 * ___spriteRenderer_3;
	// UnityEngine.Vector3 Projectile::direction
	Vector3_t3722313464  ___direction_4;
	// UnityEngine.Sprite Projectile::sprite
	Sprite_t280657092 * ___sprite_5;
	// System.Int32 Projectile::damageCaused
	int32_t ___damageCaused_6;
	// Hurt Projectile::hurtEvent
	Hurt_t2217771330 * ___hurtEvent_7;

public:
	inline static int32_t get_offset_of_rb2d_2() { return static_cast<int32_t>(offsetof(Projectile_t1440994518, ___rb2d_2)); }
	inline Rigidbody2D_t939494601 * get_rb2d_2() const { return ___rb2d_2; }
	inline Rigidbody2D_t939494601 ** get_address_of_rb2d_2() { return &___rb2d_2; }
	inline void set_rb2d_2(Rigidbody2D_t939494601 * value)
	{
		___rb2d_2 = value;
		Il2CppCodeGenWriteBarrier((&___rb2d_2), value);
	}

	inline static int32_t get_offset_of_spriteRenderer_3() { return static_cast<int32_t>(offsetof(Projectile_t1440994518, ___spriteRenderer_3)); }
	inline SpriteRenderer_t3235626157 * get_spriteRenderer_3() const { return ___spriteRenderer_3; }
	inline SpriteRenderer_t3235626157 ** get_address_of_spriteRenderer_3() { return &___spriteRenderer_3; }
	inline void set_spriteRenderer_3(SpriteRenderer_t3235626157 * value)
	{
		___spriteRenderer_3 = value;
		Il2CppCodeGenWriteBarrier((&___spriteRenderer_3), value);
	}

	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(Projectile_t1440994518, ___direction_4)); }
	inline Vector3_t3722313464  get_direction_4() const { return ___direction_4; }
	inline Vector3_t3722313464 * get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(Vector3_t3722313464  value)
	{
		___direction_4 = value;
	}

	inline static int32_t get_offset_of_sprite_5() { return static_cast<int32_t>(offsetof(Projectile_t1440994518, ___sprite_5)); }
	inline Sprite_t280657092 * get_sprite_5() const { return ___sprite_5; }
	inline Sprite_t280657092 ** get_address_of_sprite_5() { return &___sprite_5; }
	inline void set_sprite_5(Sprite_t280657092 * value)
	{
		___sprite_5 = value;
		Il2CppCodeGenWriteBarrier((&___sprite_5), value);
	}

	inline static int32_t get_offset_of_damageCaused_6() { return static_cast<int32_t>(offsetof(Projectile_t1440994518, ___damageCaused_6)); }
	inline int32_t get_damageCaused_6() const { return ___damageCaused_6; }
	inline int32_t* get_address_of_damageCaused_6() { return &___damageCaused_6; }
	inline void set_damageCaused_6(int32_t value)
	{
		___damageCaused_6 = value;
	}

	inline static int32_t get_offset_of_hurtEvent_7() { return static_cast<int32_t>(offsetof(Projectile_t1440994518, ___hurtEvent_7)); }
	inline Hurt_t2217771330 * get_hurtEvent_7() const { return ___hurtEvent_7; }
	inline Hurt_t2217771330 ** get_address_of_hurtEvent_7() { return &___hurtEvent_7; }
	inline void set_hurtEvent_7(Hurt_t2217771330 * value)
	{
		___hurtEvent_7 = value;
		Il2CppCodeGenWriteBarrier((&___hurtEvent_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROJECTILE_T1440994518_H
#ifndef EDGERENDERER_T3830357436_H
#define EDGERENDERER_T3830357436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EdgeRenderer
struct  EdgeRenderer_t3830357436  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> EdgeRenderer::lineRenderers
	List_1_t2585711361 * ___lineRenderers_2;

public:
	inline static int32_t get_offset_of_lineRenderers_2() { return static_cast<int32_t>(offsetof(EdgeRenderer_t3830357436, ___lineRenderers_2)); }
	inline List_1_t2585711361 * get_lineRenderers_2() const { return ___lineRenderers_2; }
	inline List_1_t2585711361 ** get_address_of_lineRenderers_2() { return &___lineRenderers_2; }
	inline void set_lineRenderers_2(List_1_t2585711361 * value)
	{
		___lineRenderers_2 = value;
		Il2CppCodeGenWriteBarrier((&___lineRenderers_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDGERENDERER_T3830357436_H
#ifndef ENDHUD_T3967053958_H
#define ENDHUD_T3967053958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EndHUD
struct  EndHUD_t3967053958  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text EndHUD::pointsDisplay
	Text_t1901882714 * ___pointsDisplay_2;
	// System.String EndHUD::pointsPrefix
	String_t* ___pointsPrefix_3;

public:
	inline static int32_t get_offset_of_pointsDisplay_2() { return static_cast<int32_t>(offsetof(EndHUD_t3967053958, ___pointsDisplay_2)); }
	inline Text_t1901882714 * get_pointsDisplay_2() const { return ___pointsDisplay_2; }
	inline Text_t1901882714 ** get_address_of_pointsDisplay_2() { return &___pointsDisplay_2; }
	inline void set_pointsDisplay_2(Text_t1901882714 * value)
	{
		___pointsDisplay_2 = value;
		Il2CppCodeGenWriteBarrier((&___pointsDisplay_2), value);
	}

	inline static int32_t get_offset_of_pointsPrefix_3() { return static_cast<int32_t>(offsetof(EndHUD_t3967053958, ___pointsPrefix_3)); }
	inline String_t* get_pointsPrefix_3() const { return ___pointsPrefix_3; }
	inline String_t** get_address_of_pointsPrefix_3() { return &___pointsPrefix_3; }
	inline void set_pointsPrefix_3(String_t* value)
	{
		___pointsPrefix_3 = value;
		Il2CppCodeGenWriteBarrier((&___pointsPrefix_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDHUD_T3967053958_H
#ifndef BOXCOLLIDER2D_T3581341831_H
#define BOXCOLLIDER2D_T3581341831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider2D
struct  BoxCollider2D_t3581341831  : public Collider2D_t2806799626
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER2D_T3581341831_H
#ifndef ENEMYGRAPHBUILDER_T3679222799_H
#define ENEMYGRAPHBUILDER_T3679222799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyGraphBuilder
struct  EnemyGraphBuilder_t3679222799  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 EnemyGraphBuilder::n
	int32_t ___n_4;
	// UnityEngine.GameObject EnemyGraphBuilder::soldierPrefab
	GameObject_t1113636619 * ___soldierPrefab_5;
	// UnityEngine.GameObject EnemyGraphBuilder::protectorPrefab
	GameObject_t1113636619 * ___protectorPrefab_6;
	// UnityEngine.GameObject EnemyGraphBuilder::commanderPrefab
	GameObject_t1113636619 * ___commanderPrefab_7;
	// EnemyShoot EnemyGraphBuilder::enemyShootEvent
	EnemyShoot_t243830779 * ___enemyShootEvent_9;
	// System.Collections.Generic.List`1<EnemyNode`1<Enemy>> EnemyGraphBuilder::enemiesCurrentlyShooting
	List_1_t2784210590 * ___enemiesCurrentlyShooting_10;
	// AllEnemiesDead EnemyGraphBuilder::allEnemiesDeadEvent
	AllEnemiesDead_t1977689189 * ___allEnemiesDeadEvent_11;
	// GameWin EnemyGraphBuilder::gameWinEvent
	GameWin_t775063857 * ___gameWinEvent_12;

public:
	inline static int32_t get_offset_of_n_4() { return static_cast<int32_t>(offsetof(EnemyGraphBuilder_t3679222799, ___n_4)); }
	inline int32_t get_n_4() const { return ___n_4; }
	inline int32_t* get_address_of_n_4() { return &___n_4; }
	inline void set_n_4(int32_t value)
	{
		___n_4 = value;
	}

	inline static int32_t get_offset_of_soldierPrefab_5() { return static_cast<int32_t>(offsetof(EnemyGraphBuilder_t3679222799, ___soldierPrefab_5)); }
	inline GameObject_t1113636619 * get_soldierPrefab_5() const { return ___soldierPrefab_5; }
	inline GameObject_t1113636619 ** get_address_of_soldierPrefab_5() { return &___soldierPrefab_5; }
	inline void set_soldierPrefab_5(GameObject_t1113636619 * value)
	{
		___soldierPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___soldierPrefab_5), value);
	}

	inline static int32_t get_offset_of_protectorPrefab_6() { return static_cast<int32_t>(offsetof(EnemyGraphBuilder_t3679222799, ___protectorPrefab_6)); }
	inline GameObject_t1113636619 * get_protectorPrefab_6() const { return ___protectorPrefab_6; }
	inline GameObject_t1113636619 ** get_address_of_protectorPrefab_6() { return &___protectorPrefab_6; }
	inline void set_protectorPrefab_6(GameObject_t1113636619 * value)
	{
		___protectorPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((&___protectorPrefab_6), value);
	}

	inline static int32_t get_offset_of_commanderPrefab_7() { return static_cast<int32_t>(offsetof(EnemyGraphBuilder_t3679222799, ___commanderPrefab_7)); }
	inline GameObject_t1113636619 * get_commanderPrefab_7() const { return ___commanderPrefab_7; }
	inline GameObject_t1113636619 ** get_address_of_commanderPrefab_7() { return &___commanderPrefab_7; }
	inline void set_commanderPrefab_7(GameObject_t1113636619 * value)
	{
		___commanderPrefab_7 = value;
		Il2CppCodeGenWriteBarrier((&___commanderPrefab_7), value);
	}

	inline static int32_t get_offset_of_enemyShootEvent_9() { return static_cast<int32_t>(offsetof(EnemyGraphBuilder_t3679222799, ___enemyShootEvent_9)); }
	inline EnemyShoot_t243830779 * get_enemyShootEvent_9() const { return ___enemyShootEvent_9; }
	inline EnemyShoot_t243830779 ** get_address_of_enemyShootEvent_9() { return &___enemyShootEvent_9; }
	inline void set_enemyShootEvent_9(EnemyShoot_t243830779 * value)
	{
		___enemyShootEvent_9 = value;
		Il2CppCodeGenWriteBarrier((&___enemyShootEvent_9), value);
	}

	inline static int32_t get_offset_of_enemiesCurrentlyShooting_10() { return static_cast<int32_t>(offsetof(EnemyGraphBuilder_t3679222799, ___enemiesCurrentlyShooting_10)); }
	inline List_1_t2784210590 * get_enemiesCurrentlyShooting_10() const { return ___enemiesCurrentlyShooting_10; }
	inline List_1_t2784210590 ** get_address_of_enemiesCurrentlyShooting_10() { return &___enemiesCurrentlyShooting_10; }
	inline void set_enemiesCurrentlyShooting_10(List_1_t2784210590 * value)
	{
		___enemiesCurrentlyShooting_10 = value;
		Il2CppCodeGenWriteBarrier((&___enemiesCurrentlyShooting_10), value);
	}

	inline static int32_t get_offset_of_allEnemiesDeadEvent_11() { return static_cast<int32_t>(offsetof(EnemyGraphBuilder_t3679222799, ___allEnemiesDeadEvent_11)); }
	inline AllEnemiesDead_t1977689189 * get_allEnemiesDeadEvent_11() const { return ___allEnemiesDeadEvent_11; }
	inline AllEnemiesDead_t1977689189 ** get_address_of_allEnemiesDeadEvent_11() { return &___allEnemiesDeadEvent_11; }
	inline void set_allEnemiesDeadEvent_11(AllEnemiesDead_t1977689189 * value)
	{
		___allEnemiesDeadEvent_11 = value;
		Il2CppCodeGenWriteBarrier((&___allEnemiesDeadEvent_11), value);
	}

	inline static int32_t get_offset_of_gameWinEvent_12() { return static_cast<int32_t>(offsetof(EnemyGraphBuilder_t3679222799, ___gameWinEvent_12)); }
	inline GameWin_t775063857 * get_gameWinEvent_12() const { return ___gameWinEvent_12; }
	inline GameWin_t775063857 ** get_address_of_gameWinEvent_12() { return &___gameWinEvent_12; }
	inline void set_gameWinEvent_12(GameWin_t775063857 * value)
	{
		___gameWinEvent_12 = value;
		Il2CppCodeGenWriteBarrier((&___gameWinEvent_12), value);
	}
};

struct EnemyGraphBuilder_t3679222799_StaticFields
{
public:
	// EnemyGraph`1<Enemy> EnemyGraphBuilder::enemyGraph
	EnemyGraph_1_t514571901 * ___enemyGraph_8;

public:
	inline static int32_t get_offset_of_enemyGraph_8() { return static_cast<int32_t>(offsetof(EnemyGraphBuilder_t3679222799_StaticFields, ___enemyGraph_8)); }
	inline EnemyGraph_1_t514571901 * get_enemyGraph_8() const { return ___enemyGraph_8; }
	inline EnemyGraph_1_t514571901 ** get_address_of_enemyGraph_8() { return &___enemyGraph_8; }
	inline void set_enemyGraph_8(EnemyGraph_1_t514571901 * value)
	{
		___enemyGraph_8 = value;
		Il2CppCodeGenWriteBarrier((&___enemyGraph_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYGRAPHBUILDER_T3679222799_H
#ifndef ENEMYMOVEMENTMANAGER_T568016177_H
#define ENEMYMOVEMENTMANAGER_T568016177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyMovementManager
struct  EnemyMovementManager_t568016177  : public MonoBehaviour_t3962482529
{
public:
	// EnemyMove EnemyMovementManager::enemyMoveEvent
	EnemyMove_t2177327048 * ___enemyMoveEvent_2;
	// System.Int32 EnemyMovementManager::numberOfMoves
	int32_t ___numberOfMoves_3;
	// System.Boolean EnemyMovementManager::okToMove
	bool ___okToMove_4;
	// System.Collections.Generic.List`1<System.Int32> EnemyMovementManager::moveRight
	List_1_t128053199 * ___moveRight_5;
	// System.Collections.Generic.List`1<System.Int32> EnemyMovementManager::moveLeft
	List_1_t128053199 * ___moveLeft_6;

public:
	inline static int32_t get_offset_of_enemyMoveEvent_2() { return static_cast<int32_t>(offsetof(EnemyMovementManager_t568016177, ___enemyMoveEvent_2)); }
	inline EnemyMove_t2177327048 * get_enemyMoveEvent_2() const { return ___enemyMoveEvent_2; }
	inline EnemyMove_t2177327048 ** get_address_of_enemyMoveEvent_2() { return &___enemyMoveEvent_2; }
	inline void set_enemyMoveEvent_2(EnemyMove_t2177327048 * value)
	{
		___enemyMoveEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___enemyMoveEvent_2), value);
	}

	inline static int32_t get_offset_of_numberOfMoves_3() { return static_cast<int32_t>(offsetof(EnemyMovementManager_t568016177, ___numberOfMoves_3)); }
	inline int32_t get_numberOfMoves_3() const { return ___numberOfMoves_3; }
	inline int32_t* get_address_of_numberOfMoves_3() { return &___numberOfMoves_3; }
	inline void set_numberOfMoves_3(int32_t value)
	{
		___numberOfMoves_3 = value;
	}

	inline static int32_t get_offset_of_okToMove_4() { return static_cast<int32_t>(offsetof(EnemyMovementManager_t568016177, ___okToMove_4)); }
	inline bool get_okToMove_4() const { return ___okToMove_4; }
	inline bool* get_address_of_okToMove_4() { return &___okToMove_4; }
	inline void set_okToMove_4(bool value)
	{
		___okToMove_4 = value;
	}

	inline static int32_t get_offset_of_moveRight_5() { return static_cast<int32_t>(offsetof(EnemyMovementManager_t568016177, ___moveRight_5)); }
	inline List_1_t128053199 * get_moveRight_5() const { return ___moveRight_5; }
	inline List_1_t128053199 ** get_address_of_moveRight_5() { return &___moveRight_5; }
	inline void set_moveRight_5(List_1_t128053199 * value)
	{
		___moveRight_5 = value;
		Il2CppCodeGenWriteBarrier((&___moveRight_5), value);
	}

	inline static int32_t get_offset_of_moveLeft_6() { return static_cast<int32_t>(offsetof(EnemyMovementManager_t568016177, ___moveLeft_6)); }
	inline List_1_t128053199 * get_moveLeft_6() const { return ___moveLeft_6; }
	inline List_1_t128053199 ** get_address_of_moveLeft_6() { return &___moveLeft_6; }
	inline void set_moveLeft_6(List_1_t128053199 * value)
	{
		___moveLeft_6 = value;
		Il2CppCodeGenWriteBarrier((&___moveLeft_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYMOVEMENTMANAGER_T568016177_H
#ifndef PAUSEGAME_T12111239_H
#define PAUSEGAME_T12111239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PauseGame
struct  PauseGame_t12111239  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean PauseGame::gamePaused
	bool ___gamePaused_2;
	// UnityEngine.GameObject PauseGame::pauseMenu
	GameObject_t1113636619 * ___pauseMenu_3;

public:
	inline static int32_t get_offset_of_gamePaused_2() { return static_cast<int32_t>(offsetof(PauseGame_t12111239, ___gamePaused_2)); }
	inline bool get_gamePaused_2() const { return ___gamePaused_2; }
	inline bool* get_address_of_gamePaused_2() { return &___gamePaused_2; }
	inline void set_gamePaused_2(bool value)
	{
		___gamePaused_2 = value;
	}

	inline static int32_t get_offset_of_pauseMenu_3() { return static_cast<int32_t>(offsetof(PauseGame_t12111239, ___pauseMenu_3)); }
	inline GameObject_t1113636619 * get_pauseMenu_3() const { return ___pauseMenu_3; }
	inline GameObject_t1113636619 ** get_address_of_pauseMenu_3() { return &___pauseMenu_3; }
	inline void set_pauseMenu_3(GameObject_t1113636619 * value)
	{
		___pauseMenu_3 = value;
		Il2CppCodeGenWriteBarrier((&___pauseMenu_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAUSEGAME_T12111239_H
#ifndef ENEMY_T1765729589_H
#define ENEMY_T1765729589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy
struct  Enemy_t1765729589  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 Enemy::damage
	int32_t ___damage_2;
	// System.Int32 Enemy::points
	int32_t ___points_3;
	// System.Boolean Enemy::shootRan
	bool ___shootRan_4;
	// System.Boolean Enemy::currentlyShooting
	bool ___currentlyShooting_5;
	// System.Int32 Enemy::id
	int32_t ___id_6;
	// System.String Enemy::type
	String_t* ___type_7;
	// UnityEngine.Rigidbody2D Enemy::rb2D
	Rigidbody2D_t939494601 * ___rb2D_8;
	// UnityEngine.BoxCollider2D Enemy::boxCollider2D
	BoxCollider2D_t3581341831 * ___boxCollider2D_9;
	// UnityEngine.SpriteRenderer Enemy::spriteRenderer
	SpriteRenderer_t3235626157 * ___spriteRenderer_10;
	// EnemyDead Enemy::enemyDeadEvent
	EnemyDead_t715039781 * ___enemyDeadEvent_11;
	// EnemyReady Enemy::enemyReadyEvent
	EnemyReady_t749052965 * ___enemyReadyEvent_12;
	// UnityEngine.Vector2 Enemy::movementHorizontalPosition
	Vector2_t2156229523  ___movementHorizontalPosition_13;
	// UnityEngine.Vector2 Enemy::movementVerticalPosition
	Vector2_t2156229523  ___movementVerticalPosition_14;

public:
	inline static int32_t get_offset_of_damage_2() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___damage_2)); }
	inline int32_t get_damage_2() const { return ___damage_2; }
	inline int32_t* get_address_of_damage_2() { return &___damage_2; }
	inline void set_damage_2(int32_t value)
	{
		___damage_2 = value;
	}

	inline static int32_t get_offset_of_points_3() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___points_3)); }
	inline int32_t get_points_3() const { return ___points_3; }
	inline int32_t* get_address_of_points_3() { return &___points_3; }
	inline void set_points_3(int32_t value)
	{
		___points_3 = value;
	}

	inline static int32_t get_offset_of_shootRan_4() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___shootRan_4)); }
	inline bool get_shootRan_4() const { return ___shootRan_4; }
	inline bool* get_address_of_shootRan_4() { return &___shootRan_4; }
	inline void set_shootRan_4(bool value)
	{
		___shootRan_4 = value;
	}

	inline static int32_t get_offset_of_currentlyShooting_5() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___currentlyShooting_5)); }
	inline bool get_currentlyShooting_5() const { return ___currentlyShooting_5; }
	inline bool* get_address_of_currentlyShooting_5() { return &___currentlyShooting_5; }
	inline void set_currentlyShooting_5(bool value)
	{
		___currentlyShooting_5 = value;
	}

	inline static int32_t get_offset_of_id_6() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___id_6)); }
	inline int32_t get_id_6() const { return ___id_6; }
	inline int32_t* get_address_of_id_6() { return &___id_6; }
	inline void set_id_6(int32_t value)
	{
		___id_6 = value;
	}

	inline static int32_t get_offset_of_type_7() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___type_7)); }
	inline String_t* get_type_7() const { return ___type_7; }
	inline String_t** get_address_of_type_7() { return &___type_7; }
	inline void set_type_7(String_t* value)
	{
		___type_7 = value;
		Il2CppCodeGenWriteBarrier((&___type_7), value);
	}

	inline static int32_t get_offset_of_rb2D_8() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___rb2D_8)); }
	inline Rigidbody2D_t939494601 * get_rb2D_8() const { return ___rb2D_8; }
	inline Rigidbody2D_t939494601 ** get_address_of_rb2D_8() { return &___rb2D_8; }
	inline void set_rb2D_8(Rigidbody2D_t939494601 * value)
	{
		___rb2D_8 = value;
		Il2CppCodeGenWriteBarrier((&___rb2D_8), value);
	}

	inline static int32_t get_offset_of_boxCollider2D_9() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___boxCollider2D_9)); }
	inline BoxCollider2D_t3581341831 * get_boxCollider2D_9() const { return ___boxCollider2D_9; }
	inline BoxCollider2D_t3581341831 ** get_address_of_boxCollider2D_9() { return &___boxCollider2D_9; }
	inline void set_boxCollider2D_9(BoxCollider2D_t3581341831 * value)
	{
		___boxCollider2D_9 = value;
		Il2CppCodeGenWriteBarrier((&___boxCollider2D_9), value);
	}

	inline static int32_t get_offset_of_spriteRenderer_10() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___spriteRenderer_10)); }
	inline SpriteRenderer_t3235626157 * get_spriteRenderer_10() const { return ___spriteRenderer_10; }
	inline SpriteRenderer_t3235626157 ** get_address_of_spriteRenderer_10() { return &___spriteRenderer_10; }
	inline void set_spriteRenderer_10(SpriteRenderer_t3235626157 * value)
	{
		___spriteRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___spriteRenderer_10), value);
	}

	inline static int32_t get_offset_of_enemyDeadEvent_11() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___enemyDeadEvent_11)); }
	inline EnemyDead_t715039781 * get_enemyDeadEvent_11() const { return ___enemyDeadEvent_11; }
	inline EnemyDead_t715039781 ** get_address_of_enemyDeadEvent_11() { return &___enemyDeadEvent_11; }
	inline void set_enemyDeadEvent_11(EnemyDead_t715039781 * value)
	{
		___enemyDeadEvent_11 = value;
		Il2CppCodeGenWriteBarrier((&___enemyDeadEvent_11), value);
	}

	inline static int32_t get_offset_of_enemyReadyEvent_12() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___enemyReadyEvent_12)); }
	inline EnemyReady_t749052965 * get_enemyReadyEvent_12() const { return ___enemyReadyEvent_12; }
	inline EnemyReady_t749052965 ** get_address_of_enemyReadyEvent_12() { return &___enemyReadyEvent_12; }
	inline void set_enemyReadyEvent_12(EnemyReady_t749052965 * value)
	{
		___enemyReadyEvent_12 = value;
		Il2CppCodeGenWriteBarrier((&___enemyReadyEvent_12), value);
	}

	inline static int32_t get_offset_of_movementHorizontalPosition_13() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___movementHorizontalPosition_13)); }
	inline Vector2_t2156229523  get_movementHorizontalPosition_13() const { return ___movementHorizontalPosition_13; }
	inline Vector2_t2156229523 * get_address_of_movementHorizontalPosition_13() { return &___movementHorizontalPosition_13; }
	inline void set_movementHorizontalPosition_13(Vector2_t2156229523  value)
	{
		___movementHorizontalPosition_13 = value;
	}

	inline static int32_t get_offset_of_movementVerticalPosition_14() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___movementVerticalPosition_14)); }
	inline Vector2_t2156229523  get_movementVerticalPosition_14() const { return ___movementVerticalPosition_14; }
	inline Vector2_t2156229523 * get_address_of_movementVerticalPosition_14() { return &___movementVerticalPosition_14; }
	inline void set_movementVerticalPosition_14(Vector2_t2156229523  value)
	{
		___movementVerticalPosition_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMY_T1765729589_H
#ifndef PLAYER_T3266647312_H
#define PLAYER_T3266647312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t3266647312  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector2 Player::position
	Vector2_t2156229523  ___position_2;
	// UnityEngine.BoxCollider2D Player::boxCollider2D
	BoxCollider2D_t3581341831 * ___boxCollider2D_3;
	// UnityEngine.Rigidbody2D Player::rb2D
	Rigidbody2D_t939494601 * ___rb2D_4;
	// System.Single Player::playerHalfWidth
	float ___playerHalfWidth_5;
	// PlayerShoot Player::playerShootEvent
	PlayerShoot_t3350012305 * ___playerShootEvent_6;

public:
	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___position_2)); }
	inline Vector2_t2156229523  get_position_2() const { return ___position_2; }
	inline Vector2_t2156229523 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector2_t2156229523  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_boxCollider2D_3() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___boxCollider2D_3)); }
	inline BoxCollider2D_t3581341831 * get_boxCollider2D_3() const { return ___boxCollider2D_3; }
	inline BoxCollider2D_t3581341831 ** get_address_of_boxCollider2D_3() { return &___boxCollider2D_3; }
	inline void set_boxCollider2D_3(BoxCollider2D_t3581341831 * value)
	{
		___boxCollider2D_3 = value;
		Il2CppCodeGenWriteBarrier((&___boxCollider2D_3), value);
	}

	inline static int32_t get_offset_of_rb2D_4() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___rb2D_4)); }
	inline Rigidbody2D_t939494601 * get_rb2D_4() const { return ___rb2D_4; }
	inline Rigidbody2D_t939494601 ** get_address_of_rb2D_4() { return &___rb2D_4; }
	inline void set_rb2D_4(Rigidbody2D_t939494601 * value)
	{
		___rb2D_4 = value;
		Il2CppCodeGenWriteBarrier((&___rb2D_4), value);
	}

	inline static int32_t get_offset_of_playerHalfWidth_5() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___playerHalfWidth_5)); }
	inline float get_playerHalfWidth_5() const { return ___playerHalfWidth_5; }
	inline float* get_address_of_playerHalfWidth_5() { return &___playerHalfWidth_5; }
	inline void set_playerHalfWidth_5(float value)
	{
		___playerHalfWidth_5 = value;
	}

	inline static int32_t get_offset_of_playerShootEvent_6() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___playerShootEvent_6)); }
	inline PlayerShoot_t3350012305 * get_playerShootEvent_6() const { return ___playerShootEvent_6; }
	inline PlayerShoot_t3350012305 ** get_address_of_playerShootEvent_6() { return &___playerShootEvent_6; }
	inline void set_playerShootEvent_6(PlayerShoot_t3350012305 * value)
	{
		___playerShootEvent_6 = value;
		Il2CppCodeGenWriteBarrier((&___playerShootEvent_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYER_T3266647312_H
#ifndef HUD_T2848727240_H
#define HUD_T2848727240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HUD
struct  HUD_t2848727240  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text HUD::playerHealthDisplay
	Text_t1901882714 * ___playerHealthDisplay_3;
	// UnityEngine.UI.Text HUD::pointsDisplay
	Text_t1901882714 * ___pointsDisplay_4;
	// System.String HUD::playerHealthPrefix
	String_t* ___playerHealthPrefix_5;
	// System.String HUD::pointsPrefix
	String_t* ___pointsPrefix_6;
	// System.Boolean HUD::gameFinished
	bool ___gameFinished_7;
	// GameOver HUD::gameOverEvent
	GameOver_t2355536572 * ___gameOverEvent_8;

public:
	inline static int32_t get_offset_of_playerHealthDisplay_3() { return static_cast<int32_t>(offsetof(HUD_t2848727240, ___playerHealthDisplay_3)); }
	inline Text_t1901882714 * get_playerHealthDisplay_3() const { return ___playerHealthDisplay_3; }
	inline Text_t1901882714 ** get_address_of_playerHealthDisplay_3() { return &___playerHealthDisplay_3; }
	inline void set_playerHealthDisplay_3(Text_t1901882714 * value)
	{
		___playerHealthDisplay_3 = value;
		Il2CppCodeGenWriteBarrier((&___playerHealthDisplay_3), value);
	}

	inline static int32_t get_offset_of_pointsDisplay_4() { return static_cast<int32_t>(offsetof(HUD_t2848727240, ___pointsDisplay_4)); }
	inline Text_t1901882714 * get_pointsDisplay_4() const { return ___pointsDisplay_4; }
	inline Text_t1901882714 ** get_address_of_pointsDisplay_4() { return &___pointsDisplay_4; }
	inline void set_pointsDisplay_4(Text_t1901882714 * value)
	{
		___pointsDisplay_4 = value;
		Il2CppCodeGenWriteBarrier((&___pointsDisplay_4), value);
	}

	inline static int32_t get_offset_of_playerHealthPrefix_5() { return static_cast<int32_t>(offsetof(HUD_t2848727240, ___playerHealthPrefix_5)); }
	inline String_t* get_playerHealthPrefix_5() const { return ___playerHealthPrefix_5; }
	inline String_t** get_address_of_playerHealthPrefix_5() { return &___playerHealthPrefix_5; }
	inline void set_playerHealthPrefix_5(String_t* value)
	{
		___playerHealthPrefix_5 = value;
		Il2CppCodeGenWriteBarrier((&___playerHealthPrefix_5), value);
	}

	inline static int32_t get_offset_of_pointsPrefix_6() { return static_cast<int32_t>(offsetof(HUD_t2848727240, ___pointsPrefix_6)); }
	inline String_t* get_pointsPrefix_6() const { return ___pointsPrefix_6; }
	inline String_t** get_address_of_pointsPrefix_6() { return &___pointsPrefix_6; }
	inline void set_pointsPrefix_6(String_t* value)
	{
		___pointsPrefix_6 = value;
		Il2CppCodeGenWriteBarrier((&___pointsPrefix_6), value);
	}

	inline static int32_t get_offset_of_gameFinished_7() { return static_cast<int32_t>(offsetof(HUD_t2848727240, ___gameFinished_7)); }
	inline bool get_gameFinished_7() const { return ___gameFinished_7; }
	inline bool* get_address_of_gameFinished_7() { return &___gameFinished_7; }
	inline void set_gameFinished_7(bool value)
	{
		___gameFinished_7 = value;
	}

	inline static int32_t get_offset_of_gameOverEvent_8() { return static_cast<int32_t>(offsetof(HUD_t2848727240, ___gameOverEvent_8)); }
	inline GameOver_t2355536572 * get_gameOverEvent_8() const { return ___gameOverEvent_8; }
	inline GameOver_t2355536572 ** get_address_of_gameOverEvent_8() { return &___gameOverEvent_8; }
	inline void set_gameOverEvent_8(GameOver_t2355536572 * value)
	{
		___gameOverEvent_8 = value;
		Il2CppCodeGenWriteBarrier((&___gameOverEvent_8), value);
	}
};

struct HUD_t2848727240_StaticFields
{
public:
	// System.Int32 HUD::playerHealth
	int32_t ___playerHealth_2;

public:
	inline static int32_t get_offset_of_playerHealth_2() { return static_cast<int32_t>(offsetof(HUD_t2848727240_StaticFields, ___playerHealth_2)); }
	inline int32_t get_playerHealth_2() const { return ___playerHealth_2; }
	inline int32_t* get_address_of_playerHealth_2() { return &___playerHealth_2; }
	inline void set_playerHealth_2(int32_t value)
	{
		___playerHealth_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HUD_T2848727240_H
#ifndef MENUMANAGER_T2761117704_H
#define MENUMANAGER_T2761117704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuManager
struct  MenuManager_t2761117704  : public MonoBehaviour_t3962482529
{
public:
	// Menus MenuManager::currentMenu
	int32_t ___currentMenu_2;
	// ChangeLevel MenuManager::changeLevelEvent
	ChangeLevel_t3391930331 * ___changeLevelEvent_3;
	// ResetPlayerHealth MenuManager::resetPlayerHealthEvent
	ResetPlayerHealth_t3732752359 * ___resetPlayerHealthEvent_4;
	// ResumeGameplay MenuManager::resumeGameplayEvent
	ResumeGameplay_t3033387813 * ___resumeGameplayEvent_5;

public:
	inline static int32_t get_offset_of_currentMenu_2() { return static_cast<int32_t>(offsetof(MenuManager_t2761117704, ___currentMenu_2)); }
	inline int32_t get_currentMenu_2() const { return ___currentMenu_2; }
	inline int32_t* get_address_of_currentMenu_2() { return &___currentMenu_2; }
	inline void set_currentMenu_2(int32_t value)
	{
		___currentMenu_2 = value;
	}

	inline static int32_t get_offset_of_changeLevelEvent_3() { return static_cast<int32_t>(offsetof(MenuManager_t2761117704, ___changeLevelEvent_3)); }
	inline ChangeLevel_t3391930331 * get_changeLevelEvent_3() const { return ___changeLevelEvent_3; }
	inline ChangeLevel_t3391930331 ** get_address_of_changeLevelEvent_3() { return &___changeLevelEvent_3; }
	inline void set_changeLevelEvent_3(ChangeLevel_t3391930331 * value)
	{
		___changeLevelEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___changeLevelEvent_3), value);
	}

	inline static int32_t get_offset_of_resetPlayerHealthEvent_4() { return static_cast<int32_t>(offsetof(MenuManager_t2761117704, ___resetPlayerHealthEvent_4)); }
	inline ResetPlayerHealth_t3732752359 * get_resetPlayerHealthEvent_4() const { return ___resetPlayerHealthEvent_4; }
	inline ResetPlayerHealth_t3732752359 ** get_address_of_resetPlayerHealthEvent_4() { return &___resetPlayerHealthEvent_4; }
	inline void set_resetPlayerHealthEvent_4(ResetPlayerHealth_t3732752359 * value)
	{
		___resetPlayerHealthEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___resetPlayerHealthEvent_4), value);
	}

	inline static int32_t get_offset_of_resumeGameplayEvent_5() { return static_cast<int32_t>(offsetof(MenuManager_t2761117704, ___resumeGameplayEvent_5)); }
	inline ResumeGameplay_t3033387813 * get_resumeGameplayEvent_5() const { return ___resumeGameplayEvent_5; }
	inline ResumeGameplay_t3033387813 ** get_address_of_resumeGameplayEvent_5() { return &___resumeGameplayEvent_5; }
	inline void set_resumeGameplayEvent_5(ResumeGameplay_t3033387813 * value)
	{
		___resumeGameplayEvent_5 = value;
		Il2CppCodeGenWriteBarrier((&___resumeGameplayEvent_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUMANAGER_T2761117704_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public AudioBehaviour_t2879336574
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef WALL_T2206666577_H
#define WALL_T2206666577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wall
struct  Wall_t2206666577  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.BoxCollider2D Wall::boxCollider2D
	BoxCollider2D_t3581341831 * ___boxCollider2D_2;
	// UnityEngine.Rigidbody2D Wall::rb2d
	Rigidbody2D_t939494601 * ___rb2d_3;
	// HitWall Wall::hitWallEvent
	HitWall_t625646887 * ___hitWallEvent_4;

public:
	inline static int32_t get_offset_of_boxCollider2D_2() { return static_cast<int32_t>(offsetof(Wall_t2206666577, ___boxCollider2D_2)); }
	inline BoxCollider2D_t3581341831 * get_boxCollider2D_2() const { return ___boxCollider2D_2; }
	inline BoxCollider2D_t3581341831 ** get_address_of_boxCollider2D_2() { return &___boxCollider2D_2; }
	inline void set_boxCollider2D_2(BoxCollider2D_t3581341831 * value)
	{
		___boxCollider2D_2 = value;
		Il2CppCodeGenWriteBarrier((&___boxCollider2D_2), value);
	}

	inline static int32_t get_offset_of_rb2d_3() { return static_cast<int32_t>(offsetof(Wall_t2206666577, ___rb2d_3)); }
	inline Rigidbody2D_t939494601 * get_rb2d_3() const { return ___rb2d_3; }
	inline Rigidbody2D_t939494601 ** get_address_of_rb2d_3() { return &___rb2d_3; }
	inline void set_rb2d_3(Rigidbody2D_t939494601 * value)
	{
		___rb2d_3 = value;
		Il2CppCodeGenWriteBarrier((&___rb2d_3), value);
	}

	inline static int32_t get_offset_of_hitWallEvent_4() { return static_cast<int32_t>(offsetof(Wall_t2206666577, ___hitWallEvent_4)); }
	inline HitWall_t625646887 * get_hitWallEvent_4() const { return ___hitWallEvent_4; }
	inline HitWall_t625646887 ** get_address_of_hitWallEvent_4() { return &___hitWallEvent_4; }
	inline void set_hitWallEvent_4(HitWall_t625646887 * value)
	{
		___hitWallEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___hitWallEvent_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WALL_T2206666577_H
#ifndef SOLDIER_T1302779916_H
#define SOLDIER_T1302779916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soldier
struct  Soldier_t1302779916  : public Enemy_t1765729589
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOLDIER_T1302779916_H
#ifndef COMMANDER_T765419416_H
#define COMMANDER_T765419416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Commander
struct  Commander_t765419416  : public Enemy_t1765729589
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMANDER_T765419416_H
#ifndef PROTECTOR_T3558790336_H
#define PROTECTOR_T3558790336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Protector
struct  Protector_t3558790336  : public Enemy_t1765729589
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROTECTOR_T3558790336_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_8() const { return ___m_CanvasRenderer_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_8() { return &___m_CanvasRenderer_8; }
	inline void set_m_CanvasRenderer_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef PLAYERPROJECTILE_T331371730_H
#define PLAYERPROJECTILE_T331371730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerProjectile
struct  PlayerProjectile_t331371730  : public Projectile_t1440994518
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERPROJECTILE_T331371730_H
#ifndef SOLDIERPROJECTILE_T2485004912_H
#define SOLDIERPROJECTILE_T2485004912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoldierProjectile
struct  SoldierProjectile_t2485004912  : public Projectile_t1440994518
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOLDIERPROJECTILE_T2485004912_H
#ifndef COMMANDERPROJECTILE_T390287407_H
#define COMMANDERPROJECTILE_T390287407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CommanderProjectile
struct  CommanderProjectile_t390287407  : public Projectile_t1440994518
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMANDERPROJECTILE_T390287407_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
extern "C"  RuntimeObject * Resources_Load_TisRuntimeObject_m597869152_gshared (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<SFXs,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m3866989135_gshared (Dictionary_2_t1812969767 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<SFXs,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m3209502269_gshared (Dictionary_2_t1812969767 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<SFXs,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m2676486772_gshared (Dictionary_2_t1812969767 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1135049463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(!0)
extern "C"  void UnityEvent_1_Invoke_m3604335408_gshared (UnityEvent_1_t3832605257 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<EnemyNode`1<T>> EnemyGraph`1<System.Object>::get_Nodes()
extern "C"  RuntimeObject* EnemyGraph_1_get_Nodes_m2226366308_gshared (EnemyGraph_1_t1828948476 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<EnemyNode`1<T>> EnemyNode`1<System.Object>::get_Neighbors()
extern "C"  RuntimeObject* EnemyNode_1_get_Neighbors_m3352484026_gshared (EnemyNode_1_t2626512423 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// T EnemyNode`1<System.Object>::get_Value()
extern "C"  RuntimeObject * EnemyNode_1_get_Value_m3407702743_gshared (EnemyNode_1_t2626512423 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<EnemyMovements>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m2369862071_gshared (UnityAction_1_t3524528990 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m3081378164_gshared (UnityAction_1_t3535781894 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Int32>::Invoke(!0,!1)
extern "C"  void UnityEvent_2_Invoke_m3128406176_gshared (UnityEvent_2_t485107986 * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Int32>::AddListener(UnityEngine.Events.UnityAction`2<!0,!1>)
extern "C"  void UnityEvent_2_AddListener_m2588475759_gshared (UnityEvent_2_t485107986 * __this, UnityAction_2_t3154811476 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Int32>::.ctor()
extern "C"  void UnityEvent_2__ctor_m3556804021_gshared (UnityEvent_2_t485107986 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void EnemyGraph`1<System.Object>::.ctor()
extern "C"  void EnemyGraph_1__ctor_m1917565337_gshared (EnemyGraph_1_t1828948476 * __this, const RuntimeMethod* method);
// System.Boolean EnemyGraph`1<System.Object>::AddNode(T)
extern "C"  bool EnemyGraph_1_AddNode_m959123627_gshared (EnemyGraph_1_t1828948476 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean EnemyNode`1<System.Object>::AddNeighbor(EnemyNode`1<T>)
extern "C"  bool EnemyNode_1_AddNeighbor_m932404771_gshared (EnemyNode_1_t2626512423 * __this, EnemyNode_1_t2626512423 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_2__ctor_m1608744870_gshared (UnityAction_2_t3154811476 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// EnemyNode`1<T> EnemyGraph`1<System.Object>::Find(T)
extern "C"  EnemyNode_1_t2626512423 * EnemyGraph_1_Find_m1287968152_gshared (EnemyGraph_1_t1828948476 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean EnemyNode`1<System.Object>::RemoveNeighbor(EnemyNode`1<T>)
extern "C"  bool EnemyNode_1_RemoveNeighbor_m1788373079_gshared (EnemyNode_1_t2626512423 * __this, EnemyNode_1_t2626512423 * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C"  bool List_1_Contains_m2654125393_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void EnemyNode`1<System.Object>::RemoveAllNeighbors()
extern "C"  void EnemyNode_1_RemoveAllNeighbors_m1735214666_gshared (EnemyNode_1_t2626512423 * __this, const RuntimeMethod* method);
// System.Boolean EnemyGraph`1<System.Object>::RemoveNode(T)
extern "C"  bool EnemyGraph_1_RemoveNode_m3645809967_gshared (EnemyGraph_1_t1828948476 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
extern "C"  void UnityEvent_1_AddListener_m3158408092_gshared (UnityEvent_1_t3832605257 * __this, UnityAction_1_t3535781894 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<EnemyMovements>::.ctor()
extern "C"  void UnityEvent_1__ctor_m1630793919_gshared (UnityEvent_1_t3821352353 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
extern "C"  bool List_1_Contains_m2263725670_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<EnemyMovements>::Invoke(!0)
extern "C"  void UnityEvent_1_Invoke_m3449286906_gshared (UnityEvent_1_t3821352353 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C"  void List_1__ctor_m1628857705_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C"  void List_1_Clear_m2154023298_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
extern "C"  void List_1_Add_m697420525_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<EnemyMovements>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
extern "C"  void UnityEvent_1_AddListener_m2373938285_gshared (UnityEvent_1_t3821352353 * __this, UnityAction_1_t3524528990 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
extern "C"  void UnityEvent_1__ctor_m3777630589_gshared (UnityEvent_1_t978947469 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
extern "C"  void UnityEvent_1__ctor_m3816765192_gshared (UnityEvent_1_t3832605257 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Vector3,Characters>::Invoke(!0,!1)
extern "C"  void UnityEvent_2_Invoke_m1006745064_gshared (UnityEvent_2_t3482397617 * __this, Vector3_t3722313464  p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Vector3,Characters>::AddListener(UnityEngine.Events.UnityAction`2<!0,!1>)
extern "C"  void UnityEvent_2_AddListener_m3257760133_gshared (UnityEvent_2_t3482397617 * __this, UnityAction_2_t1857133811 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Vector3,Characters>::.ctor()
extern "C"  void UnityEvent_2__ctor_m483165201_gshared (UnityEvent_2_t3482397617 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.Vector3,Characters>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_2__ctor_m3863610767_gshared (UnityAction_2_t1857133811 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);

// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern "C"  void UnityEvent__ctor_m431206565 (UnityEvent_t2581268647 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Resources::Load<UnityEngine.AudioClip>(System.String)
#define Resources_Load_TisAudioClip_t3680889665_m1361768364(__this /* static, unused */, p0, method) ((  AudioClip_t3680889665 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m597869152_gshared)(__this /* static, unused */, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<SFXs,UnityEngine.AudioClip>::Add(!0,!1)
#define Dictionary_2_Add_m2995842380(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2413753268 *, int32_t, AudioClip_t3680889665 *, const RuntimeMethod*))Dictionary_2_Add_m3866989135_gshared)(__this, p0, p1, method)
// !1 System.Collections.Generic.Dictionary`2<SFXs,UnityEngine.AudioClip>::get_Item(!0)
#define Dictionary_2_get_Item_m4199337316(__this, p0, method) ((  AudioClip_t3680889665 * (*) (Dictionary_2_t2413753268 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m3209502269_gshared)(__this, p0, method)
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C"  void AudioSource_PlayOneShot_m1688286683 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<SFXs,UnityEngine.AudioClip>::.ctor()
#define Dictionary_2__ctor_m2683429040(__this, method) ((  void (*) (Dictionary_2_t2413753268 *, const RuntimeMethod*))Dictionary_2__ctor_m2676486772_gshared)(__this, method)
// System.Void Enemy::.ctor()
extern "C"  void Enemy__ctor_m2535212804 (Enemy_t1765729589 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::Start()
extern "C"  void Enemy_Start_m3612231678 (Enemy_t1765729589 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern "C"  void MonoBehaviour_InvokeRepeating_m650519629 (MonoBehaviour_t3962482529 * __this, String_t* p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Enemy::get_ID()
extern "C"  int32_t Enemy_get_ID_m1981869824 (Enemy_t1765729589 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Resources::Load<UnityEngine.GameObject>(System.String)
#define Resources_Load_TisGameObject_t1113636619_m1734345100(__this /* static, unused */, p0, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m597869152_gshared)(__this /* static, unused */, p0, method)
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1113636619_m3006960551(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1135049463_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Void AudioManager::PlayAudio(SFXs)
extern "C"  void AudioManager_PlayAudio_m3468175270 (RuntimeObject * __this /* static, unused */, int32_t ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Projectile::.ctor()
extern "C"  void Projectile__ctor_m2984814897 (Projectile_t1440994518 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Projectile::Start()
extern "C"  void Projectile_Start_m1343777743 (Projectile_t1440994518 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2156229523  Vector2_op_Multiply_m2347887432 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
extern "C"  void Rigidbody2D_AddForce_m1099013366 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
extern "C"  bool GameObject_CompareTag_m3144439756 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(!0)
#define UnityEvent_1_Invoke_m3604335408(__this, p0, method) ((  void (*) (UnityEvent_1_t3832605257 *, int32_t, const RuntimeMethod*))UnityEvent_1_Invoke_m3604335408_gshared)(__this, p0, method)
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
#define List_1__ctor_m1424466557(__this, method) ((  void (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// EnemyGraph`1<Enemy> EnemyGraphBuilder::get_EnemyGraph()
extern "C"  EnemyGraph_1_t514571901 * EnemyGraphBuilder_get_EnemyGraph_m3588443397 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<EnemyNode`1<T>> EnemyGraph`1<Enemy>::get_Nodes()
#define EnemyGraph_1_get_Nodes_m2229328446(__this, method) ((  RuntimeObject* (*) (EnemyGraph_1_t514571901 *, const RuntimeMethod*))EnemyGraph_1_get_Nodes_m2226366308_gshared)(__this, method)
// System.Collections.Generic.IList`1<EnemyNode`1<T>> EnemyNode`1<Enemy>::get_Neighbors()
#define EnemyNode_1_get_Neighbors_m1597861993(__this, method) ((  RuntimeObject* (*) (EnemyNode_1_t1312135848 *, const RuntimeMethod*))EnemyNode_1_get_Neighbors_m3352484026_gshared)(__this, method)
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C"  void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.LineRenderer>()
#define GameObject_AddComponent_TisLineRenderer_t3154350270_m2920077551(__this, method) ((  LineRenderer_t3154350270 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C"  Shader_t4151988712 * Shader_Find_m2092206247 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C"  void Material__ctor_m1662457592 (Material_t340375123 * __this, Shader_t4151988712 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C"  void Renderer_set_material_m1157964140 (Renderer_t2627027031 * __this, Material_t340375123 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
#define List_1_Add_m2765963565(__this, p0, method) ((  void (*) (List_1_t2585711361 *, GameObject_t1113636619 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C"  Color_t2555686324  Color_get_black_m719512684 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LineRenderer::set_startColor(UnityEngine.Color)
extern "C"  void LineRenderer_set_startColor_m307692187 (LineRenderer_t3154350270 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LineRenderer::set_endColor(UnityEngine.Color)
extern "C"  void LineRenderer_set_endColor_m2330841811 (LineRenderer_t3154350270 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LineRenderer::set_startWidth(System.Single)
extern "C"  void LineRenderer_set_startWidth_m1093267133 (LineRenderer_t3154350270 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LineRenderer::set_endWidth(System.Single)
extern "C"  void LineRenderer_set_endWidth_m4252049505 (LineRenderer_t3154350270 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
extern "C"  void LineRenderer_set_positionCount_m2226639690 (LineRenderer_t3154350270 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T EnemyNode`1<Enemy>::get_Value()
#define EnemyNode_1_get_Value_m854677982(__this, method) ((  Enemy_t1765729589 * (*) (EnemyNode_1_t1312135848 *, const RuntimeMethod*))EnemyNode_1_get_Value_m3407702743_gshared)(__this, method)
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
extern "C"  void LineRenderer_SetPosition_m2111131184 (LineRenderer_t3154350270 * __this, int32_t p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 PointsManager::get_Points()
extern "C"  int32_t PointsManager_get_Points_m2028628492 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyDead::.ctor()
extern "C"  void EnemyDead__ctor_m3176842491 (EnemyDead_t715039781 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyReady::.ctor()
extern "C"  void EnemyReady__ctor_m929021895 (EnemyReady_t749052965 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, method) ((  Rigidbody2D_t939494601 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
#define Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273(__this, method) ((  BoxCollider2D_t3581341831 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, method) ((  SpriteRenderer_t3235626157 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void EventManager::AddEnemyDeadInvoker(Enemy)
extern "C"  void EventManager_AddEnemyDeadInvoker_m4263453055 (RuntimeObject * __this /* static, unused */, Enemy_t1765729589 * ___invoker0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction`1<EnemyMovements>::.ctor(System.Object,System.IntPtr)
#define UnityAction_1__ctor_m2369862071(__this, p0, p1, method) ((  void (*) (UnityAction_1_t3524528990 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m2369862071_gshared)(__this, p0, p1, method)
// System.Void EventManager::AddEnemyMoveListener(UnityEngine.Events.UnityAction`1<EnemyMovements>)
extern "C"  void EventManager_AddEnemyMoveListener_m248040199 (RuntimeObject * __this /* static, unused */, UnityAction_1_t3524528990 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
#define UnityAction_1__ctor_m3081378164(__this, p0, p1, method) ((  void (*) (UnityAction_1_t3535781894 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m3081378164_gshared)(__this, p0, p1, method)
// System.Void EventManager::AddEnemyShootListener(UnityEngine.Events.UnityAction`1<System.Int32>)
extern "C"  void EventManager_AddEnemyShootListener_m299670043 (RuntimeObject * __this /* static, unused */, UnityAction_1_t3535781894 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`2<Enemy,System.Int32>::Invoke(!0,!1)
#define UnityEvent_2_Invoke_m1150875179(__this, p0, p1, method) ((  void (*) (UnityEvent_2_t3942823277 *, Enemy_t1765729589 *, int32_t, const RuntimeMethod*))UnityEvent_2_Invoke_m3128406176_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_MovePosition_m1934912072 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`2<Enemy,System.Int32>::AddListener(UnityEngine.Events.UnityAction`2<!0,!1>)
#define UnityEvent_2_AddListener_m1516503271(__this, p0, method) ((  void (*) (UnityEvent_2_t3942823277 *, UnityAction_2_t2317559471 *, const RuntimeMethod*))UnityEvent_2_AddListener_m2588475759_gshared)(__this, p0, method)
// System.Void UnityEngine.Events.UnityEvent`2<Enemy,System.Int32>::.ctor()
#define UnityEvent_2__ctor_m405530561(__this, method) ((  void (*) (UnityEvent_2_t3942823277 *, const RuntimeMethod*))UnityEvent_2__ctor_m3556804021_gshared)(__this, method)
// System.Void EnemyShoot::.ctor()
extern "C"  void EnemyShoot__ctor_m1274202978 (EnemyShoot_t243830779 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<EnemyNode`1<Enemy>>::.ctor()
#define List_1__ctor_m1784492279(__this, method) ((  void (*) (List_1_t2784210590 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void AllEnemiesDead::.ctor()
extern "C"  void AllEnemiesDead__ctor_m3123510771 (AllEnemiesDead_t1977689189 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameWin::.ctor()
extern "C"  void GameWin__ctor_m1720413770 (GameWin_t775063857 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single ScreenUtils::get_ZWorld()
extern "C"  float ScreenUtils_get_ZWorld_m1697726886 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<Enemy>()
#define GameObject_GetComponent_TisEnemy_t1765729589_m2539763118(__this, method) ((  Enemy_t1765729589 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void Enemy::set_ID(System.Int32)
extern "C"  void Enemy_set_ID_m3592118756 (Enemy_t1765729589 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::set_Type(System.String)
extern "C"  void Enemy_set_Type_m1641845120 (Enemy_t1765729589 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyGraph`1<Enemy>::.ctor()
#define EnemyGraph_1__ctor_m1111478957(__this, method) ((  void (*) (EnemyGraph_1_t514571901 *, const RuntimeMethod*))EnemyGraph_1__ctor_m1917565337_gshared)(__this, method)
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
extern "C"  GameObjectU5BU5D_t3328599146* GameObject_FindGameObjectsWithTag_m2585173894 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean EnemyGraph`1<Enemy>::AddNode(T)
#define EnemyGraph_1_AddNode_m2464653358(__this, p0, method) ((  bool (*) (EnemyGraph_1_t514571901 *, Enemy_t1765729589 *, const RuntimeMethod*))EnemyGraph_1_AddNode_m959123627_gshared)(__this, p0, method)
// UnityEngine.Vector2 Enemy::get_Position()
extern "C"  Vector2_t2156229523  Enemy_get_Position_m665928263 (Enemy_t1765729589 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_Subtraction_m73004381 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean EnemyNode`1<Enemy>::AddNeighbor(EnemyNode`1<T>)
#define EnemyNode_1_AddNeighbor_m2610891233(__this, p0, method) ((  bool (*) (EnemyNode_1_t1312135848 *, EnemyNode_1_t1312135848 *, const RuntimeMethod*))EnemyNode_1_AddNeighbor_m932404771_gshared)(__this, p0, method)
// System.Void UnityEngine.Events.UnityAction`2<Enemy,System.Int32>::.ctor(System.Object,System.IntPtr)
#define UnityAction_2__ctor_m332998619(__this, p0, p1, method) ((  void (*) (UnityAction_2_t2317559471 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m1608744870_gshared)(__this, p0, p1, method)
// System.Void EventManager::AddEnemyDeadListener(UnityEngine.Events.UnityAction`2<Enemy,System.Int32>)
extern "C"  void EventManager_AddEnemyDeadListener_m1380855738 (RuntimeObject * __this /* static, unused */, UnityAction_2_t2317559471 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AddEnemyShootInvoker(EnemyGraphBuilder)
extern "C"  void EventManager_AddEnemyShootInvoker_m800474143 (RuntimeObject * __this /* static, unused */, EnemyGraphBuilder_t3679222799 * ___invoker0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AddAllEnemiesDeadInvokers(EnemyGraphBuilder)
extern "C"  void EventManager_AddAllEnemiesDeadInvokers_m2293543861 (RuntimeObject * __this /* static, unused */, EnemyGraphBuilder_t3679222799 * ___invoker0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AddGameWinInvokers(EnemyGraphBuilder)
extern "C"  void EventManager_AddGameWinInvokers_m2102898517 (RuntimeObject * __this /* static, unused */, EnemyGraphBuilder_t3679222799 * ___invoker0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::Equals(System.Int32)
extern "C"  bool Int32_Equals_m2976157357 (int32_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
extern "C"  Scene_t2348375561  SceneManager_GetActiveScene_m1825203488 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SceneManagement.Scene::get_name()
extern "C"  String_t* Scene_get_name_m622963475 (Scene_t2348375561 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C"  bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern "C"  void UnityEvent_Invoke_m3065672636 (UnityEvent_t2581268647 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// EnemyNode`1<T> EnemyGraph`1<Enemy>::Find(T)
#define EnemyGraph_1_Find_m558392393(__this, p0, method) ((  EnemyNode_1_t1312135848 * (*) (EnemyGraph_1_t514571901 *, Enemy_t1765729589 *, const RuntimeMethod*))EnemyGraph_1_Find_m1287968152_gshared)(__this, p0, method)
// System.Boolean EnemyNode`1<Enemy>::RemoveNeighbor(EnemyNode`1<T>)
#define EnemyNode_1_RemoveNeighbor_m4222683935(__this, p0, method) ((  bool (*) (EnemyNode_1_t1312135848 *, EnemyNode_1_t1312135848 *, const RuntimeMethod*))EnemyNode_1_RemoveNeighbor_m1788373079_gshared)(__this, p0, method)
// System.String Enemy::get_Type()
extern "C"  String_t* Enemy_get_Type_m1756557355 (Enemy_t1765729589 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<EnemyNode`1<Enemy>>::Contains(!0)
#define List_1_Contains_m3543675651(__this, p0, method) ((  bool (*) (List_1_t2784210590 *, EnemyNode_1_t1312135848 *, const RuntimeMethod*))List_1_Contains_m2654125393_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<EnemyNode`1<Enemy>>::Add(!0)
#define List_1_Add_m6361519(__this, p0, method) ((  void (*) (List_1_t2784210590 *, EnemyNode_1_t1312135848 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void EnemyNode`1<Enemy>::RemoveAllNeighbors()
#define EnemyNode_1_RemoveAllNeighbors_m2037517301(__this, method) ((  void (*) (EnemyNode_1_t1312135848 *, const RuntimeMethod*))EnemyNode_1_RemoveAllNeighbors_m1735214666_gshared)(__this, method)
// System.Boolean EnemyGraph`1<Enemy>::RemoveNode(T)
#define EnemyGraph_1_RemoveNode_m2145224796(__this, p0, method) ((  bool (*) (EnemyGraph_1_t514571901 *, Enemy_t1765729589 *, const RuntimeMethod*))EnemyGraph_1_RemoveNode_m3645809967_gshared)(__this, p0, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
#define UnityEvent_1_AddListener_m3158408092(__this, p0, method) ((  void (*) (UnityEvent_1_t3832605257 *, UnityAction_1_t3535781894 *, const RuntimeMethod*))UnityEvent_1_AddListener_m3158408092_gshared)(__this, p0, method)
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C"  void UnityEvent_AddListener_m2276267359 (UnityEvent_t2581268647 * __this, UnityAction_t3245792599 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<EnemyMovements>::.ctor()
#define UnityEvent_1__ctor_m1630793919(__this, method) ((  void (*) (UnityEvent_1_t3821352353 *, const RuntimeMethod*))UnityEvent_1__ctor_m1630793919_gshared)(__this, method)
// System.Void EnemyMove::.ctor()
extern "C"  void EnemyMove__ctor_m140768884 (EnemyMove_t2177327048 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyMovementManager::BuildMovement()
extern "C"  void EnemyMovementManager_BuildMovement_m2264769216 (EnemyMovementManager_t568016177 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AddEnemyMoveInvoker(EnemyMovementManager)
extern "C"  void EventManager_AddEnemyMoveInvoker_m1104154367 (RuntimeObject * __this /* static, unused */, EnemyMovementManager_t568016177 * ___invoker0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction__ctor_m772160306 (UnityAction_t3245792599 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AddChangeLevelListener(UnityEngine.Events.UnityAction)
extern "C"  void EventManager_AddChangeLevelListener_m2308153550 (RuntimeObject * __this /* static, unused */, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
#define List_1_Contains_m2263725670(__this, p0, method) ((  bool (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Contains_m2263725670_gshared)(__this, p0, method)
// System.Void UnityEngine.Events.UnityEvent`1<EnemyMovements>::Invoke(!0)
#define UnityEvent_1_Invoke_m3449286906(__this, p0, method) ((  void (*) (UnityEvent_1_t3821352353 *, int32_t, const RuntimeMethod*))UnityEvent_1_Invoke_m3449286906_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
#define List_1__ctor_m1628857705(__this, method) ((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1__ctor_m1628857705_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
#define List_1_Clear_m2154023298(__this, method) ((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1_Clear_m2154023298_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
#define List_1_Add_m697420525(__this, p0, method) ((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Add_m697420525_gshared)(__this, p0, method)
// System.Void UnityEngine.Events.UnityEvent`1<EnemyMovements>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
#define UnityEvent_1_AddListener_m2373938285(__this, p0, method) ((  void (*) (UnityEvent_1_t3821352353 *, UnityAction_1_t3524528990 *, const RuntimeMethod*))UnityEvent_1_AddListener_m2373938285_gshared)(__this, p0, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
#define UnityEvent_1__ctor_m3777630589(__this, method) ((  void (*) (UnityEvent_1_t978947469 *, const RuntimeMethod*))UnityEvent_1__ctor_m3777630589_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
#define UnityEvent_1__ctor_m3816765192(__this, method) ((  void (*) (UnityEvent_1_t3832605257 *, const RuntimeMethod*))UnityEvent_1__ctor_m3816765192_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Player>::Add(!0)
#define List_1_Add_m1166605055(__this, p0, method) ((  void (*) (List_1_t443754758 *, Player_t3266647312 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`2<UnityEngine.Vector3,Characters>>::GetEnumerator()
#define List_1_GetEnumerator_m2876168057(__this, method) ((  Enumerator_t923485134  (*) (List_1_t3329208553 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction`2<UnityEngine.Vector3,Characters>>::get_Current()
#define Enumerator_get_Current_m504749272(__this, method) ((  UnityAction_2_t1857133811 * (*) (Enumerator_t923485134 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void Player::AddPlayerShootListener(UnityEngine.Events.UnityAction`2<UnityEngine.Vector3,Characters>)
extern "C"  void Player_AddPlayerShootListener_m1115830263 (Player_t3266647312 * __this, UnityAction_2_t1857133811 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction`2<UnityEngine.Vector3,Characters>>::MoveNext()
#define Enumerator_MoveNext_m4045413164(__this, method) ((  bool (*) (Enumerator_t923485134 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction`2<UnityEngine.Vector3,Characters>>::Dispose()
#define Enumerator_Dispose_m1728194597(__this, method) ((  void (*) (Enumerator_t923485134 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`2<UnityEngine.Vector3,Characters>>::Add(!0)
#define List_1_Add_m180231583(__this, p0, method) ((  void (*) (List_1_t3329208553 *, UnityAction_2_t1857133811 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Player>::GetEnumerator()
#define List_1_GetEnumerator_m1309886926(__this, method) ((  Enumerator_t2332998635  (*) (List_1_t443754758 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Player>::get_Current()
#define Enumerator_get_Current_m292849492(__this, method) ((  Player_t3266647312 * (*) (Enumerator_t2332998635 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<Player>::MoveNext()
#define Enumerator_MoveNext_m2560389903(__this, method) ((  bool (*) (Enumerator_t2332998635 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Player>::Dispose()
#define Enumerator_Dispose_m1700708725(__this, method) ((  void (*) (Enumerator_t2332998635 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Enemy>::Add(!0)
#define List_1_Add_m3099710085(__this, p0, method) ((  void (*) (List_1_t3237804331 *, Enemy_t1765729589 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`2<Enemy,System.Int32>>::GetEnumerator()
#define List_1_GetEnumerator_m2737121052(__this, method) ((  Enumerator_t1383910794  (*) (List_1_t3789634213 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction`2<Enemy,System.Int32>>::get_Current()
#define Enumerator_get_Current_m819868031(__this, method) ((  UnityAction_2_t2317559471 * (*) (Enumerator_t1383910794 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void Enemy::AddEnemyDeadListener(UnityEngine.Events.UnityAction`2<Enemy,System.Int32>)
extern "C"  void Enemy_AddEnemyDeadListener_m3032586755 (Enemy_t1765729589 * __this, UnityAction_2_t2317559471 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction`2<Enemy,System.Int32>>::MoveNext()
#define Enumerator_MoveNext_m1336153447(__this, method) ((  bool (*) (Enumerator_t1383910794 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction`2<Enemy,System.Int32>>::Dispose()
#define Enumerator_Dispose_m3708720284(__this, method) ((  void (*) (Enumerator_t1383910794 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`2<Enemy,System.Int32>>::Add(!0)
#define List_1_Add_m265676858(__this, p0, method) ((  void (*) (List_1_t3789634213 *, UnityAction_2_t2317559471 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Enemy>::GetEnumerator()
#define List_1_GetEnumerator_m2721116048(__this, method) ((  Enumerator_t832080912  (*) (List_1_t3237804331 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Enemy>::get_Current()
#define Enumerator_get_Current_m3193589029(__this, method) ((  Enemy_t1765729589 * (*) (Enumerator_t832080912 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<Enemy>::MoveNext()
#define Enumerator_MoveNext_m78709395(__this, method) ((  bool (*) (Enumerator_t832080912 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Enemy>::Dispose()
#define Enumerator_Dispose_m2306102398(__this, method) ((  void (*) (Enumerator_t832080912 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<EnemyMovementManager>::Add(!0)
#define List_1_Add_m795866590(__this, p0, method) ((  void (*) (List_1_t2040090919 *, EnemyMovementManager_t568016177 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`1<EnemyMovements>>::GetEnumerator()
#define List_1_GetEnumerator_m524926328(__this, method) ((  Enumerator_t2590880313  (*) (List_1_t701636436 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction`1<EnemyMovements>>::get_Current()
#define Enumerator_get_Current_m1917494879(__this, method) ((  UnityAction_1_t3524528990 * (*) (Enumerator_t2590880313 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void EnemyMovementManager::AddEnemyMoveListener(UnityEngine.Events.UnityAction`1<EnemyMovements>)
extern "C"  void EnemyMovementManager_AddEnemyMoveListener_m279179560 (EnemyMovementManager_t568016177 * __this, UnityAction_1_t3524528990 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction`1<EnemyMovements>>::MoveNext()
#define Enumerator_MoveNext_m2170042991(__this, method) ((  bool (*) (Enumerator_t2590880313 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction`1<EnemyMovements>>::Dispose()
#define Enumerator_Dispose_m4074715281(__this, method) ((  void (*) (Enumerator_t2590880313 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`1<EnemyMovements>>::Add(!0)
#define List_1_Add_m1239235046(__this, p0, method) ((  void (*) (List_1_t701636436 *, UnityAction_1_t3524528990 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<EnemyMovementManager>::GetEnumerator()
#define List_1_GetEnumerator_m772517586(__this, method) ((  Enumerator_t3929334796  (*) (List_1_t2040090919 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<EnemyMovementManager>::get_Current()
#define Enumerator_get_Current_m3880894684(__this, method) ((  EnemyMovementManager_t568016177 * (*) (Enumerator_t3929334796 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<EnemyMovementManager>::MoveNext()
#define Enumerator_MoveNext_m447620283(__this, method) ((  bool (*) (Enumerator_t3929334796 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<EnemyMovementManager>::Dispose()
#define Enumerator_Dispose_m2242910240(__this, method) ((  void (*) (Enumerator_t3929334796 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<EnemyGraphBuilder>::Add(!0)
#define List_1_Add_m4256644050(__this, p0, method) ((  void (*) (List_1_t856330245 *, EnemyGraphBuilder_t3679222799 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`1<System.Int32>>::GetEnumerator()
#define List_1_GetEnumerator_m1528445380(__this, method) ((  Enumerator_t2602133217  (*) (List_1_t712889340 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction`1<System.Int32>>::get_Current()
#define Enumerator_get_Current_m3223965356(__this, method) ((  UnityAction_1_t3535781894 * (*) (Enumerator_t2602133217 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void EnemyGraphBuilder::AddEnemyShootListener(UnityEngine.Events.UnityAction`1<System.Int32>)
extern "C"  void EnemyGraphBuilder_AddEnemyShootListener_m2521104292 (EnemyGraphBuilder_t3679222799 * __this, UnityAction_1_t3535781894 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction`1<System.Int32>>::MoveNext()
#define Enumerator_MoveNext_m2286289861(__this, method) ((  bool (*) (Enumerator_t2602133217 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction`1<System.Int32>>::Dispose()
#define Enumerator_Dispose_m1583079528(__this, method) ((  void (*) (Enumerator_t2602133217 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`1<System.Int32>>::Add(!0)
#define List_1_Add_m3269965598(__this, p0, method) ((  void (*) (List_1_t712889340 *, UnityAction_1_t3535781894 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<EnemyGraphBuilder>::GetEnumerator()
#define List_1_GetEnumerator_m2207855688(__this, method) ((  Enumerator_t2745574122  (*) (List_1_t856330245 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<EnemyGraphBuilder>::get_Current()
#define Enumerator_get_Current_m3736471016(__this, method) ((  EnemyGraphBuilder_t3679222799 * (*) (Enumerator_t2745574122 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<EnemyGraphBuilder>::MoveNext()
#define Enumerator_MoveNext_m3492017894(__this, method) ((  bool (*) (Enumerator_t2745574122 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<EnemyGraphBuilder>::Dispose()
#define Enumerator_Dispose_m374448751(__this, method) ((  void (*) (Enumerator_t2745574122 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Projectile>::Add(!0)
#define List_1_Add_m1510553286(__this, p0, method) ((  void (*) (List_1_t2913069260 *, Projectile_t1440994518 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void Projectile::AddHurtListener(UnityEngine.Events.UnityAction`1<System.Int32>)
extern "C"  void Projectile_AddHurtListener_m3502376813 (Projectile_t1440994518 * __this, UnityAction_1_t3535781894 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Projectile>::GetEnumerator()
#define List_1_GetEnumerator_m3410811909(__this, method) ((  Enumerator_t507345841  (*) (List_1_t2913069260 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Projectile>::get_Current()
#define Enumerator_get_Current_m2783283318(__this, method) ((  Projectile_t1440994518 * (*) (Enumerator_t507345841 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<Projectile>::MoveNext()
#define Enumerator_MoveNext_m3625746136(__this, method) ((  bool (*) (Enumerator_t507345841 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Projectile>::Dispose()
#define Enumerator_Dispose_m1483808685(__this, method) ((  void (*) (Enumerator_t507345841 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<HUD>::Add(!0)
#define List_1_Add_m3725185082(__this, p0, method) ((  void (*) (List_1_t25834686 *, HUD_t2848727240 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void HUD::AddGameOverListener(UnityEngine.Events.UnityAction`1<System.Int32>)
extern "C"  void HUD_AddGameOverListener_m2077170894 (HUD_t2848727240 * __this, UnityAction_1_t3535781894 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<HUD>::GetEnumerator()
#define List_1_GetEnumerator_m3565223301(__this, method) ((  Enumerator_t1915078563  (*) (List_1_t25834686 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<HUD>::get_Current()
#define Enumerator_get_Current_m3747609950(__this, method) ((  HUD_t2848727240 * (*) (Enumerator_t1915078563 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<HUD>::MoveNext()
#define Enumerator_MoveNext_m753713209(__this, method) ((  bool (*) (Enumerator_t1915078563 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<HUD>::Dispose()
#define Enumerator_Dispose_m3152480181(__this, method) ((  void (*) (Enumerator_t1915078563 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MenuManager>::Add(!0)
#define List_1_Add_m3201442980(__this, p0, method) ((  void (*) (List_1_t4233192446 *, MenuManager_t2761117704 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Events.UnityAction>::GetEnumerator()
#define List_1_GetEnumerator_m1102057371(__this, method) ((  Enumerator_t2312143922  (*) (List_1_t422900045 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction>::get_Current()
#define Enumerator_get_Current_m163445187(__this, method) ((  UnityAction_t3245792599 * (*) (Enumerator_t2312143922 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void MenuManager::AddChangeLevelListeners(UnityEngine.Events.UnityAction)
extern "C"  void MenuManager_AddChangeLevelListeners_m2760192545 (MenuManager_t2761117704 * __this, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction>::MoveNext()
#define Enumerator_MoveNext_m2661491481(__this, method) ((  bool (*) (Enumerator_t2312143922 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction>::Dispose()
#define Enumerator_Dispose_m2601112073(__this, method) ((  void (*) (Enumerator_t2312143922 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.UnityAction>::Add(!0)
#define List_1_Add_m2393690792(__this, p0, method) ((  void (*) (List_1_t422900045 *, UnityAction_t3245792599 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<MenuManager>::GetEnumerator()
#define List_1_GetEnumerator_m2174501561(__this, method) ((  Enumerator_t1827469027  (*) (List_1_t4233192446 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<MenuManager>::get_Current()
#define Enumerator_get_Current_m3754399433(__this, method) ((  MenuManager_t2761117704 * (*) (Enumerator_t1827469027 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<MenuManager>::MoveNext()
#define Enumerator_MoveNext_m604781295(__this, method) ((  bool (*) (Enumerator_t1827469027 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<MenuManager>::Dispose()
#define Enumerator_Dispose_m3402286335(__this, method) ((  void (*) (Enumerator_t1827469027 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void EnemyGraphBuilder::AddAllEnemiesdeadListener(UnityEngine.Events.UnityAction)
extern "C"  void EnemyGraphBuilder_AddAllEnemiesdeadListener_m3945695841 (EnemyGraphBuilder_t3679222799 * __this, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyGraphBuilder::AddGameWinListener(UnityEngine.Events.UnityAction)
extern "C"  void EnemyGraphBuilder_AddGameWinListener_m2618743060 (EnemyGraphBuilder_t3679222799 * __this, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuManager::AddResetPlayerHealthListener(UnityEngine.Events.UnityAction)
extern "C"  void MenuManager_AddResetPlayerHealthListener_m2398605215 (MenuManager_t2761117704 * __this, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuManager::AddResumeGameplayListener(UnityEngine.Events.UnityAction)
extern "C"  void MenuManager_AddResumeGameplayListener_m414784281 (MenuManager_t2761117704 * __this, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Wall>::Add(!0)
#define List_1_Add_m84018515(__this, p0, method) ((  void (*) (List_1_t3678741319 *, Wall_t2206666577 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void Wall::AddHitWallListener(UnityEngine.Events.UnityAction)
extern "C"  void Wall_AddHitWallListener_m1858305512 (Wall_t2206666577 * __this, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Wall>::GetEnumerator()
#define List_1_GetEnumerator_m2400680462(__this, method) ((  Enumerator_t1273017900  (*) (List_1_t3678741319 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Wall>::get_Current()
#define Enumerator_get_Current_m1945220726(__this, method) ((  Wall_t2206666577 * (*) (Enumerator_t1273017900 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<Wall>::MoveNext()
#define Enumerator_MoveNext_m1555745609(__this, method) ((  bool (*) (Enumerator_t1273017900 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Wall>::Dispose()
#define Enumerator_Dispose_m3169737812(__this, method) ((  void (*) (Enumerator_t1273017900 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Player>::.ctor()
#define List_1__ctor_m3898495391(__this, method) ((  void (*) (List_1_t443754758 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`2<UnityEngine.Vector3,Characters>>::.ctor()
#define List_1__ctor_m2657057201(__this, method) ((  void (*) (List_1_t3329208553 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Enemy>::.ctor()
#define List_1__ctor_m1084649037(__this, method) ((  void (*) (List_1_t3237804331 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`2<Enemy,System.Int32>>::.ctor()
#define List_1__ctor_m3923604068(__this, method) ((  void (*) (List_1_t3789634213 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<EnemyMovementManager>::.ctor()
#define List_1__ctor_m746486840(__this, method) ((  void (*) (List_1_t2040090919 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`1<EnemyMovements>>::.ctor()
#define List_1__ctor_m3075294956(__this, method) ((  void (*) (List_1_t701636436 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<EnemyGraphBuilder>::.ctor()
#define List_1__ctor_m2322504938(__this, method) ((  void (*) (List_1_t856330245 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`1<System.Int32>>::.ctor()
#define List_1__ctor_m772083332(__this, method) ((  void (*) (List_1_t712889340 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Projectile>::.ctor()
#define List_1__ctor_m3381526530(__this, method) ((  void (*) (List_1_t2913069260 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<HUD>::.ctor()
#define List_1__ctor_m3827184848(__this, method) ((  void (*) (List_1_t25834686 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MenuManager>::.ctor()
#define List_1__ctor_m824091018(__this, method) ((  void (*) (List_1_t4233192446 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.UnityAction>::.ctor()
#define List_1__ctor_m2598345712(__this, method) ((  void (*) (List_1_t422900045 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Wall>::.ctor()
#define List_1__ctor_m4059846077(__this, method) ((  void (*) (List_1_t3678741319 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Boolean AudioManager::get_Initialized()
extern "C"  bool AudioManager_get_Initialized_m496913330 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
#define GameObject_AddComponent_TisAudioSource_t3935305588_m2869327390(__this, method) ((  AudioSource_t3935305588 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// System.Void AudioManager::Initialize(UnityEngine.AudioSource)
extern "C"  void AudioManager_Initialize_m1220441737 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___source0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameOver::.ctor()
extern "C"  void GameOver__ctor_m1412511381 (GameOver_t2355536572 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AddHurtListeners(UnityEngine.Events.UnityAction`1<System.Int32>)
extern "C"  void EventManager_AddHurtListeners_m2511215371 (RuntimeObject * __this /* static, unused */, UnityAction_1_t3535781894 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AddGameOverInvokers(HUD)
extern "C"  void EventManager_AddGameOverInvokers_m1177628869 (RuntimeObject * __this /* static, unused */, HUD_t2848727240 * ___invoker0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AddResetPlayerHealthListeners(UnityEngine.Events.UnityAction)
extern "C"  void EventManager_AddResetPlayerHealthListeners_m2338253130 (RuntimeObject * __this /* static, unused */, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AddHitWallListeners(UnityEngine.Events.UnityAction)
extern "C"  void EventManager_AddHitWallListeners_m4195144851 (RuntimeObject * __this /* static, unused */, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PointsManager::set_Points(System.Int32)
extern "C"  void PointsManager_set_Points_m1397397401 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ChangeLevel::.ctor()
extern "C"  void ChangeLevel__ctor_m954505144 (ChangeLevel_t3391930331 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ResetPlayerHealth::.ctor()
extern "C"  void ResetPlayerHealth__ctor_m1155286358 (ResetPlayerHealth_t3732752359 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ResumeGameplay::.ctor()
extern "C"  void ResumeGameplay__ctor_m3388569851 (ResumeGameplay_t3033387813 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AddGameOverListeners(UnityEngine.Events.UnityAction`1<System.Int32>)
extern "C"  void EventManager_AddGameOverListeners_m2500187535 (RuntimeObject * __this /* static, unused */, UnityAction_1_t3535781894 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AddChangeLevelInvokers(MenuManager)
extern "C"  void EventManager_AddChangeLevelInvokers_m2654112070 (RuntimeObject * __this /* static, unused */, MenuManager_t2761117704 * ___invoker0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AddAllEnemiesDeadListeners(UnityEngine.Events.UnityAction)
extern "C"  void EventManager_AddAllEnemiesDeadListeners_m3112965797 (RuntimeObject * __this /* static, unused */, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AddGameWinListeners(UnityEngine.Events.UnityAction)
extern "C"  void EventManager_AddGameWinListeners_m1916835654 (RuntimeObject * __this /* static, unused */, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AddResetPlayerHealthInvokers(MenuManager)
extern "C"  void EventManager_AddResetPlayerHealthInvokers_m1866287769 (RuntimeObject * __this /* static, unused */, MenuManager_t2761117704 * ___invoker0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AddResumeGameplayInvokers(MenuManager)
extern "C"  void EventManager_AddResumeGameplayInvokers_m1693508513 (RuntimeObject * __this /* static, unused */, MenuManager_t2761117704 * ___invoker0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuManager::UpdateScene()
extern "C"  void MenuManager_UpdateScene_m4108045979 (MenuManager_t2761117704 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
extern "C"  void Time_set_timeScale_m1127545364 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void HUD::set_PlayerHealth(System.Int32)
extern "C"  void HUD_set_PlayerHealth_m1546771577 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern "C"  GameObject_t1113636619 * GameObject_FindGameObjectWithTag_m2129039296 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AddResumeGamplayListeners(UnityEngine.Events.UnityAction)
extern "C"  void EventManager_AddResumeGamplayListeners_m1799618919 (RuntimeObject * __this /* static, unused */, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m17791917 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PauseGame::Pause()
extern "C"  void PauseGame_Pause_m2681444765 (PauseGame_t12111239 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PauseGame::Unpause()
extern "C"  void PauseGame_Unpause_m2814715243 (PauseGame_t12111239 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_active()
extern "C"  bool GameObject_get_active_m3904937230 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerShoot::.ctor()
extern "C"  void PlayerShoot__ctor_m1259916230 (PlayerShoot_t3350012305 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.BoxCollider2D::get_size()
extern "C"  Vector2_t2156229523  BoxCollider2D_get_size_m3529128736 (BoxCollider2D_t3581341831 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AddPlayerShootInvoker(Player)
extern "C"  void EventManager_AddPlayerShootInvoker_m628552642 (RuntimeObject * __this /* static, unused */, Player_t3266647312 * ___invoker0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m4009438427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
extern "C"  Vector2_t2156229523  Rigidbody2D_get_position_m2575647076 (Rigidbody2D_t939494601 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Player::Clamp(System.Single)
extern "C"  float Player_Clamp_m1814447284 (Player_t3266647312 * __this, float ___xPosition0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Vector3,Characters>::Invoke(!0,!1)
#define UnityEvent_2_Invoke_m1006745064(__this, p0, p1, method) ((  void (*) (UnityEvent_2_t3482397617 *, Vector3_t3722313464 , int32_t, const RuntimeMethod*))UnityEvent_2_Invoke_m1006745064_gshared)(__this, p0, p1, method)
// System.Single ScreenUtils::get_ScreenRight()
extern "C"  float ScreenUtils_get_ScreenRight_m555408866 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single ScreenUtils::get_ScreenLeft()
extern "C"  float ScreenUtils_get_ScreenLeft_m4016222789 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Vector3,Characters>::AddListener(UnityEngine.Events.UnityAction`2<!0,!1>)
#define UnityEvent_2_AddListener_m3257760133(__this, p0, method) ((  void (*) (UnityEvent_2_t3482397617 *, UnityAction_2_t1857133811 *, const RuntimeMethod*))UnityEvent_2_AddListener_m3257760133_gshared)(__this, p0, method)
// !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
#define Resources_Load_TisSprite_t280657092_m4144667290(__this /* static, unused */, p0, method) ((  Sprite_t280657092 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m597869152_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
extern "C"  void SpriteRenderer_set_sprite_m1286893786 (SpriteRenderer_t3235626157 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Vector3,Characters>::.ctor()
#define UnityEvent_2__ctor_m483165201(__this, method) ((  void (*) (UnityEvent_2_t3482397617 *, const RuntimeMethod*))UnityEvent_2__ctor_m483165201_gshared)(__this, method)
// System.Void ScreenUtils::Initialize()
extern "C"  void ScreenUtils_Initialize_m2443190515 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.Vector3,Characters>::.ctor(System.Object,System.IntPtr)
#define UnityAction_2__ctor_m3863610767(__this, p0, p1, method) ((  void (*) (UnityAction_2_t1857133811 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m3863610767_gshared)(__this, p0, p1, method)
// System.Void EventManager::AddPlayerShootListener(UnityEngine.Events.UnityAction`2<UnityEngine.Vector3,Characters>)
extern "C"  void EventManager_AddPlayerShootListener_m2748103306 (RuntimeObject * __this /* static, unused */, UnityAction_2_t1857133811 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Hurt::.ctor()
extern "C"  void Hurt__ctor_m1656134574 (Hurt_t2217771330 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AddHurtInvokers(Projectile)
extern "C"  void EventManager_AddHurtInvokers_m2948630802 (RuntimeObject * __this /* static, unused */, Projectile_t1440994518 * ___invoker0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_height()
extern "C"  int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Camera_ScreenToWorldPoint_m3978588570 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void HitWall::.ctor()
extern "C"  void HitWall__ctor_m895202767 (HitWall_t625646887 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AddHitWallInvokers(Wall)
extern "C"  void EventManager_AddHitWallInvokers_m1381144606 (RuntimeObject * __this /* static, unused */, Wall_t2206666577 * ___invoker0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AllEnemiesDead::.ctor()
extern "C"  void AllEnemiesDead__ctor_m3123510771 (AllEnemiesDead_t1977689189 * __this, const RuntimeMethod* method)
{
	{
		UnityEvent__ctor_m431206565(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean AudioManager::get_Initialized()
extern "C"  bool AudioManager_get_Initialized_m496913330 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioManager_get_Initialized_m496913330_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// get { return initialized; }
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t3267510698_il2cpp_TypeInfo_var);
		bool L_0 = ((AudioManager_t3267510698_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t3267510698_il2cpp_TypeInfo_var))->get_initialized_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		// get { return initialized; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void AudioManager::Initialize(UnityEngine.AudioSource)
extern "C"  void AudioManager_Initialize_m1220441737 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioManager_Initialize_m1220441737_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// initialized = true;
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t3267510698_il2cpp_TypeInfo_var);
		((AudioManager_t3267510698_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t3267510698_il2cpp_TypeInfo_var))->set_initialized_2((bool)1);
		// audioSource = source;
		AudioSource_t3935305588 * L_0 = ___source0;
		((AudioManager_t3267510698_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t3267510698_il2cpp_TypeInfo_var))->set_audioSource_1(L_0);
		// audios.Add(SFXs.click, Resources.Load<AudioClip>(@"SFXs/click"));
		Dictionary_2_t2413753268 * L_1 = ((AudioManager_t3267510698_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t3267510698_il2cpp_TypeInfo_var))->get_audios_0();
		// audios.Add(SFXs.click, Resources.Load<AudioClip>(@"SFXs/click"));
		AudioClip_t3680889665 * L_2 = Resources_Load_TisAudioClip_t3680889665_m1361768364(NULL /*static, unused*/, _stringLiteral4110344589, /*hidden argument*/Resources_Load_TisAudioClip_t3680889665_m1361768364_RuntimeMethod_var);
		// audios.Add(SFXs.click, Resources.Load<AudioClip>(@"SFXs/click"));
		Dictionary_2_Add_m2995842380(L_1, 0, L_2, /*hidden argument*/Dictionary_2_Add_m2995842380_RuntimeMethod_var);
		// audios.Add(SFXs.player, Resources.Load<AudioClip>(@"SFXs/player"));
		Dictionary_2_t2413753268 * L_3 = ((AudioManager_t3267510698_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t3267510698_il2cpp_TypeInfo_var))->get_audios_0();
		// audios.Add(SFXs.player, Resources.Load<AudioClip>(@"SFXs/player"));
		AudioClip_t3680889665 * L_4 = Resources_Load_TisAudioClip_t3680889665_m1361768364(NULL /*static, unused*/, _stringLiteral1454340691, /*hidden argument*/Resources_Load_TisAudioClip_t3680889665_m1361768364_RuntimeMethod_var);
		// audios.Add(SFXs.player, Resources.Load<AudioClip>(@"SFXs/player"));
		Dictionary_2_Add_m2995842380(L_3, 4, L_4, /*hidden argument*/Dictionary_2_Add_m2995842380_RuntimeMethod_var);
		// audios.Add(SFXs.gameWin, Resources.Load<AudioClip>(@"SFXs/gameWin"));
		Dictionary_2_t2413753268 * L_5 = ((AudioManager_t3267510698_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t3267510698_il2cpp_TypeInfo_var))->get_audios_0();
		// audios.Add(SFXs.gameWin, Resources.Load<AudioClip>(@"SFXs/gameWin"));
		AudioClip_t3680889665 * L_6 = Resources_Load_TisAudioClip_t3680889665_m1361768364(NULL /*static, unused*/, _stringLiteral2866201229, /*hidden argument*/Resources_Load_TisAudioClip_t3680889665_m1361768364_RuntimeMethod_var);
		// audios.Add(SFXs.gameWin, Resources.Load<AudioClip>(@"SFXs/gameWin"));
		Dictionary_2_Add_m2995842380(L_5, 3, L_6, /*hidden argument*/Dictionary_2_Add_m2995842380_RuntimeMethod_var);
		// audios.Add(SFXs.soldier, Resources.Load<AudioClip>(@"SFXs/soldier"));
		Dictionary_2_t2413753268 * L_7 = ((AudioManager_t3267510698_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t3267510698_il2cpp_TypeInfo_var))->get_audios_0();
		// audios.Add(SFXs.soldier, Resources.Load<AudioClip>(@"SFXs/soldier"));
		AudioClip_t3680889665 * L_8 = Resources_Load_TisAudioClip_t3680889665_m1361768364(NULL /*static, unused*/, _stringLiteral519640984, /*hidden argument*/Resources_Load_TisAudioClip_t3680889665_m1361768364_RuntimeMethod_var);
		// audios.Add(SFXs.soldier, Resources.Load<AudioClip>(@"SFXs/soldier"));
		Dictionary_2_Add_m2995842380(L_7, 5, L_8, /*hidden argument*/Dictionary_2_Add_m2995842380_RuntimeMethod_var);
		// audios.Add(SFXs.gameOver, Resources.Load<AudioClip>(@"SFXs/gameOver"));
		Dictionary_2_t2413753268 * L_9 = ((AudioManager_t3267510698_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t3267510698_il2cpp_TypeInfo_var))->get_audios_0();
		// audios.Add(SFXs.gameOver, Resources.Load<AudioClip>(@"SFXs/gameOver"));
		AudioClip_t3680889665 * L_10 = Resources_Load_TisAudioClip_t3680889665_m1361768364(NULL /*static, unused*/, _stringLiteral971258816, /*hidden argument*/Resources_Load_TisAudioClip_t3680889665_m1361768364_RuntimeMethod_var);
		// audios.Add(SFXs.gameOver, Resources.Load<AudioClip>(@"SFXs/gameOver"));
		Dictionary_2_Add_m2995842380(L_9, 2, L_10, /*hidden argument*/Dictionary_2_Add_m2995842380_RuntimeMethod_var);
		// audios.Add(SFXs.commander, Resources.Load<AudioClip>(@"SFXs/commander"));
		Dictionary_2_t2413753268 * L_11 = ((AudioManager_t3267510698_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t3267510698_il2cpp_TypeInfo_var))->get_audios_0();
		// audios.Add(SFXs.commander, Resources.Load<AudioClip>(@"SFXs/commander"));
		AudioClip_t3680889665 * L_12 = Resources_Load_TisAudioClip_t3680889665_m1361768364(NULL /*static, unused*/, _stringLiteral1165482865, /*hidden argument*/Resources_Load_TisAudioClip_t3680889665_m1361768364_RuntimeMethod_var);
		// audios.Add(SFXs.commander, Resources.Load<AudioClip>(@"SFXs/commander"));
		Dictionary_2_Add_m2995842380(L_11, 1, L_12, /*hidden argument*/Dictionary_2_Add_m2995842380_RuntimeMethod_var);
		// audios.Add(SFXs.passedLevel, Resources.Load<AudioClip>(@"SFXs/passedLevel"));
		Dictionary_2_t2413753268 * L_13 = ((AudioManager_t3267510698_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t3267510698_il2cpp_TypeInfo_var))->get_audios_0();
		// audios.Add(SFXs.passedLevel, Resources.Load<AudioClip>(@"SFXs/passedLevel"));
		AudioClip_t3680889665 * L_14 = Resources_Load_TisAudioClip_t3680889665_m1361768364(NULL /*static, unused*/, _stringLiteral521007175, /*hidden argument*/Resources_Load_TisAudioClip_t3680889665_m1361768364_RuntimeMethod_var);
		// audios.Add(SFXs.passedLevel, Resources.Load<AudioClip>(@"SFXs/passedLevel"));
		Dictionary_2_Add_m2995842380(L_13, 6, L_14, /*hidden argument*/Dictionary_2_Add_m2995842380_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AudioManager::PlayAudio(SFXs)
extern "C"  void AudioManager_PlayAudio_m3468175270 (RuntimeObject * __this /* static, unused */, int32_t ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioManager_PlayAudio_m3468175270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource.PlayOneShot(audios[name]);
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t3267510698_il2cpp_TypeInfo_var);
		AudioSource_t3935305588 * L_0 = ((AudioManager_t3267510698_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t3267510698_il2cpp_TypeInfo_var))->get_audioSource_1();
		Dictionary_2_t2413753268 * L_1 = ((AudioManager_t3267510698_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t3267510698_il2cpp_TypeInfo_var))->get_audios_0();
		int32_t L_2 = ___name0;
		// audioSource.PlayOneShot(audios[name]);
		AudioClip_t3680889665 * L_3 = Dictionary_2_get_Item_m4199337316(L_1, L_2, /*hidden argument*/Dictionary_2_get_Item_m4199337316_RuntimeMethod_var);
		// audioSource.PlayOneShot(audios[name]);
		AudioSource_PlayOneShot_m1688286683(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioManager::.cctor()
extern "C"  void AudioManager__cctor_m3496499288 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioManager__cctor_m3496499288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Dictionary<SFXs, AudioClip> audios = new Dictionary<SFXs, AudioClip>();
		Dictionary_2_t2413753268 * L_0 = (Dictionary_2_t2413753268 *)il2cpp_codegen_object_new(Dictionary_2_t2413753268_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2683429040(L_0, /*hidden argument*/Dictionary_2__ctor_m2683429040_RuntimeMethod_var);
		((AudioManager_t3267510698_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t3267510698_il2cpp_TypeInfo_var))->set_audios_0(L_0);
		// static bool initialized = false;
		((AudioManager_t3267510698_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t3267510698_il2cpp_TypeInfo_var))->set_initialized_2((bool)0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChangeLevel::.ctor()
extern "C"  void ChangeLevel__ctor_m954505144 (ChangeLevel_t3391930331 * __this, const RuntimeMethod* method)
{
	{
		UnityEvent__ctor_m431206565(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Commander::.ctor()
extern "C"  void Commander__ctor_m2108079073 (Commander_t765419416 * __this, const RuntimeMethod* method)
{
	{
		Enemy__ctor_m2535212804(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Commander::Start()
extern "C"  void Commander_Start_m1864593849 (Commander_t765419416 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Commander_Start_m1864593849_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// points = Constants.CommanderPoints;
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t701097383_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_CommanderPoints_9();
		((Enemy_t1765729589 *)__this)->set_points_3(L_0);
		// base.Start();
		// base.Start();
		Enemy_Start_m3612231678(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Commander::Update()
extern "C"  void Commander_Update_m86803832 (Commander_t765419416 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Commander_Update_m86803832_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentlyShooting && !shootRan)
		bool L_0 = ((Enemy_t1765729589 *)__this)->get_currentlyShooting_5();
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		bool L_1 = ((Enemy_t1765729589 *)__this)->get_shootRan_4();
		if (L_1)
		{
			goto IL_0035;
		}
	}
	{
		// InvokeRepeating("CommanderShoot", 1, 1);
		// InvokeRepeating("CommanderShoot", 1, 1);
		MonoBehaviour_InvokeRepeating_m650519629(__this, _stringLiteral1449208746, (1.0f), (1.0f), /*hidden argument*/NULL);
		// shootRan = true;
		((Enemy_t1765729589 *)__this)->set_shootRan_4((bool)1);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Commander::Shoot(System.Int32)
extern "C"  void Commander_Shoot_m151439820 (Commander_t765419416 * __this, int32_t ___checkId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Commander_Shoot_m151439820_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		// if (this.ID == checkId)
		// if (this.ID == checkId)
		int32_t L_0 = Enemy_get_ID_m1981869824(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___checkId0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_003c;
		}
	}
	{
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Commander Projectile"), transform.position, Quaternion.identity) as GameObject;            AudioManager.PlayAudio(SFXs.commander);
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Commander Projectile"), transform.position, Quaternion.identity) as GameObject;            AudioManager.PlayAudio(SFXs.commander);
		GameObject_t1113636619 * L_2 = Resources_Load_TisGameObject_t1113636619_m1734345100(NULL /*static, unused*/, _stringLiteral1244728132, /*hidden argument*/Resources_Load_TisGameObject_t1113636619_m1734345100_RuntimeMethod_var);
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Commander Projectile"), transform.position, Quaternion.identity) as GameObject;            AudioManager.PlayAudio(SFXs.commander);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Commander Projectile"), transform.position, Quaternion.identity) as GameObject;            AudioManager.PlayAudio(SFXs.commander);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Commander Projectile"), transform.position, Quaternion.identity) as GameObject;            AudioManager.PlayAudio(SFXs.commander);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_5 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Commander Projectile"), transform.position, Quaternion.identity) as GameObject;            AudioManager.PlayAudio(SFXs.commander);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_6 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_2, L_4, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_0 = L_6;
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Commander Projectile"), transform.position, Quaternion.identity) as GameObject;            AudioManager.PlayAudio(SFXs.commander);
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Commander Projectile"), transform.position, Quaternion.identity) as GameObject;            AudioManager.PlayAudio(SFXs.commander);
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t3267510698_il2cpp_TypeInfo_var);
		AudioManager_PlayAudio_m3468175270(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		// currentlyShooting = true;
		((Enemy_t1765729589 *)__this)->set_currentlyShooting_5((bool)1);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Commander::CommanderShoot()
extern "C"  void Commander_CommanderShoot_m555685010 (Commander_t765419416 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Commander_CommanderShoot_m555685010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Commander Projectile"), transform.position, Quaternion.identity) as GameObject;
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Commander Projectile"), transform.position, Quaternion.identity) as GameObject;
		GameObject_t1113636619 * L_0 = Resources_Load_TisGameObject_t1113636619_m1734345100(NULL /*static, unused*/, _stringLiteral1244728132, /*hidden argument*/Resources_Load_TisGameObject_t1113636619_m1734345100_RuntimeMethod_var);
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Commander Projectile"), transform.position, Quaternion.identity) as GameObject;
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Commander Projectile"), transform.position, Quaternion.identity) as GameObject;
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Commander Projectile"), transform.position, Quaternion.identity) as GameObject;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_3 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Commander Projectile"), transform.position, Quaternion.identity) as GameObject;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_4 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_0, L_2, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_0 = L_4;
		// AudioManager.PlayAudio(SFXs.commander);
		// AudioManager.PlayAudio(SFXs.commander);
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t3267510698_il2cpp_TypeInfo_var);
		AudioManager_PlayAudio_m3468175270(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommanderProjectile::.ctor()
extern "C"  void CommanderProjectile__ctor_m547152480 (CommanderProjectile_t390287407 * __this, const RuntimeMethod* method)
{
	{
		Projectile__ctor_m2984814897(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CommanderProjectile::Start()
extern "C"  void CommanderProjectile_Start_m4226890276 (CommanderProjectile_t390287407 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CommanderProjectile_Start_m4226890276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		// base.Start();
		Projectile_Start_m1343777743(__this, /*hidden argument*/NULL);
		// rb2d.AddForce(new Vector2(0, -1) * Constants.SoldierProjectileSpeed, ForceMode2D.Impulse);
		Rigidbody2D_t939494601 * L_0 = ((Projectile_t1440994518 *)__this)->get_rb2d_2();
		// rb2d.AddForce(new Vector2(0, -1) * Constants.SoldierProjectileSpeed, ForceMode2D.Impulse);
		Vector2_t2156229523  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector2__ctor_m3970636864((&L_1), (0.0f), (-1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t701097383_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_SoldierProjectileSpeed_7();
		// rb2d.AddForce(new Vector2(0, -1) * Constants.SoldierProjectileSpeed, ForceMode2D.Impulse);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_1, (((float)((float)L_2))), /*hidden argument*/NULL);
		// rb2d.AddForce(new Vector2(0, -1) * Constants.SoldierProjectileSpeed, ForceMode2D.Impulse);
		Rigidbody2D_AddForce_m1099013366(L_0, L_3, 1, /*hidden argument*/NULL);
		// damageCaused = Constants.CommanderDamage;
		int32_t L_4 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_CommanderDamage_8();
		((Projectile_t1440994518 *)__this)->set_damageCaused_6(L_4);
		// }
		return;
	}
}
// System.Void CommanderProjectile::Update()
extern "C"  void CommanderProjectile_Update_m2405239015 (CommanderProjectile_t390287407 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CommanderProjectile::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void CommanderProjectile_OnTriggerEnter2D_m4210952957 (CommanderProjectile_t390287407 * __this, Collider2D_t2806799626 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CommanderProjectile_OnTriggerEnter2D_m4210952957_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag("Player"))
		Collider2D_t2806799626 * L_0 = ___other0;
		// if (other.gameObject.CompareTag("Player"))
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		// if (other.gameObject.CompareTag("Player"))
		bool L_2 = GameObject_CompareTag_m3144439756(L_1, _stringLiteral2261822918, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// hurtEvent.Invoke(damageCaused);
		Hurt_t2217771330 * L_3 = ((Projectile_t1440994518 *)__this)->get_hurtEvent_7();
		int32_t L_4 = ((Projectile_t1440994518 *)__this)->get_damageCaused_6();
		// hurtEvent.Invoke(damageCaused);
		UnityEvent_1_Invoke_m3604335408(L_3, L_4, /*hidden argument*/UnityEvent_1_Invoke_m3604335408_RuntimeMethod_var);
	}

IL_0029:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Constants::.cctor()
extern "C"  void Constants__cctor_m3925784307 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Constants__cctor_m3925784307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int PlayerSpeed = 10;
		((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->set_PlayerSpeed_0(((int32_t)10));
		// public static int PlayerDamage = 10;
		((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->set_PlayerDamage_1(((int32_t)10));
		// public static int PlayerProjectileSpeed = 10;
		((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->set_PlayerProjectileSpeed_2(((int32_t)10));
		// public static int MaxPlayerHealth = 1000;
		((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->set_MaxPlayerHealth_3(((int32_t)1000));
		// public static int ProtectorPoints = 100;
		((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->set_ProtectorPoints_4(((int32_t)100));
		// public static int SoldierDamage = 100;
		((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->set_SoldierDamage_5(((int32_t)100));
		// public static int SoldierPoints = 10;
		((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->set_SoldierPoints_6(((int32_t)10));
		// public static int SoldierProjectileSpeed = 10;
		((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->set_SoldierProjectileSpeed_7(((int32_t)10));
		// public static int CommanderDamage = 10;
		((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->set_CommanderDamage_8(((int32_t)10));
		// public static int CommanderPoints = 1000;
		((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->set_CommanderPoints_9(((int32_t)1000));
		// public static int CommanderProjectileSpeed = 20;
		((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->set_CommanderProjectileSpeed_10(((int32_t)20));
		// public static int EnemyReadyClock = 2;
		((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->set_EnemyReadyClock_11(2);
		// public static int EnemyMove = 1;
		((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->set_EnemyMove_12(1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EdgeRenderer::.ctor()
extern "C"  void EdgeRenderer__ctor_m3597540238 (EdgeRenderer_t3830357436 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EdgeRenderer::Start()
extern "C"  void EdgeRenderer_Start_m2724734088 (EdgeRenderer_t3830357436 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EdgeRenderer_Start_m2724734088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EnemyGraph_1_t514571901 * V_0 = NULL;
	EnemyNode_1_t1312135848 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	EnemyNode_1_t1312135848 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	GameObject_t1113636619 * V_5 = NULL;
	LineRenderer_t3154350270 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// lineRenderers = new List<GameObject>();
		// lineRenderers = new List<GameObject>();
		List_1_t2585711361 * L_0 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m1424466557(L_0, /*hidden argument*/List_1__ctor_m1424466557_RuntimeMethod_var);
		__this->set_lineRenderers_2(L_0);
		// EnemyGraph<Enemy> graph = EnemyGraphBuilder.EnemyGraph;
		EnemyGraph_1_t514571901 * L_1 = EnemyGraphBuilder_get_EnemyGraph_m3588443397(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		// foreach (EnemyNode<Enemy> node in graph.Nodes)
		EnemyGraph_1_t514571901 * L_2 = V_0;
		// foreach (EnemyNode<Enemy> node in graph.Nodes)
		RuntimeObject* L_3 = EnemyGraph_1_get_Nodes_m2229328446(L_2, /*hidden argument*/EnemyGraph_1_get_Nodes_m2229328446_RuntimeMethod_var);
		// foreach (EnemyNode<Enemy> node in graph.Nodes)
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<EnemyNode`1<Enemy>>::GetEnumerator() */, IEnumerable_1_t291988737_il2cpp_TypeInfo_var, L_3);
		V_2 = L_4;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_010a;
		}

IL_0024:
		{
			// foreach (EnemyNode<Enemy> node in graph.Nodes)
			RuntimeObject* L_5 = V_2;
			// foreach (EnemyNode<Enemy> node in graph.Nodes)
			EnemyNode_1_t1312135848 * L_6 = InterfaceFuncInvoker0< EnemyNode_1_t1312135848 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<EnemyNode`1<Enemy>>::get_Current() */, IEnumerator_1_t1744706316_il2cpp_TypeInfo_var, L_5);
			V_1 = L_6;
			// foreach (EnemyNode<Enemy> neighbor in node.Neighbors)
			EnemyNode_1_t1312135848 * L_7 = V_1;
			// foreach (EnemyNode<Enemy> neighbor in node.Neighbors)
			RuntimeObject* L_8 = EnemyNode_1_get_Neighbors_m1597861993(L_7, /*hidden argument*/EnemyNode_1_get_Neighbors_m1597861993_RuntimeMethod_var);
			// foreach (EnemyNode<Enemy> neighbor in node.Neighbors)
			RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<EnemyNode`1<Enemy>>::GetEnumerator() */, IEnumerable_1_t291988737_il2cpp_TypeInfo_var, L_8);
			V_4 = L_9;
		}

IL_003a:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00e9;
			}

IL_003f:
			{
				// foreach (EnemyNode<Enemy> neighbor in node.Neighbors)
				RuntimeObject* L_10 = V_4;
				// foreach (EnemyNode<Enemy> neighbor in node.Neighbors)
				EnemyNode_1_t1312135848 * L_11 = InterfaceFuncInvoker0< EnemyNode_1_t1312135848 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<EnemyNode`1<Enemy>>::get_Current() */, IEnumerator_1_t1744706316_il2cpp_TypeInfo_var, L_10);
				V_3 = L_11;
				// GameObject lineObj = new GameObject("LineObj");
				// GameObject lineObj = new GameObject("LineObj");
				GameObject_t1113636619 * L_12 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
				GameObject__ctor_m2093116449(L_12, _stringLiteral2116314999, /*hidden argument*/NULL);
				V_5 = L_12;
				// LineRenderer lineRenderer = lineObj.AddComponent<LineRenderer>();
				GameObject_t1113636619 * L_13 = V_5;
				// LineRenderer lineRenderer = lineObj.AddComponent<LineRenderer>();
				LineRenderer_t3154350270 * L_14 = GameObject_AddComponent_TisLineRenderer_t3154350270_m2920077551(L_13, /*hidden argument*/GameObject_AddComponent_TisLineRenderer_t3154350270_m2920077551_RuntimeMethod_var);
				V_6 = L_14;
				// lineRenderer.material = new Material(Shader.Find("Hidden/Internal-Colored"));
				LineRenderer_t3154350270 * L_15 = V_6;
				// lineRenderer.material = new Material(Shader.Find("Hidden/Internal-Colored"));
				Shader_t4151988712 * L_16 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral163873836, /*hidden argument*/NULL);
				// lineRenderer.material = new Material(Shader.Find("Hidden/Internal-Colored"));
				Material_t340375123 * L_17 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
				Material__ctor_m1662457592(L_17, L_16, /*hidden argument*/NULL);
				// lineRenderer.material = new Material(Shader.Find("Hidden/Internal-Colored"));
				Renderer_set_material_m1157964140(L_15, L_17, /*hidden argument*/NULL);
				// lineRenderers.Add(lineObj);
				List_1_t2585711361 * L_18 = __this->get_lineRenderers_2();
				GameObject_t1113636619 * L_19 = V_5;
				// lineRenderers.Add(lineObj);
				List_1_Add_m2765963565(L_18, L_19, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
				// lineRenderer.startColor = Color.black;
				LineRenderer_t3154350270 * L_20 = V_6;
				// lineRenderer.startColor = Color.black;
				Color_t2555686324  L_21 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
				// lineRenderer.startColor = Color.black;
				LineRenderer_set_startColor_m307692187(L_20, L_21, /*hidden argument*/NULL);
				// lineRenderer.endColor = Color.black;
				LineRenderer_t3154350270 * L_22 = V_6;
				// lineRenderer.endColor = Color.black;
				Color_t2555686324  L_23 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
				// lineRenderer.endColor = Color.black;
				LineRenderer_set_endColor_m2330841811(L_22, L_23, /*hidden argument*/NULL);
				// lineRenderer.startWidth = 0.05f;
				LineRenderer_t3154350270 * L_24 = V_6;
				// lineRenderer.startWidth = 0.05f;
				LineRenderer_set_startWidth_m1093267133(L_24, (0.05f), /*hidden argument*/NULL);
				// lineRenderer.endWidth = 0.05f;
				LineRenderer_t3154350270 * L_25 = V_6;
				// lineRenderer.endWidth = 0.05f;
				LineRenderer_set_endWidth_m4252049505(L_25, (0.05f), /*hidden argument*/NULL);
				// lineRenderer.positionCount = 2;
				LineRenderer_t3154350270 * L_26 = V_6;
				// lineRenderer.positionCount = 2;
				LineRenderer_set_positionCount_m2226639690(L_26, 2, /*hidden argument*/NULL);
				// lineRenderer.SetPosition(0, node.Value.transform.position);
				LineRenderer_t3154350270 * L_27 = V_6;
				EnemyNode_1_t1312135848 * L_28 = V_1;
				// lineRenderer.SetPosition(0, node.Value.transform.position);
				Enemy_t1765729589 * L_29 = EnemyNode_1_get_Value_m854677982(L_28, /*hidden argument*/EnemyNode_1_get_Value_m854677982_RuntimeMethod_var);
				// lineRenderer.SetPosition(0, node.Value.transform.position);
				Transform_t3600365921 * L_30 = Component_get_transform_m3162698980(L_29, /*hidden argument*/NULL);
				// lineRenderer.SetPosition(0, node.Value.transform.position);
				Vector3_t3722313464  L_31 = Transform_get_position_m36019626(L_30, /*hidden argument*/NULL);
				// lineRenderer.SetPosition(0, node.Value.transform.position);
				LineRenderer_SetPosition_m2111131184(L_27, 0, L_31, /*hidden argument*/NULL);
				// lineRenderer.SetPosition(1, neighbor.Value.transform.position);
				LineRenderer_t3154350270 * L_32 = V_6;
				EnemyNode_1_t1312135848 * L_33 = V_3;
				// lineRenderer.SetPosition(1, neighbor.Value.transform.position);
				Enemy_t1765729589 * L_34 = EnemyNode_1_get_Value_m854677982(L_33, /*hidden argument*/EnemyNode_1_get_Value_m854677982_RuntimeMethod_var);
				// lineRenderer.SetPosition(1, neighbor.Value.transform.position);
				Transform_t3600365921 * L_35 = Component_get_transform_m3162698980(L_34, /*hidden argument*/NULL);
				// lineRenderer.SetPosition(1, neighbor.Value.transform.position);
				Vector3_t3722313464  L_36 = Transform_get_position_m36019626(L_35, /*hidden argument*/NULL);
				// lineRenderer.SetPosition(1, neighbor.Value.transform.position);
				LineRenderer_SetPosition_m2111131184(L_32, 1, L_36, /*hidden argument*/NULL);
			}

IL_00e9:
			{
				RuntimeObject* L_37 = V_4;
				// foreach (EnemyNode<Enemy> neighbor in node.Neighbors)
				bool L_38 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_37);
				if (L_38)
				{
					goto IL_003f;
				}
			}

IL_00f5:
			{
				IL2CPP_LEAVE(0x109, FINALLY_00fa);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00fa;
		}

FINALLY_00fa:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_39 = V_4;
				if (!L_39)
				{
					goto IL_0108;
				}
			}

IL_0101:
			{
				RuntimeObject* L_40 = V_4;
				// foreach (EnemyNode<Enemy> neighbor in node.Neighbors)
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_40);
			}

IL_0108:
			{
				IL2CPP_END_FINALLY(250)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(250)
		{
			IL2CPP_JUMP_TBL(0x109, IL_0109)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0109:
		{
		}

IL_010a:
		{
			RuntimeObject* L_41 = V_2;
			// foreach (EnemyNode<Enemy> node in graph.Nodes)
			bool L_42 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_41);
			if (L_42)
			{
				goto IL_0024;
			}
		}

IL_0115:
		{
			IL2CPP_LEAVE(0x127, FINALLY_011a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_011a;
	}

FINALLY_011a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_43 = V_2;
			if (!L_43)
			{
				goto IL_0126;
			}
		}

IL_0120:
		{
			RuntimeObject* L_44 = V_2;
			// foreach (EnemyNode<Enemy> node in graph.Nodes)
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_44);
		}

IL_0126:
		{
			IL2CPP_END_FINALLY(282)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(282)
	{
		IL2CPP_JUMP_TBL(0x127, IL_0127)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0127:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EndHUD::.ctor()
extern "C"  void EndHUD__ctor_m3578529565 (EndHUD_t3967053958 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EndHUD__ctor_m3578529565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string pointsPrefix = "Points: ";
		__this->set_pointsPrefix_3(_stringLiteral1383380143);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EndHUD::Start()
extern "C"  void EndHUD_Start_m1831966461 (EndHUD_t3967053958 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EndHUD_Start_m1831966461_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// pointsDisplay.text = pointsPrefix + PointsManager.Points.ToString();
		Text_t1901882714 * L_0 = __this->get_pointsDisplay_2();
		String_t* L_1 = __this->get_pointsPrefix_3();
		// pointsDisplay.text = pointsPrefix + PointsManager.Points.ToString();
		IL2CPP_RUNTIME_CLASS_INIT(PointsManager_t882499681_il2cpp_TypeInfo_var);
		int32_t L_2 = PointsManager_get_Points_m2028628492(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		// pointsDisplay.text = pointsPrefix + PointsManager.Points.ToString();
		String_t* L_3 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		// pointsDisplay.text = pointsPrefix + PointsManager.Points.ToString();
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Enemy::.ctor()
extern "C"  void Enemy__ctor_m2535212804 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy__ctor_m2535212804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected bool shootRan = false;
		__this->set_shootRan_4((bool)0);
		// protected bool currentlyShooting = false;
		__this->set_currentlyShooting_5((bool)0);
		// EnemyDead enemyDeadEvent = new EnemyDead();
		EnemyDead_t715039781 * L_0 = (EnemyDead_t715039781 *)il2cpp_codegen_object_new(EnemyDead_t715039781_il2cpp_TypeInfo_var);
		EnemyDead__ctor_m3176842491(L_0, /*hidden argument*/NULL);
		__this->set_enemyDeadEvent_11(L_0);
		// EnemyReady enemyReadyEvent = new EnemyReady();
		EnemyReady_t749052965 * L_1 = (EnemyReady_t749052965 *)il2cpp_codegen_object_new(EnemyReady_t749052965_il2cpp_TypeInfo_var);
		EnemyReady__ctor_m929021895(L_1, /*hidden argument*/NULL);
		__this->set_enemyReadyEvent_12(L_1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 Enemy::get_Position()
extern "C"  Vector2_t2156229523  Enemy_get_Position_m665928263 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		// Vector2 position2D = new Vector2();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t2156229523 ));
		// position2D.x = transform.position.x;
		// position2D.x = transform.position.x;
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// position2D.x = transform.position.x;
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_x_1();
		(&V_0)->set_x_0(L_2);
		// position2D.y = transform.position.y;
		// position2D.y = transform.position.y;
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// position2D.y = transform.position.y;
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = (&V_2)->get_y_2();
		(&V_0)->set_y_1(L_5);
		// return position2D;
		Vector2_t2156229523  L_6 = V_0;
		V_3 = L_6;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		Vector2_t2156229523  L_7 = V_3;
		return L_7;
	}
}
// System.Int32 Enemy::get_ID()
extern "C"  int32_t Enemy_get_ID_m1981869824 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return id; }
		int32_t L_0 = __this->get_id_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// get { return id; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Enemy::set_ID(System.Int32)
extern "C"  void Enemy_set_ID_m3592118756 (Enemy_t1765729589 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { id = value; }
		int32_t L_0 = ___value0;
		__this->set_id_6(L_0);
		// set { id = value; }
		return;
	}
}
// System.String Enemy::get_Type()
extern "C"  String_t* Enemy_get_Type_m1756557355 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// get { return type; }
		String_t* L_0 = __this->get_type_7();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// get { return type; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Enemy::set_Type(System.String)
extern "C"  void Enemy_set_Type_m1641845120 (Enemy_t1765729589 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { type = value; }
		String_t* L_0 = ___value0;
		__this->set_type_7(L_0);
		// set { type = value; }
		return;
	}
}
// System.Void Enemy::Start()
extern "C"  void Enemy_Start_m3612231678 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_Start_m3612231678_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb2D = GetComponent<Rigidbody2D>();
		// rb2D = GetComponent<Rigidbody2D>();
		Rigidbody2D_t939494601 * L_0 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		__this->set_rb2D_8(L_0);
		// boxCollider2D = GetComponent<BoxCollider2D>();
		// boxCollider2D = GetComponent<BoxCollider2D>();
		BoxCollider2D_t3581341831 * L_1 = Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273_RuntimeMethod_var);
		__this->set_boxCollider2D_9(L_1);
		// spriteRenderer = GetComponent<SpriteRenderer>();
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3235626157 * L_2 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		__this->set_spriteRenderer_10(L_2);
		// EventManager.AddEnemyDeadInvoker(this);
		// EventManager.AddEnemyDeadInvoker(this);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		EventManager_AddEnemyDeadInvoker_m4263453055(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		// EventManager.AddEnemyMoveListener(Move);
		intptr_t L_3 = (intptr_t)Enemy_Move_m3242315493_RuntimeMethod_var;
		UnityAction_1_t3524528990 * L_4 = (UnityAction_1_t3524528990 *)il2cpp_codegen_object_new(UnityAction_1_t3524528990_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2369862071(L_4, __this, L_3, /*hidden argument*/UnityAction_1__ctor_m2369862071_RuntimeMethod_var);
		// EventManager.AddEnemyMoveListener(Move);
		EventManager_AddEnemyMoveListener_m248040199(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		// EventManager.AddEnemyShootListener(Shoot);
		intptr_t L_5 = (intptr_t)GetVirtualMethodInfo(__this, 5);
		UnityAction_1_t3535781894 * L_6 = (UnityAction_1_t3535781894 *)il2cpp_codegen_object_new(UnityAction_1_t3535781894_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m3081378164(L_6, __this, L_5, /*hidden argument*/UnityAction_1__ctor_m3081378164_RuntimeMethod_var);
		// EventManager.AddEnemyShootListener(Shoot);
		EventManager_AddEnemyShootListener_m299670043(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::Update()
extern "C"  void Enemy_Update_m3583063749 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Enemy::FixedUpdate()
extern "C"  void Enemy_FixedUpdate_m2632478061 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Enemy::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void Enemy_OnCollisionEnter2D_m3315294300 (Enemy_t1765729589 * __this, Collision2D_t2842956331 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_OnCollisionEnter2D_m3315294300_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// switch(type)
		String_t* L_0 = __this->get_type_7();
		V_0 = L_0;
		// {
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0085;
		}
	}
	{
		String_t* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral4055562318, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0043;
		}
	}
	{
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_4, _stringLiteral297955522, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m920492651(NULL /*static, unused*/, L_6, _stringLiteral2553965942, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0085;
	}

IL_0043:
	{
		// enemyDeadEvent.Invoke(this, Constants.CommanderPoints);
		EnemyDead_t715039781 * L_8 = __this->get_enemyDeadEvent_11();
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t701097383_il2cpp_TypeInfo_var);
		int32_t L_9 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_CommanderPoints_9();
		// enemyDeadEvent.Invoke(this, Constants.CommanderPoints);
		UnityEvent_2_Invoke_m1150875179(L_8, __this, L_9, /*hidden argument*/UnityEvent_2_Invoke_m1150875179_RuntimeMethod_var);
		// break;
		goto IL_0085;
	}

IL_0059:
	{
		// enemyDeadEvent.Invoke(this, Constants.SoldierPoints);
		EnemyDead_t715039781 * L_10 = __this->get_enemyDeadEvent_11();
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t701097383_il2cpp_TypeInfo_var);
		int32_t L_11 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_SoldierPoints_6();
		// enemyDeadEvent.Invoke(this, Constants.SoldierPoints);
		UnityEvent_2_Invoke_m1150875179(L_10, __this, L_11, /*hidden argument*/UnityEvent_2_Invoke_m1150875179_RuntimeMethod_var);
		// break;
		goto IL_0085;
	}

IL_006f:
	{
		// enemyDeadEvent.Invoke(this, Constants.ProtectorPoints);
		EnemyDead_t715039781 * L_12 = __this->get_enemyDeadEvent_11();
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t701097383_il2cpp_TypeInfo_var);
		int32_t L_13 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_ProtectorPoints_4();
		// enemyDeadEvent.Invoke(this, Constants.ProtectorPoints);
		UnityEvent_2_Invoke_m1150875179(L_12, __this, L_13, /*hidden argument*/UnityEvent_2_Invoke_m1150875179_RuntimeMethod_var);
		// break;
		goto IL_0085;
	}

IL_0085:
	{
		// Destroy(gameObject);
		// Destroy(gameObject);
		GameObject_t1113636619 * L_14 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		// Destroy(gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::Move(EnemyMovements)
extern "C"  void Enemy_Move_m3242315493 (Enemy_t1765729589 * __this, int32_t ___move0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_Move_m3242315493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		// movementHorizontalPosition = new Vector2(transform.position.x + Constants.EnemyMove, transform.position.y);
		// movementHorizontalPosition = new Vector2(transform.position.x + Constants.EnemyMove, transform.position.y);
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// movementHorizontalPosition = new Vector2(transform.position.x + Constants.EnemyMove, transform.position.y);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t701097383_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_EnemyMove_12();
		// movementHorizontalPosition = new Vector2(transform.position.x + Constants.EnemyMove, transform.position.y);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// movementHorizontalPosition = new Vector2(transform.position.x + Constants.EnemyMove, transform.position.y);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = (&V_1)->get_y_2();
		// movementHorizontalPosition = new Vector2(transform.position.x + Constants.EnemyMove, transform.position.y);
		Vector2_t2156229523  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector2__ctor_m3970636864((&L_7), ((float)il2cpp_codegen_add((float)L_2, (float)(((float)((float)L_3))))), L_6, /*hidden argument*/NULL);
		__this->set_movementHorizontalPosition_13(L_7);
		// movementVerticalPosition = new Vector2(transform.position.x, transform.position.y - Constants.EnemyMove);
		// movementVerticalPosition = new Vector2(transform.position.x, transform.position.y - Constants.EnemyMove);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// movementVerticalPosition = new Vector2(transform.position.x, transform.position.y - Constants.EnemyMove);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		float L_10 = (&V_2)->get_x_1();
		// movementVerticalPosition = new Vector2(transform.position.x, transform.position.y - Constants.EnemyMove);
		Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// movementVerticalPosition = new Vector2(transform.position.x, transform.position.y - Constants.EnemyMove);
		Vector3_t3722313464  L_12 = Transform_get_position_m36019626(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		float L_13 = (&V_3)->get_y_2();
		int32_t L_14 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_EnemyMove_12();
		// movementVerticalPosition = new Vector2(transform.position.x, transform.position.y - Constants.EnemyMove);
		Vector2_t2156229523  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector2__ctor_m3970636864((&L_15), L_10, ((float)il2cpp_codegen_subtract((float)L_13, (float)(((float)((float)L_14))))), /*hidden argument*/NULL);
		__this->set_movementVerticalPosition_14(L_15);
		// {
		int32_t L_16 = ___move0;
		if (!L_16)
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_17 = ___move0;
		if ((((int32_t)L_17) == ((int32_t)1)))
		{
			goto IL_00d3;
		}
	}
	{
		goto IL_0123;
	}

IL_0083:
	{
		// movementHorizontalPosition = new Vector2(transform.position.x + Constants.EnemyMove, transform.position.y);
		// movementHorizontalPosition = new Vector2(transform.position.x + Constants.EnemyMove, transform.position.y);
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// movementHorizontalPosition = new Vector2(transform.position.x + Constants.EnemyMove, transform.position.y);
		Vector3_t3722313464  L_19 = Transform_get_position_m36019626(L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		float L_20 = (&V_4)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t701097383_il2cpp_TypeInfo_var);
		int32_t L_21 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_EnemyMove_12();
		// movementHorizontalPosition = new Vector2(transform.position.x + Constants.EnemyMove, transform.position.y);
		Transform_t3600365921 * L_22 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// movementHorizontalPosition = new Vector2(transform.position.x + Constants.EnemyMove, transform.position.y);
		Vector3_t3722313464  L_23 = Transform_get_position_m36019626(L_22, /*hidden argument*/NULL);
		V_5 = L_23;
		float L_24 = (&V_5)->get_y_2();
		// movementHorizontalPosition = new Vector2(transform.position.x + Constants.EnemyMove, transform.position.y);
		Vector2_t2156229523  L_25;
		memset(&L_25, 0, sizeof(L_25));
		Vector2__ctor_m3970636864((&L_25), ((float)il2cpp_codegen_add((float)L_20, (float)(((float)((float)L_21))))), L_24, /*hidden argument*/NULL);
		__this->set_movementHorizontalPosition_13(L_25);
		// rb2D.MovePosition(movementHorizontalPosition);
		Rigidbody2D_t939494601 * L_26 = __this->get_rb2D_8();
		Vector2_t2156229523  L_27 = __this->get_movementHorizontalPosition_13();
		// rb2D.MovePosition(movementHorizontalPosition);
		Rigidbody2D_MovePosition_m1934912072(L_26, L_27, /*hidden argument*/NULL);
		// break;
		goto IL_0139;
	}

IL_00d3:
	{
		// movementHorizontalPosition = new Vector2(transform.position.x - Constants.EnemyMove, transform.position.y);
		// movementHorizontalPosition = new Vector2(transform.position.x - Constants.EnemyMove, transform.position.y);
		Transform_t3600365921 * L_28 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// movementHorizontalPosition = new Vector2(transform.position.x - Constants.EnemyMove, transform.position.y);
		Vector3_t3722313464  L_29 = Transform_get_position_m36019626(L_28, /*hidden argument*/NULL);
		V_6 = L_29;
		float L_30 = (&V_6)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t701097383_il2cpp_TypeInfo_var);
		int32_t L_31 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_EnemyMove_12();
		// movementHorizontalPosition = new Vector2(transform.position.x - Constants.EnemyMove, transform.position.y);
		Transform_t3600365921 * L_32 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// movementHorizontalPosition = new Vector2(transform.position.x - Constants.EnemyMove, transform.position.y);
		Vector3_t3722313464  L_33 = Transform_get_position_m36019626(L_32, /*hidden argument*/NULL);
		V_7 = L_33;
		float L_34 = (&V_7)->get_y_2();
		// movementHorizontalPosition = new Vector2(transform.position.x - Constants.EnemyMove, transform.position.y);
		Vector2_t2156229523  L_35;
		memset(&L_35, 0, sizeof(L_35));
		Vector2__ctor_m3970636864((&L_35), ((float)il2cpp_codegen_subtract((float)L_30, (float)(((float)((float)L_31))))), L_34, /*hidden argument*/NULL);
		__this->set_movementHorizontalPosition_13(L_35);
		// rb2D.MovePosition(movementHorizontalPosition);
		Rigidbody2D_t939494601 * L_36 = __this->get_rb2D_8();
		Vector2_t2156229523  L_37 = __this->get_movementHorizontalPosition_13();
		// rb2D.MovePosition(movementHorizontalPosition);
		Rigidbody2D_MovePosition_m1934912072(L_36, L_37, /*hidden argument*/NULL);
		// break;
		goto IL_0139;
	}

IL_0123:
	{
		// rb2D.MovePosition(movementVerticalPosition);
		Rigidbody2D_t939494601 * L_38 = __this->get_rb2D_8();
		Vector2_t2156229523  L_39 = __this->get_movementVerticalPosition_14();
		// rb2D.MovePosition(movementVerticalPosition);
		Rigidbody2D_MovePosition_m1934912072(L_38, L_39, /*hidden argument*/NULL);
		// break;
		goto IL_0139;
	}

IL_0139:
	{
		// }
		return;
	}
}
// System.Void Enemy::AddEnemyDeadListener(UnityEngine.Events.UnityAction`2<Enemy,System.Int32>)
extern "C"  void Enemy_AddEnemyDeadListener_m3032586755 (Enemy_t1765729589 * __this, UnityAction_2_t2317559471 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_AddEnemyDeadListener_m3032586755_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemyDeadEvent.AddListener(listener);
		EnemyDead_t715039781 * L_0 = __this->get_enemyDeadEvent_11();
		UnityAction_2_t2317559471 * L_1 = ___listener0;
		// enemyDeadEvent.AddListener(listener);
		UnityEvent_2_AddListener_m1516503271(L_0, L_1, /*hidden argument*/UnityEvent_2_AddListener_m1516503271_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemyDead::.ctor()
extern "C"  void EnemyDead__ctor_m3176842491 (EnemyDead_t715039781 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyDead__ctor_m3176842491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m405530561(__this, /*hidden argument*/UnityEvent_2__ctor_m405530561_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemyGraphBuilder::.ctor()
extern "C"  void EnemyGraphBuilder__ctor_m1643694955 (EnemyGraphBuilder_t3679222799 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyGraphBuilder__ctor_m1643694955_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int n = 0;
		__this->set_n_4(0);
		// EnemyShoot enemyShootEvent = new EnemyShoot();
		EnemyShoot_t243830779 * L_0 = (EnemyShoot_t243830779 *)il2cpp_codegen_object_new(EnemyShoot_t243830779_il2cpp_TypeInfo_var);
		EnemyShoot__ctor_m1274202978(L_0, /*hidden argument*/NULL);
		__this->set_enemyShootEvent_9(L_0);
		// List<EnemyNode<Enemy>> enemiesCurrentlyShooting = new List<EnemyNode<Enemy>>();
		List_1_t2784210590 * L_1 = (List_1_t2784210590 *)il2cpp_codegen_object_new(List_1_t2784210590_il2cpp_TypeInfo_var);
		List_1__ctor_m1784492279(L_1, /*hidden argument*/List_1__ctor_m1784492279_RuntimeMethod_var);
		__this->set_enemiesCurrentlyShooting_10(L_1);
		// AllEnemiesDead allEnemiesDeadEvent = new AllEnemiesDead();
		AllEnemiesDead_t1977689189 * L_2 = (AllEnemiesDead_t1977689189 *)il2cpp_codegen_object_new(AllEnemiesDead_t1977689189_il2cpp_TypeInfo_var);
		AllEnemiesDead__ctor_m3123510771(L_2, /*hidden argument*/NULL);
		__this->set_allEnemiesDeadEvent_11(L_2);
		// GameWin gameWinEvent = new GameWin();
		GameWin_t775063857 * L_3 = (GameWin_t775063857 *)il2cpp_codegen_object_new(GameWin_t775063857_il2cpp_TypeInfo_var);
		GameWin__ctor_m1720413770(L_3, /*hidden argument*/NULL);
		__this->set_gameWinEvent_12(L_3);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// EnemyGraph`1<Enemy> EnemyGraphBuilder::get_EnemyGraph()
extern "C"  EnemyGraph_1_t514571901 * EnemyGraphBuilder_get_EnemyGraph_m3588443397 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyGraphBuilder_get_EnemyGraph_m3588443397_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EnemyGraph_1_t514571901 * V_0 = NULL;
	{
		// get { return enemyGraph; }
		EnemyGraph_1_t514571901 * L_0 = ((EnemyGraphBuilder_t3679222799_StaticFields*)il2cpp_codegen_static_fields_for(EnemyGraphBuilder_t3679222799_il2cpp_TypeInfo_var))->get_enemyGraph_8();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		// get { return enemyGraph; }
		EnemyGraph_1_t514571901 * L_1 = V_0;
		return L_1;
	}
}
// System.Void EnemyGraphBuilder::Awake()
extern "C"  void EnemyGraphBuilder_Awake_m2228199267 (EnemyGraphBuilder_t3679222799 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyGraphBuilder_Awake_m2228199267_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t1113636619 * V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_t1113636619 * V_3 = NULL;
	int32_t V_4 = 0;
	GameObject_t1113636619 * V_5 = NULL;
	GameObjectU5BU5D_t3328599146* V_6 = NULL;
	GameObject_t1113636619 * V_7 = NULL;
	GameObjectU5BU5D_t3328599146* V_8 = NULL;
	int32_t V_9 = 0;
	EnemyNode_1_t1312135848 * V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EnemyNode_1_t1312135848 * V_12 = NULL;
	RuntimeObject* V_13 = NULL;
	Vector2_t2156229523  V_14;
	memset(&V_14, 0, sizeof(V_14));
	Vector2_t2156229523  V_15;
	memset(&V_15, 0, sizeof(V_15));
	Vector2_t2156229523  V_16;
	memset(&V_16, 0, sizeof(V_16));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// for (int i = -8; i < 7; i++)
		V_0 = ((int32_t)-8);
		goto IL_0060;
	}

IL_0009:
	{
		// GameObject enemy = Instantiate(commanderPrefab, new Vector3(i, 3, ScreenUtils.ZWorld), Quaternion.identity) as GameObject;
		GameObject_t1113636619 * L_0 = __this->get_commanderPrefab_7();
		int32_t L_1 = V_0;
		// GameObject enemy = Instantiate(commanderPrefab, new Vector3(i, 3, ScreenUtils.ZWorld), Quaternion.identity) as GameObject;
		float L_2 = ScreenUtils_get_ZWorld_m1697726886(NULL /*static, unused*/, /*hidden argument*/NULL);
		// GameObject enemy = Instantiate(commanderPrefab, new Vector3(i, 3, ScreenUtils.ZWorld), Quaternion.identity) as GameObject;
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), (((float)((float)L_1))), (3.0f), L_2, /*hidden argument*/NULL);
		// GameObject enemy = Instantiate(commanderPrefab, new Vector3(i, 3, ScreenUtils.ZWorld), Quaternion.identity) as GameObject;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_4 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		// GameObject enemy = Instantiate(commanderPrefab, new Vector3(i, 3, ScreenUtils.ZWorld), Quaternion.identity) as GameObject;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_5 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_0, L_3, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_1 = L_5;
		// enemy.GetComponent<Enemy>().ID = n;
		GameObject_t1113636619 * L_6 = V_1;
		// enemy.GetComponent<Enemy>().ID = n;
		Enemy_t1765729589 * L_7 = GameObject_GetComponent_TisEnemy_t1765729589_m2539763118(L_6, /*hidden argument*/GameObject_GetComponent_TisEnemy_t1765729589_m2539763118_RuntimeMethod_var);
		int32_t L_8 = __this->get_n_4();
		// enemy.GetComponent<Enemy>().ID = n;
		Enemy_set_ID_m3592118756(L_7, L_8, /*hidden argument*/NULL);
		// enemy.GetComponent<Enemy>().Type = "Commander";
		GameObject_t1113636619 * L_9 = V_1;
		// enemy.GetComponent<Enemy>().Type = "Commander";
		Enemy_t1765729589 * L_10 = GameObject_GetComponent_TisEnemy_t1765729589_m2539763118(L_9, /*hidden argument*/GameObject_GetComponent_TisEnemy_t1765729589_m2539763118_RuntimeMethod_var);
		// enemy.GetComponent<Enemy>().Type = "Commander";
		Enemy_set_Type_m1641845120(L_10, _stringLiteral4055562318, /*hidden argument*/NULL);
		// n++;
		int32_t L_11 = __this->get_n_4();
		__this->set_n_4(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
		// for (int i = -8; i < 7; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0060:
	{
		// for (int i = -8; i < 7; i++)
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)7)))
		{
			goto IL_0009;
		}
	}
	{
		// for (int i = -8; i < 7; i++)
		V_2 = ((int32_t)-8);
		goto IL_00c6;
	}

IL_006f:
	{
		// GameObject enemy = Instantiate(soldierPrefab, new Vector3(i, 2, ScreenUtils.ZWorld), Quaternion.identity) as GameObject;
		GameObject_t1113636619 * L_14 = __this->get_soldierPrefab_5();
		int32_t L_15 = V_2;
		// GameObject enemy = Instantiate(soldierPrefab, new Vector3(i, 2, ScreenUtils.ZWorld), Quaternion.identity) as GameObject;
		float L_16 = ScreenUtils_get_ZWorld_m1697726886(NULL /*static, unused*/, /*hidden argument*/NULL);
		// GameObject enemy = Instantiate(soldierPrefab, new Vector3(i, 2, ScreenUtils.ZWorld), Quaternion.identity) as GameObject;
		Vector3_t3722313464  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector3__ctor_m3353183577((&L_17), (((float)((float)L_15))), (2.0f), L_16, /*hidden argument*/NULL);
		// GameObject enemy = Instantiate(soldierPrefab, new Vector3(i, 2, ScreenUtils.ZWorld), Quaternion.identity) as GameObject;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_18 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		// GameObject enemy = Instantiate(soldierPrefab, new Vector3(i, 2, ScreenUtils.ZWorld), Quaternion.identity) as GameObject;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_19 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_14, L_17, L_18, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_3 = L_19;
		// enemy.GetComponent<Enemy>().ID = n;
		GameObject_t1113636619 * L_20 = V_3;
		// enemy.GetComponent<Enemy>().ID = n;
		Enemy_t1765729589 * L_21 = GameObject_GetComponent_TisEnemy_t1765729589_m2539763118(L_20, /*hidden argument*/GameObject_GetComponent_TisEnemy_t1765729589_m2539763118_RuntimeMethod_var);
		int32_t L_22 = __this->get_n_4();
		// enemy.GetComponent<Enemy>().ID = n;
		Enemy_set_ID_m3592118756(L_21, L_22, /*hidden argument*/NULL);
		// enemy.GetComponent<Enemy>().Type = "Soldier";
		GameObject_t1113636619 * L_23 = V_3;
		// enemy.GetComponent<Enemy>().Type = "Soldier";
		Enemy_t1765729589 * L_24 = GameObject_GetComponent_TisEnemy_t1765729589_m2539763118(L_23, /*hidden argument*/GameObject_GetComponent_TisEnemy_t1765729589_m2539763118_RuntimeMethod_var);
		// enemy.GetComponent<Enemy>().Type = "Soldier";
		Enemy_set_Type_m1641845120(L_24, _stringLiteral297955522, /*hidden argument*/NULL);
		// n++;
		int32_t L_25 = __this->get_n_4();
		__this->set_n_4(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)));
		// for (int i = -8; i < 7; i++)
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00c6:
	{
		// for (int i = -8; i < 7; i++)
		int32_t L_27 = V_2;
		if ((((int32_t)L_27) < ((int32_t)7)))
		{
			goto IL_006f;
		}
	}
	{
		// for (int i = -8; i < 7; i++)
		V_4 = ((int32_t)-8);
		goto IL_0133;
	}

IL_00d6:
	{
		// GameObject enemy = Instantiate(protectorPrefab, new Vector3(i, 1, ScreenUtils.ZWorld), Quaternion.identity) as GameObject;
		GameObject_t1113636619 * L_28 = __this->get_protectorPrefab_6();
		int32_t L_29 = V_4;
		// GameObject enemy = Instantiate(protectorPrefab, new Vector3(i, 1, ScreenUtils.ZWorld), Quaternion.identity) as GameObject;
		float L_30 = ScreenUtils_get_ZWorld_m1697726886(NULL /*static, unused*/, /*hidden argument*/NULL);
		// GameObject enemy = Instantiate(protectorPrefab, new Vector3(i, 1, ScreenUtils.ZWorld), Quaternion.identity) as GameObject;
		Vector3_t3722313464  L_31;
		memset(&L_31, 0, sizeof(L_31));
		Vector3__ctor_m3353183577((&L_31), (((float)((float)L_29))), (1.0f), L_30, /*hidden argument*/NULL);
		// GameObject enemy = Instantiate(protectorPrefab, new Vector3(i, 1, ScreenUtils.ZWorld), Quaternion.identity) as GameObject;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_32 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		// GameObject enemy = Instantiate(protectorPrefab, new Vector3(i, 1, ScreenUtils.ZWorld), Quaternion.identity) as GameObject;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_33 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_28, L_31, L_32, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_5 = L_33;
		// enemy.GetComponent<Enemy>().ID = n;
		GameObject_t1113636619 * L_34 = V_5;
		// enemy.GetComponent<Enemy>().ID = n;
		Enemy_t1765729589 * L_35 = GameObject_GetComponent_TisEnemy_t1765729589_m2539763118(L_34, /*hidden argument*/GameObject_GetComponent_TisEnemy_t1765729589_m2539763118_RuntimeMethod_var);
		int32_t L_36 = __this->get_n_4();
		// enemy.GetComponent<Enemy>().ID = n;
		Enemy_set_ID_m3592118756(L_35, L_36, /*hidden argument*/NULL);
		// enemy.GetComponent<Enemy>().Type = "Protector";
		GameObject_t1113636619 * L_37 = V_5;
		// enemy.GetComponent<Enemy>().Type = "Protector";
		Enemy_t1765729589 * L_38 = GameObject_GetComponent_TisEnemy_t1765729589_m2539763118(L_37, /*hidden argument*/GameObject_GetComponent_TisEnemy_t1765729589_m2539763118_RuntimeMethod_var);
		// enemy.GetComponent<Enemy>().Type = "Protector";
		Enemy_set_Type_m1641845120(L_38, _stringLiteral2553965942, /*hidden argument*/NULL);
		// n++;
		int32_t L_39 = __this->get_n_4();
		__this->set_n_4(((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)));
		// for (int i = -8; i < 7; i++)
		int32_t L_40 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_0133:
	{
		// for (int i = -8; i < 7; i++)
		int32_t L_41 = V_4;
		if ((((int32_t)L_41) < ((int32_t)7)))
		{
			goto IL_00d6;
		}
	}
	{
		// enemyGraph = new EnemyGraph<Enemy>();
		EnemyGraph_1_t514571901 * L_42 = (EnemyGraph_1_t514571901 *)il2cpp_codegen_object_new(EnemyGraph_1_t514571901_il2cpp_TypeInfo_var);
		EnemyGraph_1__ctor_m1111478957(L_42, /*hidden argument*/EnemyGraph_1__ctor_m1111478957_RuntimeMethod_var);
		((EnemyGraphBuilder_t3679222799_StaticFields*)il2cpp_codegen_static_fields_for(EnemyGraphBuilder_t3679222799_il2cpp_TypeInfo_var))->set_enemyGraph_8(L_42);
		// GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy");
		// GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy");
		GameObjectU5BU5D_t3328599146* L_43 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral760905195, /*hidden argument*/NULL);
		V_6 = L_43;
		// foreach (GameObject enemy in enemies)
		GameObjectU5BU5D_t3328599146* L_44 = V_6;
		V_8 = L_44;
		V_9 = 0;
		goto IL_017f;
	}

IL_015e:
	{
		// foreach (GameObject enemy in enemies)
		GameObjectU5BU5D_t3328599146* L_45 = V_8;
		int32_t L_46 = V_9;
		int32_t L_47 = L_46;
		GameObject_t1113636619 * L_48 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47));
		V_7 = L_48;
		// enemyGraph.AddNode(enemy.GetComponent<Enemy>());
		EnemyGraph_1_t514571901 * L_49 = ((EnemyGraphBuilder_t3679222799_StaticFields*)il2cpp_codegen_static_fields_for(EnemyGraphBuilder_t3679222799_il2cpp_TypeInfo_var))->get_enemyGraph_8();
		GameObject_t1113636619 * L_50 = V_7;
		// enemyGraph.AddNode(enemy.GetComponent<Enemy>());
		Enemy_t1765729589 * L_51 = GameObject_GetComponent_TisEnemy_t1765729589_m2539763118(L_50, /*hidden argument*/GameObject_GetComponent_TisEnemy_t1765729589_m2539763118_RuntimeMethod_var);
		// enemyGraph.AddNode(enemy.GetComponent<Enemy>());
		EnemyGraph_1_AddNode_m2464653358(L_49, L_51, /*hidden argument*/EnemyGraph_1_AddNode_m2464653358_RuntimeMethod_var);
		// foreach (GameObject enemy in enemies)
		int32_t L_52 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_017f:
	{
		int32_t L_53 = V_9;
		GameObjectU5BU5D_t3328599146* L_54 = V_8;
		if ((((int32_t)L_53) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_54)->max_length)))))))
		{
			goto IL_015e;
		}
	}
	{
		// foreach (EnemyNode<Enemy> firstEnemyNode in enemyGraph.Nodes)
		EnemyGraph_1_t514571901 * L_55 = ((EnemyGraphBuilder_t3679222799_StaticFields*)il2cpp_codegen_static_fields_for(EnemyGraphBuilder_t3679222799_il2cpp_TypeInfo_var))->get_enemyGraph_8();
		// foreach (EnemyNode<Enemy> firstEnemyNode in enemyGraph.Nodes)
		RuntimeObject* L_56 = EnemyGraph_1_get_Nodes_m2229328446(L_55, /*hidden argument*/EnemyGraph_1_get_Nodes_m2229328446_RuntimeMethod_var);
		// foreach (EnemyNode<Enemy> firstEnemyNode in enemyGraph.Nodes)
		RuntimeObject* L_57 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<EnemyNode`1<Enemy>>::GetEnumerator() */, IEnumerable_1_t291988737_il2cpp_TypeInfo_var, L_56);
		V_11 = L_57;
	}

IL_019c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0269;
		}

IL_01a1:
		{
			// foreach (EnemyNode<Enemy> firstEnemyNode in enemyGraph.Nodes)
			RuntimeObject* L_58 = V_11;
			// foreach (EnemyNode<Enemy> firstEnemyNode in enemyGraph.Nodes)
			EnemyNode_1_t1312135848 * L_59 = InterfaceFuncInvoker0< EnemyNode_1_t1312135848 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<EnemyNode`1<Enemy>>::get_Current() */, IEnumerator_1_t1744706316_il2cpp_TypeInfo_var, L_58);
			V_10 = L_59;
			// foreach (EnemyNode<Enemy> secondEnemyNode in enemyGraph.Nodes)
			EnemyGraph_1_t514571901 * L_60 = ((EnemyGraphBuilder_t3679222799_StaticFields*)il2cpp_codegen_static_fields_for(EnemyGraphBuilder_t3679222799_il2cpp_TypeInfo_var))->get_enemyGraph_8();
			// foreach (EnemyNode<Enemy> secondEnemyNode in enemyGraph.Nodes)
			RuntimeObject* L_61 = EnemyGraph_1_get_Nodes_m2229328446(L_60, /*hidden argument*/EnemyGraph_1_get_Nodes_m2229328446_RuntimeMethod_var);
			// foreach (EnemyNode<Enemy> secondEnemyNode in enemyGraph.Nodes)
			RuntimeObject* L_62 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<EnemyNode`1<Enemy>>::GetEnumerator() */, IEnumerable_1_t291988737_il2cpp_TypeInfo_var, L_61);
			V_13 = L_62;
		}

IL_01bd:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0248;
			}

IL_01c2:
			{
				// foreach (EnemyNode<Enemy> secondEnemyNode in enemyGraph.Nodes)
				RuntimeObject* L_63 = V_13;
				// foreach (EnemyNode<Enemy> secondEnemyNode in enemyGraph.Nodes)
				EnemyNode_1_t1312135848 * L_64 = InterfaceFuncInvoker0< EnemyNode_1_t1312135848 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<EnemyNode`1<Enemy>>::get_Current() */, IEnumerator_1_t1744706316_il2cpp_TypeInfo_var, L_63);
				V_12 = L_64;
				// if (firstEnemyNode != secondEnemyNode)
				EnemyNode_1_t1312135848 * L_65 = V_10;
				EnemyNode_1_t1312135848 * L_66 = V_12;
				if ((((RuntimeObject*)(EnemyNode_1_t1312135848 *)L_65) == ((RuntimeObject*)(EnemyNode_1_t1312135848 *)L_66)))
				{
					goto IL_0247;
				}
			}

IL_01d5:
			{
				// Vector2 positionDelta = firstEnemyNode.Value.Position - secondEnemyNode.Value.Position;
				EnemyNode_1_t1312135848 * L_67 = V_10;
				// Vector2 positionDelta = firstEnemyNode.Value.Position - secondEnemyNode.Value.Position;
				Enemy_t1765729589 * L_68 = EnemyNode_1_get_Value_m854677982(L_67, /*hidden argument*/EnemyNode_1_get_Value_m854677982_RuntimeMethod_var);
				// Vector2 positionDelta = firstEnemyNode.Value.Position - secondEnemyNode.Value.Position;
				Vector2_t2156229523  L_69 = Enemy_get_Position_m665928263(L_68, /*hidden argument*/NULL);
				EnemyNode_1_t1312135848 * L_70 = V_12;
				// Vector2 positionDelta = firstEnemyNode.Value.Position - secondEnemyNode.Value.Position;
				Enemy_t1765729589 * L_71 = EnemyNode_1_get_Value_m854677982(L_70, /*hidden argument*/EnemyNode_1_get_Value_m854677982_RuntimeMethod_var);
				// Vector2 positionDelta = firstEnemyNode.Value.Position - secondEnemyNode.Value.Position;
				Vector2_t2156229523  L_72 = Enemy_get_Position_m665928263(L_71, /*hidden argument*/NULL);
				// Vector2 positionDelta = firstEnemyNode.Value.Position - secondEnemyNode.Value.Position;
				IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
				Vector2_t2156229523  L_73 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_69, L_72, /*hidden argument*/NULL);
				V_14 = L_73;
				// if (firstEnemyNode.Value.Position.y > secondEnemyNode.Value.Position.y &&
				EnemyNode_1_t1312135848 * L_74 = V_10;
				// if (firstEnemyNode.Value.Position.y > secondEnemyNode.Value.Position.y &&
				Enemy_t1765729589 * L_75 = EnemyNode_1_get_Value_m854677982(L_74, /*hidden argument*/EnemyNode_1_get_Value_m854677982_RuntimeMethod_var);
				// if (firstEnemyNode.Value.Position.y > secondEnemyNode.Value.Position.y &&
				Vector2_t2156229523  L_76 = Enemy_get_Position_m665928263(L_75, /*hidden argument*/NULL);
				V_15 = L_76;
				float L_77 = (&V_15)->get_y_1();
				EnemyNode_1_t1312135848 * L_78 = V_12;
				// if (firstEnemyNode.Value.Position.y > secondEnemyNode.Value.Position.y &&
				Enemy_t1765729589 * L_79 = EnemyNode_1_get_Value_m854677982(L_78, /*hidden argument*/EnemyNode_1_get_Value_m854677982_RuntimeMethod_var);
				// if (firstEnemyNode.Value.Position.y > secondEnemyNode.Value.Position.y &&
				Vector2_t2156229523  L_80 = Enemy_get_Position_m665928263(L_79, /*hidden argument*/NULL);
				V_16 = L_80;
				float L_81 = (&V_16)->get_y_1();
				if ((!(((float)L_77) > ((float)L_81))))
				{
					goto IL_0246;
				}
			}

IL_0224:
			{
				float L_82 = (&V_14)->get_x_0();
				// Mathf.Abs(positionDelta.x) == 0)
				IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
				float L_83 = fabsf(L_82);
				if ((!(((float)L_83) == ((float)(0.0f)))))
				{
					goto IL_0246;
				}
			}

IL_023a:
			{
				// firstEnemyNode.AddNeighbor(secondEnemyNode);
				EnemyNode_1_t1312135848 * L_84 = V_10;
				EnemyNode_1_t1312135848 * L_85 = V_12;
				// firstEnemyNode.AddNeighbor(secondEnemyNode);
				EnemyNode_1_AddNeighbor_m2610891233(L_84, L_85, /*hidden argument*/EnemyNode_1_AddNeighbor_m2610891233_RuntimeMethod_var);
			}

IL_0246:
			{
			}

IL_0247:
			{
			}

IL_0248:
			{
				RuntimeObject* L_86 = V_13;
				// foreach (EnemyNode<Enemy> secondEnemyNode in enemyGraph.Nodes)
				bool L_87 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_86);
				if (L_87)
				{
					goto IL_01c2;
				}
			}

IL_0254:
			{
				IL2CPP_LEAVE(0x268, FINALLY_0259);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0259;
		}

FINALLY_0259:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_88 = V_13;
				if (!L_88)
				{
					goto IL_0267;
				}
			}

IL_0260:
			{
				RuntimeObject* L_89 = V_13;
				// foreach (EnemyNode<Enemy> secondEnemyNode in enemyGraph.Nodes)
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_89);
			}

IL_0267:
			{
				IL2CPP_END_FINALLY(601)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(601)
		{
			IL2CPP_JUMP_TBL(0x268, IL_0268)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0268:
		{
		}

IL_0269:
		{
			RuntimeObject* L_90 = V_11;
			// foreach (EnemyNode<Enemy> firstEnemyNode in enemyGraph.Nodes)
			bool L_91 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_90);
			if (L_91)
			{
				goto IL_01a1;
			}
		}

IL_0275:
		{
			IL2CPP_LEAVE(0x289, FINALLY_027a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_027a;
	}

FINALLY_027a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_92 = V_11;
			if (!L_92)
			{
				goto IL_0288;
			}
		}

IL_0281:
		{
			RuntimeObject* L_93 = V_11;
			// foreach (EnemyNode<Enemy> firstEnemyNode in enemyGraph.Nodes)
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_93);
		}

IL_0288:
		{
			IL2CPP_END_FINALLY(634)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(634)
	{
		IL2CPP_JUMP_TBL(0x289, IL_0289)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0289:
	{
		// EventManager.AddEnemyDeadListener(EnemyDead);
		intptr_t L_94 = (intptr_t)EnemyGraphBuilder_EnemyDead_m3436227563_RuntimeMethod_var;
		UnityAction_2_t2317559471 * L_95 = (UnityAction_2_t2317559471 *)il2cpp_codegen_object_new(UnityAction_2_t2317559471_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m332998619(L_95, __this, L_94, /*hidden argument*/UnityAction_2__ctor_m332998619_RuntimeMethod_var);
		// EventManager.AddEnemyDeadListener(EnemyDead);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		EventManager_AddEnemyDeadListener_m1380855738(NULL /*static, unused*/, L_95, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyGraphBuilder::Start()
extern "C"  void EnemyGraphBuilder_Start_m3342651133 (EnemyGraphBuilder_t3679222799 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyGraphBuilder_Start_m3342651133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.AddEnemyShootInvoker(this);
		// EventManager.AddEnemyShootInvoker(this);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		EventManager_AddEnemyShootInvoker_m800474143(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		// EventManager.AddAllEnemiesDeadInvokers(this);
		// EventManager.AddAllEnemiesDeadInvokers(this);
		EventManager_AddAllEnemiesDeadInvokers_m2293543861(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		// EventManager.AddGameWinInvokers(this);
		// EventManager.AddGameWinInvokers(this);
		EventManager_AddGameWinInvokers_m2102898517(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyGraphBuilder::Update()
extern "C"  void EnemyGraphBuilder_Update_m3271700259 (EnemyGraphBuilder_t3679222799 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyGraphBuilder_Update_m3271700259_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Scene_t2348375561  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	Scene_t2348375561  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		// if (GameObject.FindGameObjectsWithTag("Enemy").Length.Equals(0) && !SceneManager.GetActiveScene().name.Equals("Level2"))
		// if (GameObject.FindGameObjectsWithTag("Enemy").Length.Equals(0) && !SceneManager.GetActiveScene().name.Equals("Level2"))
		GameObjectU5BU5D_t3328599146* L_0 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral760905195, /*hidden argument*/NULL);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))));
		// if (GameObject.FindGameObjectsWithTag("Enemy").Length.Equals(0) && !SceneManager.GetActiveScene().name.Equals("Level2"))
		bool L_1 = Int32_Equals_m2976157357((int32_t*)(&V_0), 0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		// if (GameObject.FindGameObjectsWithTag("Enemy").Length.Equals(0) && !SceneManager.GetActiveScene().name.Equals("Level2"))
		Scene_t2348375561  L_2 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_2;
		// if (GameObject.FindGameObjectsWithTag("Enemy").Length.Equals(0) && !SceneManager.GetActiveScene().name.Equals("Level2"))
		String_t* L_3 = Scene_get_name_m622963475((Scene_t2348375561 *)(&V_1), /*hidden argument*/NULL);
		// if (GameObject.FindGameObjectsWithTag("Enemy").Length.Equals(0) && !SceneManager.GetActiveScene().name.Equals("Level2"))
		bool L_4 = String_Equals_m2270643605(L_3, _stringLiteral1234020770, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0049;
		}
	}
	{
		// allEnemiesDeadEvent.Invoke();
		AllEnemiesDead_t1977689189 * L_5 = __this->get_allEnemiesDeadEvent_11();
		// allEnemiesDeadEvent.Invoke();
		UnityEvent_Invoke_m3065672636(L_5, /*hidden argument*/NULL);
		goto IL_008c;
	}

IL_0049:
	{
		// else if(GameObject.FindGameObjectsWithTag("Enemy").Length.Equals(0) && SceneManager.GetActiveScene().name.Equals("Level2"))
		// else if(GameObject.FindGameObjectsWithTag("Enemy").Length.Equals(0) && SceneManager.GetActiveScene().name.Equals("Level2"))
		GameObjectU5BU5D_t3328599146* L_6 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral760905195, /*hidden argument*/NULL);
		V_2 = (((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length))));
		// else if(GameObject.FindGameObjectsWithTag("Enemy").Length.Equals(0) && SceneManager.GetActiveScene().name.Equals("Level2"))
		bool L_7 = Int32_Equals_m2976157357((int32_t*)(&V_2), 0, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_008c;
		}
	}
	{
		// else if(GameObject.FindGameObjectsWithTag("Enemy").Length.Equals(0) && SceneManager.GetActiveScene().name.Equals("Level2"))
		Scene_t2348375561  L_8 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_8;
		// else if(GameObject.FindGameObjectsWithTag("Enemy").Length.Equals(0) && SceneManager.GetActiveScene().name.Equals("Level2"))
		String_t* L_9 = Scene_get_name_m622963475((Scene_t2348375561 *)(&V_3), /*hidden argument*/NULL);
		// else if(GameObject.FindGameObjectsWithTag("Enemy").Length.Equals(0) && SceneManager.GetActiveScene().name.Equals("Level2"))
		bool L_10 = String_Equals_m2270643605(L_9, _stringLiteral1234020770, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_008c;
		}
	}
	{
		// gameWinEvent.Invoke();
		GameWin_t775063857 * L_11 = __this->get_gameWinEvent_12();
		// gameWinEvent.Invoke();
		UnityEvent_Invoke_m3065672636(L_11, /*hidden argument*/NULL);
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void EnemyGraphBuilder::EnemyDead(Enemy,System.Int32)
extern "C"  void EnemyGraphBuilder_EnemyDead_m3436227563 (EnemyGraphBuilder_t3679222799 * __this, Enemy_t1765729589 * ___enemy0, int32_t ___unused1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyGraphBuilder_EnemyDead_m3436227563_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EnemyNode_1_t1312135848 * V_0 = NULL;
	EnemyNode_1_t1312135848 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// EnemyNode<Enemy> toBeRemoved = enemyGraph.Find(enemy);
		EnemyGraph_1_t514571901 * L_0 = ((EnemyGraphBuilder_t3679222799_StaticFields*)il2cpp_codegen_static_fields_for(EnemyGraphBuilder_t3679222799_il2cpp_TypeInfo_var))->get_enemyGraph_8();
		Enemy_t1765729589 * L_1 = ___enemy0;
		// EnemyNode<Enemy> toBeRemoved = enemyGraph.Find(enemy);
		EnemyNode_1_t1312135848 * L_2 = EnemyGraph_1_Find_m558392393(L_0, L_1, /*hidden argument*/EnemyGraph_1_Find_m558392393_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (EnemyNode<Enemy> node in enemyGraph.Nodes)
		EnemyGraph_1_t514571901 * L_3 = ((EnemyGraphBuilder_t3679222799_StaticFields*)il2cpp_codegen_static_fields_for(EnemyGraphBuilder_t3679222799_il2cpp_TypeInfo_var))->get_enemyGraph_8();
		// foreach (EnemyNode<Enemy> node in enemyGraph.Nodes)
		RuntimeObject* L_4 = EnemyGraph_1_get_Nodes_m2229328446(L_3, /*hidden argument*/EnemyGraph_1_get_Nodes_m2229328446_RuntimeMethod_var);
		// foreach (EnemyNode<Enemy> node in enemyGraph.Nodes)
		RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<EnemyNode`1<Enemy>>::GetEnumerator() */, IEnumerable_1_t291988737_il2cpp_TypeInfo_var, L_4);
		V_2 = L_5;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c7;
		}

IL_0023:
		{
			// foreach (EnemyNode<Enemy> node in enemyGraph.Nodes)
			RuntimeObject* L_6 = V_2;
			// foreach (EnemyNode<Enemy> node in enemyGraph.Nodes)
			EnemyNode_1_t1312135848 * L_7 = InterfaceFuncInvoker0< EnemyNode_1_t1312135848 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<EnemyNode`1<Enemy>>::get_Current() */, IEnumerator_1_t1744706316_il2cpp_TypeInfo_var, L_6);
			V_1 = L_7;
			// if (node.Neighbors.Contains(toBeRemoved))
			EnemyNode_1_t1312135848 * L_8 = V_1;
			// if (node.Neighbors.Contains(toBeRemoved))
			RuntimeObject* L_9 = EnemyNode_1_get_Neighbors_m1597861993(L_8, /*hidden argument*/EnemyNode_1_get_Neighbors_m1597861993_RuntimeMethod_var);
			EnemyNode_1_t1312135848 * L_10 = V_0;
			// if (node.Neighbors.Contains(toBeRemoved))
			bool L_11 = InterfaceFuncInvoker1< bool, EnemyNode_1_t1312135848 * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<EnemyNode`1<Enemy>>::Contains(!0) */, ICollection_1_t4140288082_il2cpp_TypeInfo_var, L_9, L_10);
			if (!L_11)
			{
				goto IL_00c6;
			}
		}

IL_003c:
		{
			// node.RemoveNeighbor(toBeRemoved);
			EnemyNode_1_t1312135848 * L_12 = V_1;
			EnemyNode_1_t1312135848 * L_13 = V_0;
			// node.RemoveNeighbor(toBeRemoved);
			EnemyNode_1_RemoveNeighbor_m4222683935(L_12, L_13, /*hidden argument*/EnemyNode_1_RemoveNeighbor_m4222683935_RuntimeMethod_var);
			// if (node.Neighbors.Count == 0 && (node.Value.Type == "Soldier" || node.Value.Type == "Commander") && node != toBeRemoved && !enemiesCurrentlyShooting.Contains(node))
			EnemyNode_1_t1312135848 * L_14 = V_1;
			// if (node.Neighbors.Count == 0 && (node.Value.Type == "Soldier" || node.Value.Type == "Commander") && node != toBeRemoved && !enemiesCurrentlyShooting.Contains(node))
			RuntimeObject* L_15 = EnemyNode_1_get_Neighbors_m1597861993(L_14, /*hidden argument*/EnemyNode_1_get_Neighbors_m1597861993_RuntimeMethod_var);
			// if (node.Neighbors.Count == 0 && (node.Value.Type == "Soldier" || node.Value.Type == "Commander") && node != toBeRemoved && !enemiesCurrentlyShooting.Contains(node))
			int32_t L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<EnemyNode`1<Enemy>>::get_Count() */, ICollection_1_t4140288082_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_00c5;
			}
		}

IL_0055:
		{
			EnemyNode_1_t1312135848 * L_17 = V_1;
			// if (node.Neighbors.Count == 0 && (node.Value.Type == "Soldier" || node.Value.Type == "Commander") && node != toBeRemoved && !enemiesCurrentlyShooting.Contains(node))
			Enemy_t1765729589 * L_18 = EnemyNode_1_get_Value_m854677982(L_17, /*hidden argument*/EnemyNode_1_get_Value_m854677982_RuntimeMethod_var);
			// if (node.Neighbors.Count == 0 && (node.Value.Type == "Soldier" || node.Value.Type == "Commander") && node != toBeRemoved && !enemiesCurrentlyShooting.Contains(node))
			String_t* L_19 = Enemy_get_Type_m1756557355(L_18, /*hidden argument*/NULL);
			// if (node.Neighbors.Count == 0 && (node.Value.Type == "Soldier" || node.Value.Type == "Commander") && node != toBeRemoved && !enemiesCurrentlyShooting.Contains(node))
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_20 = String_op_Equality_m920492651(NULL /*static, unused*/, L_19, _stringLiteral297955522, /*hidden argument*/NULL);
			if (L_20)
			{
				goto IL_0089;
			}
		}

IL_006f:
		{
			EnemyNode_1_t1312135848 * L_21 = V_1;
			// if (node.Neighbors.Count == 0 && (node.Value.Type == "Soldier" || node.Value.Type == "Commander") && node != toBeRemoved && !enemiesCurrentlyShooting.Contains(node))
			Enemy_t1765729589 * L_22 = EnemyNode_1_get_Value_m854677982(L_21, /*hidden argument*/EnemyNode_1_get_Value_m854677982_RuntimeMethod_var);
			// if (node.Neighbors.Count == 0 && (node.Value.Type == "Soldier" || node.Value.Type == "Commander") && node != toBeRemoved && !enemiesCurrentlyShooting.Contains(node))
			String_t* L_23 = Enemy_get_Type_m1756557355(L_22, /*hidden argument*/NULL);
			// if (node.Neighbors.Count == 0 && (node.Value.Type == "Soldier" || node.Value.Type == "Commander") && node != toBeRemoved && !enemiesCurrentlyShooting.Contains(node))
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_24 = String_op_Equality_m920492651(NULL /*static, unused*/, L_23, _stringLiteral4055562318, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_00c5;
			}
		}

IL_0089:
		{
			EnemyNode_1_t1312135848 * L_25 = V_1;
			EnemyNode_1_t1312135848 * L_26 = V_0;
			if ((((RuntimeObject*)(EnemyNode_1_t1312135848 *)L_25) == ((RuntimeObject*)(EnemyNode_1_t1312135848 *)L_26)))
			{
				goto IL_00c5;
			}
		}

IL_0090:
		{
			List_1_t2784210590 * L_27 = __this->get_enemiesCurrentlyShooting_10();
			EnemyNode_1_t1312135848 * L_28 = V_1;
			// if (node.Neighbors.Count == 0 && (node.Value.Type == "Soldier" || node.Value.Type == "Commander") && node != toBeRemoved && !enemiesCurrentlyShooting.Contains(node))
			bool L_29 = List_1_Contains_m3543675651(L_27, L_28, /*hidden argument*/List_1_Contains_m3543675651_RuntimeMethod_var);
			if (L_29)
			{
				goto IL_00c5;
			}
		}

IL_00a1:
		{
			// enemiesCurrentlyShooting.Add(node);
			List_1_t2784210590 * L_30 = __this->get_enemiesCurrentlyShooting_10();
			EnemyNode_1_t1312135848 * L_31 = V_1;
			// enemiesCurrentlyShooting.Add(node);
			List_1_Add_m6361519(L_30, L_31, /*hidden argument*/List_1_Add_m6361519_RuntimeMethod_var);
			// enemyShootEvent.Invoke(node.Value.id);
			EnemyShoot_t243830779 * L_32 = __this->get_enemyShootEvent_9();
			EnemyNode_1_t1312135848 * L_33 = V_1;
			// enemyShootEvent.Invoke(node.Value.id);
			Enemy_t1765729589 * L_34 = EnemyNode_1_get_Value_m854677982(L_33, /*hidden argument*/EnemyNode_1_get_Value_m854677982_RuntimeMethod_var);
			int32_t L_35 = L_34->get_id_6();
			// enemyShootEvent.Invoke(node.Value.id);
			UnityEvent_1_Invoke_m3604335408(L_32, L_35, /*hidden argument*/UnityEvent_1_Invoke_m3604335408_RuntimeMethod_var);
		}

IL_00c5:
		{
		}

IL_00c6:
		{
		}

IL_00c7:
		{
			RuntimeObject* L_36 = V_2;
			// foreach (EnemyNode<Enemy> node in enemyGraph.Nodes)
			bool L_37 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_36);
			if (L_37)
			{
				goto IL_0023;
			}
		}

IL_00d2:
		{
			IL2CPP_LEAVE(0xE4, FINALLY_00d7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d7;
	}

FINALLY_00d7:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_38 = V_2;
			if (!L_38)
			{
				goto IL_00e3;
			}
		}

IL_00dd:
		{
			RuntimeObject* L_39 = V_2;
			// foreach (EnemyNode<Enemy> node in enemyGraph.Nodes)
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_39);
		}

IL_00e3:
		{
			IL2CPP_END_FINALLY(215)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(215)
	{
		IL2CPP_JUMP_TBL(0xE4, IL_00e4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00e4:
	{
		// toBeRemoved.RemoveAllNeighbors();
		EnemyNode_1_t1312135848 * L_40 = V_0;
		// toBeRemoved.RemoveAllNeighbors();
		EnemyNode_1_RemoveAllNeighbors_m2037517301(L_40, /*hidden argument*/EnemyNode_1_RemoveAllNeighbors_m2037517301_RuntimeMethod_var);
		// enemyGraph.RemoveNode(toBeRemoved.Value);
		EnemyGraph_1_t514571901 * L_41 = ((EnemyGraphBuilder_t3679222799_StaticFields*)il2cpp_codegen_static_fields_for(EnemyGraphBuilder_t3679222799_il2cpp_TypeInfo_var))->get_enemyGraph_8();
		EnemyNode_1_t1312135848 * L_42 = V_0;
		// enemyGraph.RemoveNode(toBeRemoved.Value);
		Enemy_t1765729589 * L_43 = EnemyNode_1_get_Value_m854677982(L_42, /*hidden argument*/EnemyNode_1_get_Value_m854677982_RuntimeMethod_var);
		// enemyGraph.RemoveNode(toBeRemoved.Value);
		EnemyGraph_1_RemoveNode_m2145224796(L_41, L_43, /*hidden argument*/EnemyGraph_1_RemoveNode_m2145224796_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void EnemyGraphBuilder::AddEnemyShootListener(UnityEngine.Events.UnityAction`1<System.Int32>)
extern "C"  void EnemyGraphBuilder_AddEnemyShootListener_m2521104292 (EnemyGraphBuilder_t3679222799 * __this, UnityAction_1_t3535781894 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyGraphBuilder_AddEnemyShootListener_m2521104292_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemyShootEvent.AddListener(listener);
		EnemyShoot_t243830779 * L_0 = __this->get_enemyShootEvent_9();
		UnityAction_1_t3535781894 * L_1 = ___listener0;
		// enemyShootEvent.AddListener(listener);
		UnityEvent_1_AddListener_m3158408092(L_0, L_1, /*hidden argument*/UnityEvent_1_AddListener_m3158408092_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void EnemyGraphBuilder::AddAllEnemiesdeadListener(UnityEngine.Events.UnityAction)
extern "C"  void EnemyGraphBuilder_AddAllEnemiesdeadListener_m3945695841 (EnemyGraphBuilder_t3679222799 * __this, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method)
{
	{
		// allEnemiesDeadEvent.AddListener(listener);
		AllEnemiesDead_t1977689189 * L_0 = __this->get_allEnemiesDeadEvent_11();
		UnityAction_t3245792599 * L_1 = ___listener0;
		// allEnemiesDeadEvent.AddListener(listener);
		UnityEvent_AddListener_m2276267359(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyGraphBuilder::AddGameWinListener(UnityEngine.Events.UnityAction)
extern "C"  void EnemyGraphBuilder_AddGameWinListener_m2618743060 (EnemyGraphBuilder_t3679222799 * __this, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method)
{
	{
		// gameWinEvent.AddListener(listener);
		GameWin_t775063857 * L_0 = __this->get_gameWinEvent_12();
		UnityAction_t3245792599 * L_1 = ___listener0;
		// gameWinEvent.AddListener(listener);
		UnityEvent_AddListener_m2276267359(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemyMove::.ctor()
extern "C"  void EnemyMove__ctor_m140768884 (EnemyMove_t2177327048 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyMove__ctor_m140768884_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m1630793919(__this, /*hidden argument*/UnityEvent_1__ctor_m1630793919_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemyMovementManager::.ctor()
extern "C"  void EnemyMovementManager__ctor_m1975033658 (EnemyMovementManager_t568016177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyMovementManager__ctor_m1975033658_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EnemyMove enemyMoveEvent = new EnemyMove();
		EnemyMove_t2177327048 * L_0 = (EnemyMove_t2177327048 *)il2cpp_codegen_object_new(EnemyMove_t2177327048_il2cpp_TypeInfo_var);
		EnemyMove__ctor_m140768884(L_0, /*hidden argument*/NULL);
		__this->set_enemyMoveEvent_2(L_0);
		// int numberOfMoves = 0;
		__this->set_numberOfMoves_3(0);
		// bool okToMove = true;
		__this->set_okToMove_4((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyMovementManager::Start()
extern "C"  void EnemyMovementManager_Start_m3348018426 (EnemyMovementManager_t568016177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyMovementManager_Start_m3348018426_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BuildMovement();
		// BuildMovement();
		EnemyMovementManager_BuildMovement_m2264769216(__this, /*hidden argument*/NULL);
		// EventManager.AddEnemyMoveInvoker(this);
		// EventManager.AddEnemyMoveInvoker(this);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		EventManager_AddEnemyMoveInvoker_m1104154367(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		// EventManager.AddChangeLevelListener(BuildMovement);
		intptr_t L_0 = (intptr_t)EnemyMovementManager_BuildMovement_m2264769216_RuntimeMethod_var;
		UnityAction_t3245792599 * L_1 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_1, __this, L_0, /*hidden argument*/NULL);
		// EventManager.AddChangeLevelListener(BuildMovement);
		EventManager_AddChangeLevelListener_m2308153550(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// InvokeRepeating("Move", Constants.EnemyReadyClock, Constants.EnemyReadyClock);
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t701097383_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_EnemyReadyClock_11();
		int32_t L_3 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_EnemyReadyClock_11();
		// InvokeRepeating("Move", Constants.EnemyReadyClock, Constants.EnemyReadyClock);
		MonoBehaviour_InvokeRepeating_m650519629(__this, _stringLiteral2435509343, (((float)((float)L_2))), (((float)((float)L_3))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyMovementManager::Update()
extern "C"  void EnemyMovementManager_Update_m420365870 (EnemyMovementManager_t568016177 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void EnemyMovementManager::OKToMove(System.Boolean)
extern "C"  void EnemyMovementManager_OKToMove_m2087852251 (EnemyMovementManager_t568016177 * __this, bool ___enemyReady0, const RuntimeMethod* method)
{
	{
		// okToMove = enemyReady;
		bool L_0 = ___enemyReady0;
		__this->set_okToMove_4(L_0);
		// }
		return;
	}
}
// System.Void EnemyMovementManager::Move()
extern "C"  void EnemyMovementManager_Move_m761072713 (EnemyMovementManager_t568016177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyMovementManager_Move_m761072713_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(moveRight.Contains(numberOfMoves))
		List_1_t128053199 * L_0 = __this->get_moveRight_5();
		int32_t L_1 = __this->get_numberOfMoves_3();
		// if(moveRight.Contains(numberOfMoves))
		bool L_2 = List_1_Contains_m2263725670(L_0, L_1, /*hidden argument*/List_1_Contains_m2263725670_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// enemyMoveEvent.Invoke(EnemyMovements.Right);
		EnemyMove_t2177327048 * L_3 = __this->get_enemyMoveEvent_2();
		// enemyMoveEvent.Invoke(EnemyMovements.Right);
		UnityEvent_1_Invoke_m3449286906(L_3, 0, /*hidden argument*/UnityEvent_1_Invoke_m3449286906_RuntimeMethod_var);
		goto IL_0061;
	}

IL_002a:
	{
		// else if(moveLeft.Contains(numberOfMoves))
		List_1_t128053199 * L_4 = __this->get_moveLeft_6();
		int32_t L_5 = __this->get_numberOfMoves_3();
		// else if(moveLeft.Contains(numberOfMoves))
		bool L_6 = List_1_Contains_m2263725670(L_4, L_5, /*hidden argument*/List_1_Contains_m2263725670_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		// enemyMoveEvent.Invoke(EnemyMovements.Left);
		EnemyMove_t2177327048 * L_7 = __this->get_enemyMoveEvent_2();
		// enemyMoveEvent.Invoke(EnemyMovements.Left);
		UnityEvent_1_Invoke_m3449286906(L_7, 1, /*hidden argument*/UnityEvent_1_Invoke_m3449286906_RuntimeMethod_var);
		goto IL_0061;
	}

IL_0053:
	{
		// enemyMoveEvent.Invoke(EnemyMovements.Vertical);
		EnemyMove_t2177327048 * L_8 = __this->get_enemyMoveEvent_2();
		// enemyMoveEvent.Invoke(EnemyMovements.Vertical);
		UnityEvent_1_Invoke_m3449286906(L_8, 2, /*hidden argument*/UnityEvent_1_Invoke_m3449286906_RuntimeMethod_var);
	}

IL_0061:
	{
		// numberOfMoves++;
		int32_t L_9 = __this->get_numberOfMoves_3();
		__this->set_numberOfMoves_3(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		// }
		return;
	}
}
// System.Void EnemyMovementManager::BuildMovement()
extern "C"  void EnemyMovementManager_BuildMovement_m2264769216 (EnemyMovementManager_t568016177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyMovementManager_BuildMovement_m2264769216_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t2348375561  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Scene_t2348375561  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// moveRight = new List<int>();
		// moveRight = new List<int>();
		List_1_t128053199 * L_0 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
		List_1__ctor_m1628857705(L_0, /*hidden argument*/List_1__ctor_m1628857705_RuntimeMethod_var);
		__this->set_moveRight_5(L_0);
		// moveLeft = new List<int>();
		// moveLeft = new List<int>();
		List_1_t128053199 * L_1 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
		List_1__ctor_m1628857705(L_1, /*hidden argument*/List_1__ctor_m1628857705_RuntimeMethod_var);
		__this->set_moveLeft_6(L_1);
		// if(SceneManager.GetActiveScene().name.Equals("Level1"))
		Scene_t2348375561  L_2 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		// if(SceneManager.GetActiveScene().name.Equals("Level1"))
		String_t* L_3 = Scene_get_name_m622963475((Scene_t2348375561 *)(&V_0), /*hidden argument*/NULL);
		// if(SceneManager.GetActiveScene().name.Equals("Level1"))
		bool L_4 = String_Equals_m2270643605(L_3, _stringLiteral1233824162, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00b2;
		}
	}
	{
		// moveRight.Clear();
		List_1_t128053199 * L_5 = __this->get_moveRight_5();
		// moveRight.Clear();
		List_1_Clear_m2154023298(L_5, /*hidden argument*/List_1_Clear_m2154023298_RuntimeMethod_var);
		// moveLeft.Clear();
		List_1_t128053199 * L_6 = __this->get_moveLeft_6();
		// moveLeft.Clear();
		List_1_Clear_m2154023298(L_6, /*hidden argument*/List_1_Clear_m2154023298_RuntimeMethod_var);
		// moveRight.Add(0);
		List_1_t128053199 * L_7 = __this->get_moveRight_5();
		// moveRight.Add(0);
		List_1_Add_m697420525(L_7, 0, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		// moveRight.Add(1);
		List_1_t128053199 * L_8 = __this->get_moveRight_5();
		// moveRight.Add(1);
		List_1_Add_m697420525(L_8, 1, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		// moveRight.Add(6);
		List_1_t128053199 * L_9 = __this->get_moveRight_5();
		// moveRight.Add(6);
		List_1_Add_m697420525(L_9, 6, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		// moveRight.Add(7);
		List_1_t128053199 * L_10 = __this->get_moveRight_5();
		// moveRight.Add(7);
		List_1_Add_m697420525(L_10, 7, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		// moveLeft.Add(3);
		List_1_t128053199 * L_11 = __this->get_moveLeft_6();
		// moveLeft.Add(3);
		List_1_Add_m697420525(L_11, 3, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		// moveLeft.Add(4);
		List_1_t128053199 * L_12 = __this->get_moveLeft_6();
		// moveLeft.Add(4);
		List_1_Add_m697420525(L_12, 4, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		// moveLeft.Add(9);
		List_1_t128053199 * L_13 = __this->get_moveLeft_6();
		// moveLeft.Add(9);
		List_1_Add_m697420525(L_13, ((int32_t)9), /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		// moveLeft.Add(10);
		List_1_t128053199 * L_14 = __this->get_moveLeft_6();
		// moveLeft.Add(10);
		List_1_Add_m697420525(L_14, ((int32_t)10), /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		goto IL_0116;
	}

IL_00b2:
	{
		// else if(SceneManager.GetActiveScene().name.Equals("Level2"))
		Scene_t2348375561  L_15 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_15;
		// else if(SceneManager.GetActiveScene().name.Equals("Level2"))
		String_t* L_16 = Scene_get_name_m622963475((Scene_t2348375561 *)(&V_1), /*hidden argument*/NULL);
		// else if(SceneManager.GetActiveScene().name.Equals("Level2"))
		bool L_17 = String_Equals_m2270643605(L_16, _stringLiteral1234020770, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0116;
		}
	}
	{
		// moveRight.Clear();
		List_1_t128053199 * L_18 = __this->get_moveRight_5();
		// moveRight.Clear();
		List_1_Clear_m2154023298(L_18, /*hidden argument*/List_1_Clear_m2154023298_RuntimeMethod_var);
		// moveLeft.Clear();
		List_1_t128053199 * L_19 = __this->get_moveLeft_6();
		// moveLeft.Clear();
		List_1_Clear_m2154023298(L_19, /*hidden argument*/List_1_Clear_m2154023298_RuntimeMethod_var);
		// moveRight.Add(0);
		List_1_t128053199 * L_20 = __this->get_moveRight_5();
		// moveRight.Add(0);
		List_1_Add_m697420525(L_20, 0, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		// moveRight.Add(2);
		List_1_t128053199 * L_21 = __this->get_moveRight_5();
		// moveRight.Add(2);
		List_1_Add_m697420525(L_21, 2, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		// moveLeft.Add(4);
		List_1_t128053199 * L_22 = __this->get_moveLeft_6();
		// moveLeft.Add(4);
		List_1_Add_m697420525(L_22, 4, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		// moveLeft.Add(6);
		List_1_t128053199 * L_23 = __this->get_moveLeft_6();
		// moveLeft.Add(6);
		List_1_Add_m697420525(L_23, 6, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
	}

IL_0116:
	{
		// }
		return;
	}
}
// System.Void EnemyMovementManager::AddEnemyMoveListener(UnityEngine.Events.UnityAction`1<EnemyMovements>)
extern "C"  void EnemyMovementManager_AddEnemyMoveListener_m279179560 (EnemyMovementManager_t568016177 * __this, UnityAction_1_t3524528990 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyMovementManager_AddEnemyMoveListener_m279179560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemyMoveEvent.AddListener(listener);
		EnemyMove_t2177327048 * L_0 = __this->get_enemyMoveEvent_2();
		UnityAction_1_t3524528990 * L_1 = ___listener0;
		// enemyMoveEvent.AddListener(listener);
		UnityEvent_1_AddListener_m2373938285(L_0, L_1, /*hidden argument*/UnityEvent_1_AddListener_m2373938285_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemyReady::.ctor()
extern "C"  void EnemyReady__ctor_m929021895 (EnemyReady_t749052965 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyReady__ctor_m929021895_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m3777630589(__this, /*hidden argument*/UnityEvent_1__ctor_m3777630589_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemyShoot::.ctor()
extern "C"  void EnemyShoot__ctor_m1274202978 (EnemyShoot_t243830779 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyShoot__ctor_m1274202978_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m3816765192(__this, /*hidden argument*/UnityEvent_1__ctor_m3816765192_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EventManager::AddPlayerShootInvoker(Player)
extern "C"  void EventManager_AddPlayerShootInvoker_m628552642 (RuntimeObject * __this /* static, unused */, Player_t3266647312 * ___invoker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddPlayerShootInvoker_m628552642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_2_t1857133811 * V_0 = NULL;
	Enumerator_t923485134  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// playerShootInvokers.Add(invoker);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t443754758 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_playerShootInvokers_0();
		Player_t3266647312 * L_1 = ___invoker0;
		// playerShootInvokers.Add(invoker);
		List_1_Add_m1166605055(L_0, L_1, /*hidden argument*/List_1_Add_m1166605055_RuntimeMethod_var);
		// foreach(UnityAction<Vector3, Characters> listener in playerShootListeners)
		List_1_t3329208553 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_playerShootListeners_1();
		// foreach(UnityAction<Vector3, Characters> listener in playerShootListeners)
		Enumerator_t923485134  L_3 = List_1_GetEnumerator_m2876168057(L_2, /*hidden argument*/List_1_GetEnumerator_m2876168057_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach(UnityAction<Vector3, Characters> listener in playerShootListeners)
			// foreach(UnityAction<Vector3, Characters> listener in playerShootListeners)
			UnityAction_2_t1857133811 * L_4 = Enumerator_get_Current_m504749272((Enumerator_t923485134 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m504749272_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddPlayerShootListener(listener);
			Player_t3266647312 * L_5 = ___invoker0;
			UnityAction_2_t1857133811 * L_6 = V_0;
			// invoker.AddPlayerShootListener(listener);
			Player_AddPlayerShootListener_m1115830263(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach(UnityAction<Vector3, Characters> listener in playerShootListeners)
			bool L_7 = Enumerator_MoveNext_m4045413164((Enumerator_t923485134 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m4045413164_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach(UnityAction<Vector3, Characters> listener in playerShootListeners)
		Enumerator_Dispose_m1728194597((Enumerator_t923485134 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m1728194597_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddPlayerShootListener(UnityEngine.Events.UnityAction`2<UnityEngine.Vector3,Characters>)
extern "C"  void EventManager_AddPlayerShootListener_m2748103306 (RuntimeObject * __this /* static, unused */, UnityAction_2_t1857133811 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddPlayerShootListener_m2748103306_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Player_t3266647312 * V_0 = NULL;
	Enumerator_t2332998635  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// playerShootListeners.Add(listener);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t3329208553 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_playerShootListeners_1();
		UnityAction_2_t1857133811 * L_1 = ___listener0;
		// playerShootListeners.Add(listener);
		List_1_Add_m180231583(L_0, L_1, /*hidden argument*/List_1_Add_m180231583_RuntimeMethod_var);
		// foreach(Player invoker in playerShootInvokers)
		List_1_t443754758 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_playerShootInvokers_0();
		// foreach(Player invoker in playerShootInvokers)
		Enumerator_t2332998635  L_3 = List_1_GetEnumerator_m1309886926(L_2, /*hidden argument*/List_1_GetEnumerator_m1309886926_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach(Player invoker in playerShootInvokers)
			// foreach(Player invoker in playerShootInvokers)
			Player_t3266647312 * L_4 = Enumerator_get_Current_m292849492((Enumerator_t2332998635 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m292849492_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddPlayerShootListener(listener);
			Player_t3266647312 * L_5 = V_0;
			UnityAction_2_t1857133811 * L_6 = ___listener0;
			// invoker.AddPlayerShootListener(listener);
			Player_AddPlayerShootListener_m1115830263(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach(Player invoker in playerShootInvokers)
			bool L_7 = Enumerator_MoveNext_m2560389903((Enumerator_t2332998635 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2560389903_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach(Player invoker in playerShootInvokers)
		Enumerator_Dispose_m1700708725((Enumerator_t2332998635 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m1700708725_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddEnemyDeadInvoker(Enemy)
extern "C"  void EventManager_AddEnemyDeadInvoker_m4263453055 (RuntimeObject * __this /* static, unused */, Enemy_t1765729589 * ___invoker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddEnemyDeadInvoker_m4263453055_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_2_t2317559471 * V_0 = NULL;
	Enumerator_t1383910794  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// enemyDeadInvokers.Add(invoker);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t3237804331 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_enemyDeadInvokers_2();
		Enemy_t1765729589 * L_1 = ___invoker0;
		// enemyDeadInvokers.Add(invoker);
		List_1_Add_m3099710085(L_0, L_1, /*hidden argument*/List_1_Add_m3099710085_RuntimeMethod_var);
		// foreach (UnityAction<Enemy, int> listener in enemyDeadListeners)
		List_1_t3789634213 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_enemyDeadListeners_3();
		// foreach (UnityAction<Enemy, int> listener in enemyDeadListeners)
		Enumerator_t1383910794  L_3 = List_1_GetEnumerator_m2737121052(L_2, /*hidden argument*/List_1_GetEnumerator_m2737121052_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach (UnityAction<Enemy, int> listener in enemyDeadListeners)
			// foreach (UnityAction<Enemy, int> listener in enemyDeadListeners)
			UnityAction_2_t2317559471 * L_4 = Enumerator_get_Current_m819868031((Enumerator_t1383910794 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m819868031_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddEnemyDeadListener(listener);
			Enemy_t1765729589 * L_5 = ___invoker0;
			UnityAction_2_t2317559471 * L_6 = V_0;
			// invoker.AddEnemyDeadListener(listener);
			Enemy_AddEnemyDeadListener_m3032586755(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (UnityAction<Enemy, int> listener in enemyDeadListeners)
			bool L_7 = Enumerator_MoveNext_m1336153447((Enumerator_t1383910794 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m1336153447_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach (UnityAction<Enemy, int> listener in enemyDeadListeners)
		Enumerator_Dispose_m3708720284((Enumerator_t1383910794 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3708720284_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddEnemyDeadListener(UnityEngine.Events.UnityAction`2<Enemy,System.Int32>)
extern "C"  void EventManager_AddEnemyDeadListener_m1380855738 (RuntimeObject * __this /* static, unused */, UnityAction_2_t2317559471 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddEnemyDeadListener_m1380855738_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enemy_t1765729589 * V_0 = NULL;
	Enumerator_t832080912  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// enemyDeadListeners.Add(listener);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t3789634213 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_enemyDeadListeners_3();
		UnityAction_2_t2317559471 * L_1 = ___listener0;
		// enemyDeadListeners.Add(listener);
		List_1_Add_m265676858(L_0, L_1, /*hidden argument*/List_1_Add_m265676858_RuntimeMethod_var);
		// foreach (Enemy invoker in enemyDeadInvokers)
		List_1_t3237804331 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_enemyDeadInvokers_2();
		// foreach (Enemy invoker in enemyDeadInvokers)
		Enumerator_t832080912  L_3 = List_1_GetEnumerator_m2721116048(L_2, /*hidden argument*/List_1_GetEnumerator_m2721116048_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach (Enemy invoker in enemyDeadInvokers)
			// foreach (Enemy invoker in enemyDeadInvokers)
			Enemy_t1765729589 * L_4 = Enumerator_get_Current_m3193589029((Enumerator_t832080912 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3193589029_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddEnemyDeadListener(listener);
			Enemy_t1765729589 * L_5 = V_0;
			UnityAction_2_t2317559471 * L_6 = ___listener0;
			// invoker.AddEnemyDeadListener(listener);
			Enemy_AddEnemyDeadListener_m3032586755(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (Enemy invoker in enemyDeadInvokers)
			bool L_7 = Enumerator_MoveNext_m78709395((Enumerator_t832080912 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m78709395_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach (Enemy invoker in enemyDeadInvokers)
		Enumerator_Dispose_m2306102398((Enumerator_t832080912 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m2306102398_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddEnemyMoveInvoker(EnemyMovementManager)
extern "C"  void EventManager_AddEnemyMoveInvoker_m1104154367 (RuntimeObject * __this /* static, unused */, EnemyMovementManager_t568016177 * ___invoker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddEnemyMoveInvoker_m1104154367_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_1_t3524528990 * V_0 = NULL;
	Enumerator_t2590880313  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// enemyMoveInvokers.Add(invoker);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t2040090919 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_enemyMoveInvokers_4();
		EnemyMovementManager_t568016177 * L_1 = ___invoker0;
		// enemyMoveInvokers.Add(invoker);
		List_1_Add_m795866590(L_0, L_1, /*hidden argument*/List_1_Add_m795866590_RuntimeMethod_var);
		// foreach (UnityAction<EnemyMovements> listener in enemyMoveListeners)
		List_1_t701636436 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_enemyMoveListeners_5();
		// foreach (UnityAction<EnemyMovements> listener in enemyMoveListeners)
		Enumerator_t2590880313  L_3 = List_1_GetEnumerator_m524926328(L_2, /*hidden argument*/List_1_GetEnumerator_m524926328_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach (UnityAction<EnemyMovements> listener in enemyMoveListeners)
			// foreach (UnityAction<EnemyMovements> listener in enemyMoveListeners)
			UnityAction_1_t3524528990 * L_4 = Enumerator_get_Current_m1917494879((Enumerator_t2590880313 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m1917494879_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddEnemyMoveListener(listener);
			EnemyMovementManager_t568016177 * L_5 = ___invoker0;
			UnityAction_1_t3524528990 * L_6 = V_0;
			// invoker.AddEnemyMoveListener(listener);
			EnemyMovementManager_AddEnemyMoveListener_m279179560(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (UnityAction<EnemyMovements> listener in enemyMoveListeners)
			bool L_7 = Enumerator_MoveNext_m2170042991((Enumerator_t2590880313 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2170042991_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach (UnityAction<EnemyMovements> listener in enemyMoveListeners)
		Enumerator_Dispose_m4074715281((Enumerator_t2590880313 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m4074715281_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddEnemyMoveListener(UnityEngine.Events.UnityAction`1<EnemyMovements>)
extern "C"  void EventManager_AddEnemyMoveListener_m248040199 (RuntimeObject * __this /* static, unused */, UnityAction_1_t3524528990 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddEnemyMoveListener_m248040199_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EnemyMovementManager_t568016177 * V_0 = NULL;
	Enumerator_t3929334796  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// enemyMoveListeners.Add(listener);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t701636436 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_enemyMoveListeners_5();
		UnityAction_1_t3524528990 * L_1 = ___listener0;
		// enemyMoveListeners.Add(listener);
		List_1_Add_m1239235046(L_0, L_1, /*hidden argument*/List_1_Add_m1239235046_RuntimeMethod_var);
		// foreach (EnemyMovementManager invoker in enemyMoveInvokers)
		List_1_t2040090919 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_enemyMoveInvokers_4();
		// foreach (EnemyMovementManager invoker in enemyMoveInvokers)
		Enumerator_t3929334796  L_3 = List_1_GetEnumerator_m772517586(L_2, /*hidden argument*/List_1_GetEnumerator_m772517586_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach (EnemyMovementManager invoker in enemyMoveInvokers)
			// foreach (EnemyMovementManager invoker in enemyMoveInvokers)
			EnemyMovementManager_t568016177 * L_4 = Enumerator_get_Current_m3880894684((Enumerator_t3929334796 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3880894684_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddEnemyMoveListener(listener);
			EnemyMovementManager_t568016177 * L_5 = V_0;
			UnityAction_1_t3524528990 * L_6 = ___listener0;
			// invoker.AddEnemyMoveListener(listener);
			EnemyMovementManager_AddEnemyMoveListener_m279179560(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (EnemyMovementManager invoker in enemyMoveInvokers)
			bool L_7 = Enumerator_MoveNext_m447620283((Enumerator_t3929334796 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m447620283_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach (EnemyMovementManager invoker in enemyMoveInvokers)
		Enumerator_Dispose_m2242910240((Enumerator_t3929334796 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m2242910240_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddEnemyShootInvoker(EnemyGraphBuilder)
extern "C"  void EventManager_AddEnemyShootInvoker_m800474143 (RuntimeObject * __this /* static, unused */, EnemyGraphBuilder_t3679222799 * ___invoker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddEnemyShootInvoker_m800474143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_1_t3535781894 * V_0 = NULL;
	Enumerator_t2602133217  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// enemyShootInvokers.Add(invoker);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t856330245 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_enemyShootInvokers_6();
		EnemyGraphBuilder_t3679222799 * L_1 = ___invoker0;
		// enemyShootInvokers.Add(invoker);
		List_1_Add_m4256644050(L_0, L_1, /*hidden argument*/List_1_Add_m4256644050_RuntimeMethod_var);
		// foreach (UnityAction<int> listener in enemyShootListeners)
		List_1_t712889340 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_enemyShootListeners_7();
		// foreach (UnityAction<int> listener in enemyShootListeners)
		Enumerator_t2602133217  L_3 = List_1_GetEnumerator_m1528445380(L_2, /*hidden argument*/List_1_GetEnumerator_m1528445380_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach (UnityAction<int> listener in enemyShootListeners)
			// foreach (UnityAction<int> listener in enemyShootListeners)
			UnityAction_1_t3535781894 * L_4 = Enumerator_get_Current_m3223965356((Enumerator_t2602133217 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3223965356_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddEnemyShootListener(listener);
			EnemyGraphBuilder_t3679222799 * L_5 = ___invoker0;
			UnityAction_1_t3535781894 * L_6 = V_0;
			// invoker.AddEnemyShootListener(listener);
			EnemyGraphBuilder_AddEnemyShootListener_m2521104292(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (UnityAction<int> listener in enemyShootListeners)
			bool L_7 = Enumerator_MoveNext_m2286289861((Enumerator_t2602133217 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2286289861_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach (UnityAction<int> listener in enemyShootListeners)
		Enumerator_Dispose_m1583079528((Enumerator_t2602133217 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m1583079528_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddEnemyShootListener(UnityEngine.Events.UnityAction`1<System.Int32>)
extern "C"  void EventManager_AddEnemyShootListener_m299670043 (RuntimeObject * __this /* static, unused */, UnityAction_1_t3535781894 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddEnemyShootListener_m299670043_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EnemyGraphBuilder_t3679222799 * V_0 = NULL;
	Enumerator_t2745574122  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// enemyShootListeners.Add(listener);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t712889340 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_enemyShootListeners_7();
		UnityAction_1_t3535781894 * L_1 = ___listener0;
		// enemyShootListeners.Add(listener);
		List_1_Add_m3269965598(L_0, L_1, /*hidden argument*/List_1_Add_m3269965598_RuntimeMethod_var);
		// foreach (EnemyGraphBuilder invoker in enemyShootInvokers)
		List_1_t856330245 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_enemyShootInvokers_6();
		// foreach (EnemyGraphBuilder invoker in enemyShootInvokers)
		Enumerator_t2745574122  L_3 = List_1_GetEnumerator_m2207855688(L_2, /*hidden argument*/List_1_GetEnumerator_m2207855688_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach (EnemyGraphBuilder invoker in enemyShootInvokers)
			// foreach (EnemyGraphBuilder invoker in enemyShootInvokers)
			EnemyGraphBuilder_t3679222799 * L_4 = Enumerator_get_Current_m3736471016((Enumerator_t2745574122 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3736471016_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddEnemyShootListener(listener);
			EnemyGraphBuilder_t3679222799 * L_5 = V_0;
			UnityAction_1_t3535781894 * L_6 = ___listener0;
			// invoker.AddEnemyShootListener(listener);
			EnemyGraphBuilder_AddEnemyShootListener_m2521104292(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (EnemyGraphBuilder invoker in enemyShootInvokers)
			bool L_7 = Enumerator_MoveNext_m3492017894((Enumerator_t2745574122 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m3492017894_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach (EnemyGraphBuilder invoker in enemyShootInvokers)
		Enumerator_Dispose_m374448751((Enumerator_t2745574122 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m374448751_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddHurtInvokers(Projectile)
extern "C"  void EventManager_AddHurtInvokers_m2948630802 (RuntimeObject * __this /* static, unused */, Projectile_t1440994518 * ___invoker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddHurtInvokers_m2948630802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_1_t3535781894 * V_0 = NULL;
	Enumerator_t2602133217  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// hurtInvokers.Add(invoker);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t2913069260 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_hurtInvokers_8();
		Projectile_t1440994518 * L_1 = ___invoker0;
		// hurtInvokers.Add(invoker);
		List_1_Add_m1510553286(L_0, L_1, /*hidden argument*/List_1_Add_m1510553286_RuntimeMethod_var);
		// foreach (UnityAction<int> listener in hurtListeners)
		List_1_t712889340 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_hurtListeners_9();
		// foreach (UnityAction<int> listener in hurtListeners)
		Enumerator_t2602133217  L_3 = List_1_GetEnumerator_m1528445380(L_2, /*hidden argument*/List_1_GetEnumerator_m1528445380_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach (UnityAction<int> listener in hurtListeners)
			// foreach (UnityAction<int> listener in hurtListeners)
			UnityAction_1_t3535781894 * L_4 = Enumerator_get_Current_m3223965356((Enumerator_t2602133217 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3223965356_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddHurtListener(listener);
			Projectile_t1440994518 * L_5 = ___invoker0;
			UnityAction_1_t3535781894 * L_6 = V_0;
			// invoker.AddHurtListener(listener);
			Projectile_AddHurtListener_m3502376813(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (UnityAction<int> listener in hurtListeners)
			bool L_7 = Enumerator_MoveNext_m2286289861((Enumerator_t2602133217 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2286289861_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach (UnityAction<int> listener in hurtListeners)
		Enumerator_Dispose_m1583079528((Enumerator_t2602133217 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m1583079528_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddHurtListeners(UnityEngine.Events.UnityAction`1<System.Int32>)
extern "C"  void EventManager_AddHurtListeners_m2511215371 (RuntimeObject * __this /* static, unused */, UnityAction_1_t3535781894 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddHurtListeners_m2511215371_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Projectile_t1440994518 * V_0 = NULL;
	Enumerator_t507345841  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// hurtListeners.Add(listener);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t712889340 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_hurtListeners_9();
		UnityAction_1_t3535781894 * L_1 = ___listener0;
		// hurtListeners.Add(listener);
		List_1_Add_m3269965598(L_0, L_1, /*hidden argument*/List_1_Add_m3269965598_RuntimeMethod_var);
		// foreach (Projectile invoker in hurtInvokers)
		List_1_t2913069260 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_hurtInvokers_8();
		// foreach (Projectile invoker in hurtInvokers)
		Enumerator_t507345841  L_3 = List_1_GetEnumerator_m3410811909(L_2, /*hidden argument*/List_1_GetEnumerator_m3410811909_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach (Projectile invoker in hurtInvokers)
			// foreach (Projectile invoker in hurtInvokers)
			Projectile_t1440994518 * L_4 = Enumerator_get_Current_m2783283318((Enumerator_t507345841 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m2783283318_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddHurtListener(listener);
			Projectile_t1440994518 * L_5 = V_0;
			UnityAction_1_t3535781894 * L_6 = ___listener0;
			// invoker.AddHurtListener(listener);
			Projectile_AddHurtListener_m3502376813(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (Projectile invoker in hurtInvokers)
			bool L_7 = Enumerator_MoveNext_m3625746136((Enumerator_t507345841 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m3625746136_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach (Projectile invoker in hurtInvokers)
		Enumerator_Dispose_m1483808685((Enumerator_t507345841 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m1483808685_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddGameOverInvokers(HUD)
extern "C"  void EventManager_AddGameOverInvokers_m1177628869 (RuntimeObject * __this /* static, unused */, HUD_t2848727240 * ___invoker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddGameOverInvokers_m1177628869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_1_t3535781894 * V_0 = NULL;
	Enumerator_t2602133217  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// gameOverInvokers.Add(invoker);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t25834686 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_gameOverInvokers_10();
		HUD_t2848727240 * L_1 = ___invoker0;
		// gameOverInvokers.Add(invoker);
		List_1_Add_m3725185082(L_0, L_1, /*hidden argument*/List_1_Add_m3725185082_RuntimeMethod_var);
		// foreach (UnityAction<int> listener in gameOverListeners)
		List_1_t712889340 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_gameOverListeners_11();
		// foreach (UnityAction<int> listener in gameOverListeners)
		Enumerator_t2602133217  L_3 = List_1_GetEnumerator_m1528445380(L_2, /*hidden argument*/List_1_GetEnumerator_m1528445380_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach (UnityAction<int> listener in gameOverListeners)
			// foreach (UnityAction<int> listener in gameOverListeners)
			UnityAction_1_t3535781894 * L_4 = Enumerator_get_Current_m3223965356((Enumerator_t2602133217 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3223965356_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddGameOverListener(listener);
			HUD_t2848727240 * L_5 = ___invoker0;
			UnityAction_1_t3535781894 * L_6 = V_0;
			// invoker.AddGameOverListener(listener);
			HUD_AddGameOverListener_m2077170894(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (UnityAction<int> listener in gameOverListeners)
			bool L_7 = Enumerator_MoveNext_m2286289861((Enumerator_t2602133217 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2286289861_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach (UnityAction<int> listener in gameOverListeners)
		Enumerator_Dispose_m1583079528((Enumerator_t2602133217 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m1583079528_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddGameOverListeners(UnityEngine.Events.UnityAction`1<System.Int32>)
extern "C"  void EventManager_AddGameOverListeners_m2500187535 (RuntimeObject * __this /* static, unused */, UnityAction_1_t3535781894 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddGameOverListeners_m2500187535_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HUD_t2848727240 * V_0 = NULL;
	Enumerator_t1915078563  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// gameOverListeners.Add(listener);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t712889340 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_gameOverListeners_11();
		UnityAction_1_t3535781894 * L_1 = ___listener0;
		// gameOverListeners.Add(listener);
		List_1_Add_m3269965598(L_0, L_1, /*hidden argument*/List_1_Add_m3269965598_RuntimeMethod_var);
		// foreach (HUD invoker in gameOverInvokers)
		List_1_t25834686 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_gameOverInvokers_10();
		// foreach (HUD invoker in gameOverInvokers)
		Enumerator_t1915078563  L_3 = List_1_GetEnumerator_m3565223301(L_2, /*hidden argument*/List_1_GetEnumerator_m3565223301_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach (HUD invoker in gameOverInvokers)
			// foreach (HUD invoker in gameOverInvokers)
			HUD_t2848727240 * L_4 = Enumerator_get_Current_m3747609950((Enumerator_t1915078563 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3747609950_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddGameOverListener(listener);
			HUD_t2848727240 * L_5 = V_0;
			UnityAction_1_t3535781894 * L_6 = ___listener0;
			// invoker.AddGameOverListener(listener);
			HUD_AddGameOverListener_m2077170894(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (HUD invoker in gameOverInvokers)
			bool L_7 = Enumerator_MoveNext_m753713209((Enumerator_t1915078563 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m753713209_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach (HUD invoker in gameOverInvokers)
		Enumerator_Dispose_m3152480181((Enumerator_t1915078563 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3152480181_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddChangeLevelInvokers(MenuManager)
extern "C"  void EventManager_AddChangeLevelInvokers_m2654112070 (RuntimeObject * __this /* static, unused */, MenuManager_t2761117704 * ___invoker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddChangeLevelInvokers_m2654112070_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t3245792599 * V_0 = NULL;
	Enumerator_t2312143922  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// changeLevelInvokers.Add(invoker);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t4233192446 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_changeLevelInvokers_12();
		MenuManager_t2761117704 * L_1 = ___invoker0;
		// changeLevelInvokers.Add(invoker);
		List_1_Add_m3201442980(L_0, L_1, /*hidden argument*/List_1_Add_m3201442980_RuntimeMethod_var);
		// foreach (UnityAction listener in changeLevelListeners)
		List_1_t422900045 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_changeLevelListeners_13();
		// foreach (UnityAction listener in changeLevelListeners)
		Enumerator_t2312143922  L_3 = List_1_GetEnumerator_m1102057371(L_2, /*hidden argument*/List_1_GetEnumerator_m1102057371_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach (UnityAction listener in changeLevelListeners)
			// foreach (UnityAction listener in changeLevelListeners)
			UnityAction_t3245792599 * L_4 = Enumerator_get_Current_m163445187((Enumerator_t2312143922 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m163445187_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddChangeLevelListeners(listener);
			MenuManager_t2761117704 * L_5 = ___invoker0;
			UnityAction_t3245792599 * L_6 = V_0;
			// invoker.AddChangeLevelListeners(listener);
			MenuManager_AddChangeLevelListeners_m2760192545(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (UnityAction listener in changeLevelListeners)
			bool L_7 = Enumerator_MoveNext_m2661491481((Enumerator_t2312143922 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2661491481_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach (UnityAction listener in changeLevelListeners)
		Enumerator_Dispose_m2601112073((Enumerator_t2312143922 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m2601112073_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddChangeLevelListener(UnityEngine.Events.UnityAction)
extern "C"  void EventManager_AddChangeLevelListener_m2308153550 (RuntimeObject * __this /* static, unused */, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddChangeLevelListener_m2308153550_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MenuManager_t2761117704 * V_0 = NULL;
	Enumerator_t1827469027  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// changeLevelListeners.Add(listener);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t422900045 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_changeLevelListeners_13();
		UnityAction_t3245792599 * L_1 = ___listener0;
		// changeLevelListeners.Add(listener);
		List_1_Add_m2393690792(L_0, L_1, /*hidden argument*/List_1_Add_m2393690792_RuntimeMethod_var);
		// foreach (MenuManager invoker in changeLevelInvokers)
		List_1_t4233192446 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_changeLevelInvokers_12();
		// foreach (MenuManager invoker in changeLevelInvokers)
		Enumerator_t1827469027  L_3 = List_1_GetEnumerator_m2174501561(L_2, /*hidden argument*/List_1_GetEnumerator_m2174501561_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach (MenuManager invoker in changeLevelInvokers)
			// foreach (MenuManager invoker in changeLevelInvokers)
			MenuManager_t2761117704 * L_4 = Enumerator_get_Current_m3754399433((Enumerator_t1827469027 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3754399433_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddChangeLevelListeners(listener);
			MenuManager_t2761117704 * L_5 = V_0;
			UnityAction_t3245792599 * L_6 = ___listener0;
			// invoker.AddChangeLevelListeners(listener);
			MenuManager_AddChangeLevelListeners_m2760192545(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (MenuManager invoker in changeLevelInvokers)
			bool L_7 = Enumerator_MoveNext_m604781295((Enumerator_t1827469027 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m604781295_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach (MenuManager invoker in changeLevelInvokers)
		Enumerator_Dispose_m3402286335((Enumerator_t1827469027 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3402286335_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddAllEnemiesDeadInvokers(EnemyGraphBuilder)
extern "C"  void EventManager_AddAllEnemiesDeadInvokers_m2293543861 (RuntimeObject * __this /* static, unused */, EnemyGraphBuilder_t3679222799 * ___invoker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddAllEnemiesDeadInvokers_m2293543861_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t3245792599 * V_0 = NULL;
	Enumerator_t2312143922  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// allEnemiesDeadInvokers.Add(invoker);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t856330245 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_allEnemiesDeadInvokers_14();
		EnemyGraphBuilder_t3679222799 * L_1 = ___invoker0;
		// allEnemiesDeadInvokers.Add(invoker);
		List_1_Add_m4256644050(L_0, L_1, /*hidden argument*/List_1_Add_m4256644050_RuntimeMethod_var);
		// foreach (UnityAction listener in allEnemiesDeadListeners)
		List_1_t422900045 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_allEnemiesDeadListeners_15();
		// foreach (UnityAction listener in allEnemiesDeadListeners)
		Enumerator_t2312143922  L_3 = List_1_GetEnumerator_m1102057371(L_2, /*hidden argument*/List_1_GetEnumerator_m1102057371_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach (UnityAction listener in allEnemiesDeadListeners)
			// foreach (UnityAction listener in allEnemiesDeadListeners)
			UnityAction_t3245792599 * L_4 = Enumerator_get_Current_m163445187((Enumerator_t2312143922 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m163445187_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddAllEnemiesdeadListener(listener);
			EnemyGraphBuilder_t3679222799 * L_5 = ___invoker0;
			UnityAction_t3245792599 * L_6 = V_0;
			// invoker.AddAllEnemiesdeadListener(listener);
			EnemyGraphBuilder_AddAllEnemiesdeadListener_m3945695841(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (UnityAction listener in allEnemiesDeadListeners)
			bool L_7 = Enumerator_MoveNext_m2661491481((Enumerator_t2312143922 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2661491481_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach (UnityAction listener in allEnemiesDeadListeners)
		Enumerator_Dispose_m2601112073((Enumerator_t2312143922 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m2601112073_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddAllEnemiesDeadListeners(UnityEngine.Events.UnityAction)
extern "C"  void EventManager_AddAllEnemiesDeadListeners_m3112965797 (RuntimeObject * __this /* static, unused */, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddAllEnemiesDeadListeners_m3112965797_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EnemyGraphBuilder_t3679222799 * V_0 = NULL;
	Enumerator_t2745574122  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// allEnemiesDeadListeners.Add(listener);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t422900045 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_allEnemiesDeadListeners_15();
		UnityAction_t3245792599 * L_1 = ___listener0;
		// allEnemiesDeadListeners.Add(listener);
		List_1_Add_m2393690792(L_0, L_1, /*hidden argument*/List_1_Add_m2393690792_RuntimeMethod_var);
		// foreach (EnemyGraphBuilder invoker in allEnemiesDeadInvokers)
		List_1_t856330245 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_allEnemiesDeadInvokers_14();
		// foreach (EnemyGraphBuilder invoker in allEnemiesDeadInvokers)
		Enumerator_t2745574122  L_3 = List_1_GetEnumerator_m2207855688(L_2, /*hidden argument*/List_1_GetEnumerator_m2207855688_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach (EnemyGraphBuilder invoker in allEnemiesDeadInvokers)
			// foreach (EnemyGraphBuilder invoker in allEnemiesDeadInvokers)
			EnemyGraphBuilder_t3679222799 * L_4 = Enumerator_get_Current_m3736471016((Enumerator_t2745574122 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3736471016_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddAllEnemiesdeadListener(listener);
			EnemyGraphBuilder_t3679222799 * L_5 = V_0;
			UnityAction_t3245792599 * L_6 = ___listener0;
			// invoker.AddAllEnemiesdeadListener(listener);
			EnemyGraphBuilder_AddAllEnemiesdeadListener_m3945695841(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (EnemyGraphBuilder invoker in allEnemiesDeadInvokers)
			bool L_7 = Enumerator_MoveNext_m3492017894((Enumerator_t2745574122 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m3492017894_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach (EnemyGraphBuilder invoker in allEnemiesDeadInvokers)
		Enumerator_Dispose_m374448751((Enumerator_t2745574122 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m374448751_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddGameWinInvokers(EnemyGraphBuilder)
extern "C"  void EventManager_AddGameWinInvokers_m2102898517 (RuntimeObject * __this /* static, unused */, EnemyGraphBuilder_t3679222799 * ___invoker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddGameWinInvokers_m2102898517_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t3245792599 * V_0 = NULL;
	Enumerator_t2312143922  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// gameWinInvokers.Add(invoker);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t856330245 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_gameWinInvokers_16();
		EnemyGraphBuilder_t3679222799 * L_1 = ___invoker0;
		// gameWinInvokers.Add(invoker);
		List_1_Add_m4256644050(L_0, L_1, /*hidden argument*/List_1_Add_m4256644050_RuntimeMethod_var);
		// foreach (UnityAction listener in gameWinListeners)
		List_1_t422900045 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_gameWinListeners_17();
		// foreach (UnityAction listener in gameWinListeners)
		Enumerator_t2312143922  L_3 = List_1_GetEnumerator_m1102057371(L_2, /*hidden argument*/List_1_GetEnumerator_m1102057371_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach (UnityAction listener in gameWinListeners)
			// foreach (UnityAction listener in gameWinListeners)
			UnityAction_t3245792599 * L_4 = Enumerator_get_Current_m163445187((Enumerator_t2312143922 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m163445187_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddGameWinListener(listener);
			EnemyGraphBuilder_t3679222799 * L_5 = ___invoker0;
			UnityAction_t3245792599 * L_6 = V_0;
			// invoker.AddGameWinListener(listener);
			EnemyGraphBuilder_AddGameWinListener_m2618743060(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (UnityAction listener in gameWinListeners)
			bool L_7 = Enumerator_MoveNext_m2661491481((Enumerator_t2312143922 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2661491481_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach (UnityAction listener in gameWinListeners)
		Enumerator_Dispose_m2601112073((Enumerator_t2312143922 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m2601112073_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddGameWinListeners(UnityEngine.Events.UnityAction)
extern "C"  void EventManager_AddGameWinListeners_m1916835654 (RuntimeObject * __this /* static, unused */, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddGameWinListeners_m1916835654_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EnemyGraphBuilder_t3679222799 * V_0 = NULL;
	Enumerator_t2745574122  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// gameWinListeners.Add(listener);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t422900045 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_gameWinListeners_17();
		UnityAction_t3245792599 * L_1 = ___listener0;
		// gameWinListeners.Add(listener);
		List_1_Add_m2393690792(L_0, L_1, /*hidden argument*/List_1_Add_m2393690792_RuntimeMethod_var);
		// foreach (EnemyGraphBuilder invoker in gameWinInvokers)
		List_1_t856330245 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_gameWinInvokers_16();
		// foreach (EnemyGraphBuilder invoker in gameWinInvokers)
		Enumerator_t2745574122  L_3 = List_1_GetEnumerator_m2207855688(L_2, /*hidden argument*/List_1_GetEnumerator_m2207855688_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach (EnemyGraphBuilder invoker in gameWinInvokers)
			// foreach (EnemyGraphBuilder invoker in gameWinInvokers)
			EnemyGraphBuilder_t3679222799 * L_4 = Enumerator_get_Current_m3736471016((Enumerator_t2745574122 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3736471016_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddGameWinListener(listener);
			EnemyGraphBuilder_t3679222799 * L_5 = V_0;
			UnityAction_t3245792599 * L_6 = ___listener0;
			// invoker.AddGameWinListener(listener);
			EnemyGraphBuilder_AddGameWinListener_m2618743060(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (EnemyGraphBuilder invoker in gameWinInvokers)
			bool L_7 = Enumerator_MoveNext_m3492017894((Enumerator_t2745574122 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m3492017894_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach (EnemyGraphBuilder invoker in gameWinInvokers)
		Enumerator_Dispose_m374448751((Enumerator_t2745574122 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m374448751_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddResetPlayerHealthInvokers(MenuManager)
extern "C"  void EventManager_AddResetPlayerHealthInvokers_m1866287769 (RuntimeObject * __this /* static, unused */, MenuManager_t2761117704 * ___invoker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddResetPlayerHealthInvokers_m1866287769_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t3245792599 * V_0 = NULL;
	Enumerator_t2312143922  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// resetPlayerHealthInvokers.Add(invoker);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t4233192446 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_resetPlayerHealthInvokers_18();
		MenuManager_t2761117704 * L_1 = ___invoker0;
		// resetPlayerHealthInvokers.Add(invoker);
		List_1_Add_m3201442980(L_0, L_1, /*hidden argument*/List_1_Add_m3201442980_RuntimeMethod_var);
		// foreach (UnityAction listener in resetPlayerHealthListeners)
		List_1_t422900045 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_resetPlayerHealthListeners_19();
		// foreach (UnityAction listener in resetPlayerHealthListeners)
		Enumerator_t2312143922  L_3 = List_1_GetEnumerator_m1102057371(L_2, /*hidden argument*/List_1_GetEnumerator_m1102057371_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach (UnityAction listener in resetPlayerHealthListeners)
			// foreach (UnityAction listener in resetPlayerHealthListeners)
			UnityAction_t3245792599 * L_4 = Enumerator_get_Current_m163445187((Enumerator_t2312143922 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m163445187_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddResetPlayerHealthListener(listener);
			MenuManager_t2761117704 * L_5 = ___invoker0;
			UnityAction_t3245792599 * L_6 = V_0;
			// invoker.AddResetPlayerHealthListener(listener);
			MenuManager_AddResetPlayerHealthListener_m2398605215(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (UnityAction listener in resetPlayerHealthListeners)
			bool L_7 = Enumerator_MoveNext_m2661491481((Enumerator_t2312143922 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2661491481_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach (UnityAction listener in resetPlayerHealthListeners)
		Enumerator_Dispose_m2601112073((Enumerator_t2312143922 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m2601112073_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddResetPlayerHealthListeners(UnityEngine.Events.UnityAction)
extern "C"  void EventManager_AddResetPlayerHealthListeners_m2338253130 (RuntimeObject * __this /* static, unused */, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddResetPlayerHealthListeners_m2338253130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MenuManager_t2761117704 * V_0 = NULL;
	Enumerator_t1827469027  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// resetPlayerHealthListeners.Add(listener);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t422900045 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_resetPlayerHealthListeners_19();
		UnityAction_t3245792599 * L_1 = ___listener0;
		// resetPlayerHealthListeners.Add(listener);
		List_1_Add_m2393690792(L_0, L_1, /*hidden argument*/List_1_Add_m2393690792_RuntimeMethod_var);
		// foreach (MenuManager invoker in resetPlayerHealthInvokers)
		List_1_t4233192446 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_resetPlayerHealthInvokers_18();
		// foreach (MenuManager invoker in resetPlayerHealthInvokers)
		Enumerator_t1827469027  L_3 = List_1_GetEnumerator_m2174501561(L_2, /*hidden argument*/List_1_GetEnumerator_m2174501561_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach (MenuManager invoker in resetPlayerHealthInvokers)
			// foreach (MenuManager invoker in resetPlayerHealthInvokers)
			MenuManager_t2761117704 * L_4 = Enumerator_get_Current_m3754399433((Enumerator_t1827469027 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3754399433_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddResetPlayerHealthListener(listener);
			MenuManager_t2761117704 * L_5 = V_0;
			UnityAction_t3245792599 * L_6 = ___listener0;
			// invoker.AddResetPlayerHealthListener(listener);
			MenuManager_AddResetPlayerHealthListener_m2398605215(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (MenuManager invoker in resetPlayerHealthInvokers)
			bool L_7 = Enumerator_MoveNext_m604781295((Enumerator_t1827469027 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m604781295_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach (MenuManager invoker in resetPlayerHealthInvokers)
		Enumerator_Dispose_m3402286335((Enumerator_t1827469027 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3402286335_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddResumeGameplayInvokers(MenuManager)
extern "C"  void EventManager_AddResumeGameplayInvokers_m1693508513 (RuntimeObject * __this /* static, unused */, MenuManager_t2761117704 * ___invoker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddResumeGameplayInvokers_m1693508513_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t3245792599 * V_0 = NULL;
	Enumerator_t2312143922  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// resumeGameplayInvokers.Add(invoker);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t4233192446 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_resumeGameplayInvokers_20();
		MenuManager_t2761117704 * L_1 = ___invoker0;
		// resumeGameplayInvokers.Add(invoker);
		List_1_Add_m3201442980(L_0, L_1, /*hidden argument*/List_1_Add_m3201442980_RuntimeMethod_var);
		// foreach (UnityAction listener in resumeGameplayListerners)
		List_1_t422900045 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_resumeGameplayListerners_21();
		// foreach (UnityAction listener in resumeGameplayListerners)
		Enumerator_t2312143922  L_3 = List_1_GetEnumerator_m1102057371(L_2, /*hidden argument*/List_1_GetEnumerator_m1102057371_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach (UnityAction listener in resumeGameplayListerners)
			// foreach (UnityAction listener in resumeGameplayListerners)
			UnityAction_t3245792599 * L_4 = Enumerator_get_Current_m163445187((Enumerator_t2312143922 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m163445187_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddResumeGameplayListener(listener);
			MenuManager_t2761117704 * L_5 = ___invoker0;
			UnityAction_t3245792599 * L_6 = V_0;
			// invoker.AddResumeGameplayListener(listener);
			MenuManager_AddResumeGameplayListener_m414784281(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (UnityAction listener in resumeGameplayListerners)
			bool L_7 = Enumerator_MoveNext_m2661491481((Enumerator_t2312143922 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2661491481_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach (UnityAction listener in resumeGameplayListerners)
		Enumerator_Dispose_m2601112073((Enumerator_t2312143922 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m2601112073_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddResumeGamplayListeners(UnityEngine.Events.UnityAction)
extern "C"  void EventManager_AddResumeGamplayListeners_m1799618919 (RuntimeObject * __this /* static, unused */, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddResumeGamplayListeners_m1799618919_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MenuManager_t2761117704 * V_0 = NULL;
	Enumerator_t1827469027  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// resumeGameplayListerners.Add(listener);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t422900045 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_resumeGameplayListerners_21();
		UnityAction_t3245792599 * L_1 = ___listener0;
		// resumeGameplayListerners.Add(listener);
		List_1_Add_m2393690792(L_0, L_1, /*hidden argument*/List_1_Add_m2393690792_RuntimeMethod_var);
		// foreach (MenuManager invoker in resumeGameplayInvokers)
		List_1_t4233192446 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_resumeGameplayInvokers_20();
		// foreach (MenuManager invoker in resumeGameplayInvokers)
		Enumerator_t1827469027  L_3 = List_1_GetEnumerator_m2174501561(L_2, /*hidden argument*/List_1_GetEnumerator_m2174501561_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach (MenuManager invoker in resumeGameplayInvokers)
			// foreach (MenuManager invoker in resumeGameplayInvokers)
			MenuManager_t2761117704 * L_4 = Enumerator_get_Current_m3754399433((Enumerator_t1827469027 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3754399433_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddResumeGameplayListener(listener);
			MenuManager_t2761117704 * L_5 = V_0;
			UnityAction_t3245792599 * L_6 = ___listener0;
			// invoker.AddResumeGameplayListener(listener);
			MenuManager_AddResumeGameplayListener_m414784281(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (MenuManager invoker in resumeGameplayInvokers)
			bool L_7 = Enumerator_MoveNext_m604781295((Enumerator_t1827469027 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m604781295_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach (MenuManager invoker in resumeGameplayInvokers)
		Enumerator_Dispose_m3402286335((Enumerator_t1827469027 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3402286335_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddHitWallInvokers(Wall)
extern "C"  void EventManager_AddHitWallInvokers_m1381144606 (RuntimeObject * __this /* static, unused */, Wall_t2206666577 * ___invoker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddHitWallInvokers_m1381144606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t3245792599 * V_0 = NULL;
	Enumerator_t2312143922  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// hitWallInvokers.Add(invoker);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t3678741319 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_hitWallInvokers_22();
		Wall_t2206666577 * L_1 = ___invoker0;
		// hitWallInvokers.Add(invoker);
		List_1_Add_m84018515(L_0, L_1, /*hidden argument*/List_1_Add_m84018515_RuntimeMethod_var);
		// foreach (UnityAction listener in hitWallListeners)
		List_1_t422900045 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_hitWallListeners_23();
		// foreach (UnityAction listener in hitWallListeners)
		Enumerator_t2312143922  L_3 = List_1_GetEnumerator_m1102057371(L_2, /*hidden argument*/List_1_GetEnumerator_m1102057371_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach (UnityAction listener in hitWallListeners)
			// foreach (UnityAction listener in hitWallListeners)
			UnityAction_t3245792599 * L_4 = Enumerator_get_Current_m163445187((Enumerator_t2312143922 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m163445187_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddHitWallListener(listener);
			Wall_t2206666577 * L_5 = ___invoker0;
			UnityAction_t3245792599 * L_6 = V_0;
			// invoker.AddHitWallListener(listener);
			Wall_AddHitWallListener_m1858305512(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (UnityAction listener in hitWallListeners)
			bool L_7 = Enumerator_MoveNext_m2661491481((Enumerator_t2312143922 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2661491481_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach (UnityAction listener in hitWallListeners)
		Enumerator_Dispose_m2601112073((Enumerator_t2312143922 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m2601112073_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::AddHitWallListeners(UnityEngine.Events.UnityAction)
extern "C"  void EventManager_AddHitWallListeners_m4195144851 (RuntimeObject * __this /* static, unused */, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddHitWallListeners_m4195144851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Wall_t2206666577 * V_0 = NULL;
	Enumerator_t1273017900  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// hitWallListeners.Add(listener);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t422900045 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_hitWallListeners_23();
		UnityAction_t3245792599 * L_1 = ___listener0;
		// hitWallListeners.Add(listener);
		List_1_Add_m2393690792(L_0, L_1, /*hidden argument*/List_1_Add_m2393690792_RuntimeMethod_var);
		// foreach (Wall invoker in hitWallInvokers)
		List_1_t3678741319 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_hitWallInvokers_22();
		// foreach (Wall invoker in hitWallInvokers)
		Enumerator_t1273017900  L_3 = List_1_GetEnumerator_m2400680462(L_2, /*hidden argument*/List_1_GetEnumerator_m2400680462_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_001d:
		{
			// foreach (Wall invoker in hitWallInvokers)
			// foreach (Wall invoker in hitWallInvokers)
			Wall_t2206666577 * L_4 = Enumerator_get_Current_m1945220726((Enumerator_t1273017900 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m1945220726_RuntimeMethod_var);
			V_0 = L_4;
			// invoker.AddHitWallListener(listener);
			Wall_t2206666577 * L_5 = V_0;
			UnityAction_t3245792599 * L_6 = ___listener0;
			// invoker.AddHitWallListener(listener);
			Wall_AddHitWallListener_m1858305512(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (Wall invoker in hitWallInvokers)
			bool L_7 = Enumerator_MoveNext_m1555745609((Enumerator_t1273017900 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m1555745609_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		// foreach (Wall invoker in hitWallInvokers)
		Enumerator_Dispose_m3169737812((Enumerator_t1273017900 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3169737812_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EventManager::.cctor()
extern "C"  void EventManager__cctor_m427558894 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager__cctor_m427558894_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<Player> playerShootInvokers = new List<Player>();
		List_1_t443754758 * L_0 = (List_1_t443754758 *)il2cpp_codegen_object_new(List_1_t443754758_il2cpp_TypeInfo_var);
		List_1__ctor_m3898495391(L_0, /*hidden argument*/List_1__ctor_m3898495391_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_playerShootInvokers_0(L_0);
		// static List<UnityAction<Vector3, Characters>> playerShootListeners = new List<UnityAction<Vector3, Characters>>();
		List_1_t3329208553 * L_1 = (List_1_t3329208553 *)il2cpp_codegen_object_new(List_1_t3329208553_il2cpp_TypeInfo_var);
		List_1__ctor_m2657057201(L_1, /*hidden argument*/List_1__ctor_m2657057201_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_playerShootListeners_1(L_1);
		// static List<Enemy> enemyDeadInvokers = new List<Enemy>();
		List_1_t3237804331 * L_2 = (List_1_t3237804331 *)il2cpp_codegen_object_new(List_1_t3237804331_il2cpp_TypeInfo_var);
		List_1__ctor_m1084649037(L_2, /*hidden argument*/List_1__ctor_m1084649037_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_enemyDeadInvokers_2(L_2);
		// static List<UnityAction<Enemy, int>> enemyDeadListeners = new List<UnityAction<Enemy, int>>();
		List_1_t3789634213 * L_3 = (List_1_t3789634213 *)il2cpp_codegen_object_new(List_1_t3789634213_il2cpp_TypeInfo_var);
		List_1__ctor_m3923604068(L_3, /*hidden argument*/List_1__ctor_m3923604068_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_enemyDeadListeners_3(L_3);
		// static List<EnemyMovementManager> enemyMoveInvokers = new List<EnemyMovementManager>();
		List_1_t2040090919 * L_4 = (List_1_t2040090919 *)il2cpp_codegen_object_new(List_1_t2040090919_il2cpp_TypeInfo_var);
		List_1__ctor_m746486840(L_4, /*hidden argument*/List_1__ctor_m746486840_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_enemyMoveInvokers_4(L_4);
		// static List<UnityAction<EnemyMovements>> enemyMoveListeners = new List<UnityAction<EnemyMovements>>();
		List_1_t701636436 * L_5 = (List_1_t701636436 *)il2cpp_codegen_object_new(List_1_t701636436_il2cpp_TypeInfo_var);
		List_1__ctor_m3075294956(L_5, /*hidden argument*/List_1__ctor_m3075294956_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_enemyMoveListeners_5(L_5);
		// static List<EnemyGraphBuilder> enemyShootInvokers = new List<EnemyGraphBuilder>();
		List_1_t856330245 * L_6 = (List_1_t856330245 *)il2cpp_codegen_object_new(List_1_t856330245_il2cpp_TypeInfo_var);
		List_1__ctor_m2322504938(L_6, /*hidden argument*/List_1__ctor_m2322504938_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_enemyShootInvokers_6(L_6);
		// static List<UnityAction<int>> enemyShootListeners = new List<UnityAction<int>>();
		List_1_t712889340 * L_7 = (List_1_t712889340 *)il2cpp_codegen_object_new(List_1_t712889340_il2cpp_TypeInfo_var);
		List_1__ctor_m772083332(L_7, /*hidden argument*/List_1__ctor_m772083332_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_enemyShootListeners_7(L_7);
		// static List<Projectile> hurtInvokers = new List<Projectile>();
		List_1_t2913069260 * L_8 = (List_1_t2913069260 *)il2cpp_codegen_object_new(List_1_t2913069260_il2cpp_TypeInfo_var);
		List_1__ctor_m3381526530(L_8, /*hidden argument*/List_1__ctor_m3381526530_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_hurtInvokers_8(L_8);
		// static List<UnityAction<int>> hurtListeners = new List<UnityAction<int>>();
		List_1_t712889340 * L_9 = (List_1_t712889340 *)il2cpp_codegen_object_new(List_1_t712889340_il2cpp_TypeInfo_var);
		List_1__ctor_m772083332(L_9, /*hidden argument*/List_1__ctor_m772083332_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_hurtListeners_9(L_9);
		// static List<HUD> gameOverInvokers = new List<HUD>();
		List_1_t25834686 * L_10 = (List_1_t25834686 *)il2cpp_codegen_object_new(List_1_t25834686_il2cpp_TypeInfo_var);
		List_1__ctor_m3827184848(L_10, /*hidden argument*/List_1__ctor_m3827184848_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_gameOverInvokers_10(L_10);
		// static List<UnityAction<int>> gameOverListeners = new List<UnityAction<int>>();
		List_1_t712889340 * L_11 = (List_1_t712889340 *)il2cpp_codegen_object_new(List_1_t712889340_il2cpp_TypeInfo_var);
		List_1__ctor_m772083332(L_11, /*hidden argument*/List_1__ctor_m772083332_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_gameOverListeners_11(L_11);
		// static List<MenuManager> changeLevelInvokers = new List<MenuManager>();
		List_1_t4233192446 * L_12 = (List_1_t4233192446 *)il2cpp_codegen_object_new(List_1_t4233192446_il2cpp_TypeInfo_var);
		List_1__ctor_m824091018(L_12, /*hidden argument*/List_1__ctor_m824091018_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_changeLevelInvokers_12(L_12);
		// static List<UnityAction> changeLevelListeners = new List<UnityAction>();
		List_1_t422900045 * L_13 = (List_1_t422900045 *)il2cpp_codegen_object_new(List_1_t422900045_il2cpp_TypeInfo_var);
		List_1__ctor_m2598345712(L_13, /*hidden argument*/List_1__ctor_m2598345712_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_changeLevelListeners_13(L_13);
		// static List<EnemyGraphBuilder> allEnemiesDeadInvokers = new List<EnemyGraphBuilder>();
		List_1_t856330245 * L_14 = (List_1_t856330245 *)il2cpp_codegen_object_new(List_1_t856330245_il2cpp_TypeInfo_var);
		List_1__ctor_m2322504938(L_14, /*hidden argument*/List_1__ctor_m2322504938_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_allEnemiesDeadInvokers_14(L_14);
		// static List<UnityAction> allEnemiesDeadListeners = new List<UnityAction>();
		List_1_t422900045 * L_15 = (List_1_t422900045 *)il2cpp_codegen_object_new(List_1_t422900045_il2cpp_TypeInfo_var);
		List_1__ctor_m2598345712(L_15, /*hidden argument*/List_1__ctor_m2598345712_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_allEnemiesDeadListeners_15(L_15);
		// static List<EnemyGraphBuilder> gameWinInvokers = new List<EnemyGraphBuilder>();
		List_1_t856330245 * L_16 = (List_1_t856330245 *)il2cpp_codegen_object_new(List_1_t856330245_il2cpp_TypeInfo_var);
		List_1__ctor_m2322504938(L_16, /*hidden argument*/List_1__ctor_m2322504938_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_gameWinInvokers_16(L_16);
		// static List<UnityAction> gameWinListeners = new List<UnityAction>();
		List_1_t422900045 * L_17 = (List_1_t422900045 *)il2cpp_codegen_object_new(List_1_t422900045_il2cpp_TypeInfo_var);
		List_1__ctor_m2598345712(L_17, /*hidden argument*/List_1__ctor_m2598345712_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_gameWinListeners_17(L_17);
		// static List<MenuManager> resetPlayerHealthInvokers = new List<MenuManager>();
		List_1_t4233192446 * L_18 = (List_1_t4233192446 *)il2cpp_codegen_object_new(List_1_t4233192446_il2cpp_TypeInfo_var);
		List_1__ctor_m824091018(L_18, /*hidden argument*/List_1__ctor_m824091018_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_resetPlayerHealthInvokers_18(L_18);
		// static List<UnityAction> resetPlayerHealthListeners = new List<UnityAction>();
		List_1_t422900045 * L_19 = (List_1_t422900045 *)il2cpp_codegen_object_new(List_1_t422900045_il2cpp_TypeInfo_var);
		List_1__ctor_m2598345712(L_19, /*hidden argument*/List_1__ctor_m2598345712_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_resetPlayerHealthListeners_19(L_19);
		// static List<MenuManager> resumeGameplayInvokers = new List<MenuManager>();
		List_1_t4233192446 * L_20 = (List_1_t4233192446 *)il2cpp_codegen_object_new(List_1_t4233192446_il2cpp_TypeInfo_var);
		List_1__ctor_m824091018(L_20, /*hidden argument*/List_1__ctor_m824091018_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_resumeGameplayInvokers_20(L_20);
		// static List<UnityAction> resumeGameplayListerners = new List<UnityAction>();
		List_1_t422900045 * L_21 = (List_1_t422900045 *)il2cpp_codegen_object_new(List_1_t422900045_il2cpp_TypeInfo_var);
		List_1__ctor_m2598345712(L_21, /*hidden argument*/List_1__ctor_m2598345712_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_resumeGameplayListerners_21(L_21);
		// static List<Wall> hitWallInvokers = new List<Wall>();
		List_1_t3678741319 * L_22 = (List_1_t3678741319 *)il2cpp_codegen_object_new(List_1_t3678741319_il2cpp_TypeInfo_var);
		List_1__ctor_m4059846077(L_22, /*hidden argument*/List_1__ctor_m4059846077_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_hitWallInvokers_22(L_22);
		// static List<UnityAction> hitWallListeners = new List<UnityAction>();
		List_1_t422900045 * L_23 = (List_1_t422900045 *)il2cpp_codegen_object_new(List_1_t422900045_il2cpp_TypeInfo_var);
		List_1__ctor_m2598345712(L_23, /*hidden argument*/List_1__ctor_m2598345712_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_hitWallListeners_23(L_23);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameAudioSource::.ctor()
extern "C"  void GameAudioSource__ctor_m2407097418 (GameAudioSource_t1717720176 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAudioSource::Awake()
extern "C"  void GameAudioSource_Awake_m2305334770 (GameAudioSource_t1717720176 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameAudioSource_Awake_m2305334770_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!AudioManager.Initialized)
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t3267510698_il2cpp_TypeInfo_var);
		bool L_0 = AudioManager_get_Initialized_m496913330(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0039;
		}
	}
	{
		// audioSource = gameObject.AddComponent<AudioSource>();
		// audioSource = gameObject.AddComponent<AudioSource>();
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		// audioSource = gameObject.AddComponent<AudioSource>();
		AudioSource_t3935305588 * L_2 = GameObject_AddComponent_TisAudioSource_t3935305588_m2869327390(L_1, /*hidden argument*/GameObject_AddComponent_TisAudioSource_t3935305588_m2869327390_RuntimeMethod_var);
		__this->set_audioSource_2(L_2);
		// AudioManager.Initialize(audioSource);
		AudioSource_t3935305588 * L_3 = __this->get_audioSource_2();
		// AudioManager.Initialize(audioSource);
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t3267510698_il2cpp_TypeInfo_var);
		AudioManager_Initialize_m1220441737(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		// DontDestroyOnLoad(gameObject);
		// DontDestroyOnLoad(gameObject);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		// DontDestroyOnLoad(gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		goto IL_0046;
	}

IL_0039:
	{
		// Destroy(gameObject);
		// Destroy(gameObject);
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		// Destroy(gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void GameAudioSource::Start()
extern "C"  void GameAudioSource_Start_m552559370 (GameAudioSource_t1717720176 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameAudioSource::Update()
extern "C"  void GameAudioSource_Update_m3047890965 (GameAudioSource_t1717720176 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameOver::.ctor()
extern "C"  void GameOver__ctor_m1412511381 (GameOver_t2355536572 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameOver__ctor_m1412511381_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m3816765192(__this, /*hidden argument*/UnityEvent_1__ctor_m3816765192_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameWin::.ctor()
extern "C"  void GameWin__ctor_m1720413770 (GameWin_t775063857 * __this, const RuntimeMethod* method)
{
	{
		UnityEvent__ctor_m431206565(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HitWall::.ctor()
extern "C"  void HitWall__ctor_m895202767 (HitWall_t625646887 * __this, const RuntimeMethod* method)
{
	{
		UnityEvent__ctor_m431206565(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HUD::.ctor()
extern "C"  void HUD__ctor_m1144534689 (HUD_t2848727240 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HUD__ctor_m1144534689_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string playerHealthPrefix = "Health: ";
		__this->set_playerHealthPrefix_5(_stringLiteral674690895);
		// string pointsPrefix = "Points: ";
		__this->set_pointsPrefix_6(_stringLiteral1383380143);
		// bool gameFinished = false;
		__this->set_gameFinished_7((bool)0);
		// GameOver gameOverEvent = new GameOver();
		GameOver_t2355536572 * L_0 = (GameOver_t2355536572 *)il2cpp_codegen_object_new(GameOver_t2355536572_il2cpp_TypeInfo_var);
		GameOver__ctor_m1412511381(L_0, /*hidden argument*/NULL);
		__this->set_gameOverEvent_8(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 HUD::get_PlayerHealth()
extern "C"  int32_t HUD_get_PlayerHealth_m451828848 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HUD_get_PlayerHealth_m451828848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// get { return playerHealth; }
		IL2CPP_RUNTIME_CLASS_INIT(HUD_t2848727240_il2cpp_TypeInfo_var);
		int32_t L_0 = ((HUD_t2848727240_StaticFields*)il2cpp_codegen_static_fields_for(HUD_t2848727240_il2cpp_TypeInfo_var))->get_playerHealth_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		// get { return playerHealth; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void HUD::set_PlayerHealth(System.Int32)
extern "C"  void HUD_set_PlayerHealth_m1546771577 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HUD_set_PlayerHealth_m1546771577_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { playerHealth = value; }
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(HUD_t2848727240_il2cpp_TypeInfo_var);
		((HUD_t2848727240_StaticFields*)il2cpp_codegen_static_fields_for(HUD_t2848727240_il2cpp_TypeInfo_var))->set_playerHealth_2(L_0);
		// set { playerHealth = value; }
		return;
	}
}
// System.Void HUD::Start()
extern "C"  void HUD_Start_m3058418947 (HUD_t2848727240 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HUD_Start_m3058418947_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// EventManager.AddHurtListeners(UpdateHealth);
		intptr_t L_0 = (intptr_t)HUD_UpdateHealth_m1448011672_RuntimeMethod_var;
		UnityAction_1_t3535781894 * L_1 = (UnityAction_1_t3535781894 *)il2cpp_codegen_object_new(UnityAction_1_t3535781894_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m3081378164(L_1, __this, L_0, /*hidden argument*/UnityAction_1__ctor_m3081378164_RuntimeMethod_var);
		// EventManager.AddHurtListeners(UpdateHealth);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		EventManager_AddHurtListeners_m2511215371(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// EventManager.AddGameOverInvokers(this);
		// EventManager.AddGameOverInvokers(this);
		EventManager_AddGameOverInvokers_m1177628869(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		// EventManager.AddResetPlayerHealthListeners(ResetHealth);
		intptr_t L_2 = (intptr_t)HUD_ResetHealth_m1731872613_RuntimeMethod_var;
		UnityAction_t3245792599 * L_3 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_3, __this, L_2, /*hidden argument*/NULL);
		// EventManager.AddResetPlayerHealthListeners(ResetHealth);
		EventManager_AddResetPlayerHealthListeners_m2338253130(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		// EventManager.AddHitWallListeners(HitWall);
		intptr_t L_4 = (intptr_t)HUD_HitWall_m570736504_RuntimeMethod_var;
		UnityAction_t3245792599 * L_5 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_5, __this, L_4, /*hidden argument*/NULL);
		// EventManager.AddHitWallListeners(HitWall);
		EventManager_AddHitWallListeners_m4195144851(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		// EventManager.AddEnemyDeadListener(AddPoints);
		intptr_t L_6 = (intptr_t)HUD_AddPoints_m655010607_RuntimeMethod_var;
		UnityAction_2_t2317559471 * L_7 = (UnityAction_2_t2317559471 *)il2cpp_codegen_object_new(UnityAction_2_t2317559471_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m332998619(L_7, __this, L_6, /*hidden argument*/UnityAction_2__ctor_m332998619_RuntimeMethod_var);
		// EventManager.AddEnemyDeadListener(AddPoints);
		EventManager_AddEnemyDeadListener_m1380855738(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		// playerHealthDisplay.text = playerHealthPrefix + playerHealth.ToString();
		Text_t1901882714 * L_8 = __this->get_playerHealthDisplay_3();
		String_t* L_9 = __this->get_playerHealthPrefix_5();
		IL2CPP_RUNTIME_CLASS_INIT(HUD_t2848727240_il2cpp_TypeInfo_var);
		// playerHealthDisplay.text = playerHealthPrefix + playerHealth.ToString();
		String_t* L_10 = Int32_ToString_m141394615((int32_t*)(((HUD_t2848727240_StaticFields*)il2cpp_codegen_static_fields_for(HUD_t2848727240_il2cpp_TypeInfo_var))->get_address_of_playerHealth_2()), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m3937257545(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		// playerHealthDisplay.text = playerHealthPrefix + playerHealth.ToString();
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_11);
		// pointsDisplay.text = pointsPrefix + PointsManager.Points.ToString();
		Text_t1901882714 * L_12 = __this->get_pointsDisplay_4();
		String_t* L_13 = __this->get_pointsPrefix_6();
		// pointsDisplay.text = pointsPrefix + PointsManager.Points.ToString();
		IL2CPP_RUNTIME_CLASS_INIT(PointsManager_t882499681_il2cpp_TypeInfo_var);
		int32_t L_14 = PointsManager_get_Points_m2028628492(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_14;
		// pointsDisplay.text = pointsPrefix + PointsManager.Points.ToString();
		String_t* L_15 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_16 = String_Concat_m3937257545(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		// pointsDisplay.text = pointsPrefix + PointsManager.Points.ToString();
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_16);
		// }
		return;
	}
}
// System.Void HUD::Update()
extern "C"  void HUD_Update_m462222226 (HUD_t2848727240 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void HUD::UpdateHealth(System.Int32)
extern "C"  void HUD_UpdateHealth_m1448011672 (HUD_t2848727240 * __this, int32_t ___damageTaken0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HUD_UpdateHealth_m1448011672_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerHealth -= damageTaken;
		IL2CPP_RUNTIME_CLASS_INIT(HUD_t2848727240_il2cpp_TypeInfo_var);
		int32_t L_0 = ((HUD_t2848727240_StaticFields*)il2cpp_codegen_static_fields_for(HUD_t2848727240_il2cpp_TypeInfo_var))->get_playerHealth_2();
		int32_t L_1 = ___damageTaken0;
		((HUD_t2848727240_StaticFields*)il2cpp_codegen_static_fields_for(HUD_t2848727240_il2cpp_TypeInfo_var))->set_playerHealth_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		// playerHealthDisplay.text = playerHealthPrefix + playerHealth.ToString();
		Text_t1901882714 * L_2 = __this->get_playerHealthDisplay_3();
		String_t* L_3 = __this->get_playerHealthPrefix_5();
		// playerHealthDisplay.text = playerHealthPrefix + playerHealth.ToString();
		String_t* L_4 = Int32_ToString_m141394615((int32_t*)(((HUD_t2848727240_StaticFields*)il2cpp_codegen_static_fields_for(HUD_t2848727240_il2cpp_TypeInfo_var))->get_address_of_playerHealth_2()), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3937257545(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		// playerHealthDisplay.text = playerHealthPrefix + playerHealth.ToString();
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// if (playerHealth <= 0 && !gameFinished)
		int32_t L_6 = ((HUD_t2848727240_StaticFields*)il2cpp_codegen_static_fields_for(HUD_t2848727240_il2cpp_TypeInfo_var))->get_playerHealth_2();
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		bool L_7 = __this->get_gameFinished_7();
		if (L_7)
		{
			goto IL_005e;
		}
	}
	{
		// gameOverEvent.Invoke(0);
		GameOver_t2355536572 * L_8 = __this->get_gameOverEvent_8();
		// gameOverEvent.Invoke(0);
		UnityEvent_1_Invoke_m3604335408(L_8, 0, /*hidden argument*/UnityEvent_1_Invoke_m3604335408_RuntimeMethod_var);
		// gameFinished = true;
		__this->set_gameFinished_7((bool)1);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void HUD::ResetHealth()
extern "C"  void HUD_ResetHealth_m1731872613 (HUD_t2848727240 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HUD_ResetHealth_m1731872613_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerHealth = Constants.MaxPlayerHealth;
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t701097383_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_MaxPlayerHealth_3();
		IL2CPP_RUNTIME_CLASS_INIT(HUD_t2848727240_il2cpp_TypeInfo_var);
		((HUD_t2848727240_StaticFields*)il2cpp_codegen_static_fields_for(HUD_t2848727240_il2cpp_TypeInfo_var))->set_playerHealth_2(L_0);
		// playerHealthDisplay.text = playerHealthPrefix + playerHealth.ToString();
		Text_t1901882714 * L_1 = __this->get_playerHealthDisplay_3();
		String_t* L_2 = __this->get_playerHealthPrefix_5();
		// playerHealthDisplay.text = playerHealthPrefix + playerHealth.ToString();
		String_t* L_3 = Int32_ToString_m141394615((int32_t*)(((HUD_t2848727240_StaticFields*)il2cpp_codegen_static_fields_for(HUD_t2848727240_il2cpp_TypeInfo_var))->get_address_of_playerHealth_2()), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		// playerHealthDisplay.text = playerHealthPrefix + playerHealth.ToString();
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void HUD::AddGameOverListener(UnityEngine.Events.UnityAction`1<System.Int32>)
extern "C"  void HUD_AddGameOverListener_m2077170894 (HUD_t2848727240 * __this, UnityAction_1_t3535781894 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HUD_AddGameOverListener_m2077170894_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameOverEvent.AddListener(listener);
		GameOver_t2355536572 * L_0 = __this->get_gameOverEvent_8();
		UnityAction_1_t3535781894 * L_1 = ___listener0;
		// gameOverEvent.AddListener(listener);
		UnityEvent_1_AddListener_m3158408092(L_0, L_1, /*hidden argument*/UnityEvent_1_AddListener_m3158408092_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void HUD::HitWall()
extern "C"  void HUD_HitWall_m570736504 (HUD_t2848727240 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HUD_HitWall_m570736504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameOverEvent.Invoke(0);
		GameOver_t2355536572 * L_0 = __this->get_gameOverEvent_8();
		// gameOverEvent.Invoke(0);
		UnityEvent_1_Invoke_m3604335408(L_0, 0, /*hidden argument*/UnityEvent_1_Invoke_m3604335408_RuntimeMethod_var);
		// gameFinished = true;
		__this->set_gameFinished_7((bool)1);
		// }
		return;
	}
}
// System.Void HUD::AddPoints(Enemy,System.Int32)
extern "C"  void HUD_AddPoints_m655010607 (HUD_t2848727240 * __this, Enemy_t1765729589 * ___unused0, int32_t ___pointsGained1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HUD_AddPoints_m655010607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// PointsManager.Points += pointsGained;
		IL2CPP_RUNTIME_CLASS_INIT(PointsManager_t882499681_il2cpp_TypeInfo_var);
		int32_t L_0 = PointsManager_get_Points_m2028628492(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = ___pointsGained1;
		// PointsManager.Points += pointsGained;
		PointsManager_set_Points_m1397397401(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		// pointsDisplay.text = pointsPrefix + PointsManager.Points.ToString();
		Text_t1901882714 * L_2 = __this->get_pointsDisplay_4();
		String_t* L_3 = __this->get_pointsPrefix_6();
		// pointsDisplay.text = pointsPrefix + PointsManager.Points.ToString();
		int32_t L_4 = PointsManager_get_Points_m2028628492(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_4;
		// pointsDisplay.text = pointsPrefix + PointsManager.Points.ToString();
		String_t* L_5 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3937257545(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		// pointsDisplay.text = pointsPrefix + PointsManager.Points.ToString();
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_6);
		// }
		return;
	}
}
// System.Void HUD::.cctor()
extern "C"  void HUD__cctor_m2013208929 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HUD__cctor_m2013208929_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static int playerHealth = Constants.MaxPlayerHealth;
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t701097383_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_MaxPlayerHealth_3();
		((HUD_t2848727240_StaticFields*)il2cpp_codegen_static_fields_for(HUD_t2848727240_il2cpp_TypeInfo_var))->set_playerHealth_2(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Hurt::.ctor()
extern "C"  void Hurt__ctor_m1656134574 (Hurt_t2217771330 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hurt__ctor_m1656134574_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m3816765192(__this, /*hidden argument*/UnityEvent_1__ctor_m3816765192_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MenuManager::.ctor()
extern "C"  void MenuManager__ctor_m426485761 (MenuManager_t2761117704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuManager__ctor_m426485761_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChangeLevel changeLevelEvent = new ChangeLevel();
		ChangeLevel_t3391930331 * L_0 = (ChangeLevel_t3391930331 *)il2cpp_codegen_object_new(ChangeLevel_t3391930331_il2cpp_TypeInfo_var);
		ChangeLevel__ctor_m954505144(L_0, /*hidden argument*/NULL);
		__this->set_changeLevelEvent_3(L_0);
		// ResetPlayerHealth resetPlayerHealthEvent = new ResetPlayerHealth();
		ResetPlayerHealth_t3732752359 * L_1 = (ResetPlayerHealth_t3732752359 *)il2cpp_codegen_object_new(ResetPlayerHealth_t3732752359_il2cpp_TypeInfo_var);
		ResetPlayerHealth__ctor_m1155286358(L_1, /*hidden argument*/NULL);
		__this->set_resetPlayerHealthEvent_4(L_1);
		// ResumeGameplay resumeGameplayEvent = new ResumeGameplay();
		ResumeGameplay_t3033387813 * L_2 = (ResumeGameplay_t3033387813 *)il2cpp_codegen_object_new(ResumeGameplay_t3033387813_il2cpp_TypeInfo_var);
		ResumeGameplay__ctor_m3388569851(L_2, /*hidden argument*/NULL);
		__this->set_resumeGameplayEvent_5(L_2);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuManager::Awake()
extern "C"  void MenuManager_Awake_m236443593 (MenuManager_t2761117704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuManager_Awake_m236443593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		// PointsManager.Points = 0;
		// PointsManager.Points = 0;
		IL2CPP_RUNTIME_CLASS_INIT(PointsManager_t882499681_il2cpp_TypeInfo_var);
		PointsManager_set_Points_m1397397401(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		// if(GameObject.FindGameObjectsWithTag("MenuManager").Length > 1) // we already have a menu manager
		// if(GameObject.FindGameObjectsWithTag("MenuManager").Length > 1) // we already have a menu manager
		GameObjectU5BU5D_t3328599146* L_0 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral1756293310, /*hidden argument*/NULL);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) <= ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		// GameObject previousMenuManager = GameObject.FindGameObjectsWithTag("MenuManager")[0];
		// GameObject previousMenuManager = GameObject.FindGameObjectsWithTag("MenuManager")[0];
		GameObjectU5BU5D_t3328599146* L_1 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral1756293310, /*hidden argument*/NULL);
		int32_t L_2 = 0;
		GameObject_t1113636619 * L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// Destroy(previousMenuManager);
		GameObject_t1113636619 * L_4 = V_0;
		// Destroy(previousMenuManager);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void MenuManager::Start()
extern "C"  void MenuManager_Start_m2906916493 (MenuManager_t2761117704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuManager_Start_m2906916493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(gameObject);
		// DontDestroyOnLoad(gameObject);
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		// DontDestroyOnLoad(gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		// EventManager.AddGameOverListeners(Die);
		intptr_t L_1 = (intptr_t)MenuManager_Die_m3930625520_RuntimeMethod_var;
		UnityAction_1_t3535781894 * L_2 = (UnityAction_1_t3535781894 *)il2cpp_codegen_object_new(UnityAction_1_t3535781894_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m3081378164(L_2, __this, L_1, /*hidden argument*/UnityAction_1__ctor_m3081378164_RuntimeMethod_var);
		// EventManager.AddGameOverListeners(Die);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		EventManager_AddGameOverListeners_m2500187535(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		// EventManager.AddChangeLevelInvokers(this);
		// EventManager.AddChangeLevelInvokers(this);
		EventManager_AddChangeLevelInvokers_m2654112070(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		// EventManager.AddAllEnemiesDeadListeners(GoToNextLevel);
		intptr_t L_3 = (intptr_t)MenuManager_GoToNextLevel_m3895188263_RuntimeMethod_var;
		UnityAction_t3245792599 * L_4 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_4, __this, L_3, /*hidden argument*/NULL);
		// EventManager.AddAllEnemiesDeadListeners(GoToNextLevel);
		EventManager_AddAllEnemiesDeadListeners_m3112965797(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		// EventManager.AddGameWinListeners(GoToWin);
		intptr_t L_5 = (intptr_t)MenuManager_GoToWin_m1568253110_RuntimeMethod_var;
		UnityAction_t3245792599 * L_6 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_6, __this, L_5, /*hidden argument*/NULL);
		// EventManager.AddGameWinListeners(GoToWin);
		EventManager_AddGameWinListeners_m1916835654(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		// EventManager.AddResetPlayerHealthInvokers(this);
		// EventManager.AddResetPlayerHealthInvokers(this);
		EventManager_AddResetPlayerHealthInvokers_m1866287769(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		// EventManager.AddResumeGameplayInvokers(this);
		// EventManager.AddResumeGameplayInvokers(this);
		EventManager_AddResumeGameplayInvokers_m1693508513(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		// UpdateScene();
		// UpdateScene();
		MenuManager_UpdateScene_m4108045979(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::Update()
extern "C"  void MenuManager_Update_m356150154 (MenuManager_t2761117704 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MenuManager::ClickPlay()
extern "C"  void MenuManager_ClickPlay_m114251555 (MenuManager_t2761117704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuManager_ClickPlay_m114251555_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateScene();
		// UpdateScene();
		MenuManager_UpdateScene_m4108045979(__this, /*hidden argument*/NULL);
		// Time.timeScale = 1;
		// Time.timeScale = 1;
		Time_set_timeScale_m1127545364(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		// HUD.PlayerHealth = Constants.MaxPlayerHealth; // fix this with reserPlayerHealth event later (resetPlayerHealthEvent.Invoke();)
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t701097383_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_MaxPlayerHealth_3();
		// HUD.PlayerHealth = Constants.MaxPlayerHealth; // fix this with reserPlayerHealth event later (resetPlayerHealthEvent.Invoke();)
		IL2CPP_RUNTIME_CLASS_INIT(HUD_t2848727240_il2cpp_TypeInfo_var);
		HUD_set_PlayerHealth_m1546771577(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		// SceneManager.LoadScene("Level1");
		// SceneManager.LoadScene("Level1");
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1233824162, /*hidden argument*/NULL);
		// AudioManager.PlayAudio(SFXs.click);
		// AudioManager.PlayAudio(SFXs.click);
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t3267510698_il2cpp_TypeInfo_var);
		AudioManager_PlayAudio_m3468175270(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		// UpdateScene();
		// UpdateScene();
		MenuManager_UpdateScene_m4108045979(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::GoHelp()
extern "C"  void MenuManager_GoHelp_m4106305758 (MenuManager_t2761117704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuManager_GoHelp_m4106305758_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateScene();
		// UpdateScene();
		MenuManager_UpdateScene_m4108045979(__this, /*hidden argument*/NULL);
		// SceneManager.LoadScene("HelpMenu");
		// SceneManager.LoadScene("HelpMenu");
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral2751939251, /*hidden argument*/NULL);
		// AudioManager.PlayAudio(SFXs.click);
		// AudioManager.PlayAudio(SFXs.click);
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t3267510698_il2cpp_TypeInfo_var);
		AudioManager_PlayAudio_m3468175270(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		// UpdateScene();
		// UpdateScene();
		MenuManager_UpdateScene_m4108045979(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::GoBack()
extern "C"  void MenuManager_GoBack_m421640775 (MenuManager_t2761117704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuManager_GoBack_m421640775_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateScene();
		// UpdateScene();
		MenuManager_UpdateScene_m4108045979(__this, /*hidden argument*/NULL);
		// SceneManager.LoadScene("MainMenu");
		// SceneManager.LoadScene("MainMenu");
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral2793515199, /*hidden argument*/NULL);
		// AudioManager.PlayAudio(SFXs.click);
		// AudioManager.PlayAudio(SFXs.click);
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t3267510698_il2cpp_TypeInfo_var);
		AudioManager_PlayAudio_m3468175270(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		// UpdateScene();
		// UpdateScene();
		MenuManager_UpdateScene_m4108045979(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::GoToLvls()
extern "C"  void MenuManager_GoToLvls_m3020589112 (MenuManager_t2761117704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuManager_GoToLvls_m3020589112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateScene();
		// UpdateScene();
		MenuManager_UpdateScene_m4108045979(__this, /*hidden argument*/NULL);
		// SceneManager.LoadScene("Levels");
		// SceneManager.LoadScene("Levels");
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1238149538, /*hidden argument*/NULL);
		// AudioManager.PlayAudio(SFXs.click);
		// AudioManager.PlayAudio(SFXs.click);
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t3267510698_il2cpp_TypeInfo_var);
		AudioManager_PlayAudio_m3468175270(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		// UpdateScene();
		// UpdateScene();
		MenuManager_UpdateScene_m4108045979(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::GoToLvl1()
extern "C"  void MenuManager_GoToLvl1_m3020589050 (MenuManager_t2761117704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuManager_GoToLvl1_m3020589050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateScene();
		// UpdateScene();
		MenuManager_UpdateScene_m4108045979(__this, /*hidden argument*/NULL);
		// Time.timeScale = 1;
		// Time.timeScale = 1;
		Time_set_timeScale_m1127545364(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		// HUD.PlayerHealth = Constants.MaxPlayerHealth; // fix this with reserPlayerHealth event later (resetPlayerHealthEvent.Invoke();)
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t701097383_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_MaxPlayerHealth_3();
		// HUD.PlayerHealth = Constants.MaxPlayerHealth; // fix this with reserPlayerHealth event later (resetPlayerHealthEvent.Invoke();)
		IL2CPP_RUNTIME_CLASS_INIT(HUD_t2848727240_il2cpp_TypeInfo_var);
		HUD_set_PlayerHealth_m1546771577(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		// AudioManager.PlayAudio(SFXs.click);
		// AudioManager.PlayAudio(SFXs.click);
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t3267510698_il2cpp_TypeInfo_var);
		AudioManager_PlayAudio_m3468175270(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		// SceneManager.LoadScene("Level1");
		// SceneManager.LoadScene("Level1");
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1233824162, /*hidden argument*/NULL);
		// UpdateScene();
		// UpdateScene();
		MenuManager_UpdateScene_m4108045979(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::GoToLvl2()
extern "C"  void MenuManager_GoToLvl2_m3020589047 (MenuManager_t2761117704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuManager_GoToLvl2_m3020589047_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateScene();
		// UpdateScene();
		MenuManager_UpdateScene_m4108045979(__this, /*hidden argument*/NULL);
		// Time.timeScale = 1;
		// Time.timeScale = 1;
		Time_set_timeScale_m1127545364(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		// HUD.PlayerHealth = Constants.MaxPlayerHealth; // fix this with reserPlayerHealth event later (resetPlayerHealthEvent.Invoke();)
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t701097383_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_MaxPlayerHealth_3();
		// HUD.PlayerHealth = Constants.MaxPlayerHealth; // fix this with reserPlayerHealth event later (resetPlayerHealthEvent.Invoke();)
		IL2CPP_RUNTIME_CLASS_INIT(HUD_t2848727240_il2cpp_TypeInfo_var);
		HUD_set_PlayerHealth_m1546771577(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		// AudioManager.PlayAudio(SFXs.click);
		// AudioManager.PlayAudio(SFXs.click);
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t3267510698_il2cpp_TypeInfo_var);
		AudioManager_PlayAudio_m3468175270(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		// SceneManager.LoadScene("Level2");
		// SceneManager.LoadScene("Level2");
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1234020770, /*hidden argument*/NULL);
		// UpdateScene();
		// UpdateScene();
		MenuManager_UpdateScene_m4108045979(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::GoToMainMenu()
extern "C"  void MenuManager_GoToMainMenu_m4127735967 (MenuManager_t2761117704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuManager_GoToMainMenu_m4127735967_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateScene();
		// UpdateScene();
		MenuManager_UpdateScene_m4108045979(__this, /*hidden argument*/NULL);
		// SceneManager.LoadScene("MainMenu");
		// SceneManager.LoadScene("MainMenu");
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral2793515199, /*hidden argument*/NULL);
		// AudioManager.PlayAudio(SFXs.click);
		// AudioManager.PlayAudio(SFXs.click);
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t3267510698_il2cpp_TypeInfo_var);
		AudioManager_PlayAudio_m3468175270(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		// UpdateScene();
		// UpdateScene();
		MenuManager_UpdateScene_m4108045979(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::Resume()
extern "C"  void MenuManager_Resume_m3851989355 (MenuManager_t2761117704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuManager_Resume_m3851989355_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject.FindGameObjectWithTag("Pause").SetActive(false);
		// GameObject.FindGameObjectWithTag("Pause").SetActive(false);
		GameObject_t1113636619 * L_0 = GameObject_FindGameObjectWithTag_m2129039296(NULL /*static, unused*/, _stringLiteral1953642114, /*hidden argument*/NULL);
		// GameObject.FindGameObjectWithTag("Pause").SetActive(false);
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		// AudioManager.PlayAudio(SFXs.click);
		// AudioManager.PlayAudio(SFXs.click);
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t3267510698_il2cpp_TypeInfo_var);
		AudioManager_PlayAudio_m3468175270(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		// Time.timeScale = 1;
		// Time.timeScale = 1;
		Time_set_timeScale_m1127545364(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::GoToNextLevel()
extern "C"  void MenuManager_GoToNextLevel_m3895188263 (MenuManager_t2761117704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuManager_GoToNextLevel_m3895188263_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateScene();
		// UpdateScene();
		MenuManager_UpdateScene_m4108045979(__this, /*hidden argument*/NULL);
		// changeLevelEvent.Invoke();
		ChangeLevel_t3391930331 * L_0 = __this->get_changeLevelEvent_3();
		// changeLevelEvent.Invoke();
		UnityEvent_Invoke_m3065672636(L_0, /*hidden argument*/NULL);
		// SceneManager.LoadScene("Level2");
		// SceneManager.LoadScene("Level2");
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1234020770, /*hidden argument*/NULL);
		// AudioManager.PlayAudio(SFXs.passedLevel);
		// AudioManager.PlayAudio(SFXs.passedLevel);
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t3267510698_il2cpp_TypeInfo_var);
		AudioManager_PlayAudio_m3468175270(NULL /*static, unused*/, 6, /*hidden argument*/NULL);
		// UpdateScene();
		// UpdateScene();
		MenuManager_UpdateScene_m4108045979(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::GoToWin()
extern "C"  void MenuManager_GoToWin_m1568253110 (MenuManager_t2761117704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuManager_GoToWin_m1568253110_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateScene();
		// UpdateScene();
		MenuManager_UpdateScene_m4108045979(__this, /*hidden argument*/NULL);
		// SceneManager.LoadScene("GameWin");
		// SceneManager.LoadScene("GameWin");
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral4065206759, /*hidden argument*/NULL);
		// AudioManager.PlayAudio(SFXs.gameWin);
		// AudioManager.PlayAudio(SFXs.gameWin);
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t3267510698_il2cpp_TypeInfo_var);
		AudioManager_PlayAudio_m3468175270(NULL /*static, unused*/, 3, /*hidden argument*/NULL);
		// UpdateScene();
		// UpdateScene();
		MenuManager_UpdateScene_m4108045979(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::Die(System.Int32)
extern "C"  void MenuManager_Die_m3930625520 (MenuManager_t2761117704 * __this, int32_t ___points0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuManager_Die_m3930625520_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateScene();
		// UpdateScene();
		MenuManager_UpdateScene_m4108045979(__this, /*hidden argument*/NULL);
		// SceneManager.LoadScene("GameOver");
		// SceneManager.LoadScene("GameOver");
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1350712178, /*hidden argument*/NULL);
		// AudioManager.PlayAudio(SFXs.gameOver);
		// AudioManager.PlayAudio(SFXs.gameOver);
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t3267510698_il2cpp_TypeInfo_var);
		AudioManager_PlayAudio_m3468175270(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		// UpdateScene();
		// UpdateScene();
		MenuManager_UpdateScene_m4108045979(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::UpdateScene()
extern "C"  void MenuManager_UpdateScene_m4108045979 (MenuManager_t2761117704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuManager_UpdateScene_m4108045979_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t2348375561  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Scene_t2348375561  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Scene_t2348375561  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Scene_t2348375561  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Scene_t2348375561  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Scene_t2348375561  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Scene_t2348375561  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		// if (SceneManager.GetActiveScene().name.Equals("MainMenu"))
		Scene_t2348375561  L_0 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (SceneManager.GetActiveScene().name.Equals("MainMenu"))
		String_t* L_1 = Scene_get_name_m622963475((Scene_t2348375561 *)(&V_0), /*hidden argument*/NULL);
		// if (SceneManager.GetActiveScene().name.Equals("MainMenu"))
		bool L_2 = String_Equals_m2270643605(L_1, _stringLiteral2793515199, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// currentMenu = Menus.MainMenu;
		__this->set_currentMenu_2(0);
		goto IL_0125;
	}

IL_002b:
	{
		// else if (SceneManager.GetActiveScene().name.Equals("Level1"))
		Scene_t2348375561  L_3 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_3;
		// else if (SceneManager.GetActiveScene().name.Equals("Level1"))
		String_t* L_4 = Scene_get_name_m622963475((Scene_t2348375561 *)(&V_1), /*hidden argument*/NULL);
		// else if (SceneManager.GetActiveScene().name.Equals("Level1"))
		bool L_5 = String_Equals_m2270643605(L_4, _stringLiteral1233824162, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0055;
		}
	}
	{
		// currentMenu = Menus.Level1;
		__this->set_currentMenu_2(1);
		goto IL_0125;
	}

IL_0055:
	{
		// else if (SceneManager.GetActiveScene().name.Equals("GameOver"))
		Scene_t2348375561  L_6 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_6;
		// else if (SceneManager.GetActiveScene().name.Equals("GameOver"))
		String_t* L_7 = Scene_get_name_m622963475((Scene_t2348375561 *)(&V_2), /*hidden argument*/NULL);
		// else if (SceneManager.GetActiveScene().name.Equals("GameOver"))
		bool L_8 = String_Equals_m2270643605(L_7, _stringLiteral1350712178, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007f;
		}
	}
	{
		// currentMenu = Menus.GameOver;
		__this->set_currentMenu_2(2);
		goto IL_0125;
	}

IL_007f:
	{
		// else if (SceneManager.GetActiveScene().name.Equals("HelpMenu"))
		Scene_t2348375561  L_9 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_9;
		// else if (SceneManager.GetActiveScene().name.Equals("HelpMenu"))
		String_t* L_10 = Scene_get_name_m622963475((Scene_t2348375561 *)(&V_3), /*hidden argument*/NULL);
		// else if (SceneManager.GetActiveScene().name.Equals("HelpMenu"))
		bool L_11 = String_Equals_m2270643605(L_10, _stringLiteral2751939251, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00a9;
		}
	}
	{
		// currentMenu = Menus.HelpMenu;
		__this->set_currentMenu_2(3);
		goto IL_0125;
	}

IL_00a9:
	{
		// else if (SceneManager.GetActiveScene().name.Equals("Level2"))
		Scene_t2348375561  L_12 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_12;
		// else if (SceneManager.GetActiveScene().name.Equals("Level2"))
		String_t* L_13 = Scene_get_name_m622963475((Scene_t2348375561 *)(&V_4), /*hidden argument*/NULL);
		// else if (SceneManager.GetActiveScene().name.Equals("Level2"))
		bool L_14 = String_Equals_m2270643605(L_13, _stringLiteral1234020770, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00d4;
		}
	}
	{
		// currentMenu = Menus.Level2;
		__this->set_currentMenu_2(4);
		goto IL_0125;
	}

IL_00d4:
	{
		// else if(SceneManager.GetActiveScene().name.Equals("GameWin"))
		Scene_t2348375561  L_15 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_5 = L_15;
		// else if(SceneManager.GetActiveScene().name.Equals("GameWin"))
		String_t* L_16 = Scene_get_name_m622963475((Scene_t2348375561 *)(&V_5), /*hidden argument*/NULL);
		// else if(SceneManager.GetActiveScene().name.Equals("GameWin"))
		bool L_17 = String_Equals_m2270643605(L_16, _stringLiteral4065206759, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00ff;
		}
	}
	{
		// currentMenu = Menus.GameWin;
		__this->set_currentMenu_2(5);
		goto IL_0125;
	}

IL_00ff:
	{
		// else if (SceneManager.GetActiveScene().name.Equals("Levels"))
		Scene_t2348375561  L_18 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_6 = L_18;
		// else if (SceneManager.GetActiveScene().name.Equals("Levels"))
		String_t* L_19 = Scene_get_name_m622963475((Scene_t2348375561 *)(&V_6), /*hidden argument*/NULL);
		// else if (SceneManager.GetActiveScene().name.Equals("Levels"))
		bool L_20 = String_Equals_m2270643605(L_19, _stringLiteral1238149538, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0125;
		}
	}
	{
		// currentMenu = Menus.Levels;
		__this->set_currentMenu_2(6);
	}

IL_0125:
	{
		// }
		return;
	}
}
// System.Void MenuManager::AddChangeLevelListeners(UnityEngine.Events.UnityAction)
extern "C"  void MenuManager_AddChangeLevelListeners_m2760192545 (MenuManager_t2761117704 * __this, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method)
{
	{
		// changeLevelEvent.AddListener(listener);
		ChangeLevel_t3391930331 * L_0 = __this->get_changeLevelEvent_3();
		UnityAction_t3245792599 * L_1 = ___listener0;
		// changeLevelEvent.AddListener(listener);
		UnityEvent_AddListener_m2276267359(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::AddResetPlayerHealthListener(UnityEngine.Events.UnityAction)
extern "C"  void MenuManager_AddResetPlayerHealthListener_m2398605215 (MenuManager_t2761117704 * __this, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method)
{
	{
		// resetPlayerHealthEvent.AddListener(listener);
		ResetPlayerHealth_t3732752359 * L_0 = __this->get_resetPlayerHealthEvent_4();
		UnityAction_t3245792599 * L_1 = ___listener0;
		// resetPlayerHealthEvent.AddListener(listener);
		UnityEvent_AddListener_m2276267359(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::AddResumeGameplayListener(UnityEngine.Events.UnityAction)
extern "C"  void MenuManager_AddResumeGameplayListener_m414784281 (MenuManager_t2761117704 * __this, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method)
{
	{
		// resumeGameplayEvent.AddListener(listener);
		ResumeGameplay_t3033387813 * L_0 = __this->get_resumeGameplayEvent_5();
		UnityAction_t3245792599 * L_1 = ___listener0;
		// resumeGameplayEvent.AddListener(listener);
		UnityEvent_AddListener_m2276267359(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PauseGame::.ctor()
extern "C"  void PauseGame__ctor_m937983427 (PauseGame_t12111239 * __this, const RuntimeMethod* method)
{
	{
		// bool gamePaused = false;
		__this->set_gamePaused_2((bool)0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PauseGame::Start()
extern "C"  void PauseGame_Start_m1724322029 (PauseGame_t12111239 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PauseGame_Start_m1724322029_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.AddResumeGamplayListeners(Unpause);
		intptr_t L_0 = (intptr_t)PauseGame_Unpause_m2814715243_RuntimeMethod_var;
		UnityAction_t3245792599 * L_1 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_1, __this, L_0, /*hidden argument*/NULL);
		// EventManager.AddResumeGamplayListeners(Unpause);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		EventManager_AddResumeGamplayListeners_m1799618919(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseGame::Update()
extern "C"  void PauseGame_Update_m412982442 (PauseGame_t12111239 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PauseGame_Update_m412982442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetKeyDown(KeyCode.Escape) && !gamePaused)
		// if(Input.GetKeyDown(KeyCode.Escape) && !gamePaused)
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		bool L_1 = __this->get_gamePaused_2();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		// Pause();
		// Pause();
		PauseGame_Pause_m2681444765(__this, /*hidden argument*/NULL);
		goto IL_0044;
	}

IL_0025:
	{
		// else if(Input.GetKeyDown(KeyCode.Escape) && gamePaused)
		// else if(Input.GetKeyDown(KeyCode.Escape) && gamePaused)
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)27), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		bool L_3 = __this->get_gamePaused_2();
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		// Unpause();
		// Unpause();
		PauseGame_Unpause_m2814715243(__this, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// if(pauseMenu.active)
		GameObject_t1113636619 * L_4 = __this->get_pauseMenu_3();
		// if(pauseMenu.active)
		bool L_5 = GameObject_get_active_m3904937230(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0062;
		}
	}
	{
		// gamePaused = true;
		__this->set_gamePaused_2((bool)1);
		goto IL_006b;
	}

IL_0062:
	{
		// gamePaused = false;
		__this->set_gamePaused_2((bool)0);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void PauseGame::Pause()
extern "C"  void PauseGame_Pause_m2681444765 (PauseGame_t12111239 * __this, const RuntimeMethod* method)
{
	{
		// pauseMenu.SetActive(true);
		GameObject_t1113636619 * L_0 = __this->get_pauseMenu_3();
		// pauseMenu.SetActive(true);
		GameObject_SetActive_m796801857(L_0, (bool)1, /*hidden argument*/NULL);
		// Time.timeScale = 0;
		// Time.timeScale = 0;
		Time_set_timeScale_m1127545364(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseGame::Unpause()
extern "C"  void PauseGame_Unpause_m2814715243 (PauseGame_t12111239 * __this, const RuntimeMethod* method)
{
	{
		// pauseMenu.SetActive(false);
		GameObject_t1113636619 * L_0 = __this->get_pauseMenu_3();
		// pauseMenu.SetActive(false);
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		// Time.timeScale = 1;
		// Time.timeScale = 1;
		Time_set_timeScale_m1127545364(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Player::.ctor()
extern "C"  void Player__ctor_m509448900 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player__ctor_m509448900_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// Vector2 position = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t3722313464 ));
		Vector3_t3722313464  L_0 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_1 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_position_2(L_1);
		// PlayerShoot playerShootEvent = new PlayerShoot();
		PlayerShoot_t3350012305 * L_2 = (PlayerShoot_t3350012305 *)il2cpp_codegen_object_new(PlayerShoot_t3350012305_il2cpp_TypeInfo_var);
		PlayerShoot__ctor_m1259916230(L_2, /*hidden argument*/NULL);
		__this->set_playerShootEvent_6(L_2);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::Start()
extern "C"  void Player_Start_m250748966 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Start_m250748966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// boxCollider2D = GetComponent<BoxCollider2D>();
		// boxCollider2D = GetComponent<BoxCollider2D>();
		BoxCollider2D_t3581341831 * L_0 = Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273_RuntimeMethod_var);
		__this->set_boxCollider2D_3(L_0);
		// rb2D = GetComponent<Rigidbody2D>();
		// rb2D = GetComponent<Rigidbody2D>();
		Rigidbody2D_t939494601 * L_1 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		__this->set_rb2D_4(L_1);
		// playerHalfWidth = boxCollider2D.size.x / 2;
		BoxCollider2D_t3581341831 * L_2 = __this->get_boxCollider2D_3();
		// playerHalfWidth = boxCollider2D.size.x / 2;
		Vector2_t2156229523  L_3 = BoxCollider2D_get_size_m3529128736(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = (&V_0)->get_x_0();
		__this->set_playerHalfWidth_5(((float)((float)L_4/(float)(2.0f))));
		// EventManager.AddPlayerShootInvoker(this);
		// EventManager.AddPlayerShootInvoker(this);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		EventManager_AddPlayerShootInvoker_m628552642(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		// position = transform.position;
		// position = transform.position;
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// position = transform.position;
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		// position = transform.position;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_7 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		__this->set_position_2(L_7);
		// }
		return;
	}
}
// System.Void Player::Update()
extern "C"  void Player_Update_m2111558832 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Player::FixedUpdate()
extern "C"  void Player_FixedUpdate_m170756310 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_FixedUpdate_m170756310_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float horizontalMovement = Input.GetAxis("Horizontal");
		// float horizontalMovement = Input.GetAxis("Horizontal");
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		V_0 = L_0;
		// if(horizontalMovement != 0)
		float L_1 = V_0;
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_0077;
		}
	}
	{
		// position = rb2D.position;
		Rigidbody2D_t939494601 * L_2 = __this->get_rb2D_4();
		// position = rb2D.position;
		Vector2_t2156229523  L_3 = Rigidbody2D_get_position_m2575647076(L_2, /*hidden argument*/NULL);
		__this->set_position_2(L_3);
		// position.x += horizontalMovement * Time.deltaTime * Constants.PlayerSpeed;
		Vector2_t2156229523 * L_4 = __this->get_address_of_position_2();
		Vector2_t2156229523 * L_5 = L_4;
		float L_6 = L_5->get_x_0();
		float L_7 = V_0;
		// position.x += horizontalMovement * Time.deltaTime * Constants.PlayerSpeed;
		float L_8 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t701097383_il2cpp_TypeInfo_var);
		int32_t L_9 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_PlayerSpeed_0();
		L_5->set_x_0(((float)il2cpp_codegen_add((float)L_6, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), (float)(((float)((float)L_9))))))));
		// position.x = Clamp(position.x);
		Vector2_t2156229523 * L_10 = __this->get_address_of_position_2();
		Vector2_t2156229523 * L_11 = __this->get_address_of_position_2();
		float L_12 = L_11->get_x_0();
		// position.x = Clamp(position.x);
		float L_13 = Player_Clamp_m1814447284(__this, L_12, /*hidden argument*/NULL);
		L_10->set_x_0(L_13);
		// rb2D.MovePosition(position);
		Rigidbody2D_t939494601 * L_14 = __this->get_rb2D_4();
		Vector2_t2156229523  L_15 = __this->get_position_2();
		// rb2D.MovePosition(position);
		Rigidbody2D_MovePosition_m1934912072(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0077:
	{
		// if(Input.GetKeyDown(KeyCode.Space))
		// if(Input.GetKeyDown(KeyCode.Space))
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_16 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00a2;
		}
	}
	{
		// playerShootEvent.Invoke(position, Characters.Player);
		PlayerShoot_t3350012305 * L_17 = __this->get_playerShootEvent_6();
		Vector2_t2156229523  L_18 = __this->get_position_2();
		// playerShootEvent.Invoke(position, Characters.Player);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_19 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		// playerShootEvent.Invoke(position, Characters.Player);
		UnityEvent_2_Invoke_m1006745064(L_17, L_19, 0, /*hidden argument*/UnityEvent_2_Invoke_m1006745064_RuntimeMethod_var);
		// AudioManager.PlayAudio(SFXs.player);
		// AudioManager.PlayAudio(SFXs.player);
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t3267510698_il2cpp_TypeInfo_var);
		AudioManager_PlayAudio_m3468175270(NULL /*static, unused*/, 4, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		// }
		return;
	}
}
// System.Single Player::Clamp(System.Single)
extern "C"  float Player_Clamp_m1814447284 (Player_t3266647312 * __this, float ___xPosition0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// if(xPosition + playerHalfWidth > ScreenUtils.ScreenRight)
		float L_0 = ___xPosition0;
		float L_1 = __this->get_playerHalfWidth_5();
		// if(xPosition + playerHalfWidth > ScreenUtils.ScreenRight)
		float L_2 = ScreenUtils_get_ScreenRight_m555408866(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)((float)il2cpp_codegen_add((float)L_0, (float)L_1))) > ((float)L_2))))
		{
			goto IL_0028;
		}
	}
	{
		// xPosition = ScreenUtils.ScreenRight - playerHalfWidth;
		float L_3 = ScreenUtils_get_ScreenRight_m555408866(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = __this->get_playerHalfWidth_5();
		___xPosition0 = ((float)il2cpp_codegen_subtract((float)L_3, (float)L_4));
		goto IL_004a;
	}

IL_0028:
	{
		// else if(xPosition - playerHalfWidth < ScreenUtils.ScreenLeft)
		float L_5 = ___xPosition0;
		float L_6 = __this->get_playerHalfWidth_5();
		// else if(xPosition - playerHalfWidth < ScreenUtils.ScreenLeft)
		float L_7 = ScreenUtils_get_ScreenLeft_m4016222789(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_6))) < ((float)L_7))))
		{
			goto IL_004a;
		}
	}
	{
		// xPosition = ScreenUtils.ScreenLeft + playerHalfWidth;
		float L_8 = ScreenUtils_get_ScreenLeft_m4016222789(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = __this->get_playerHalfWidth_5();
		___xPosition0 = ((float)il2cpp_codegen_add((float)L_8, (float)L_9));
	}

IL_004a:
	{
		// return xPosition;
		float L_10 = ___xPosition0;
		V_0 = L_10;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		float L_11 = V_0;
		return L_11;
	}
}
// System.Void Player::AddPlayerShootListener(UnityEngine.Events.UnityAction`2<UnityEngine.Vector3,Characters>)
extern "C"  void Player_AddPlayerShootListener_m1115830263 (Player_t3266647312 * __this, UnityAction_2_t1857133811 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_AddPlayerShootListener_m1115830263_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerShootEvent.AddListener(listener);
		PlayerShoot_t3350012305 * L_0 = __this->get_playerShootEvent_6();
		UnityAction_2_t1857133811 * L_1 = ___listener0;
		// playerShootEvent.AddListener(listener);
		UnityEvent_2_AddListener_m3257760133(L_0, L_1, /*hidden argument*/UnityEvent_2_AddListener_m3257760133_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerProjectile::.ctor()
extern "C"  void PlayerProjectile__ctor_m1687153163 (PlayerProjectile_t331371730 * __this, const RuntimeMethod* method)
{
	{
		Projectile__ctor_m2984814897(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerProjectile::Start()
extern "C"  void PlayerProjectile_Start_m3477049789 (PlayerProjectile_t331371730 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerProjectile_Start_m3477049789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		// base.Start();
		Projectile_Start_m1343777743(__this, /*hidden argument*/NULL);
		// spriteRenderer.sprite = Resources.Load<Sprite>(@"Projectiles/playerProjectile");
		SpriteRenderer_t3235626157 * L_0 = ((Projectile_t1440994518 *)__this)->get_spriteRenderer_3();
		// spriteRenderer.sprite = Resources.Load<Sprite>(@"Projectiles/playerProjectile");
		Sprite_t280657092 * L_1 = Resources_Load_TisSprite_t280657092_m4144667290(NULL /*static, unused*/, _stringLiteral1311455409, /*hidden argument*/Resources_Load_TisSprite_t280657092_m4144667290_RuntimeMethod_var);
		// spriteRenderer.sprite = Resources.Load<Sprite>(@"Projectiles/playerProjectile");
		SpriteRenderer_set_sprite_m1286893786(L_0, L_1, /*hidden argument*/NULL);
		// rb2d.AddForce(new Vector2(0, 1) * Constants.PlayerProjectileSpeed, ForceMode2D.Impulse);
		Rigidbody2D_t939494601 * L_2 = ((Projectile_t1440994518 *)__this)->get_rb2d_2();
		// rb2d.AddForce(new Vector2(0, 1) * Constants.PlayerProjectileSpeed, ForceMode2D.Impulse);
		Vector2_t2156229523  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector2__ctor_m3970636864((&L_3), (0.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t701097383_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_PlayerProjectileSpeed_2();
		// rb2d.AddForce(new Vector2(0, 1) * Constants.PlayerProjectileSpeed, ForceMode2D.Impulse);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_5 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_3, (((float)((float)L_4))), /*hidden argument*/NULL);
		// rb2d.AddForce(new Vector2(0, 1) * Constants.PlayerProjectileSpeed, ForceMode2D.Impulse);
		Rigidbody2D_AddForce_m1099013366(L_2, L_5, 1, /*hidden argument*/NULL);
		// damageCaused = Constants.PlayerDamage;
		int32_t L_6 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_PlayerDamage_1();
		((Projectile_t1440994518 *)__this)->set_damageCaused_6(L_6);
		// }
		return;
	}
}
// System.Void PlayerProjectile::Update()
extern "C"  void PlayerProjectile_Update_m1081287257 (PlayerProjectile_t331371730 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void PlayerProjectile::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void PlayerProjectile_OnTriggerEnter2D_m1678232743 (PlayerProjectile_t331371730 * __this, Collider2D_t2806799626 * ___other0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerShoot::.ctor()
extern "C"  void PlayerShoot__ctor_m1259916230 (PlayerShoot_t3350012305 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerShoot__ctor_m1259916230_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m483165201(__this, /*hidden argument*/UnityEvent_2__ctor_m483165201_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerShootingManager::.ctor()
extern "C"  void PlayerShootingManager__ctor_m2022280721 (PlayerShootingManager_t269660542 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// Vector3 playerPosition = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t3722313464 ));
		Vector3_t3722313464  L_0 = V_0;
		__this->set_playerPosition_3(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerShootingManager::Awake()
extern "C"  void PlayerShootingManager_Awake_m643348769 (PlayerShootingManager_t269660542 * __this, const RuntimeMethod* method)
{
	{
		// ScreenUtils.Initialize();
		ScreenUtils_Initialize_m2443190515(NULL /*static, unused*/, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerShootingManager::Start()
extern "C"  void PlayerShootingManager_Start_m2817349083 (PlayerShootingManager_t269660542 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerShootingManager_Start_m2817349083_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.AddPlayerShootListener(PlayerShooting);
		intptr_t L_0 = (intptr_t)PlayerShootingManager_PlayerShooting_m3008384760_RuntimeMethod_var;
		UnityAction_2_t1857133811 * L_1 = (UnityAction_2_t1857133811 *)il2cpp_codegen_object_new(UnityAction_2_t1857133811_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m3863610767(L_1, __this, L_0, /*hidden argument*/UnityAction_2__ctor_m3863610767_RuntimeMethod_var);
		// EventManager.AddPlayerShootListener(PlayerShooting);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		EventManager_AddPlayerShootListener_m2748103306(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerShootingManager::Update()
extern "C"  void PlayerShootingManager_Update_m573169989 (PlayerShootingManager_t269660542 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void PlayerShootingManager::PlayerShooting(UnityEngine.Vector3,Characters)
extern "C"  void PlayerShootingManager_PlayerShooting_m3008384760 (PlayerShootingManager_t269660542 * __this, Vector3_t3722313464  ___position0, int32_t ___unused1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerShootingManager_PlayerShooting_m3008384760_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		// GameObject projectile = Instantiate(playerProjectilePrefab, position, Quaternion.identity) as GameObject;
		GameObject_t1113636619 * L_0 = __this->get_playerProjectilePrefab_2();
		Vector3_t3722313464  L_1 = ___position0;
		// GameObject projectile = Instantiate(playerProjectilePrefab, position, Quaternion.identity) as GameObject;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_2 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		// GameObject projectile = Instantiate(playerProjectilePrefab, position, Quaternion.identity) as GameObject;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_3 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_0 = L_3;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 PointsManager::get_Points()
extern "C"  int32_t PointsManager_get_Points_m2028628492 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointsManager_get_Points_m2028628492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// get { return points; }
		IL2CPP_RUNTIME_CLASS_INIT(PointsManager_t882499681_il2cpp_TypeInfo_var);
		int32_t L_0 = ((PointsManager_t882499681_StaticFields*)il2cpp_codegen_static_fields_for(PointsManager_t882499681_il2cpp_TypeInfo_var))->get_points_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		// get { return points; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void PointsManager::set_Points(System.Int32)
extern "C"  void PointsManager_set_Points_m1397397401 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointsManager_set_Points_m1397397401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { points = value; }
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(PointsManager_t882499681_il2cpp_TypeInfo_var);
		((PointsManager_t882499681_StaticFields*)il2cpp_codegen_static_fields_for(PointsManager_t882499681_il2cpp_TypeInfo_var))->set_points_0(L_0);
		// set { points = value; }
		return;
	}
}
// System.Void PointsManager::.cctor()
extern "C"  void PointsManager__cctor_m4167075909 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointsManager__cctor_m4167075909_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static int points = 0;
		((PointsManager_t882499681_StaticFields*)il2cpp_codegen_static_fields_for(PointsManager_t882499681_il2cpp_TypeInfo_var))->set_points_0(0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Projectile::.ctor()
extern "C"  void Projectile__ctor_m2984814897 (Projectile_t1440994518 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Projectile__ctor_m2984814897_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Hurt hurtEvent = new Hurt();
		Hurt_t2217771330 * L_0 = (Hurt_t2217771330 *)il2cpp_codegen_object_new(Hurt_t2217771330_il2cpp_TypeInfo_var);
		Hurt__ctor_m1656134574(L_0, /*hidden argument*/NULL);
		__this->set_hurtEvent_7(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Projectile::Start()
extern "C"  void Projectile_Start_m1343777743 (Projectile_t1440994518 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Projectile_Start_m1343777743_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteRenderer = GetComponent<SpriteRenderer>();
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3235626157 * L_0 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		__this->set_spriteRenderer_3(L_0);
		// rb2d = GetComponent<Rigidbody2D>();
		// rb2d = GetComponent<Rigidbody2D>();
		Rigidbody2D_t939494601 * L_1 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		__this->set_rb2d_2(L_1);
		// EventManager.AddHurtInvokers(this);
		// EventManager.AddHurtInvokers(this);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		EventManager_AddHurtInvokers_m2948630802(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Projectile::OnBecameInvisible()
extern "C"  void Projectile_OnBecameInvisible_m3038562845 (Projectile_t1440994518 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Projectile_OnBecameInvisible_m3038562845_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		// Destroy(gameObject);
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		// Destroy(gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Projectile::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void Projectile_OnCollisionEnter2D_m2849902966 (Projectile_t1440994518 * __this, Collision2D_t2842956331 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Projectile_OnCollisionEnter2D_m2849902966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		// Destroy(gameObject);
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		// Destroy(gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Projectile::AddHurtListener(UnityEngine.Events.UnityAction`1<System.Int32>)
extern "C"  void Projectile_AddHurtListener_m3502376813 (Projectile_t1440994518 * __this, UnityAction_1_t3535781894 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Projectile_AddHurtListener_m3502376813_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hurtEvent.AddListener(listener);
		Hurt_t2217771330 * L_0 = __this->get_hurtEvent_7();
		UnityAction_1_t3535781894 * L_1 = ___listener0;
		// hurtEvent.AddListener(listener);
		UnityEvent_1_AddListener_m3158408092(L_0, L_1, /*hidden argument*/UnityEvent_1_AddListener_m3158408092_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Protector::.ctor()
extern "C"  void Protector__ctor_m4057884002 (Protector_t3558790336 * __this, const RuntimeMethod* method)
{
	{
		Enemy__ctor_m2535212804(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Protector::Start()
extern "C"  void Protector_Start_m671816572 (Protector_t3558790336 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Protector_Start_m671816572_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// points = Constants.ProtectorPoints;
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t701097383_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_ProtectorPoints_4();
		((Enemy_t1765729589 *)__this)->set_points_3(L_0);
		// base.Start();
		// base.Start();
		Enemy_Start_m3612231678(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Protector::Update()
extern "C"  void Protector_Update_m27415663 (Protector_t3558790336 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Protector::Shoot(System.Int32)
extern "C"  void Protector_Shoot_m3718971367 (Protector_t3558790336 * __this, int32_t ___checkId0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ResetPlayerHealth::.ctor()
extern "C"  void ResetPlayerHealth__ctor_m1155286358 (ResetPlayerHealth_t3732752359 * __this, const RuntimeMethod* method)
{
	{
		UnityEvent__ctor_m431206565(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ResumeGameplay::.ctor()
extern "C"  void ResumeGameplay__ctor_m3388569851 (ResumeGameplay_t3033387813 * __this, const RuntimeMethod* method)
{
	{
		UnityEvent__ctor_m431206565(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single ScreenUtils::get_ScreenRight()
extern "C"  float ScreenUtils_get_ScreenRight_m555408866 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenUtils_get_ScreenRight_m555408866_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// get { return screenRight; }
		float L_0 = ((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->get_screenRight_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		// get { return screenRight; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single ScreenUtils::get_ScreenLeft()
extern "C"  float ScreenUtils_get_ScreenLeft_m4016222789 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenUtils_get_ScreenLeft_m4016222789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// get { return screenLeft; }
		float L_0 = ((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->get_screenLeft_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		// get { return screenLeft; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single ScreenUtils::get_ScreenTop()
extern "C"  float ScreenUtils_get_ScreenTop_m73875077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenUtils_get_ScreenTop_m73875077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// get { return screenTop; }
		float L_0 = ((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->get_screenTop_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		// get { return screenTop; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single ScreenUtils::get_ScreenBottom()
extern "C"  float ScreenUtils_get_ScreenBottom_m666689270 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenUtils_get_ScreenBottom_m666689270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// get { return screenBottom; }
		float L_0 = ((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->get_screenBottom_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		// get { return screenBottom; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single ScreenUtils::get_ZWorld()
extern "C"  float ScreenUtils_get_ZWorld_m1697726886 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenUtils_get_ZWorld_m1697726886_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// get { return zWorld; }
		float L_0 = ((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->get_zWorld_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		// get { return zWorld; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void ScreenUtils::Initialize()
extern "C"  void ScreenUtils_Initialize_m2443190515 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenUtils_Initialize_m2443190515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	{
		// float zScreen = -Camera.main.transform.position.z;
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		// float zScreen = -Camera.main.transform.position.z;
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		// float zScreen = -Camera.main.transform.position.z;
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_z_3();
		V_0 = ((-L_3));
		// Vector3 lowerLeftCorner = new Vector3(0, 0, zScreen);
		float L_4 = V_0;
		// Vector3 lowerLeftCorner = new Vector3(0, 0, zScreen);
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_2), (0.0f), (0.0f), L_4, /*hidden argument*/NULL);
		// Vector3 upperLeftCorner = new Vector3(0, Screen.height, zScreen);
		// Vector3 upperLeftCorner = new Vector3(0, Screen.height, zScreen);
		int32_t L_5 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = V_0;
		// Vector3 upperLeftCorner = new Vector3(0, Screen.height, zScreen);
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_3), (0.0f), (((float)((float)L_5))), L_6, /*hidden argument*/NULL);
		// Vector3 lowerRightCorner = new Vector3(Screen.width, 0, zScreen);
		// Vector3 lowerRightCorner = new Vector3(Screen.width, 0, zScreen);
		int32_t L_7 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_8 = V_0;
		// Vector3 lowerRightCorner = new Vector3(Screen.width, 0, zScreen);
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_4), (((float)((float)L_7))), (0.0f), L_8, /*hidden argument*/NULL);
		// Vector3 upperRightCorner = new Vector3(Screen.width, Screen.height, zScreen);
		// Vector3 upperRightCorner = new Vector3(Screen.width, Screen.height, zScreen);
		int32_t L_9 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		// Vector3 upperRightCorner = new Vector3(Screen.width, Screen.height, zScreen);
		int32_t L_10 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_11 = V_0;
		// Vector3 upperRightCorner = new Vector3(Screen.width, Screen.height, zScreen);
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_5), (((float)((float)L_9))), (((float)((float)L_10))), L_11, /*hidden argument*/NULL);
		// Vector3 lowerLeftCornerWorld = Camera.main.ScreenToWorldPoint(lowerLeftCorner);
		Camera_t4157153871 * L_12 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = V_2;
		// Vector3 lowerLeftCornerWorld = Camera.main.ScreenToWorldPoint(lowerLeftCorner);
		Vector3_t3722313464  L_14 = Camera_ScreenToWorldPoint_m3978588570(L_12, L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		// Vector3 upperLeftCornerWorld = Camera.main.ScreenToWorldPoint(upperLeftCorner);
		Camera_t4157153871 * L_15 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_16 = V_3;
		// Vector3 upperLeftCornerWorld = Camera.main.ScreenToWorldPoint(upperLeftCorner);
		Vector3_t3722313464  L_17 = Camera_ScreenToWorldPoint_m3978588570(L_15, L_16, /*hidden argument*/NULL);
		V_7 = L_17;
		// Vector3 lowerRightCornerWorld = Camera.main.ScreenToWorldPoint(lowerRightCorner);
		Camera_t4157153871 * L_18 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_19 = V_4;
		// Vector3 lowerRightCornerWorld = Camera.main.ScreenToWorldPoint(lowerRightCorner);
		Vector3_t3722313464  L_20 = Camera_ScreenToWorldPoint_m3978588570(L_18, L_19, /*hidden argument*/NULL);
		V_8 = L_20;
		// Vector3 upperRightCornerWorld = Camera.main.ScreenToWorldPoint(upperRightCorner);
		Camera_t4157153871 * L_21 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_22 = V_5;
		// Vector3 upperRightCornerWorld = Camera.main.ScreenToWorldPoint(upperRightCorner);
		Vector3_t3722313464  L_23 = Camera_ScreenToWorldPoint_m3978588570(L_21, L_22, /*hidden argument*/NULL);
		V_9 = L_23;
		// screenRight = lowerRightCornerWorld.x;
		float L_24 = (&V_8)->get_x_1();
		((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->set_screenRight_0(L_24);
		// screenLeft = lowerLeftCornerWorld.x;
		float L_25 = (&V_6)->get_x_1();
		((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->set_screenLeft_1(L_25);
		// screenBottom = lowerRightCornerWorld.y;
		float L_26 = (&V_8)->get_y_2();
		((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->set_screenBottom_3(L_26);
		// screenTop = upperLeftCornerWorld.y;
		float L_27 = (&V_7)->get_y_2();
		((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->set_screenTop_2(L_27);
		// zWorld = lowerLeftCornerWorld.z;
		float L_28 = (&V_6)->get_z_3();
		((ScreenUtils_t317983799_StaticFields*)il2cpp_codegen_static_fields_for(ScreenUtils_t317983799_il2cpp_TypeInfo_var))->set_zWorld_4(L_28);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Soldier::.ctor()
extern "C"  void Soldier__ctor_m3509595098 (Soldier_t1302779916 * __this, const RuntimeMethod* method)
{
	{
		Enemy__ctor_m2535212804(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Soldier::Start()
extern "C"  void Soldier_Start_m4241482778 (Soldier_t1302779916 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Soldier_Start_m4241482778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// damage = Constants.SoldierDamage;
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t701097383_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_SoldierDamage_5();
		((Enemy_t1765729589 *)__this)->set_damage_2(L_0);
		// points = Constants.SoldierPoints;
		int32_t L_1 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_SoldierPoints_6();
		((Enemy_t1765729589 *)__this)->set_points_3(L_1);
		// base.Start();
		// base.Start();
		Enemy_Start_m3612231678(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Soldier::Update()
extern "C"  void Soldier_Update_m302139691 (Soldier_t1302779916 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Soldier_Update_m302139691_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(currentlyShooting && !shootRan)
		bool L_0 = ((Enemy_t1765729589 *)__this)->get_currentlyShooting_5();
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		bool L_1 = ((Enemy_t1765729589 *)__this)->get_shootRan_4();
		if (L_1)
		{
			goto IL_0035;
		}
	}
	{
		// InvokeRepeating("SoldierShoot", 2, 2);
		// InvokeRepeating("SoldierShoot", 2, 2);
		MonoBehaviour_InvokeRepeating_m650519629(__this, _stringLiteral3220462371, (2.0f), (2.0f), /*hidden argument*/NULL);
		// shootRan = true;
		((Enemy_t1765729589 *)__this)->set_shootRan_4((bool)1);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Soldier::Shoot(System.Int32)
extern "C"  void Soldier_Shoot_m2464201062 (Soldier_t1302779916 * __this, int32_t ___checkId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Soldier_Shoot_m2464201062_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		// if(this.ID == checkId)
		// if(this.ID == checkId)
		int32_t L_0 = Enemy_get_ID_m1981869824(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___checkId0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0036;
		}
	}
	{
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Soldier Projectile"), transform.position, Quaternion.identity) as GameObject;
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Soldier Projectile"), transform.position, Quaternion.identity) as GameObject;
		GameObject_t1113636619 * L_2 = Resources_Load_TisGameObject_t1113636619_m1734345100(NULL /*static, unused*/, _stringLiteral3713036360, /*hidden argument*/Resources_Load_TisGameObject_t1113636619_m1734345100_RuntimeMethod_var);
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Soldier Projectile"), transform.position, Quaternion.identity) as GameObject;
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Soldier Projectile"), transform.position, Quaternion.identity) as GameObject;
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Soldier Projectile"), transform.position, Quaternion.identity) as GameObject;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_5 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Soldier Projectile"), transform.position, Quaternion.identity) as GameObject;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_6 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_2, L_4, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_0 = L_6;
		// currentlyShooting = true;
		((Enemy_t1765729589 *)__this)->set_currentlyShooting_5((bool)1);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Soldier::SoldierShoot()
extern "C"  void Soldier_SoldierShoot_m63507386 (Soldier_t1302779916 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Soldier_SoldierShoot_m63507386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Soldier Projectile"), transform.position, Quaternion.identity) as GameObject;
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Soldier Projectile"), transform.position, Quaternion.identity) as GameObject;
		GameObject_t1113636619 * L_0 = Resources_Load_TisGameObject_t1113636619_m1734345100(NULL /*static, unused*/, _stringLiteral3713036360, /*hidden argument*/Resources_Load_TisGameObject_t1113636619_m1734345100_RuntimeMethod_var);
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Soldier Projectile"), transform.position, Quaternion.identity) as GameObject;
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Soldier Projectile"), transform.position, Quaternion.identity) as GameObject;
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Soldier Projectile"), transform.position, Quaternion.identity) as GameObject;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_3 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		// GameObject projectile = Instantiate(Resources.Load<GameObject>("Soldier Projectile"), transform.position, Quaternion.identity) as GameObject;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_4 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_0, L_2, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_0 = L_4;
		// AudioManager.PlayAudio(SFXs.soldier);
		// AudioManager.PlayAudio(SFXs.soldier);
		IL2CPP_RUNTIME_CLASS_INIT(AudioManager_t3267510698_il2cpp_TypeInfo_var);
		AudioManager_PlayAudio_m3468175270(NULL /*static, unused*/, 5, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SoldierProjectile::.ctor()
extern "C"  void SoldierProjectile__ctor_m4279645658 (SoldierProjectile_t2485004912 * __this, const RuntimeMethod* method)
{
	{
		Projectile__ctor_m2984814897(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoldierProjectile::Start()
extern "C"  void SoldierProjectile_Start_m1912986262 (SoldierProjectile_t2485004912 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoldierProjectile_Start_m1912986262_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		// base.Start();
		Projectile_Start_m1343777743(__this, /*hidden argument*/NULL);
		// rb2d.AddForce(new Vector2(0, -1) * Constants.SoldierProjectileSpeed, ForceMode2D.Impulse);
		Rigidbody2D_t939494601 * L_0 = ((Projectile_t1440994518 *)__this)->get_rb2d_2();
		// rb2d.AddForce(new Vector2(0, -1) * Constants.SoldierProjectileSpeed, ForceMode2D.Impulse);
		Vector2_t2156229523  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector2__ctor_m3970636864((&L_1), (0.0f), (-1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t701097383_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_SoldierProjectileSpeed_7();
		// rb2d.AddForce(new Vector2(0, -1) * Constants.SoldierProjectileSpeed, ForceMode2D.Impulse);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_1, (((float)((float)L_2))), /*hidden argument*/NULL);
		// rb2d.AddForce(new Vector2(0, -1) * Constants.SoldierProjectileSpeed, ForceMode2D.Impulse);
		Rigidbody2D_AddForce_m1099013366(L_0, L_3, 1, /*hidden argument*/NULL);
		// damageCaused = Constants.SoldierDamage;
		int32_t L_4 = ((Constants_t701097383_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t701097383_il2cpp_TypeInfo_var))->get_SoldierDamage_5();
		((Projectile_t1440994518 *)__this)->set_damageCaused_6(L_4);
		// }
		return;
	}
}
// System.Void SoldierProjectile::Update()
extern "C"  void SoldierProjectile_Update_m2402871144 (SoldierProjectile_t2485004912 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SoldierProjectile::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void SoldierProjectile_OnTriggerEnter2D_m1913464136 (SoldierProjectile_t2485004912 * __this, Collider2D_t2806799626 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoldierProjectile_OnTriggerEnter2D_m1913464136_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag("Player"))
		Collider2D_t2806799626 * L_0 = ___other0;
		// if (other.gameObject.CompareTag("Player"))
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		// if (other.gameObject.CompareTag("Player"))
		bool L_2 = GameObject_CompareTag_m3144439756(L_1, _stringLiteral2261822918, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// hurtEvent.Invoke(damageCaused);
		Hurt_t2217771330 * L_3 = ((Projectile_t1440994518 *)__this)->get_hurtEvent_7();
		int32_t L_4 = ((Projectile_t1440994518 *)__this)->get_damageCaused_6();
		// hurtEvent.Invoke(damageCaused);
		UnityEvent_1_Invoke_m3604335408(L_3, L_4, /*hidden argument*/UnityEvent_1_Invoke_m3604335408_RuntimeMethod_var);
	}

IL_0029:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Timer::.ctor()
extern "C"  void Timer__ctor_m1596977667 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	{
		// float totalSeconds = 0;
		__this->set_totalSeconds_2((0.0f));
		// float elapsedSeconds = 0;
		__this->set_elapsedSeconds_3((0.0f));
		// bool running = false;
		__this->set_running_4((bool)0);
		// bool started = false;
		__this->set_started_5((bool)0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Timer::set_Duration(System.Single)
extern "C"  void Timer_set_Duration_m3601093541 (Timer_t4185932343 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// if(!running)
		bool L_0 = __this->get_running_4();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// totalSeconds = value;
		float L_1 = ___value0;
		__this->set_totalSeconds_2(L_1);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Boolean Timer::get_Finished()
extern "C"  bool Timer_get_Finished_m333457127 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return running; }
		bool L_0 = __this->get_running_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// get { return running; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Single Timer::get_SecondsLeft()
extern "C"  float Timer_get_SecondsLeft_m3674921158 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// if(running)
		bool L_0 = __this->get_running_4();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// return totalSeconds - elapsedSeconds;
		float L_1 = __this->get_totalSeconds_2();
		float L_2 = __this->get_elapsedSeconds_3();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_2));
		goto IL_002c;
	}

IL_0020:
	{
		// return 0;
		V_0 = (0.0f);
		goto IL_002c;
	}

IL_002c:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
// System.Void Timer::Update()
extern "C"  void Timer_Update_m1253272202 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	{
		// if(running)
		bool L_0 = __this->get_running_4();
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		// elapsedSeconds += Time.deltaTime;
		float L_1 = __this->get_elapsedSeconds_3();
		// elapsedSeconds += Time.deltaTime;
		float L_2 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_elapsedSeconds_3(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		// if(elapsedSeconds >= totalSeconds)
		float L_3 = __this->get_elapsedSeconds_3();
		float L_4 = __this->get_totalSeconds_2();
		if ((!(((float)L_3) >= ((float)L_4))))
		{
			goto IL_0039;
		}
	}
	{
		// running = false;
		__this->set_running_4((bool)0);
	}

IL_0039:
	{
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Timer::Run()
extern "C"  void Timer_Run_m2642820430 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	{
		// if(totalSeconds > 0)
		float L_0 = __this->get_totalSeconds_2();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		// started = true;
		__this->set_started_5((bool)1);
		// running = true;
		__this->set_running_4((bool)1);
		// elapsedSeconds = 0;
		__this->set_elapsedSeconds_3((0.0f));
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Timer::Stop()
extern "C"  void Timer_Stop_m3372427372 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	{
		// started = false;
		__this->set_started_5((bool)0);
		// running = false;
		__this->set_running_4((bool)0);
		// }
		return;
	}
}
// System.Void Timer::AddTime(System.Single)
extern "C"  void Timer_AddTime_m1416535784 (Timer_t4185932343 * __this, float ___seconds0, const RuntimeMethod* method)
{
	{
		// totalSeconds += seconds;
		float L_0 = __this->get_totalSeconds_2();
		float L_1 = ___seconds0;
		__this->set_totalSeconds_2(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wall::.ctor()
extern "C"  void Wall__ctor_m559063296 (Wall_t2206666577 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Wall__ctor_m559063296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HitWall hitWallEvent = new HitWall();
		HitWall_t625646887 * L_0 = (HitWall_t625646887 *)il2cpp_codegen_object_new(HitWall_t625646887_il2cpp_TypeInfo_var);
		HitWall__ctor_m895202767(L_0, /*hidden argument*/NULL);
		__this->set_hitWallEvent_4(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wall::Start()
extern "C"  void Wall_Start_m1066291526 (Wall_t2206666577 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Wall_Start_m1066291526_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boxCollider2D = GetComponent<BoxCollider2D>();
		// boxCollider2D = GetComponent<BoxCollider2D>();
		BoxCollider2D_t3581341831 * L_0 = Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273_RuntimeMethod_var);
		__this->set_boxCollider2D_2(L_0);
		// rb2d = GetComponent<Rigidbody2D>();
		// rb2d = GetComponent<Rigidbody2D>();
		Rigidbody2D_t939494601 * L_1 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		__this->set_rb2d_3(L_1);
		// EventManager.AddHitWallInvokers(this);
		// EventManager.AddHitWallInvokers(this);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		EventManager_AddHitWallInvokers_m1381144606(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wall::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void Wall_OnCollisionEnter2D_m4207291772 (Wall_t2206666577 * __this, Collision2D_t2842956331 * ___collision0, const RuntimeMethod* method)
{
	{
		// hitWallEvent.Invoke();
		HitWall_t625646887 * L_0 = __this->get_hitWallEvent_4();
		// hitWallEvent.Invoke();
		UnityEvent_Invoke_m3065672636(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wall::AddHitWallListener(UnityEngine.Events.UnityAction)
extern "C"  void Wall_AddHitWallListener_m1858305512 (Wall_t2206666577 * __this, UnityAction_t3245792599 * ___listener0, const RuntimeMethod* method)
{
	{
		// hitWallEvent.AddListener(listener);
		HitWall_t625646887 * L_0 = __this->get_hitWallEvent_4();
		UnityAction_t3245792599 * L_1 = ___listener0;
		// hitWallEvent.AddListener(listener);
		UnityEvent_AddListener_m2276267359(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
