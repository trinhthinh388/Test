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
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// CompleteProject.CameraFollow
struct CameraFollow_t555330123;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// CompleteProject.CoinManager
struct CoinManager_t3944673524;
// System.String
struct String_t;
// CompleteProject.EnemyAttack
struct EnemyAttack_t1611619807;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// CompleteProject.PlayerHealth
struct PlayerHealth_t4039380943;
// CompleteProject.EnemyHealth
struct EnemyHealth_t1074184144;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.ParticleSystem
struct ParticleSystem_t1800779281;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t197597763;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t1276799816;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// CompleteProject.EnemyManager
struct EnemyManager_t2944058352;
// CompleteProject.EnemyMovement
struct EnemyMovement_t2573605316;
// CompleteProject.GameOverManager
struct GameOverManager_t4096720320;
// CompleteProject.PlayerMovement
struct PlayerMovement_t1816600158;
// CompleteProject.PlayerShooting
struct PlayerShooting_t763517272;
// System.String[]
struct StringU5BU5D_t1281789340;
// UnityEngine.LineRenderer
struct LineRenderer_t3154350270;
// UnityEngine.Light
struct Light_t3756812086;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// CompleteProject.ScoreManager
struct ScoreManager_t2448100397;
// Joystick
struct Joystick_t9498292;
// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t1347148391;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3807901092;
// MixLevels
struct MixLevels_t2451904987;
// UnityEngine.Audio.AudioMixer
struct AudioMixer_t3521020193;
// PauseManager
struct PauseManager_t1166378904;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Audio.AudioMixerSnapshot
struct AudioMixerSnapshot_t1921958751;
// RandomAnimationPoint
struct RandomAnimationPoint_t761985300;
// RandomParticlePoint
struct RandomParticlePoint_t2073816061;
// UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct MobileInput_t3295884756;
// UnitySampleAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_t4247650776;
// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t3490362950;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_t1132404690;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_t3275619249;
// UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct StandaloneInput_t1877793759;
// System.Exception
struct Exception_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// UnityStandardAssets.CrossPlatformInput.MobileControlRig
struct MobileControlRig_t1964600252;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// VolumeHandler
struct VolumeHandler_t704224452;
// UnityEngine.UI.Slider
struct Slider_t3903728902;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t3180273144;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t1982102915;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t2278926278;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Char[]
struct CharU5BU5D_t3528271667;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton[]
struct VirtualButtonU5BU5D_t1759394275;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton,System.Collections.DictionaryEntry>
struct Transform_1_t609805991;
// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis[]
struct VirtualAxisU5BU5D_t1034880030;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis,System.Collections.DictionaryEntry>
struct Transform_1_t4180259042;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Void
struct Void_t1185182177;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t4150874583;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t3309123499;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t CameraFollow_Start_m2426147617_MetadataUsageId;
extern const uint32_t CameraFollow_FixedUpdate_m62321540_MetadataUsageId;
extern RuntimeClass* CoinManager_t3944673524_il2cpp_TypeInfo_var;
extern const uint32_t CoinManager_Start_m3093958212_MetadataUsageId;
extern const uint32_t CoinManager_Update_m2875580731_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisPlayerHealth_t4039380943_m3651450979_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisEnemyHealth_t1074184144_m2423835117_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var;
extern String_t* _stringLiteral2261822918;
extern const uint32_t EnemyAttack_Awake_m2769050695_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t EnemyAttack_OnTriggerEnter_m9158358_MetadataUsageId;
extern const uint32_t EnemyAttack_OnTriggerExit_m2896840382_MetadataUsageId;
extern String_t* _stringLiteral2746150380;
extern const uint32_t EnemyAttack_Update_m3903684778_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisParticleSystem_t1800779281_m1692475682_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisCapsuleCollider_t197597763_m690992970_RuntimeMethod_var;
extern const uint32_t EnemyHealth_Awake_m2136750458_MetadataUsageId;
extern const uint32_t EnemyHealth_Update_m933242776_MetadataUsageId;
extern String_t* _stringLiteral431746817;
extern const uint32_t EnemyHealth_Death_m140552477_MetadataUsageId;
extern RuntimeClass* ScoreManager_t2448100397_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_t1276799816_m597731532_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var;
extern const uint32_t EnemyHealth_StartSinking_m1492931314_MetadataUsageId;
extern String_t* _stringLiteral3907562786;
extern const uint32_t EnemyManager_Start_m1501309799_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var;
extern const uint32_t EnemyManager_Spawn_m1600679877_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisPlayerHealth_t4039380943_m1551058957_RuntimeMethod_var;
extern const uint32_t EnemyMovement_Awake_m3082245139_MetadataUsageId;
extern const uint32_t GameOverManager_Awake_m3610178834_MetadataUsageId;
extern String_t* _stringLiteral1350712178;
extern const uint32_t GameOverManager_Update_m2257072480_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisPlayerMovement_t1816600158_m3461791955_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisPlayerShooting_t763517272_m1941053385_RuntimeMethod_var;
extern const uint32_t PlayerHealth_Awake_m2635250788_MetadataUsageId;
extern String_t* _stringLiteral1700381037;
extern const uint32_t PlayerHealth_Death_m3207134654_MetadataUsageId;
extern const uint32_t PlayerMovement_Awake_m2228100291_MetadataUsageId;
extern RuntimeClass* CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1828639942;
extern String_t* _stringLiteral2984908384;
extern const uint32_t PlayerMovement_FixedUpdate_m2569456057_MetadataUsageId;
extern const uint32_t PlayerMovement_Move_m4227028268_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3403559637;
extern String_t* _stringLiteral674676282;
extern const uint32_t PlayerMovement_Turning_m3442290832_MetadataUsageId;
extern String_t* _stringLiteral302131484;
extern const uint32_t PlayerMovement_Animating_m42054968_MetadataUsageId;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisParticleSystem_t1800779281_m3884485303_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisLineRenderer_t3154350270_m1658315391_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisLight_t3756812086_m916313317_RuntimeMethod_var;
extern String_t* _stringLiteral2251434074;
extern const uint32_t PlayerShooting_Awake_m1258920341_MetadataUsageId;
extern const uint32_t PlayerShooting_Update_m1934480358_MetadataUsageId;
extern const uint32_t PlayerShooting_Shoot_m1977277932_MetadataUsageId;
extern const uint32_t ScoreManager_Awake_m466905556_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3454908288;
extern const uint32_t ScoreManager_Update_m3712719109_MetadataUsageId;
extern const uint32_t Joystick__ctor_m1272315817_MetadataUsageId;
extern const uint32_t Joystick_UpdateVirtualAxes_m2931167446_MetadataUsageId;
extern RuntimeClass* VirtualAxis_t1347148391_il2cpp_TypeInfo_var;
extern const uint32_t Joystick_CreateVirtualAxes_m3715245240_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t Joystick_OnDrag_m1548353041_MetadataUsageId;
extern String_t* _stringLiteral4216931872;
extern const uint32_t MixLevels_SetSfxLvl_m996539440_MetadataUsageId;
extern String_t* _stringLiteral3902063868;
extern const uint32_t MixLevels_SetMusicLvl_m3594062045_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisCanvas_t3310196443_m782269232_RuntimeMethod_var;
extern const uint32_t PauseManager_Start_m1725239283_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t PauseManager_Update_m1449314415_MetadataUsageId;
extern String_t* _stringLiteral3540494343;
extern const uint32_t RandomAnimationPoint_OnValidate_m3403497882_MetadataUsageId;
extern const uint32_t RandomParticlePoint_OnValidate_m717360907_MetadataUsageId;
extern RuntimeClass* MobileInput_t3295884756_il2cpp_TypeInfo_var;
extern const uint32_t CrossPlatformInputManager__cctor_m3618134741_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_RegisterVirtualAxis_m3729018904_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_RegisterVirtualButton_m1038377797_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern const RuntimeMethod* CrossPlatformInputManager_UnRegisterVirtualAxis_m2747492094_RuntimeMethod_var;
extern String_t* _stringLiteral2730274217;
extern const uint32_t CrossPlatformInputManager_UnRegisterVirtualAxis_m2747492094_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_UnRegisterVirtualButton_m3381002917_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_VirtualAxisReference_m2488295043_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetAxis_m4045467026_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetAxisRaw_m3829676626_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetAxis_m3244021904_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetButton_m3105922025_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetButtonDown_m4159945301_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetButtonUp_m2950373926_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetButtonDown_m1084881269_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetButtonUp_m1215372893_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetAxisPositive_m758253539_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetAxisNegative_m4255594822_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetAxisZero_m691309370_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetAxis_m990722195_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_get_mousePosition_m1763278742_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetVirtualMousePositionX_m549431750_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetVirtualMousePositionY_m1873444571_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetVirtualMousePositionZ_m1931710842_MetadataUsageId;
extern const uint32_t VirtualAxis__ctor_m615583067_MetadataUsageId;
extern const uint32_t VirtualAxis_Remove_m969104513_MetadataUsageId;
extern const uint32_t VirtualButton_Remove_m189601859_MetadataUsageId;
extern RuntimeClass* VirtualButton_t3490362950_il2cpp_TypeInfo_var;
extern const uint32_t MobileInput_AddButton_m1546634226_MetadataUsageId;
extern const uint32_t MobileInput_AddAxes_m882771614_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m623971441_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m3767727970_RuntimeMethod_var;
extern const uint32_t MobileInput_GetAxis_m2377156865_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m3713610116_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m670004451_RuntimeMethod_var;
extern const uint32_t MobileInput_SetButtonDown_m549868324_MetadataUsageId;
extern const uint32_t MobileInput_SetButtonUp_m2277393409_MetadataUsageId;
extern const uint32_t MobileInput_SetAxisPositive_m575333630_MetadataUsageId;
extern const uint32_t MobileInput_SetAxisNegative_m3582032963_MetadataUsageId;
extern const uint32_t MobileInput_SetAxisZero_m2564297357_MetadataUsageId;
extern const uint32_t MobileInput_SetAxis_m2576160133_MetadataUsageId;
extern const uint32_t MobileInput_GetButtonDown_m2362171045_MetadataUsageId;
extern const uint32_t MobileInput_GetButtonUp_m540826956_MetadataUsageId;
extern const uint32_t MobileInput_GetButton_m367691380_MetadataUsageId;
extern const uint32_t StandaloneInput_GetAxis_m3751418588_MetadataUsageId;
extern const uint32_t StandaloneInput_GetButton_m391408301_MetadataUsageId;
extern const uint32_t StandaloneInput_GetButtonDown_m4175847824_MetadataUsageId;
extern const uint32_t StandaloneInput_GetButtonUp_m3007880528_MetadataUsageId;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* StandaloneInput_SetButtonDown_m1675172227_RuntimeMethod_var;
extern String_t* _stringLiteral1111251549;
extern const uint32_t StandaloneInput_SetButtonDown_m1675172227_MetadataUsageId;
extern const RuntimeMethod* StandaloneInput_SetButtonUp_m999497337_RuntimeMethod_var;
extern const uint32_t StandaloneInput_SetButtonUp_m999497337_MetadataUsageId;
extern const RuntimeMethod* StandaloneInput_SetAxisPositive_m3167045619_RuntimeMethod_var;
extern const uint32_t StandaloneInput_SetAxisPositive_m3167045619_MetadataUsageId;
extern const RuntimeMethod* StandaloneInput_SetAxisNegative_m20802039_RuntimeMethod_var;
extern const uint32_t StandaloneInput_SetAxisNegative_m20802039_MetadataUsageId;
extern const RuntimeMethod* StandaloneInput_SetAxisZero_m2388999529_RuntimeMethod_var;
extern const uint32_t StandaloneInput_SetAxisZero_m2388999529_MetadataUsageId;
extern const RuntimeMethod* StandaloneInput_SetAxis_m1137062756_RuntimeMethod_var;
extern const uint32_t StandaloneInput_SetAxis_m1137062756_MetadataUsageId;
extern const uint32_t StandaloneInput_MousePosition_m3640947727_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t1132404690_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3275619249_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1598708476_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2884814283_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern const uint32_t VirtualInput__ctor_m1053376383_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_Add_m1208951171_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1685793073_RuntimeMethod_var;
extern String_t* _stringLiteral1316003440;
extern String_t* _stringLiteral499939329;
extern const uint32_t VirtualInput_RegisterVirtualAxis_m4061627445_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Add_m943624655_RuntimeMethod_var;
extern String_t* _stringLiteral341380797;
extern const uint32_t VirtualInput_RegisterVirtualButton_m539054427_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Remove_m913603837_RuntimeMethod_var;
extern const uint32_t VirtualInput_UnRegisterVirtualAxis_m2615886023_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Remove_m3912794030_RuntimeMethod_var;
extern const uint32_t VirtualInput_UnRegisterVirtualButton_m1331827656_MetadataUsageId;
extern const uint32_t VirtualInput_VirtualAxisReference_m265738861_MetadataUsageId;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Transform_t3600365921_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t MobileControlRig_EnableControlRig_m2658193441_MetadataUsageId;
extern RuntimeClass* UnityAction_1_t1982102915_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisSlider_t3903728902_m865256018_RuntimeMethod_var;
extern const RuntimeMethod* VolumeHandler_SetVolume_m1972732037_RuntimeMethod_var;
extern const RuntimeMethod* UnityAction_1__ctor_m336053009_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_1_AddListener_m3008008915_RuntimeMethod_var;
extern String_t* _stringLiteral1151771902;
extern const uint32_t VolumeHandler_Start_m1555305517_MetadataUsageId;
extern const uint32_t VolumeHandler_SetVolume_m1972732037_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_1_RemoveListener_m4190968495_RuntimeMethod_var;
extern const uint32_t VolumeHandler_OnDestroy_m3857069918_MetadataUsageId;

struct TransformU5BU5D_t807237628;
struct StringU5BU5D_t1281789340;


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
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
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
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
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
#ifndef DICTIONARY_2_T3275619249_H
#define DICTIONARY_2_T3275619249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct  Dictionary_2_t3275619249  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	VirtualButtonU5BU5D_t1759394275* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249, ___valueSlots_7)); }
	inline VirtualButtonU5BU5D_t1759394275* get_valueSlots_7() const { return ___valueSlots_7; }
	inline VirtualButtonU5BU5D_t1759394275** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(VirtualButtonU5BU5D_t1759394275* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3275619249_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t609805991 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t609805991 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t609805991 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t609805991 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3275619249_H
#ifndef VIRTUALAXIS_T1347148391_H
#define VIRTUALAXIS_T1347148391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct  VirtualAxis_t1347148391  : public RuntimeObject
{
public:
	// System.String UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Single UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::m_Value
	float ___m_Value_1;
	// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualAxis_t1347148391, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(VirtualAxis_t1347148391, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VirtualAxis_t1347148391, ___U3CmatchWithInputManagerU3Ek__BackingField_2)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_2() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_2() { return &___U3CmatchWithInputManagerU3Ek__BackingField_2; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_2(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALAXIS_T1347148391_H
#ifndef CROSSPLATFORMINPUTMANAGER_T1518791927_H
#define CROSSPLATFORMINPUTMANAGER_T1518791927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager
struct  CrossPlatformInputManager_t1518791927  : public RuntimeObject
{
public:

public:
};

struct CrossPlatformInputManager_t1518791927_StaticFields
{
public:
	// UnitySampleAssets.CrossPlatformInput.VirtualInput UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::virtualInput
	VirtualInput_t4247650776 * ___virtualInput_0;

public:
	inline static int32_t get_offset_of_virtualInput_0() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t1518791927_StaticFields, ___virtualInput_0)); }
	inline VirtualInput_t4247650776 * get_virtualInput_0() const { return ___virtualInput_0; }
	inline VirtualInput_t4247650776 ** get_address_of_virtualInput_0() { return &___virtualInput_0; }
	inline void set_virtualInput_0(VirtualInput_t4247650776 * value)
	{
		___virtualInput_0 = value;
		Il2CppCodeGenWriteBarrier((&___virtualInput_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSPLATFORMINPUTMANAGER_T1518791927_H
#ifndef VIRTUALBUTTON_T3490362950_H
#define VIRTUALBUTTON_T3490362950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct  VirtualButton_t3490362950  : public RuntimeObject
{
public:
	// System.String UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Int32 UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::lastPressedFrame
	int32_t ___lastPressedFrame_1;
	// System.Int32 UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::releasedFrame
	int32_t ___releasedFrame_2;
	// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::pressed
	bool ___pressed_3;
	// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualButton_t3490362950, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_lastPressedFrame_1() { return static_cast<int32_t>(offsetof(VirtualButton_t3490362950, ___lastPressedFrame_1)); }
	inline int32_t get_lastPressedFrame_1() const { return ___lastPressedFrame_1; }
	inline int32_t* get_address_of_lastPressedFrame_1() { return &___lastPressedFrame_1; }
	inline void set_lastPressedFrame_1(int32_t value)
	{
		___lastPressedFrame_1 = value;
	}

	inline static int32_t get_offset_of_releasedFrame_2() { return static_cast<int32_t>(offsetof(VirtualButton_t3490362950, ___releasedFrame_2)); }
	inline int32_t get_releasedFrame_2() const { return ___releasedFrame_2; }
	inline int32_t* get_address_of_releasedFrame_2() { return &___releasedFrame_2; }
	inline void set_releasedFrame_2(int32_t value)
	{
		___releasedFrame_2 = value;
	}

	inline static int32_t get_offset_of_pressed_3() { return static_cast<int32_t>(offsetof(VirtualButton_t3490362950, ___pressed_3)); }
	inline bool get_pressed_3() const { return ___pressed_3; }
	inline bool* get_address_of_pressed_3() { return &___pressed_3; }
	inline void set_pressed_3(bool value)
	{
		___pressed_3 = value;
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VirtualButton_t3490362950, ___U3CmatchWithInputManagerU3Ek__BackingField_4)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_4() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_4() { return &___U3CmatchWithInputManagerU3Ek__BackingField_4; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_4(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALBUTTON_T3490362950_H
#ifndef DICTIONARY_2_T1132404690_H
#define DICTIONARY_2_T1132404690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct  Dictionary_2_t1132404690  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	VirtualAxisU5BU5D_t1034880030* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690, ___valueSlots_7)); }
	inline VirtualAxisU5BU5D_t1034880030* get_valueSlots_7() const { return ___valueSlots_7; }
	inline VirtualAxisU5BU5D_t1034880030** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(VirtualAxisU5BU5D_t1034880030* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1132404690_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t4180259042 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t4180259042 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t4180259042 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t4180259042 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1132404690_H
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
#ifndef DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#define DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t2562230146 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T2562230146_H
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
#ifndef UNITYEVENT_1_T2278926278_H
#define UNITYEVENT_1_T2278926278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Single>
struct  UnityEvent_1_t2278926278  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t2278926278, ___m_InvokeArray_4)); }
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
#endif // UNITYEVENT_1_T2278926278_H
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
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
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
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
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
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
#ifndef VIRTUALINPUT_T4247650776_H
#define VIRTUALINPUT_T4247650776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.CrossPlatformInput.VirtualInput
struct  VirtualInput_t4247650776  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis> UnitySampleAssets.CrossPlatformInput.VirtualInput::virtualAxes
	Dictionary_2_t1132404690 * ___virtualAxes_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton> UnitySampleAssets.CrossPlatformInput.VirtualInput::virtualButtons
	Dictionary_2_t3275619249 * ___virtualButtons_1;
	// System.Collections.Generic.List`1<System.String> UnitySampleAssets.CrossPlatformInput.VirtualInput::alwaysUseVirtual
	List_1_t3319525431 * ___alwaysUseVirtual_2;
	// UnityEngine.Vector3 UnitySampleAssets.CrossPlatformInput.VirtualInput::<virtualMousePosition>k__BackingField
	Vector3_t3722313464  ___U3CvirtualMousePositionU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_virtualAxes_0() { return static_cast<int32_t>(offsetof(VirtualInput_t4247650776, ___virtualAxes_0)); }
	inline Dictionary_2_t1132404690 * get_virtualAxes_0() const { return ___virtualAxes_0; }
	inline Dictionary_2_t1132404690 ** get_address_of_virtualAxes_0() { return &___virtualAxes_0; }
	inline void set_virtualAxes_0(Dictionary_2_t1132404690 * value)
	{
		___virtualAxes_0 = value;
		Il2CppCodeGenWriteBarrier((&___virtualAxes_0), value);
	}

	inline static int32_t get_offset_of_virtualButtons_1() { return static_cast<int32_t>(offsetof(VirtualInput_t4247650776, ___virtualButtons_1)); }
	inline Dictionary_2_t3275619249 * get_virtualButtons_1() const { return ___virtualButtons_1; }
	inline Dictionary_2_t3275619249 ** get_address_of_virtualButtons_1() { return &___virtualButtons_1; }
	inline void set_virtualButtons_1(Dictionary_2_t3275619249 * value)
	{
		___virtualButtons_1 = value;
		Il2CppCodeGenWriteBarrier((&___virtualButtons_1), value);
	}

	inline static int32_t get_offset_of_alwaysUseVirtual_2() { return static_cast<int32_t>(offsetof(VirtualInput_t4247650776, ___alwaysUseVirtual_2)); }
	inline List_1_t3319525431 * get_alwaysUseVirtual_2() const { return ___alwaysUseVirtual_2; }
	inline List_1_t3319525431 ** get_address_of_alwaysUseVirtual_2() { return &___alwaysUseVirtual_2; }
	inline void set_alwaysUseVirtual_2(List_1_t3319525431 * value)
	{
		___alwaysUseVirtual_2 = value;
		Il2CppCodeGenWriteBarrier((&___alwaysUseVirtual_2), value);
	}

	inline static int32_t get_offset_of_U3CvirtualMousePositionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VirtualInput_t4247650776, ___U3CvirtualMousePositionU3Ek__BackingField_3)); }
	inline Vector3_t3722313464  get_U3CvirtualMousePositionU3Ek__BackingField_3() const { return ___U3CvirtualMousePositionU3Ek__BackingField_3; }
	inline Vector3_t3722313464 * get_address_of_U3CvirtualMousePositionU3Ek__BackingField_3() { return &___U3CvirtualMousePositionU3Ek__BackingField_3; }
	inline void set_U3CvirtualMousePositionU3Ek__BackingField_3(Vector3_t3722313464  value)
	{
		___U3CvirtualMousePositionU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALINPUT_T4247650776_H
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
#ifndef INPUTBUTTON_T3704011348_H
#define INPUTBUTTON_T3704011348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_t3704011348 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputButton_t3704011348, ___value___1)); }
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
#endif // INPUTBUTTON_T3704011348_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
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
#endif // MODE_T1066900953_H
#ifndef AXISOPTION_T1133218804_H
#define AXISOPTION_T1133218804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Joystick/AxisOption
struct  AxisOption_t1133218804 
{
public:
	// System.Int32 Joystick/AxisOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AxisOption_t1133218804, ___value___1)); }
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
#endif // AXISOPTION_T1133218804_H
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
#ifndef DIRECTION_T337909235_H
#define DIRECTION_T337909235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider/Direction
struct  Direction_t337909235 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Direction_t337909235, ___value___1)); }
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
#endif // DIRECTION_T337909235_H
#ifndef SLIDEREVENT_T3180273144_H
#define SLIDEREVENT_T3180273144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider/SliderEvent
struct  SliderEvent_t3180273144  : public UnityEvent_1_t2278926278
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLIDEREVENT_T3180273144_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
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
#endif // TRANSITION_T1769908631_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef RAYCASTRESULT_T3360306849_H
#define RAYCASTRESULT_T3360306849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t3360306849 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t1113636619 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t4150874583 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t3722313464  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t3722313464  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t2156229523  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___m_GameObject_0)); }
	inline GameObject_t1113636619 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t1113636619 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___module_1)); }
	inline BaseRaycaster_t4150874583 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t4150874583 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t4150874583 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldPosition_7)); }
	inline Vector3_t3722313464  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t3722313464 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t3722313464  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldNormal_8)); }
	inline Vector3_t3722313464  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t3722313464 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t3722313464  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___screenPosition_9)); }
	inline Vector2_t2156229523  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t2156229523 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t2156229523  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_pinvoke
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_com
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T3360306849_H
#ifndef TYPE_T1152881528_H
#define TYPE_T1152881528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/Type
struct  Type_t1152881528 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1152881528, ___value___1)); }
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
#endif // TYPE_T1152881528_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
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
#endif // SELECTIONSTATE_T2656606514_H
#ifndef FILLMETHOD_T1167457570_H
#define FILLMETHOD_T1167457570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t1167457570 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FillMethod_t1167457570, ___value___1)); }
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
#endif // FILLMETHOD_T1167457570_H
#ifndef RAYCASTHIT_T1056001966_H
#define RAYCASTHIT_T1056001966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t1056001966 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t3722313464  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2156229523  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t1773347010 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Point_0)); }
	inline Vector3_t3722313464  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3722313464 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3722313464  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_UV_4)); }
	inline Vector2_t2156229523  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2156229523 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2156229523  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Collider_5)); }
	inline Collider_t1773347010 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t1773347010 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t1773347010 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1056001966_marshaled_pinvoke
{
	Vector3_t3722313464  ___m_Point_0;
	Vector3_t3722313464  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2156229523  ___m_UV_4;
	Collider_t1773347010 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1056001966_marshaled_com
{
	Vector3_t3722313464  ___m_Point_0;
	Vector3_t3722313464  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2156229523  ___m_UV_4;
	Collider_t1773347010 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T1056001966_H
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
#ifndef RAY_T3785851493_H
#define RAY_T3785851493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3785851493 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3722313464  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3722313464  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Origin_0)); }
	inline Vector3_t3722313464  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3722313464 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3722313464  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Direction_1)); }
	inline Vector3_t3722313464  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3722313464 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3722313464  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3785851493_H
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
#ifndef MOBILEINPUT_T3295884756_H
#define MOBILEINPUT_T3295884756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct  MobileInput_t3295884756  : public VirtualInput_t4247650776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOBILEINPUT_T3295884756_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef STANDALONEINPUT_T1877793759_H
#define STANDALONEINPUT_T1877793759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct  StandaloneInput_t1877793759  : public VirtualInput_t4247650776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDALONEINPUT_T1877793759_H
#ifndef POINTEREVENTDATA_T3807901092_H
#define POINTEREVENTDATA_T3807901092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_t3807901092  : public BaseEventData_t3903027533
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t1113636619 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t1113636619 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t1113636619 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t1113636619 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t1113636619 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t2585711361 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t2156229523  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t2156229523  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t2156229523  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t3722313464  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t3722313464  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t2156229523  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_t1113636619 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_t1113636619 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerEnterU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___m_PointerPress_3)); }
	inline GameObject_t1113636619 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_t1113636619 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_t1113636619 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerPress_3), value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_t1113636619 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_t1113636619 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_t1113636619 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClastPressU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_t1113636619 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_t1113636619 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_t1113636619 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrawPointerPressU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_t1113636619 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_t1113636619 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerDragU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t3360306849  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t3360306849  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t3360306849  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t3360306849  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___hovered_9)); }
	inline List_1_t2585711361 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t2585711361 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t2585711361 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((&___hovered_9), value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_t2156229523  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_t2156229523 * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_t2156229523  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_t2156229523  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_t2156229523 * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_t2156229523  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_t2156229523  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_t2156229523 * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_t2156229523  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_t3722313464  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_t3722313464 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_t3722313464  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_t3722313464  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_t3722313464 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_t3722313464  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_t2156229523  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_t2156229523 * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_t2156229523  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTEREVENTDATA_T3807901092_H
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
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
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
#ifndef AUDIOMIXER_T3521020193_H
#define AUDIOMIXER_T3521020193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioMixer
struct  AudioMixer_t3521020193  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMIXER_T3521020193_H
#ifndef AUDIOMIXERSNAPSHOT_T1921958751_H
#define AUDIOMIXERSNAPSHOT_T1921958751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioMixerSnapshot
struct  AudioMixerSnapshot_t1921958751  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMIXERSNAPSHOT_T1921958751_H
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
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef UNITYACTION_1_T1982102915_H
#define UNITYACTION_1_T1982102915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Single>
struct  UnityAction_1_t1982102915  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T1982102915_H
#ifndef RIGIDBODY_T3916780224_H
#define RIGIDBODY_T3916780224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t3916780224  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T3916780224_H
#ifndef PARTICLESYSTEM_T1800779281_H
#define PARTICLESYSTEM_T1800779281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem
struct  ParticleSystem_t1800779281  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEM_T1800779281_H
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
#ifndef NAVMESHAGENT_T1276799816_H
#define NAVMESHAGENT_T1276799816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshAgent
struct  NavMeshAgent_t1276799816  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESHAGENT_T1276799816_H
#ifndef CAPSULECOLLIDER_T197597763_H
#define CAPSULECOLLIDER_T197597763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CapsuleCollider
struct  CapsuleCollider_t197597763  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPSULECOLLIDER_T197597763_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public Behaviour_t1437897464
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
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
#ifndef CANVAS_T3310196443_H
#define CANVAS_T3310196443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_t3310196443  : public Behaviour_t1437897464
{
public:

public:
};

struct Canvas_t3310196443_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t3309123499 * ___willRenderCanvases_2;

public:
	inline static int32_t get_offset_of_willRenderCanvases_2() { return static_cast<int32_t>(offsetof(Canvas_t3310196443_StaticFields, ___willRenderCanvases_2)); }
	inline WillRenderCanvases_t3309123499 * get_willRenderCanvases_2() const { return ___willRenderCanvases_2; }
	inline WillRenderCanvases_t3309123499 ** get_address_of_willRenderCanvases_2() { return &___willRenderCanvases_2; }
	inline void set_willRenderCanvases_2(WillRenderCanvases_t3309123499 * value)
	{
		___willRenderCanvases_2 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_T3310196443_H
#ifndef LIGHT_T3756812086_H
#define LIGHT_T3756812086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Light
struct  Light_t3756812086  : public Behaviour_t1437897464
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_2;

public:
	inline static int32_t get_offset_of_m_BakedIndex_2() { return static_cast<int32_t>(offsetof(Light_t3756812086, ___m_BakedIndex_2)); }
	inline int32_t get_m_BakedIndex_2() const { return ___m_BakedIndex_2; }
	inline int32_t* get_address_of_m_BakedIndex_2() { return &___m_BakedIndex_2; }
	inline void set_m_BakedIndex_2(int32_t value)
	{
		___m_BakedIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHT_T3756812086_H
#ifndef COINMANAGER_T3944673524_H
#define COINMANAGER_T3944673524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CompleteProject.CoinManager
struct  CoinManager_t3944673524  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text CompleteProject.CoinManager::coinText
	Text_t1901882714 * ___coinText_2;
	// System.Int32 CompleteProject.CoinManager::startCoin
	int32_t ___startCoin_3;

public:
	inline static int32_t get_offset_of_coinText_2() { return static_cast<int32_t>(offsetof(CoinManager_t3944673524, ___coinText_2)); }
	inline Text_t1901882714 * get_coinText_2() const { return ___coinText_2; }
	inline Text_t1901882714 ** get_address_of_coinText_2() { return &___coinText_2; }
	inline void set_coinText_2(Text_t1901882714 * value)
	{
		___coinText_2 = value;
		Il2CppCodeGenWriteBarrier((&___coinText_2), value);
	}

	inline static int32_t get_offset_of_startCoin_3() { return static_cast<int32_t>(offsetof(CoinManager_t3944673524, ___startCoin_3)); }
	inline int32_t get_startCoin_3() const { return ___startCoin_3; }
	inline int32_t* get_address_of_startCoin_3() { return &___startCoin_3; }
	inline void set_startCoin_3(int32_t value)
	{
		___startCoin_3 = value;
	}
};

struct CoinManager_t3944673524_StaticFields
{
public:
	// System.Int32 CompleteProject.CoinManager::currentCoin
	int32_t ___currentCoin_4;

public:
	inline static int32_t get_offset_of_currentCoin_4() { return static_cast<int32_t>(offsetof(CoinManager_t3944673524_StaticFields, ___currentCoin_4)); }
	inline int32_t get_currentCoin_4() const { return ___currentCoin_4; }
	inline int32_t* get_address_of_currentCoin_4() { return &___currentCoin_4; }
	inline void set_currentCoin_4(int32_t value)
	{
		___currentCoin_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COINMANAGER_T3944673524_H
#ifndef PLAYERHEALTH_T4039380943_H
#define PLAYERHEALTH_T4039380943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CompleteProject.PlayerHealth
struct  PlayerHealth_t4039380943  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 CompleteProject.PlayerHealth::startingHealth
	int32_t ___startingHealth_2;
	// System.Int32 CompleteProject.PlayerHealth::currentHealth
	int32_t ___currentHealth_3;
	// UnityEngine.UI.Slider CompleteProject.PlayerHealth::healthSlider
	Slider_t3903728902 * ___healthSlider_4;
	// UnityEngine.UI.Image CompleteProject.PlayerHealth::damageImage
	Image_t2670269651 * ___damageImage_5;
	// UnityEngine.AudioClip CompleteProject.PlayerHealth::deathClip
	AudioClip_t3680889665 * ___deathClip_6;
	// System.Single CompleteProject.PlayerHealth::flashSpeed
	float ___flashSpeed_7;
	// UnityEngine.Color CompleteProject.PlayerHealth::flashColour
	Color_t2555686324  ___flashColour_8;
	// UnityEngine.Animator CompleteProject.PlayerHealth::anim
	Animator_t434523843 * ___anim_9;
	// UnityEngine.AudioSource CompleteProject.PlayerHealth::playerAudio
	AudioSource_t3935305588 * ___playerAudio_10;
	// CompleteProject.PlayerMovement CompleteProject.PlayerHealth::playerMovement
	PlayerMovement_t1816600158 * ___playerMovement_11;
	// CompleteProject.PlayerShooting CompleteProject.PlayerHealth::playerShooting
	PlayerShooting_t763517272 * ___playerShooting_12;
	// System.Boolean CompleteProject.PlayerHealth::isDead
	bool ___isDead_13;
	// System.Boolean CompleteProject.PlayerHealth::damaged
	bool ___damaged_14;

public:
	inline static int32_t get_offset_of_startingHealth_2() { return static_cast<int32_t>(offsetof(PlayerHealth_t4039380943, ___startingHealth_2)); }
	inline int32_t get_startingHealth_2() const { return ___startingHealth_2; }
	inline int32_t* get_address_of_startingHealth_2() { return &___startingHealth_2; }
	inline void set_startingHealth_2(int32_t value)
	{
		___startingHealth_2 = value;
	}

	inline static int32_t get_offset_of_currentHealth_3() { return static_cast<int32_t>(offsetof(PlayerHealth_t4039380943, ___currentHealth_3)); }
	inline int32_t get_currentHealth_3() const { return ___currentHealth_3; }
	inline int32_t* get_address_of_currentHealth_3() { return &___currentHealth_3; }
	inline void set_currentHealth_3(int32_t value)
	{
		___currentHealth_3 = value;
	}

	inline static int32_t get_offset_of_healthSlider_4() { return static_cast<int32_t>(offsetof(PlayerHealth_t4039380943, ___healthSlider_4)); }
	inline Slider_t3903728902 * get_healthSlider_4() const { return ___healthSlider_4; }
	inline Slider_t3903728902 ** get_address_of_healthSlider_4() { return &___healthSlider_4; }
	inline void set_healthSlider_4(Slider_t3903728902 * value)
	{
		___healthSlider_4 = value;
		Il2CppCodeGenWriteBarrier((&___healthSlider_4), value);
	}

	inline static int32_t get_offset_of_damageImage_5() { return static_cast<int32_t>(offsetof(PlayerHealth_t4039380943, ___damageImage_5)); }
	inline Image_t2670269651 * get_damageImage_5() const { return ___damageImage_5; }
	inline Image_t2670269651 ** get_address_of_damageImage_5() { return &___damageImage_5; }
	inline void set_damageImage_5(Image_t2670269651 * value)
	{
		___damageImage_5 = value;
		Il2CppCodeGenWriteBarrier((&___damageImage_5), value);
	}

	inline static int32_t get_offset_of_deathClip_6() { return static_cast<int32_t>(offsetof(PlayerHealth_t4039380943, ___deathClip_6)); }
	inline AudioClip_t3680889665 * get_deathClip_6() const { return ___deathClip_6; }
	inline AudioClip_t3680889665 ** get_address_of_deathClip_6() { return &___deathClip_6; }
	inline void set_deathClip_6(AudioClip_t3680889665 * value)
	{
		___deathClip_6 = value;
		Il2CppCodeGenWriteBarrier((&___deathClip_6), value);
	}

	inline static int32_t get_offset_of_flashSpeed_7() { return static_cast<int32_t>(offsetof(PlayerHealth_t4039380943, ___flashSpeed_7)); }
	inline float get_flashSpeed_7() const { return ___flashSpeed_7; }
	inline float* get_address_of_flashSpeed_7() { return &___flashSpeed_7; }
	inline void set_flashSpeed_7(float value)
	{
		___flashSpeed_7 = value;
	}

	inline static int32_t get_offset_of_flashColour_8() { return static_cast<int32_t>(offsetof(PlayerHealth_t4039380943, ___flashColour_8)); }
	inline Color_t2555686324  get_flashColour_8() const { return ___flashColour_8; }
	inline Color_t2555686324 * get_address_of_flashColour_8() { return &___flashColour_8; }
	inline void set_flashColour_8(Color_t2555686324  value)
	{
		___flashColour_8 = value;
	}

	inline static int32_t get_offset_of_anim_9() { return static_cast<int32_t>(offsetof(PlayerHealth_t4039380943, ___anim_9)); }
	inline Animator_t434523843 * get_anim_9() const { return ___anim_9; }
	inline Animator_t434523843 ** get_address_of_anim_9() { return &___anim_9; }
	inline void set_anim_9(Animator_t434523843 * value)
	{
		___anim_9 = value;
		Il2CppCodeGenWriteBarrier((&___anim_9), value);
	}

	inline static int32_t get_offset_of_playerAudio_10() { return static_cast<int32_t>(offsetof(PlayerHealth_t4039380943, ___playerAudio_10)); }
	inline AudioSource_t3935305588 * get_playerAudio_10() const { return ___playerAudio_10; }
	inline AudioSource_t3935305588 ** get_address_of_playerAudio_10() { return &___playerAudio_10; }
	inline void set_playerAudio_10(AudioSource_t3935305588 * value)
	{
		___playerAudio_10 = value;
		Il2CppCodeGenWriteBarrier((&___playerAudio_10), value);
	}

	inline static int32_t get_offset_of_playerMovement_11() { return static_cast<int32_t>(offsetof(PlayerHealth_t4039380943, ___playerMovement_11)); }
	inline PlayerMovement_t1816600158 * get_playerMovement_11() const { return ___playerMovement_11; }
	inline PlayerMovement_t1816600158 ** get_address_of_playerMovement_11() { return &___playerMovement_11; }
	inline void set_playerMovement_11(PlayerMovement_t1816600158 * value)
	{
		___playerMovement_11 = value;
		Il2CppCodeGenWriteBarrier((&___playerMovement_11), value);
	}

	inline static int32_t get_offset_of_playerShooting_12() { return static_cast<int32_t>(offsetof(PlayerHealth_t4039380943, ___playerShooting_12)); }
	inline PlayerShooting_t763517272 * get_playerShooting_12() const { return ___playerShooting_12; }
	inline PlayerShooting_t763517272 ** get_address_of_playerShooting_12() { return &___playerShooting_12; }
	inline void set_playerShooting_12(PlayerShooting_t763517272 * value)
	{
		___playerShooting_12 = value;
		Il2CppCodeGenWriteBarrier((&___playerShooting_12), value);
	}

	inline static int32_t get_offset_of_isDead_13() { return static_cast<int32_t>(offsetof(PlayerHealth_t4039380943, ___isDead_13)); }
	inline bool get_isDead_13() const { return ___isDead_13; }
	inline bool* get_address_of_isDead_13() { return &___isDead_13; }
	inline void set_isDead_13(bool value)
	{
		___isDead_13 = value;
	}

	inline static int32_t get_offset_of_damaged_14() { return static_cast<int32_t>(offsetof(PlayerHealth_t4039380943, ___damaged_14)); }
	inline bool get_damaged_14() const { return ___damaged_14; }
	inline bool* get_address_of_damaged_14() { return &___damaged_14; }
	inline void set_damaged_14(bool value)
	{
		___damaged_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERHEALTH_T4039380943_H
#ifndef CAMERAFOLLOW_T555330123_H
#define CAMERAFOLLOW_T555330123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CompleteProject.CameraFollow
struct  CameraFollow_t555330123  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform CompleteProject.CameraFollow::target
	Transform_t3600365921 * ___target_2;
	// System.Single CompleteProject.CameraFollow::smoothing
	float ___smoothing_3;
	// UnityEngine.Vector3 CompleteProject.CameraFollow::offset
	Vector3_t3722313464  ___offset_4;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(CameraFollow_t555330123, ___target_2)); }
	inline Transform_t3600365921 * get_target_2() const { return ___target_2; }
	inline Transform_t3600365921 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3600365921 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}

	inline static int32_t get_offset_of_smoothing_3() { return static_cast<int32_t>(offsetof(CameraFollow_t555330123, ___smoothing_3)); }
	inline float get_smoothing_3() const { return ___smoothing_3; }
	inline float* get_address_of_smoothing_3() { return &___smoothing_3; }
	inline void set_smoothing_3(float value)
	{
		___smoothing_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(CameraFollow_t555330123, ___offset_4)); }
	inline Vector3_t3722313464  get_offset_4() const { return ___offset_4; }
	inline Vector3_t3722313464 * get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(Vector3_t3722313464  value)
	{
		___offset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAFOLLOW_T555330123_H
#ifndef MIXLEVELS_T2451904987_H
#define MIXLEVELS_T2451904987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MixLevels
struct  MixLevels_t2451904987  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Audio.AudioMixer MixLevels::masterMixer
	AudioMixer_t3521020193 * ___masterMixer_2;

public:
	inline static int32_t get_offset_of_masterMixer_2() { return static_cast<int32_t>(offsetof(MixLevels_t2451904987, ___masterMixer_2)); }
	inline AudioMixer_t3521020193 * get_masterMixer_2() const { return ___masterMixer_2; }
	inline AudioMixer_t3521020193 ** get_address_of_masterMixer_2() { return &___masterMixer_2; }
	inline void set_masterMixer_2(AudioMixer_t3521020193 * value)
	{
		___masterMixer_2 = value;
		Il2CppCodeGenWriteBarrier((&___masterMixer_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXLEVELS_T2451904987_H
#ifndef ENEMYHEALTH_T1074184144_H
#define ENEMYHEALTH_T1074184144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CompleteProject.EnemyHealth
struct  EnemyHealth_t1074184144  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 CompleteProject.EnemyHealth::startingHealth
	int32_t ___startingHealth_2;
	// System.Int32 CompleteProject.EnemyHealth::currentHealth
	int32_t ___currentHealth_3;
	// System.Single CompleteProject.EnemyHealth::sinkSpeed
	float ___sinkSpeed_4;
	// System.Int32 CompleteProject.EnemyHealth::scoreValue
	int32_t ___scoreValue_5;
	// UnityEngine.AudioClip CompleteProject.EnemyHealth::deathClip
	AudioClip_t3680889665 * ___deathClip_6;
	// UnityEngine.Animator CompleteProject.EnemyHealth::anim
	Animator_t434523843 * ___anim_7;
	// UnityEngine.AudioSource CompleteProject.EnemyHealth::enemyAudio
	AudioSource_t3935305588 * ___enemyAudio_8;
	// UnityEngine.ParticleSystem CompleteProject.EnemyHealth::hitParticles
	ParticleSystem_t1800779281 * ___hitParticles_9;
	// UnityEngine.CapsuleCollider CompleteProject.EnemyHealth::capsuleCollider
	CapsuleCollider_t197597763 * ___capsuleCollider_10;
	// System.Boolean CompleteProject.EnemyHealth::isDead
	bool ___isDead_11;
	// System.Boolean CompleteProject.EnemyHealth::isSinking
	bool ___isSinking_12;

public:
	inline static int32_t get_offset_of_startingHealth_2() { return static_cast<int32_t>(offsetof(EnemyHealth_t1074184144, ___startingHealth_2)); }
	inline int32_t get_startingHealth_2() const { return ___startingHealth_2; }
	inline int32_t* get_address_of_startingHealth_2() { return &___startingHealth_2; }
	inline void set_startingHealth_2(int32_t value)
	{
		___startingHealth_2 = value;
	}

	inline static int32_t get_offset_of_currentHealth_3() { return static_cast<int32_t>(offsetof(EnemyHealth_t1074184144, ___currentHealth_3)); }
	inline int32_t get_currentHealth_3() const { return ___currentHealth_3; }
	inline int32_t* get_address_of_currentHealth_3() { return &___currentHealth_3; }
	inline void set_currentHealth_3(int32_t value)
	{
		___currentHealth_3 = value;
	}

	inline static int32_t get_offset_of_sinkSpeed_4() { return static_cast<int32_t>(offsetof(EnemyHealth_t1074184144, ___sinkSpeed_4)); }
	inline float get_sinkSpeed_4() const { return ___sinkSpeed_4; }
	inline float* get_address_of_sinkSpeed_4() { return &___sinkSpeed_4; }
	inline void set_sinkSpeed_4(float value)
	{
		___sinkSpeed_4 = value;
	}

	inline static int32_t get_offset_of_scoreValue_5() { return static_cast<int32_t>(offsetof(EnemyHealth_t1074184144, ___scoreValue_5)); }
	inline int32_t get_scoreValue_5() const { return ___scoreValue_5; }
	inline int32_t* get_address_of_scoreValue_5() { return &___scoreValue_5; }
	inline void set_scoreValue_5(int32_t value)
	{
		___scoreValue_5 = value;
	}

	inline static int32_t get_offset_of_deathClip_6() { return static_cast<int32_t>(offsetof(EnemyHealth_t1074184144, ___deathClip_6)); }
	inline AudioClip_t3680889665 * get_deathClip_6() const { return ___deathClip_6; }
	inline AudioClip_t3680889665 ** get_address_of_deathClip_6() { return &___deathClip_6; }
	inline void set_deathClip_6(AudioClip_t3680889665 * value)
	{
		___deathClip_6 = value;
		Il2CppCodeGenWriteBarrier((&___deathClip_6), value);
	}

	inline static int32_t get_offset_of_anim_7() { return static_cast<int32_t>(offsetof(EnemyHealth_t1074184144, ___anim_7)); }
	inline Animator_t434523843 * get_anim_7() const { return ___anim_7; }
	inline Animator_t434523843 ** get_address_of_anim_7() { return &___anim_7; }
	inline void set_anim_7(Animator_t434523843 * value)
	{
		___anim_7 = value;
		Il2CppCodeGenWriteBarrier((&___anim_7), value);
	}

	inline static int32_t get_offset_of_enemyAudio_8() { return static_cast<int32_t>(offsetof(EnemyHealth_t1074184144, ___enemyAudio_8)); }
	inline AudioSource_t3935305588 * get_enemyAudio_8() const { return ___enemyAudio_8; }
	inline AudioSource_t3935305588 ** get_address_of_enemyAudio_8() { return &___enemyAudio_8; }
	inline void set_enemyAudio_8(AudioSource_t3935305588 * value)
	{
		___enemyAudio_8 = value;
		Il2CppCodeGenWriteBarrier((&___enemyAudio_8), value);
	}

	inline static int32_t get_offset_of_hitParticles_9() { return static_cast<int32_t>(offsetof(EnemyHealth_t1074184144, ___hitParticles_9)); }
	inline ParticleSystem_t1800779281 * get_hitParticles_9() const { return ___hitParticles_9; }
	inline ParticleSystem_t1800779281 ** get_address_of_hitParticles_9() { return &___hitParticles_9; }
	inline void set_hitParticles_9(ParticleSystem_t1800779281 * value)
	{
		___hitParticles_9 = value;
		Il2CppCodeGenWriteBarrier((&___hitParticles_9), value);
	}

	inline static int32_t get_offset_of_capsuleCollider_10() { return static_cast<int32_t>(offsetof(EnemyHealth_t1074184144, ___capsuleCollider_10)); }
	inline CapsuleCollider_t197597763 * get_capsuleCollider_10() const { return ___capsuleCollider_10; }
	inline CapsuleCollider_t197597763 ** get_address_of_capsuleCollider_10() { return &___capsuleCollider_10; }
	inline void set_capsuleCollider_10(CapsuleCollider_t197597763 * value)
	{
		___capsuleCollider_10 = value;
		Il2CppCodeGenWriteBarrier((&___capsuleCollider_10), value);
	}

	inline static int32_t get_offset_of_isDead_11() { return static_cast<int32_t>(offsetof(EnemyHealth_t1074184144, ___isDead_11)); }
	inline bool get_isDead_11() const { return ___isDead_11; }
	inline bool* get_address_of_isDead_11() { return &___isDead_11; }
	inline void set_isDead_11(bool value)
	{
		___isDead_11 = value;
	}

	inline static int32_t get_offset_of_isSinking_12() { return static_cast<int32_t>(offsetof(EnemyHealth_t1074184144, ___isSinking_12)); }
	inline bool get_isSinking_12() const { return ___isSinking_12; }
	inline bool* get_address_of_isSinking_12() { return &___isSinking_12; }
	inline void set_isSinking_12(bool value)
	{
		___isSinking_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYHEALTH_T1074184144_H
#ifndef ENEMYATTACK_T1611619807_H
#define ENEMYATTACK_T1611619807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CompleteProject.EnemyAttack
struct  EnemyAttack_t1611619807  : public MonoBehaviour_t3962482529
{
public:
	// System.Single CompleteProject.EnemyAttack::timeBetweenAttacks
	float ___timeBetweenAttacks_2;
	// System.Int32 CompleteProject.EnemyAttack::attackDamage
	int32_t ___attackDamage_3;
	// UnityEngine.Animator CompleteProject.EnemyAttack::anim
	Animator_t434523843 * ___anim_4;
	// UnityEngine.GameObject CompleteProject.EnemyAttack::player
	GameObject_t1113636619 * ___player_5;
	// CompleteProject.PlayerHealth CompleteProject.EnemyAttack::playerHealth
	PlayerHealth_t4039380943 * ___playerHealth_6;
	// CompleteProject.EnemyHealth CompleteProject.EnemyAttack::enemyHealth
	EnemyHealth_t1074184144 * ___enemyHealth_7;
	// System.Boolean CompleteProject.EnemyAttack::playerInRange
	bool ___playerInRange_8;
	// System.Single CompleteProject.EnemyAttack::timer
	float ___timer_9;

public:
	inline static int32_t get_offset_of_timeBetweenAttacks_2() { return static_cast<int32_t>(offsetof(EnemyAttack_t1611619807, ___timeBetweenAttacks_2)); }
	inline float get_timeBetweenAttacks_2() const { return ___timeBetweenAttacks_2; }
	inline float* get_address_of_timeBetweenAttacks_2() { return &___timeBetweenAttacks_2; }
	inline void set_timeBetweenAttacks_2(float value)
	{
		___timeBetweenAttacks_2 = value;
	}

	inline static int32_t get_offset_of_attackDamage_3() { return static_cast<int32_t>(offsetof(EnemyAttack_t1611619807, ___attackDamage_3)); }
	inline int32_t get_attackDamage_3() const { return ___attackDamage_3; }
	inline int32_t* get_address_of_attackDamage_3() { return &___attackDamage_3; }
	inline void set_attackDamage_3(int32_t value)
	{
		___attackDamage_3 = value;
	}

	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(EnemyAttack_t1611619807, ___anim_4)); }
	inline Animator_t434523843 * get_anim_4() const { return ___anim_4; }
	inline Animator_t434523843 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animator_t434523843 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier((&___anim_4), value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(EnemyAttack_t1611619807, ___player_5)); }
	inline GameObject_t1113636619 * get_player_5() const { return ___player_5; }
	inline GameObject_t1113636619 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_t1113636619 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((&___player_5), value);
	}

	inline static int32_t get_offset_of_playerHealth_6() { return static_cast<int32_t>(offsetof(EnemyAttack_t1611619807, ___playerHealth_6)); }
	inline PlayerHealth_t4039380943 * get_playerHealth_6() const { return ___playerHealth_6; }
	inline PlayerHealth_t4039380943 ** get_address_of_playerHealth_6() { return &___playerHealth_6; }
	inline void set_playerHealth_6(PlayerHealth_t4039380943 * value)
	{
		___playerHealth_6 = value;
		Il2CppCodeGenWriteBarrier((&___playerHealth_6), value);
	}

	inline static int32_t get_offset_of_enemyHealth_7() { return static_cast<int32_t>(offsetof(EnemyAttack_t1611619807, ___enemyHealth_7)); }
	inline EnemyHealth_t1074184144 * get_enemyHealth_7() const { return ___enemyHealth_7; }
	inline EnemyHealth_t1074184144 ** get_address_of_enemyHealth_7() { return &___enemyHealth_7; }
	inline void set_enemyHealth_7(EnemyHealth_t1074184144 * value)
	{
		___enemyHealth_7 = value;
		Il2CppCodeGenWriteBarrier((&___enemyHealth_7), value);
	}

	inline static int32_t get_offset_of_playerInRange_8() { return static_cast<int32_t>(offsetof(EnemyAttack_t1611619807, ___playerInRange_8)); }
	inline bool get_playerInRange_8() const { return ___playerInRange_8; }
	inline bool* get_address_of_playerInRange_8() { return &___playerInRange_8; }
	inline void set_playerInRange_8(bool value)
	{
		___playerInRange_8 = value;
	}

	inline static int32_t get_offset_of_timer_9() { return static_cast<int32_t>(offsetof(EnemyAttack_t1611619807, ___timer_9)); }
	inline float get_timer_9() const { return ___timer_9; }
	inline float* get_address_of_timer_9() { return &___timer_9; }
	inline void set_timer_9(float value)
	{
		___timer_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYATTACK_T1611619807_H
#ifndef JOYSTICK_T9498292_H
#define JOYSTICK_T9498292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Joystick
struct  Joystick_t9498292  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 Joystick::MovementRange
	int32_t ___MovementRange_2;
	// Joystick/AxisOption Joystick::axesToUse
	int32_t ___axesToUse_3;
	// System.String Joystick::horizontalAxisName
	String_t* ___horizontalAxisName_4;
	// System.String Joystick::verticalAxisName
	String_t* ___verticalAxisName_5;
	// UnityEngine.Vector3 Joystick::startPos
	Vector3_t3722313464  ___startPos_6;
	// System.Boolean Joystick::useX
	bool ___useX_7;
	// System.Boolean Joystick::useY
	bool ___useY_8;
	// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis Joystick::horizontalVirtualAxis
	VirtualAxis_t1347148391 * ___horizontalVirtualAxis_9;
	// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis Joystick::verticalVirtualAxis
	VirtualAxis_t1347148391 * ___verticalVirtualAxis_10;

public:
	inline static int32_t get_offset_of_MovementRange_2() { return static_cast<int32_t>(offsetof(Joystick_t9498292, ___MovementRange_2)); }
	inline int32_t get_MovementRange_2() const { return ___MovementRange_2; }
	inline int32_t* get_address_of_MovementRange_2() { return &___MovementRange_2; }
	inline void set_MovementRange_2(int32_t value)
	{
		___MovementRange_2 = value;
	}

	inline static int32_t get_offset_of_axesToUse_3() { return static_cast<int32_t>(offsetof(Joystick_t9498292, ___axesToUse_3)); }
	inline int32_t get_axesToUse_3() const { return ___axesToUse_3; }
	inline int32_t* get_address_of_axesToUse_3() { return &___axesToUse_3; }
	inline void set_axesToUse_3(int32_t value)
	{
		___axesToUse_3 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_4() { return static_cast<int32_t>(offsetof(Joystick_t9498292, ___horizontalAxisName_4)); }
	inline String_t* get_horizontalAxisName_4() const { return ___horizontalAxisName_4; }
	inline String_t** get_address_of_horizontalAxisName_4() { return &___horizontalAxisName_4; }
	inline void set_horizontalAxisName_4(String_t* value)
	{
		___horizontalAxisName_4 = value;
		Il2CppCodeGenWriteBarrier((&___horizontalAxisName_4), value);
	}

	inline static int32_t get_offset_of_verticalAxisName_5() { return static_cast<int32_t>(offsetof(Joystick_t9498292, ___verticalAxisName_5)); }
	inline String_t* get_verticalAxisName_5() const { return ___verticalAxisName_5; }
	inline String_t** get_address_of_verticalAxisName_5() { return &___verticalAxisName_5; }
	inline void set_verticalAxisName_5(String_t* value)
	{
		___verticalAxisName_5 = value;
		Il2CppCodeGenWriteBarrier((&___verticalAxisName_5), value);
	}

	inline static int32_t get_offset_of_startPos_6() { return static_cast<int32_t>(offsetof(Joystick_t9498292, ___startPos_6)); }
	inline Vector3_t3722313464  get_startPos_6() const { return ___startPos_6; }
	inline Vector3_t3722313464 * get_address_of_startPos_6() { return &___startPos_6; }
	inline void set_startPos_6(Vector3_t3722313464  value)
	{
		___startPos_6 = value;
	}

	inline static int32_t get_offset_of_useX_7() { return static_cast<int32_t>(offsetof(Joystick_t9498292, ___useX_7)); }
	inline bool get_useX_7() const { return ___useX_7; }
	inline bool* get_address_of_useX_7() { return &___useX_7; }
	inline void set_useX_7(bool value)
	{
		___useX_7 = value;
	}

	inline static int32_t get_offset_of_useY_8() { return static_cast<int32_t>(offsetof(Joystick_t9498292, ___useY_8)); }
	inline bool get_useY_8() const { return ___useY_8; }
	inline bool* get_address_of_useY_8() { return &___useY_8; }
	inline void set_useY_8(bool value)
	{
		___useY_8 = value;
	}

	inline static int32_t get_offset_of_horizontalVirtualAxis_9() { return static_cast<int32_t>(offsetof(Joystick_t9498292, ___horizontalVirtualAxis_9)); }
	inline VirtualAxis_t1347148391 * get_horizontalVirtualAxis_9() const { return ___horizontalVirtualAxis_9; }
	inline VirtualAxis_t1347148391 ** get_address_of_horizontalVirtualAxis_9() { return &___horizontalVirtualAxis_9; }
	inline void set_horizontalVirtualAxis_9(VirtualAxis_t1347148391 * value)
	{
		___horizontalVirtualAxis_9 = value;
		Il2CppCodeGenWriteBarrier((&___horizontalVirtualAxis_9), value);
	}

	inline static int32_t get_offset_of_verticalVirtualAxis_10() { return static_cast<int32_t>(offsetof(Joystick_t9498292, ___verticalVirtualAxis_10)); }
	inline VirtualAxis_t1347148391 * get_verticalVirtualAxis_10() const { return ___verticalVirtualAxis_10; }
	inline VirtualAxis_t1347148391 ** get_address_of_verticalVirtualAxis_10() { return &___verticalVirtualAxis_10; }
	inline void set_verticalVirtualAxis_10(VirtualAxis_t1347148391 * value)
	{
		___verticalVirtualAxis_10 = value;
		Il2CppCodeGenWriteBarrier((&___verticalVirtualAxis_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOYSTICK_T9498292_H
#ifndef ENEMYMANAGER_T2944058352_H
#define ENEMYMANAGER_T2944058352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CompleteProject.EnemyManager
struct  EnemyManager_t2944058352  : public MonoBehaviour_t3962482529
{
public:
	// CompleteProject.PlayerHealth CompleteProject.EnemyManager::playerHealth
	PlayerHealth_t4039380943 * ___playerHealth_2;
	// UnityEngine.GameObject CompleteProject.EnemyManager::enemy
	GameObject_t1113636619 * ___enemy_3;
	// System.Single CompleteProject.EnemyManager::spawnTime
	float ___spawnTime_4;
	// UnityEngine.Transform[] CompleteProject.EnemyManager::spawnPoints
	TransformU5BU5D_t807237628* ___spawnPoints_5;

public:
	inline static int32_t get_offset_of_playerHealth_2() { return static_cast<int32_t>(offsetof(EnemyManager_t2944058352, ___playerHealth_2)); }
	inline PlayerHealth_t4039380943 * get_playerHealth_2() const { return ___playerHealth_2; }
	inline PlayerHealth_t4039380943 ** get_address_of_playerHealth_2() { return &___playerHealth_2; }
	inline void set_playerHealth_2(PlayerHealth_t4039380943 * value)
	{
		___playerHealth_2 = value;
		Il2CppCodeGenWriteBarrier((&___playerHealth_2), value);
	}

	inline static int32_t get_offset_of_enemy_3() { return static_cast<int32_t>(offsetof(EnemyManager_t2944058352, ___enemy_3)); }
	inline GameObject_t1113636619 * get_enemy_3() const { return ___enemy_3; }
	inline GameObject_t1113636619 ** get_address_of_enemy_3() { return &___enemy_3; }
	inline void set_enemy_3(GameObject_t1113636619 * value)
	{
		___enemy_3 = value;
		Il2CppCodeGenWriteBarrier((&___enemy_3), value);
	}

	inline static int32_t get_offset_of_spawnTime_4() { return static_cast<int32_t>(offsetof(EnemyManager_t2944058352, ___spawnTime_4)); }
	inline float get_spawnTime_4() const { return ___spawnTime_4; }
	inline float* get_address_of_spawnTime_4() { return &___spawnTime_4; }
	inline void set_spawnTime_4(float value)
	{
		___spawnTime_4 = value;
	}

	inline static int32_t get_offset_of_spawnPoints_5() { return static_cast<int32_t>(offsetof(EnemyManager_t2944058352, ___spawnPoints_5)); }
	inline TransformU5BU5D_t807237628* get_spawnPoints_5() const { return ___spawnPoints_5; }
	inline TransformU5BU5D_t807237628** get_address_of_spawnPoints_5() { return &___spawnPoints_5; }
	inline void set_spawnPoints_5(TransformU5BU5D_t807237628* value)
	{
		___spawnPoints_5 = value;
		Il2CppCodeGenWriteBarrier((&___spawnPoints_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYMANAGER_T2944058352_H
#ifndef ENEMYMOVEMENT_T2573605316_H
#define ENEMYMOVEMENT_T2573605316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CompleteProject.EnemyMovement
struct  EnemyMovement_t2573605316  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform CompleteProject.EnemyMovement::player
	Transform_t3600365921 * ___player_2;
	// CompleteProject.PlayerHealth CompleteProject.EnemyMovement::playerHealth
	PlayerHealth_t4039380943 * ___playerHealth_3;
	// CompleteProject.EnemyHealth CompleteProject.EnemyMovement::enemyHealth
	EnemyHealth_t1074184144 * ___enemyHealth_4;
	// UnityEngine.AI.NavMeshAgent CompleteProject.EnemyMovement::nav
	NavMeshAgent_t1276799816 * ___nav_5;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(EnemyMovement_t2573605316, ___player_2)); }
	inline Transform_t3600365921 * get_player_2() const { return ___player_2; }
	inline Transform_t3600365921 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(Transform_t3600365921 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier((&___player_2), value);
	}

	inline static int32_t get_offset_of_playerHealth_3() { return static_cast<int32_t>(offsetof(EnemyMovement_t2573605316, ___playerHealth_3)); }
	inline PlayerHealth_t4039380943 * get_playerHealth_3() const { return ___playerHealth_3; }
	inline PlayerHealth_t4039380943 ** get_address_of_playerHealth_3() { return &___playerHealth_3; }
	inline void set_playerHealth_3(PlayerHealth_t4039380943 * value)
	{
		___playerHealth_3 = value;
		Il2CppCodeGenWriteBarrier((&___playerHealth_3), value);
	}

	inline static int32_t get_offset_of_enemyHealth_4() { return static_cast<int32_t>(offsetof(EnemyMovement_t2573605316, ___enemyHealth_4)); }
	inline EnemyHealth_t1074184144 * get_enemyHealth_4() const { return ___enemyHealth_4; }
	inline EnemyHealth_t1074184144 ** get_address_of_enemyHealth_4() { return &___enemyHealth_4; }
	inline void set_enemyHealth_4(EnemyHealth_t1074184144 * value)
	{
		___enemyHealth_4 = value;
		Il2CppCodeGenWriteBarrier((&___enemyHealth_4), value);
	}

	inline static int32_t get_offset_of_nav_5() { return static_cast<int32_t>(offsetof(EnemyMovement_t2573605316, ___nav_5)); }
	inline NavMeshAgent_t1276799816 * get_nav_5() const { return ___nav_5; }
	inline NavMeshAgent_t1276799816 ** get_address_of_nav_5() { return &___nav_5; }
	inline void set_nav_5(NavMeshAgent_t1276799816 * value)
	{
		___nav_5 = value;
		Il2CppCodeGenWriteBarrier((&___nav_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYMOVEMENT_T2573605316_H
#ifndef GAMEOVERMANAGER_T4096720320_H
#define GAMEOVERMANAGER_T4096720320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CompleteProject.GameOverManager
struct  GameOverManager_t4096720320  : public MonoBehaviour_t3962482529
{
public:
	// CompleteProject.PlayerHealth CompleteProject.GameOverManager::playerHealth
	PlayerHealth_t4039380943 * ___playerHealth_2;
	// UnityEngine.Animator CompleteProject.GameOverManager::anim
	Animator_t434523843 * ___anim_3;

public:
	inline static int32_t get_offset_of_playerHealth_2() { return static_cast<int32_t>(offsetof(GameOverManager_t4096720320, ___playerHealth_2)); }
	inline PlayerHealth_t4039380943 * get_playerHealth_2() const { return ___playerHealth_2; }
	inline PlayerHealth_t4039380943 ** get_address_of_playerHealth_2() { return &___playerHealth_2; }
	inline void set_playerHealth_2(PlayerHealth_t4039380943 * value)
	{
		___playerHealth_2 = value;
		Il2CppCodeGenWriteBarrier((&___playerHealth_2), value);
	}

	inline static int32_t get_offset_of_anim_3() { return static_cast<int32_t>(offsetof(GameOverManager_t4096720320, ___anim_3)); }
	inline Animator_t434523843 * get_anim_3() const { return ___anim_3; }
	inline Animator_t434523843 ** get_address_of_anim_3() { return &___anim_3; }
	inline void set_anim_3(Animator_t434523843 * value)
	{
		___anim_3 = value;
		Il2CppCodeGenWriteBarrier((&___anim_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOVERMANAGER_T4096720320_H
#ifndef PLAYERMOVEMENT_T1816600158_H
#define PLAYERMOVEMENT_T1816600158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CompleteProject.PlayerMovement
struct  PlayerMovement_t1816600158  : public MonoBehaviour_t3962482529
{
public:
	// System.Single CompleteProject.PlayerMovement::speed
	float ___speed_2;
	// System.Boolean CompleteProject.PlayerMovement::walking
	bool ___walking_3;
	// UnityEngine.Vector3 CompleteProject.PlayerMovement::movement
	Vector3_t3722313464  ___movement_4;
	// UnityEngine.Animator CompleteProject.PlayerMovement::anim
	Animator_t434523843 * ___anim_5;
	// UnityEngine.Rigidbody CompleteProject.PlayerMovement::playerRigidbody
	Rigidbody_t3916780224 * ___playerRigidbody_6;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(PlayerMovement_t1816600158, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_walking_3() { return static_cast<int32_t>(offsetof(PlayerMovement_t1816600158, ___walking_3)); }
	inline bool get_walking_3() const { return ___walking_3; }
	inline bool* get_address_of_walking_3() { return &___walking_3; }
	inline void set_walking_3(bool value)
	{
		___walking_3 = value;
	}

	inline static int32_t get_offset_of_movement_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t1816600158, ___movement_4)); }
	inline Vector3_t3722313464  get_movement_4() const { return ___movement_4; }
	inline Vector3_t3722313464 * get_address_of_movement_4() { return &___movement_4; }
	inline void set_movement_4(Vector3_t3722313464  value)
	{
		___movement_4 = value;
	}

	inline static int32_t get_offset_of_anim_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t1816600158, ___anim_5)); }
	inline Animator_t434523843 * get_anim_5() const { return ___anim_5; }
	inline Animator_t434523843 ** get_address_of_anim_5() { return &___anim_5; }
	inline void set_anim_5(Animator_t434523843 * value)
	{
		___anim_5 = value;
		Il2CppCodeGenWriteBarrier((&___anim_5), value);
	}

	inline static int32_t get_offset_of_playerRigidbody_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t1816600158, ___playerRigidbody_6)); }
	inline Rigidbody_t3916780224 * get_playerRigidbody_6() const { return ___playerRigidbody_6; }
	inline Rigidbody_t3916780224 ** get_address_of_playerRigidbody_6() { return &___playerRigidbody_6; }
	inline void set_playerRigidbody_6(Rigidbody_t3916780224 * value)
	{
		___playerRigidbody_6 = value;
		Il2CppCodeGenWriteBarrier((&___playerRigidbody_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERMOVEMENT_T1816600158_H
#ifndef PLAYERSHOOTING_T763517272_H
#define PLAYERSHOOTING_T763517272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CompleteProject.PlayerShooting
struct  PlayerShooting_t763517272  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 CompleteProject.PlayerShooting::damagePerShot
	int32_t ___damagePerShot_2;
	// System.Single CompleteProject.PlayerShooting::timeBetweenBullets
	float ___timeBetweenBullets_3;
	// System.Single CompleteProject.PlayerShooting::range
	float ___range_4;
	// System.Single CompleteProject.PlayerShooting::timer
	float ___timer_5;
	// UnityEngine.Ray CompleteProject.PlayerShooting::shootRay
	Ray_t3785851493  ___shootRay_6;
	// UnityEngine.RaycastHit CompleteProject.PlayerShooting::shootHit
	RaycastHit_t1056001966  ___shootHit_7;
	// System.Int32 CompleteProject.PlayerShooting::shootableMask
	int32_t ___shootableMask_8;
	// UnityEngine.ParticleSystem CompleteProject.PlayerShooting::gunParticles
	ParticleSystem_t1800779281 * ___gunParticles_9;
	// UnityEngine.LineRenderer CompleteProject.PlayerShooting::gunLine
	LineRenderer_t3154350270 * ___gunLine_10;
	// UnityEngine.AudioSource CompleteProject.PlayerShooting::gunAudio
	AudioSource_t3935305588 * ___gunAudio_11;
	// UnityEngine.Light CompleteProject.PlayerShooting::gunLight
	Light_t3756812086 * ___gunLight_12;
	// UnityEngine.Light CompleteProject.PlayerShooting::faceLight
	Light_t3756812086 * ___faceLight_13;
	// System.Single CompleteProject.PlayerShooting::effectsDisplayTime
	float ___effectsDisplayTime_14;

public:
	inline static int32_t get_offset_of_damagePerShot_2() { return static_cast<int32_t>(offsetof(PlayerShooting_t763517272, ___damagePerShot_2)); }
	inline int32_t get_damagePerShot_2() const { return ___damagePerShot_2; }
	inline int32_t* get_address_of_damagePerShot_2() { return &___damagePerShot_2; }
	inline void set_damagePerShot_2(int32_t value)
	{
		___damagePerShot_2 = value;
	}

	inline static int32_t get_offset_of_timeBetweenBullets_3() { return static_cast<int32_t>(offsetof(PlayerShooting_t763517272, ___timeBetweenBullets_3)); }
	inline float get_timeBetweenBullets_3() const { return ___timeBetweenBullets_3; }
	inline float* get_address_of_timeBetweenBullets_3() { return &___timeBetweenBullets_3; }
	inline void set_timeBetweenBullets_3(float value)
	{
		___timeBetweenBullets_3 = value;
	}

	inline static int32_t get_offset_of_range_4() { return static_cast<int32_t>(offsetof(PlayerShooting_t763517272, ___range_4)); }
	inline float get_range_4() const { return ___range_4; }
	inline float* get_address_of_range_4() { return &___range_4; }
	inline void set_range_4(float value)
	{
		___range_4 = value;
	}

	inline static int32_t get_offset_of_timer_5() { return static_cast<int32_t>(offsetof(PlayerShooting_t763517272, ___timer_5)); }
	inline float get_timer_5() const { return ___timer_5; }
	inline float* get_address_of_timer_5() { return &___timer_5; }
	inline void set_timer_5(float value)
	{
		___timer_5 = value;
	}

	inline static int32_t get_offset_of_shootRay_6() { return static_cast<int32_t>(offsetof(PlayerShooting_t763517272, ___shootRay_6)); }
	inline Ray_t3785851493  get_shootRay_6() const { return ___shootRay_6; }
	inline Ray_t3785851493 * get_address_of_shootRay_6() { return &___shootRay_6; }
	inline void set_shootRay_6(Ray_t3785851493  value)
	{
		___shootRay_6 = value;
	}

	inline static int32_t get_offset_of_shootHit_7() { return static_cast<int32_t>(offsetof(PlayerShooting_t763517272, ___shootHit_7)); }
	inline RaycastHit_t1056001966  get_shootHit_7() const { return ___shootHit_7; }
	inline RaycastHit_t1056001966 * get_address_of_shootHit_7() { return &___shootHit_7; }
	inline void set_shootHit_7(RaycastHit_t1056001966  value)
	{
		___shootHit_7 = value;
	}

	inline static int32_t get_offset_of_shootableMask_8() { return static_cast<int32_t>(offsetof(PlayerShooting_t763517272, ___shootableMask_8)); }
	inline int32_t get_shootableMask_8() const { return ___shootableMask_8; }
	inline int32_t* get_address_of_shootableMask_8() { return &___shootableMask_8; }
	inline void set_shootableMask_8(int32_t value)
	{
		___shootableMask_8 = value;
	}

	inline static int32_t get_offset_of_gunParticles_9() { return static_cast<int32_t>(offsetof(PlayerShooting_t763517272, ___gunParticles_9)); }
	inline ParticleSystem_t1800779281 * get_gunParticles_9() const { return ___gunParticles_9; }
	inline ParticleSystem_t1800779281 ** get_address_of_gunParticles_9() { return &___gunParticles_9; }
	inline void set_gunParticles_9(ParticleSystem_t1800779281 * value)
	{
		___gunParticles_9 = value;
		Il2CppCodeGenWriteBarrier((&___gunParticles_9), value);
	}

	inline static int32_t get_offset_of_gunLine_10() { return static_cast<int32_t>(offsetof(PlayerShooting_t763517272, ___gunLine_10)); }
	inline LineRenderer_t3154350270 * get_gunLine_10() const { return ___gunLine_10; }
	inline LineRenderer_t3154350270 ** get_address_of_gunLine_10() { return &___gunLine_10; }
	inline void set_gunLine_10(LineRenderer_t3154350270 * value)
	{
		___gunLine_10 = value;
		Il2CppCodeGenWriteBarrier((&___gunLine_10), value);
	}

	inline static int32_t get_offset_of_gunAudio_11() { return static_cast<int32_t>(offsetof(PlayerShooting_t763517272, ___gunAudio_11)); }
	inline AudioSource_t3935305588 * get_gunAudio_11() const { return ___gunAudio_11; }
	inline AudioSource_t3935305588 ** get_address_of_gunAudio_11() { return &___gunAudio_11; }
	inline void set_gunAudio_11(AudioSource_t3935305588 * value)
	{
		___gunAudio_11 = value;
		Il2CppCodeGenWriteBarrier((&___gunAudio_11), value);
	}

	inline static int32_t get_offset_of_gunLight_12() { return static_cast<int32_t>(offsetof(PlayerShooting_t763517272, ___gunLight_12)); }
	inline Light_t3756812086 * get_gunLight_12() const { return ___gunLight_12; }
	inline Light_t3756812086 ** get_address_of_gunLight_12() { return &___gunLight_12; }
	inline void set_gunLight_12(Light_t3756812086 * value)
	{
		___gunLight_12 = value;
		Il2CppCodeGenWriteBarrier((&___gunLight_12), value);
	}

	inline static int32_t get_offset_of_faceLight_13() { return static_cast<int32_t>(offsetof(PlayerShooting_t763517272, ___faceLight_13)); }
	inline Light_t3756812086 * get_faceLight_13() const { return ___faceLight_13; }
	inline Light_t3756812086 ** get_address_of_faceLight_13() { return &___faceLight_13; }
	inline void set_faceLight_13(Light_t3756812086 * value)
	{
		___faceLight_13 = value;
		Il2CppCodeGenWriteBarrier((&___faceLight_13), value);
	}

	inline static int32_t get_offset_of_effectsDisplayTime_14() { return static_cast<int32_t>(offsetof(PlayerShooting_t763517272, ___effectsDisplayTime_14)); }
	inline float get_effectsDisplayTime_14() const { return ___effectsDisplayTime_14; }
	inline float* get_address_of_effectsDisplayTime_14() { return &___effectsDisplayTime_14; }
	inline void set_effectsDisplayTime_14(float value)
	{
		___effectsDisplayTime_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSHOOTING_T763517272_H
#ifndef RANDOMPARTICLEPOINT_T2073816061_H
#define RANDOMPARTICLEPOINT_T2073816061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomParticlePoint
struct  RandomParticlePoint_t2073816061  : public MonoBehaviour_t3962482529
{
public:
	// System.Single RandomParticlePoint::normalizedTime
	float ___normalizedTime_2;

public:
	inline static int32_t get_offset_of_normalizedTime_2() { return static_cast<int32_t>(offsetof(RandomParticlePoint_t2073816061, ___normalizedTime_2)); }
	inline float get_normalizedTime_2() const { return ___normalizedTime_2; }
	inline float* get_address_of_normalizedTime_2() { return &___normalizedTime_2; }
	inline void set_normalizedTime_2(float value)
	{
		___normalizedTime_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMPARTICLEPOINT_T2073816061_H
#ifndef MOBILECONTROLRIG_T1964600252_H
#define MOBILECONTROLRIG_T1964600252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.MobileControlRig
struct  MobileControlRig_t1964600252  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOBILECONTROLRIG_T1964600252_H
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
#ifndef SCOREMANAGER_T2448100397_H
#define SCOREMANAGER_T2448100397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CompleteProject.ScoreManager
struct  ScoreManager_t2448100397  : public MonoBehaviour_t3962482529
{
public:
	// CompleteProject.PlayerMovement CompleteProject.ScoreManager::playerMovement
	PlayerMovement_t1816600158 * ___playerMovement_3;
	// CompleteProject.PlayerHealth CompleteProject.ScoreManager::playerHealth
	PlayerHealth_t4039380943 * ___playerHealth_4;
	// UnityEngine.UI.Text CompleteProject.ScoreManager::text
	Text_t1901882714 * ___text_5;

public:
	inline static int32_t get_offset_of_playerMovement_3() { return static_cast<int32_t>(offsetof(ScoreManager_t2448100397, ___playerMovement_3)); }
	inline PlayerMovement_t1816600158 * get_playerMovement_3() const { return ___playerMovement_3; }
	inline PlayerMovement_t1816600158 ** get_address_of_playerMovement_3() { return &___playerMovement_3; }
	inline void set_playerMovement_3(PlayerMovement_t1816600158 * value)
	{
		___playerMovement_3 = value;
		Il2CppCodeGenWriteBarrier((&___playerMovement_3), value);
	}

	inline static int32_t get_offset_of_playerHealth_4() { return static_cast<int32_t>(offsetof(ScoreManager_t2448100397, ___playerHealth_4)); }
	inline PlayerHealth_t4039380943 * get_playerHealth_4() const { return ___playerHealth_4; }
	inline PlayerHealth_t4039380943 ** get_address_of_playerHealth_4() { return &___playerHealth_4; }
	inline void set_playerHealth_4(PlayerHealth_t4039380943 * value)
	{
		___playerHealth_4 = value;
		Il2CppCodeGenWriteBarrier((&___playerHealth_4), value);
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(ScoreManager_t2448100397, ___text_5)); }
	inline Text_t1901882714 * get_text_5() const { return ___text_5; }
	inline Text_t1901882714 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(Text_t1901882714 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((&___text_5), value);
	}
};

struct ScoreManager_t2448100397_StaticFields
{
public:
	// System.Single CompleteProject.ScoreManager::score
	float ___score_2;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(ScoreManager_t2448100397_StaticFields, ___score_2)); }
	inline float get_score_2() const { return ___score_2; }
	inline float* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(float value)
	{
		___score_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCOREMANAGER_T2448100397_H
#ifndef RANDOMANIMATIONPOINT_T761985300_H
#define RANDOMANIMATIONPOINT_T761985300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomAnimationPoint
struct  RandomAnimationPoint_t761985300  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean RandomAnimationPoint::randomize
	bool ___randomize_2;
	// System.Single RandomAnimationPoint::normalizedTime
	float ___normalizedTime_3;

public:
	inline static int32_t get_offset_of_randomize_2() { return static_cast<int32_t>(offsetof(RandomAnimationPoint_t761985300, ___randomize_2)); }
	inline bool get_randomize_2() const { return ___randomize_2; }
	inline bool* get_address_of_randomize_2() { return &___randomize_2; }
	inline void set_randomize_2(bool value)
	{
		___randomize_2 = value;
	}

	inline static int32_t get_offset_of_normalizedTime_3() { return static_cast<int32_t>(offsetof(RandomAnimationPoint_t761985300, ___normalizedTime_3)); }
	inline float get_normalizedTime_3() const { return ___normalizedTime_3; }
	inline float* get_address_of_normalizedTime_3() { return &___normalizedTime_3; }
	inline void set_normalizedTime_3(float value)
	{
		___normalizedTime_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMANIMATIONPOINT_T761985300_H
#ifndef VOLUMEHANDLER_T704224452_H
#define VOLUMEHANDLER_T704224452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VolumeHandler
struct  VolumeHandler_t704224452  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOLUMEHANDLER_T704224452_H
#ifndef PAUSEMANAGER_T1166378904_H
#define PAUSEMANAGER_T1166378904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PauseManager
struct  PauseManager_t1166378904  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Audio.AudioMixerSnapshot PauseManager::paused
	AudioMixerSnapshot_t1921958751 * ___paused_2;
	// UnityEngine.Audio.AudioMixerSnapshot PauseManager::unpaused
	AudioMixerSnapshot_t1921958751 * ___unpaused_3;
	// UnityEngine.Canvas PauseManager::canvas
	Canvas_t3310196443 * ___canvas_4;

public:
	inline static int32_t get_offset_of_paused_2() { return static_cast<int32_t>(offsetof(PauseManager_t1166378904, ___paused_2)); }
	inline AudioMixerSnapshot_t1921958751 * get_paused_2() const { return ___paused_2; }
	inline AudioMixerSnapshot_t1921958751 ** get_address_of_paused_2() { return &___paused_2; }
	inline void set_paused_2(AudioMixerSnapshot_t1921958751 * value)
	{
		___paused_2 = value;
		Il2CppCodeGenWriteBarrier((&___paused_2), value);
	}

	inline static int32_t get_offset_of_unpaused_3() { return static_cast<int32_t>(offsetof(PauseManager_t1166378904, ___unpaused_3)); }
	inline AudioMixerSnapshot_t1921958751 * get_unpaused_3() const { return ___unpaused_3; }
	inline AudioMixerSnapshot_t1921958751 ** get_address_of_unpaused_3() { return &___unpaused_3; }
	inline void set_unpaused_3(AudioMixerSnapshot_t1921958751 * value)
	{
		___unpaused_3 = value;
		Il2CppCodeGenWriteBarrier((&___unpaused_3), value);
	}

	inline static int32_t get_offset_of_canvas_4() { return static_cast<int32_t>(offsetof(PauseManager_t1166378904, ___canvas_4)); }
	inline Canvas_t3310196443 * get_canvas_4() const { return ___canvas_4; }
	inline Canvas_t3310196443 ** get_address_of_canvas_4() { return &___canvas_4; }
	inline void set_canvas_4(Canvas_t3310196443 * value)
	{
		___canvas_4 = value;
		Il2CppCodeGenWriteBarrier((&___canvas_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAUSEMANAGER_T1166378904_H
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
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
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

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
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
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef SLIDER_T3903728902_H
#define SLIDER_T3903728902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider
struct  Slider_t3903728902  : public Selectable_t3250028441
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t3704657025 * ___m_FillRect_16;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t3704657025 * ___m_HandleRect_17;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_18;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_19;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_20;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_21;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_22;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t3180273144 * ___m_OnValueChanged_23;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t2670269651 * ___m_FillImage_24;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_t3600365921 * ___m_FillTransform_25;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t3704657025 * ___m_FillContainerRect_26;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_t3600365921 * ___m_HandleTransform_27;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t3704657025 * ___m_HandleContainerRect_28;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t2156229523  ___m_Offset_29;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t2562230146  ___m_Tracker_30;

public:
	inline static int32_t get_offset_of_m_FillRect_16() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillRect_16)); }
	inline RectTransform_t3704657025 * get_m_FillRect_16() const { return ___m_FillRect_16; }
	inline RectTransform_t3704657025 ** get_address_of_m_FillRect_16() { return &___m_FillRect_16; }
	inline void set_m_FillRect_16(RectTransform_t3704657025 * value)
	{
		___m_FillRect_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillRect_16), value);
	}

	inline static int32_t get_offset_of_m_HandleRect_17() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_HandleRect_17)); }
	inline RectTransform_t3704657025 * get_m_HandleRect_17() const { return ___m_HandleRect_17; }
	inline RectTransform_t3704657025 ** get_address_of_m_HandleRect_17() { return &___m_HandleRect_17; }
	inline void set_m_HandleRect_17(RectTransform_t3704657025 * value)
	{
		___m_HandleRect_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleRect_17), value);
	}

	inline static int32_t get_offset_of_m_Direction_18() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Direction_18)); }
	inline int32_t get_m_Direction_18() const { return ___m_Direction_18; }
	inline int32_t* get_address_of_m_Direction_18() { return &___m_Direction_18; }
	inline void set_m_Direction_18(int32_t value)
	{
		___m_Direction_18 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_19() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_MinValue_19)); }
	inline float get_m_MinValue_19() const { return ___m_MinValue_19; }
	inline float* get_address_of_m_MinValue_19() { return &___m_MinValue_19; }
	inline void set_m_MinValue_19(float value)
	{
		___m_MinValue_19 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_20() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_MaxValue_20)); }
	inline float get_m_MaxValue_20() const { return ___m_MaxValue_20; }
	inline float* get_address_of_m_MaxValue_20() { return &___m_MaxValue_20; }
	inline void set_m_MaxValue_20(float value)
	{
		___m_MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_21() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_WholeNumbers_21)); }
	inline bool get_m_WholeNumbers_21() const { return ___m_WholeNumbers_21; }
	inline bool* get_address_of_m_WholeNumbers_21() { return &___m_WholeNumbers_21; }
	inline void set_m_WholeNumbers_21(bool value)
	{
		___m_WholeNumbers_21 = value;
	}

	inline static int32_t get_offset_of_m_Value_22() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Value_22)); }
	inline float get_m_Value_22() const { return ___m_Value_22; }
	inline float* get_address_of_m_Value_22() { return &___m_Value_22; }
	inline void set_m_Value_22(float value)
	{
		___m_Value_22 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_23() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_OnValueChanged_23)); }
	inline SliderEvent_t3180273144 * get_m_OnValueChanged_23() const { return ___m_OnValueChanged_23; }
	inline SliderEvent_t3180273144 ** get_address_of_m_OnValueChanged_23() { return &___m_OnValueChanged_23; }
	inline void set_m_OnValueChanged_23(SliderEvent_t3180273144 * value)
	{
		___m_OnValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_23), value);
	}

	inline static int32_t get_offset_of_m_FillImage_24() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillImage_24)); }
	inline Image_t2670269651 * get_m_FillImage_24() const { return ___m_FillImage_24; }
	inline Image_t2670269651 ** get_address_of_m_FillImage_24() { return &___m_FillImage_24; }
	inline void set_m_FillImage_24(Image_t2670269651 * value)
	{
		___m_FillImage_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillImage_24), value);
	}

	inline static int32_t get_offset_of_m_FillTransform_25() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillTransform_25)); }
	inline Transform_t3600365921 * get_m_FillTransform_25() const { return ___m_FillTransform_25; }
	inline Transform_t3600365921 ** get_address_of_m_FillTransform_25() { return &___m_FillTransform_25; }
	inline void set_m_FillTransform_25(Transform_t3600365921 * value)
	{
		___m_FillTransform_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillTransform_25), value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_26() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillContainerRect_26)); }
	inline RectTransform_t3704657025 * get_m_FillContainerRect_26() const { return ___m_FillContainerRect_26; }
	inline RectTransform_t3704657025 ** get_address_of_m_FillContainerRect_26() { return &___m_FillContainerRect_26; }
	inline void set_m_FillContainerRect_26(RectTransform_t3704657025 * value)
	{
		___m_FillContainerRect_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillContainerRect_26), value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_27() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_HandleTransform_27)); }
	inline Transform_t3600365921 * get_m_HandleTransform_27() const { return ___m_HandleTransform_27; }
	inline Transform_t3600365921 ** get_address_of_m_HandleTransform_27() { return &___m_HandleTransform_27; }
	inline void set_m_HandleTransform_27(Transform_t3600365921 * value)
	{
		___m_HandleTransform_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleTransform_27), value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_28() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_HandleContainerRect_28)); }
	inline RectTransform_t3704657025 * get_m_HandleContainerRect_28() const { return ___m_HandleContainerRect_28; }
	inline RectTransform_t3704657025 ** get_address_of_m_HandleContainerRect_28() { return &___m_HandleContainerRect_28; }
	inline void set_m_HandleContainerRect_28(RectTransform_t3704657025 * value)
	{
		___m_HandleContainerRect_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleContainerRect_28), value);
	}

	inline static int32_t get_offset_of_m_Offset_29() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Offset_29)); }
	inline Vector2_t2156229523  get_m_Offset_29() const { return ___m_Offset_29; }
	inline Vector2_t2156229523 * get_address_of_m_Offset_29() { return &___m_Offset_29; }
	inline void set_m_Offset_29(Vector2_t2156229523  value)
	{
		___m_Offset_29 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_30() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Tracker_30)); }
	inline DrivenRectTransformTracker_t2562230146  get_m_Tracker_30() const { return ___m_Tracker_30; }
	inline DrivenRectTransformTracker_t2562230146 * get_address_of_m_Tracker_30() { return &___m_Tracker_30; }
	inline void set_m_Tracker_30(DrivenRectTransformTracker_t2562230146  value)
	{
		___m_Tracker_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLIDER_T3903728902_H
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
#ifndef IMAGE_T2670269651_H
#define IMAGE_T2670269651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t2670269651  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t280657092 * ___m_Sprite_29;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t280657092 * ___m_OverrideSprite_30;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_31;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_32;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_33;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_34;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_35;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_36;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_37;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_38;

public:
	inline static int32_t get_offset_of_m_Sprite_29() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Sprite_29)); }
	inline Sprite_t280657092 * get_m_Sprite_29() const { return ___m_Sprite_29; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_29() { return &___m_Sprite_29; }
	inline void set_m_Sprite_29(Sprite_t280657092 * value)
	{
		___m_Sprite_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_29), value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_30() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_OverrideSprite_30)); }
	inline Sprite_t280657092 * get_m_OverrideSprite_30() const { return ___m_OverrideSprite_30; }
	inline Sprite_t280657092 ** get_address_of_m_OverrideSprite_30() { return &___m_OverrideSprite_30; }
	inline void set_m_OverrideSprite_30(Sprite_t280657092 * value)
	{
		___m_OverrideSprite_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideSprite_30), value);
	}

	inline static int32_t get_offset_of_m_Type_31() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Type_31)); }
	inline int32_t get_m_Type_31() const { return ___m_Type_31; }
	inline int32_t* get_address_of_m_Type_31() { return &___m_Type_31; }
	inline void set_m_Type_31(int32_t value)
	{
		___m_Type_31 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_32() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_PreserveAspect_32)); }
	inline bool get_m_PreserveAspect_32() const { return ___m_PreserveAspect_32; }
	inline bool* get_address_of_m_PreserveAspect_32() { return &___m_PreserveAspect_32; }
	inline void set_m_PreserveAspect_32(bool value)
	{
		___m_PreserveAspect_32 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_33() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillCenter_33)); }
	inline bool get_m_FillCenter_33() const { return ___m_FillCenter_33; }
	inline bool* get_address_of_m_FillCenter_33() { return &___m_FillCenter_33; }
	inline void set_m_FillCenter_33(bool value)
	{
		___m_FillCenter_33 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_34() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillMethod_34)); }
	inline int32_t get_m_FillMethod_34() const { return ___m_FillMethod_34; }
	inline int32_t* get_address_of_m_FillMethod_34() { return &___m_FillMethod_34; }
	inline void set_m_FillMethod_34(int32_t value)
	{
		___m_FillMethod_34 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_35() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillAmount_35)); }
	inline float get_m_FillAmount_35() const { return ___m_FillAmount_35; }
	inline float* get_address_of_m_FillAmount_35() { return &___m_FillAmount_35; }
	inline void set_m_FillAmount_35(float value)
	{
		___m_FillAmount_35 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_36() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillClockwise_36)); }
	inline bool get_m_FillClockwise_36() const { return ___m_FillClockwise_36; }
	inline bool* get_address_of_m_FillClockwise_36() { return &___m_FillClockwise_36; }
	inline void set_m_FillClockwise_36(bool value)
	{
		___m_FillClockwise_36 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_37() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillOrigin_37)); }
	inline int32_t get_m_FillOrigin_37() const { return ___m_FillOrigin_37; }
	inline int32_t* get_address_of_m_FillOrigin_37() { return &___m_FillOrigin_37; }
	inline void set_m_FillOrigin_37(int32_t value)
	{
		___m_FillOrigin_37 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_38() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_AlphaHitTestMinimumThreshold_38)); }
	inline float get_m_AlphaHitTestMinimumThreshold_38() const { return ___m_AlphaHitTestMinimumThreshold_38; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_38() { return &___m_AlphaHitTestMinimumThreshold_38; }
	inline void set_m_AlphaHitTestMinimumThreshold_38(float value)
	{
		___m_AlphaHitTestMinimumThreshold_38 = value;
	}
};

struct Image_t2670269651_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t340375123 * ___s_ETC1DefaultUI_28;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t1457185986* ___s_VertScratch_39;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t1457185986* ___s_UVScratch_40;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t1718750761* ___s_Xy_41;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t1718750761* ___s_Uv_42;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_28() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_ETC1DefaultUI_28)); }
	inline Material_t340375123 * get_s_ETC1DefaultUI_28() const { return ___s_ETC1DefaultUI_28; }
	inline Material_t340375123 ** get_address_of_s_ETC1DefaultUI_28() { return &___s_ETC1DefaultUI_28; }
	inline void set_s_ETC1DefaultUI_28(Material_t340375123 * value)
	{
		___s_ETC1DefaultUI_28 = value;
		Il2CppCodeGenWriteBarrier((&___s_ETC1DefaultUI_28), value);
	}

	inline static int32_t get_offset_of_s_VertScratch_39() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_VertScratch_39)); }
	inline Vector2U5BU5D_t1457185986* get_s_VertScratch_39() const { return ___s_VertScratch_39; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_VertScratch_39() { return &___s_VertScratch_39; }
	inline void set_s_VertScratch_39(Vector2U5BU5D_t1457185986* value)
	{
		___s_VertScratch_39 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertScratch_39), value);
	}

	inline static int32_t get_offset_of_s_UVScratch_40() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_UVScratch_40)); }
	inline Vector2U5BU5D_t1457185986* get_s_UVScratch_40() const { return ___s_UVScratch_40; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_UVScratch_40() { return &___s_UVScratch_40; }
	inline void set_s_UVScratch_40(Vector2U5BU5D_t1457185986* value)
	{
		___s_UVScratch_40 = value;
		Il2CppCodeGenWriteBarrier((&___s_UVScratch_40), value);
	}

	inline static int32_t get_offset_of_s_Xy_41() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Xy_41)); }
	inline Vector3U5BU5D_t1718750761* get_s_Xy_41() const { return ___s_Xy_41; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Xy_41() { return &___s_Xy_41; }
	inline void set_s_Xy_41(Vector3U5BU5D_t1718750761* value)
	{
		___s_Xy_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Xy_41), value);
	}

	inline static int32_t get_offset_of_s_Uv_42() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Uv_42)); }
	inline Vector3U5BU5D_t1718750761* get_s_Uv_42() const { return ___s_Uv_42; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Uv_42() { return &___s_Uv_42; }
	inline void set_s_Uv_42(Vector3U5BU5D_t1718750761* value)
	{
		___s_Uv_42 = value;
		Il2CppCodeGenWriteBarrier((&___s_Uv_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T2670269651_H
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
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_t3600365921 * m_Items[1];

public:
	inline Transform_t3600365921 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_t3600365921 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_t3600365921 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Transform_t3600365921 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_t3600365921 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_t3600365921 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1135049463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C"  bool Dictionary_2_Remove_m1786738978_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m336053009_gshared (UnityAction_1_t1982102915 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
extern "C"  void UnityEvent_1_AddListener_m3008008915_gshared (UnityEvent_1_t2278926278 * __this, UnityAction_1_t1982102915 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
extern "C"  void UnityEvent_1_RemoveListener_m4190968495_gshared (UnityEvent_1_t2278926278 * __this, UnityAction_1_t1982102915 * p0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_Lerp_m407887542 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern "C"  GameObject_t1113636619 * GameObject_FindGameObjectWithTag_m2129039296 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<CompleteProject.PlayerHealth>()
#define GameObject_GetComponent_TisPlayerHealth_t4039380943_m3651450979(__this, method) ((  PlayerHealth_t4039380943 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<CompleteProject.EnemyHealth>()
#define Component_GetComponent_TisEnemyHealth_t1074184144_m2423835117(__this, method) ((  EnemyHealth_t1074184144 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, method) ((  Animator_t434523843 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CompleteProject.EnemyAttack::Attack()
extern "C"  void EnemyAttack_Attack_m1403072165 (EnemyAttack_t1611619807 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C"  void Animator_SetTrigger_m2134052629 (Animator_t434523843 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CompleteProject.PlayerHealth::TakeDamage(System.Int32)
extern "C"  void PlayerHealth_TakeDamage_m3772969780 (PlayerHealth_t4039380943 * __this, int32_t ___amount0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, method) ((  AudioSource_t3935305588 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.ParticleSystem>()
#define Component_GetComponentInChildren_TisParticleSystem_t1800779281_m1692475682(__this, method) ((  ParticleSystem_t1800779281 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
#define Component_GetComponent_TisCapsuleCollider_t197597763_m690992970(__this, method) ((  CapsuleCollider_t197597763 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t3722313464  Vector3_get_up_m3584168373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_UnaryNegation_m1951478815 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
extern "C"  void Transform_Translate_m1810197270 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m48294159 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play()
extern "C"  void ParticleSystem_Play_m882713458 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CompleteProject.EnemyHealth::Death()
extern "C"  void EnemyHealth_Death_m140552477 (EnemyHealth_t1074184144 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
extern "C"  void Collider_set_isTrigger_m1770557358 (Collider_t1773347010 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void AudioSource_set_clip_m31653938 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
#define Component_GetComponent_TisNavMeshAgent_t1276799816_m597731532(__this, method) ((  NavMeshAgent_t1276799816 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C"  void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t3916780224_m279685075(__this, method) ((  Rigidbody_t3916780224 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern "C"  void Rigidbody_set_isKinematic_m1802205683 (Rigidbody_t3916780224 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C"  void Object_Destroy_m3118546832 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern "C"  void MonoBehaviour_InvokeRepeating_m650519629 (MonoBehaviour_t3962482529 * __this, String_t* p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1113636619_m3006960551(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1135049463_gshared)(__this /* static, unused */, p0, p1, p2, method)
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<CompleteProject.PlayerHealth>()
#define Component_GetComponent_TisPlayerHealth_t4039380943_m1551058957(__this, method) ((  PlayerHealth_t4039380943 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
extern "C"  bool NavMeshAgent_SetDestination_m2826390109 (NavMeshAgent_t1276799816 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<CompleteProject.PlayerMovement>()
#define Component_GetComponent_TisPlayerMovement_t1816600158_m3461791955(__this, method) ((  PlayerMovement_t1816600158 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponentInChildren<CompleteProject.PlayerShooting>()
#define Component_GetComponentInChildren_TisPlayerShooting_t763517272_m1941053385(__this, method) ((  PlayerShooting_t763517272 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// UnityEngine.Color UnityEngine.Color::get_clear()
extern "C"  Color_t2555686324  Color_get_clear_m1016382534 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  Color_t2555686324  Color_Lerp_m973389909 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, Color_t2555686324  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CompleteProject.PlayerHealth::Death()
extern "C"  void PlayerHealth_Death_m3207134654 (PlayerHealth_t4039380943 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CompleteProject.PlayerShooting::DisableEffects()
extern "C"  void PlayerShooting_DisableEffects_m1778719940 (PlayerShooting_t763517272 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
extern "C"  void SceneManager_LoadScene_m3463216446 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxisRaw(System.String)
extern "C"  float CrossPlatformInputManager_GetAxisRaw_m3829676626 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CompleteProject.PlayerMovement::Move(System.Single,System.Single)
extern "C"  void PlayerMovement_Move_m4227028268 (PlayerMovement_t1816600158 * __this, float ___h0, float ___v1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CompleteProject.PlayerMovement::Turning()
extern "C"  void PlayerMovement_Turning_m3442290832 (PlayerMovement_t1816600158 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CompleteProject.PlayerMovement::Animating(System.Single,System.Single)
extern "C"  void PlayerMovement_Animating_m42054968 (PlayerMovement_t1816600158 * __this, float ___h0, float ___v1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
extern "C"  void Vector3_Set_m1737058353 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C"  Vector3_t3722313464  Vector3_get_normalized_m2454957984 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
extern "C"  void Rigidbody_MovePosition_m2109341474 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Vector3_op_Inequality_m315980366 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_LookRotation_m4040767668 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
extern "C"  void Rigidbody_MoveRotation_m72717779 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C"  void Animator_SetBool_m234840832 (Animator_t434523843 * __this, String_t* p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
extern "C"  int32_t LayerMask_GetMask_m2229982082 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
#define Component_GetComponent_TisParticleSystem_t1800779281_m3884485303(__this, method) ((  ParticleSystem_t1800779281 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
#define Component_GetComponent_TisLineRenderer_t3154350270_m1658315391(__this, method) ((  LineRenderer_t3154350270 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Light>()
#define Component_GetComponent_TisLight_t3756812086_m916313317(__this, method) ((  Light_t3756812086 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void CompleteProject.PlayerShooting::Shoot()
extern "C"  void PlayerShooting_Shoot_m1977277932 (PlayerShooting_t763517272 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C"  void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop()
extern "C"  void ParticleSystem_Stop_m3125854227 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
extern "C"  void LineRenderer_SetPosition_m2111131184 (LineRenderer_t3154350270 * __this, int32_t p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Ray::set_origin(UnityEngine.Vector3)
extern "C"  void Ray_set_origin_m3861735347 (Ray_t3785851493 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C"  Vector3_t3722313464  Transform_get_forward_m747522392 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Ray::set_direction(UnityEngine.Vector3)
extern "C"  void Ray_set_direction_m312599913 (Ray_t3785851493 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Physics_Raycast_m1893809531 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  p0, RaycastHit_t1056001966 * p1, float p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C"  Collider_t1773347010 * RaycastHit_get_collider_m1464180279 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C"  Vector3_t3722313464  RaycastHit_get_point_m2236647085 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CompleteProject.EnemyHealth::TakeDamage(System.Int32,UnityEngine.Vector3)
extern "C"  void EnemyHealth_TakeDamage_m466505554 (EnemyHealth_t1074184144 * __this, int32_t ___amount0, Vector3_t3722313464  ___hitPoint1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C"  Vector3_t3722313464  Ray_get_origin_m2819290985 (Ray_t3785851493 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C"  Vector3_t3722313464  Ray_get_direction_m761601601 (Ray_t3785851493 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CompleteProject.PlayerMovement::GetMovement()
extern "C"  Vector3_t3722313464  PlayerMovement_GetMovement_m4140988239 (PlayerMovement_t1816600158 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C"  float Vector3_get_magnitude_m27958459 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString()
extern "C"  String_t* Single_ToString_m3947131094 (float* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::CreateVirtualAxes()
extern "C"  void Joystick_CreateVirtualAxes_m3715245240 (Joystick_t9498292 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Division_m510815599 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
extern "C"  void VirtualAxis_Update_m3060599659 (VirtualAxis_t1347148391 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
extern "C"  void VirtualAxis__ctor_m117427821 (VirtualAxis_t1347148391 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
extern "C"  Vector2_t2156229523  PointerEventData_get_position_m437660275 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Mathf_Clamp_m2756574208 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C"  void Joystick_UpdateVirtualAxes_m2931167446 (Joystick_t9498292 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
extern "C"  void VirtualAxis_Remove_m969104513 (VirtualAxis_t1347148391 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Audio.AudioMixer::SetFloat(System.String,System.Single)
extern "C"  bool AudioMixer_SetFloat_m3036056706 (AudioMixer_t3521020193 * __this, String_t* p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Canvas>()
#define Component_GetComponent_TisCanvas_t3310196443_m782269232(__this, method) ((  Canvas_t3310196443 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m17791917 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C"  bool Behaviour_get_enabled_m753527255 (Behaviour_t1437897464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PauseManager::Pause()
extern "C"  void PauseManager_Pause_m2696151883 (PauseManager_t1166378904 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_timeScale()
extern "C"  float Time_get_timeScale_m701790074 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
extern "C"  void Time_set_timeScale_m1127545364 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PauseManager::Lowpass()
extern "C"  void PauseManager_Lowpass_m4104619204 (PauseManager_t1166378904 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Audio.AudioMixerSnapshot::TransitionTo(System.Single)
extern "C"  void AudioMixerSnapshot_TransitionTo_m2523353171 (AudioMixerSnapshot_t1921958751 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m470877999 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Update(System.Single)
extern "C"  void Animator_Update_m3041769415 (Animator_t434523843 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::get_value()
extern "C"  float Random_get_value_m3115885645 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
extern "C"  void Animator_Play_m2835034014 (Animator_t434523843 * __this, String_t* p0, int32_t p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Simulate(System.Single,System.Boolean,System.Boolean)
extern "C"  void ParticleSystem_Simulate_m2186877927 (ParticleSystem_t1800779281 * __this, float p0, bool p1, bool p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
extern "C"  void MobileInput__ctor_m2132218003 (MobileInput_t3295884756 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C"  void VirtualInput_RegisterVirtualAxis_m4061627445 (VirtualInput_t4247650776 * __this, VirtualAxis_t1347148391 * ___axis0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C"  void VirtualInput_RegisterVirtualButton_m539054427 (VirtualInput_t4247650776 * __this, VirtualButton_t3490362950 * ___button0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
extern "C"  void VirtualInput_UnRegisterVirtualAxis_m2615886023 (VirtualInput_t4247650776 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
extern "C"  void VirtualInput_UnRegisterVirtualButton_m1331827656 (VirtualInput_t4247650776 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnitySampleAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
extern "C"  VirtualAxis_t1347148391 * VirtualInput_VirtualAxisReference_m265738861 (VirtualInput_t4247650776 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
extern "C"  float CrossPlatformInputManager_GetAxis_m3244021904 (RuntimeObject * __this /* static, unused */, String_t* ___name0, bool ___raw1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionX_m1317694797 (VirtualInput_t4247650776 * __this, float ___f0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionY_m1463317316 (VirtualInput_t4247650776 * __this, float ___f0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionZ_m337793731 (VirtualInput_t4247650776 * __this, float ___f0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
extern "C"  void VirtualAxis__ctor_m615583067 (VirtualAxis_t1347148391 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
extern "C"  void VirtualAxis_set_name_m2759368997 (VirtualAxis_t1347148391 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
extern "C"  void VirtualAxis_set_matchWithInputManager_m4167991802 (VirtualAxis_t1347148391 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C"  void CrossPlatformInputManager_RegisterVirtualAxis_m3729018904 (RuntimeObject * __this /* static, unused */, VirtualAxis_t1347148391 * ___axis0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
extern "C"  String_t* VirtualAxis_get_name_m4062747206 (VirtualAxis_t1347148391 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
extern "C"  void CrossPlatformInputManager_UnRegisterVirtualAxis_m2747492094 (RuntimeObject * __this /* static, unused */, String_t* ____name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
extern "C"  void VirtualButton__ctor_m594979356 (VirtualButton_t3490362950 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
extern "C"  void VirtualButton_set_name_m3816690259 (VirtualButton_t3490362950 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
extern "C"  void VirtualButton_set_matchWithInputManager_m100546256 (VirtualButton_t3490362950 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Time::get_frameCount()
extern "C"  int32_t Time_get_frameCount_m1220035214 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
extern "C"  String_t* VirtualButton_get_name_m3713304515 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
extern "C"  void CrossPlatformInputManager_UnRegisterVirtualButton_m3381002917 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::.ctor()
extern "C"  void VirtualInput__ctor_m1053376383 (VirtualInput_t4247650776 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
extern "C"  void VirtualButton__ctor_m2590712265 (VirtualButton_t3490362950 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C"  void CrossPlatformInputManager_RegisterVirtualButton_m1038377797 (RuntimeObject * __this /* static, unused */, VirtualButton_t3490362950 * ___button0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m623971441(__this, p0, method) ((  bool (*) (Dictionary_2_t1132404690 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(!0)
#define Dictionary_2_get_Item_m3767727970(__this, p0, method) ((  VirtualAxis_t1347148391 * (*) (Dictionary_2_t1132404690 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Single UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
extern "C"  float VirtualAxis_get_GetValue_m3308232588 (VirtualAxis_t1347148391 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m3713610116(__this, p0, method) ((  bool (*) (Dictionary_2_t3275619249 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
extern "C"  void MobileInput_AddButton_m1546634226 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !1 System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0)
#define Dictionary_2_get_Item_m670004451(__this, p0, method) ((  VirtualButton_t3490362950 * (*) (Dictionary_2_t3275619249 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
extern "C"  void VirtualButton_Pressed_m2534678636 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
extern "C"  void VirtualButton_Released_m3958507687 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
extern "C"  void MobileInput_AddAxes_m882771614 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
extern "C"  bool VirtualButton_get_GetButtonDown_m3232372385 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
extern "C"  bool VirtualButton_get_GetButtonUp_m2683013087 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
extern "C"  bool VirtualButton_get_GetButton_m4028724520 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnitySampleAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
extern "C"  Vector3_t3722313464  VirtualInput_get_virtualMousePosition_m3832540035 (VirtualInput_t4247650776 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern "C"  float Input_GetAxisRaw_m2316819917 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m4009438427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButton(System.String)
extern "C"  bool Input_GetButton_m2064261504 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern "C"  bool Input_GetButtonDown_m3074252807 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
extern "C"  bool Input_GetButtonUp_m4007681079 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t3722313464  Input_get_mousePosition_m1616496925 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::.ctor()
#define Dictionary_2__ctor_m1598708476(__this, method) ((  void (*) (Dictionary_2_t1132404690 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::.ctor()
#define Dictionary_2__ctor_m2884814283(__this, method) ((  void (*) (Dictionary_2_t3275619249 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
#define List_1__ctor_m706204246(__this, method) ((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Add(!0,!1)
#define Dictionary_2_Add_m1208951171(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1132404690 *, String_t*, VirtualAxis_t1347148391 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
extern "C"  bool VirtualAxis_get_matchWithInputManager_m2401220563 (VirtualAxis_t1347148391 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
#define List_1_Add_m1685793073(__this, p0, method) ((  void (*) (List_1_t3319525431 *, String_t*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Add(!0,!1)
#define Dictionary_2_Add_m943624655(__this, p0, p1, method) ((  void (*) (Dictionary_2_t3275619249 *, String_t*, VirtualButton_t3490362950 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
extern "C"  bool VirtualButton_get_matchWithInputManager_m2372617195 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Remove(!0)
#define Dictionary_2_Remove_m913603837(__this, p0, method) ((  bool (*) (Dictionary_2_t1132404690 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m1786738978_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Remove(!0)
#define Dictionary_2_Remove_m3912794030(__this, p0, method) ((  bool (*) (Dictionary_2_t3275619249 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m1786738978_gshared)(__this, p0, method)
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
extern "C"  void VirtualInput_set_virtualMousePosition_m2247952941 (VirtualInput_t4247650776 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
extern "C"  void MobileControlRig_CheckEnableControlRig_m2145489761 (MobileControlRig_t1964600252 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
extern "C"  void MobileControlRig_EnableControlRig_m2658193441 (MobileControlRig_t1964600252 * __this, bool ___enabled0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C"  RuntimeObject* Transform_GetEnumerator_m2717073726 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
#define GameObject_GetComponent_TisSlider_t3903728902_m865256018(__this, method) ((  Slider_t3903728902 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
extern "C"  SliderEvent_t3180273144 * Slider_get_onValueChanged_m2907593587 (Slider_t3903728902 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
#define UnityAction_1__ctor_m336053009(__this, p0, p1, method) ((  void (*) (UnityAction_1_t1982102915 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m336053009_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
#define UnityEvent_1_AddListener_m3008008915(__this, p0, method) ((  void (*) (UnityEvent_1_t2278926278 *, UnityAction_1_t1982102915 *, const RuntimeMethod*))UnityEvent_1_AddListener_m3008008915_gshared)(__this, p0, method)
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C"  void AudioSource_set_volume_m1273312851 (AudioSource_t3935305588 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
#define UnityEvent_1_RemoveListener_m4190968495(__this, p0, method) ((  void (*) (UnityEvent_1_t2278926278 *, UnityAction_1_t1982102915 *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m4190968495_gshared)(__this, p0, method)
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
// System.Void CompleteProject.CameraFollow::.ctor()
extern "C"  void CameraFollow__ctor_m1640095963 (CameraFollow_t555330123 * __this, const RuntimeMethod* method)
{
	{
		__this->set_smoothing_3((5.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.CameraFollow::Start()
extern "C"  void CameraFollow_Start_m2426147617 (CameraFollow_t555330123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraFollow_Start_m2426147617_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = __this->get_target_2();
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		__this->set_offset_4(L_4);
		return;
	}
}
// System.Void CompleteProject.CameraFollow::FixedUpdate()
extern "C"  void CameraFollow_FixedUpdate_m62321540 (CameraFollow_t555330123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraFollow_FixedUpdate_m62321540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = __this->get_target_2();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = __this->get_offset_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = V_0;
		float L_8 = __this->get_smoothing_3();
		float L_9 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_6, L_7, ((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_m3387557959(L_4, L_10, /*hidden argument*/NULL);
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
// System.Void CompleteProject.CoinManager::.ctor()
extern "C"  void CoinManager__ctor_m3524013294 (CoinManager_t3944673524 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.CoinManager::Start()
extern "C"  void CoinManager_Start_m3093958212 (CoinManager_t3944673524 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoinManager_Start_m3093958212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_startCoin_3();
		((CoinManager_t3944673524_StaticFields*)il2cpp_codegen_static_fields_for(CoinManager_t3944673524_il2cpp_TypeInfo_var))->set_currentCoin_4(L_0);
		return;
	}
}
// System.Void CompleteProject.CoinManager::Update()
extern "C"  void CoinManager_Update_m2875580731 (CoinManager_t3944673524 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoinManager_Update_m2875580731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get_coinText_2();
		String_t* L_1 = Int32_ToString_m141394615((((CoinManager_t3944673524_StaticFields*)il2cpp_codegen_static_fields_for(CoinManager_t3944673524_il2cpp_TypeInfo_var))->get_address_of_currentCoin_4()), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
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
// System.Void CompleteProject.EnemyAttack::.ctor()
extern "C"  void EnemyAttack__ctor_m3368700991 (EnemyAttack_t1611619807 * __this, const RuntimeMethod* method)
{
	{
		__this->set_timeBetweenAttacks_2((0.5f));
		__this->set_attackDamage_3(((int32_t)10));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.EnemyAttack::Awake()
extern "C"  void EnemyAttack_Awake_m2769050695 (EnemyAttack_t1611619807 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyAttack_Awake_m2769050695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_FindGameObjectWithTag_m2129039296(NULL /*static, unused*/, _stringLiteral2261822918, /*hidden argument*/NULL);
		__this->set_player_5(L_0);
		GameObject_t1113636619 * L_1 = __this->get_player_5();
		NullCheck(L_1);
		PlayerHealth_t4039380943 * L_2 = GameObject_GetComponent_TisPlayerHealth_t4039380943_m3651450979(L_1, /*hidden argument*/GameObject_GetComponent_TisPlayerHealth_t4039380943_m3651450979_RuntimeMethod_var);
		__this->set_playerHealth_6(L_2);
		EnemyHealth_t1074184144 * L_3 = Component_GetComponent_TisEnemyHealth_t1074184144_m2423835117(__this, /*hidden argument*/Component_GetComponent_TisEnemyHealth_t1074184144_m2423835117_RuntimeMethod_var);
		__this->set_enemyHealth_7(L_3);
		Animator_t434523843 * L_4 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		__this->set_anim_4(L_4);
		return;
	}
}
// System.Void CompleteProject.EnemyAttack::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void EnemyAttack_OnTriggerEnter_m9158358 (EnemyAttack_t1611619807 * __this, Collider_t1773347010 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyAttack_OnTriggerEnter_m9158358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t1773347010 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_player_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		__this->set_playerInRange_8((bool)1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void CompleteProject.EnemyAttack::OnTriggerExit(UnityEngine.Collider)
extern "C"  void EnemyAttack_OnTriggerExit_m2896840382 (EnemyAttack_t1611619807 * __this, Collider_t1773347010 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyAttack_OnTriggerExit_m2896840382_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t1773347010 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_player_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		__this->set_playerInRange_8((bool)0);
	}

IL_001d:
	{
		return;
	}
}
// System.Void CompleteProject.EnemyAttack::Update()
extern "C"  void EnemyAttack_Update_m3903684778 (EnemyAttack_t1611619807 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyAttack_Update_m3903684778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_timer_9();
		float L_1 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timer_9(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		float L_2 = __this->get_timer_9();
		float L_3 = __this->get_timeBetweenAttacks_2();
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0045;
		}
	}
	{
		bool L_4 = __this->get_playerInRange_8();
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		EnemyHealth_t1074184144 * L_5 = __this->get_enemyHealth_7();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_currentHealth_3();
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		EnemyAttack_Attack_m1403072165(__this, /*hidden argument*/NULL);
	}

IL_0045:
	{
		PlayerHealth_t4039380943 * L_7 = __this->get_playerHealth_6();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_currentHealth_3();
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		Animator_t434523843 * L_9 = __this->get_anim_4();
		NullCheck(L_9);
		Animator_SetTrigger_m2134052629(L_9, _stringLiteral2746150380, /*hidden argument*/NULL);
	}

IL_0066:
	{
		return;
	}
}
// System.Void CompleteProject.EnemyAttack::Attack()
extern "C"  void EnemyAttack_Attack_m1403072165 (EnemyAttack_t1611619807 * __this, const RuntimeMethod* method)
{
	{
		__this->set_timer_9((0.0f));
		PlayerHealth_t4039380943 * L_0 = __this->get_playerHealth_6();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_currentHealth_3();
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		PlayerHealth_t4039380943 * L_2 = __this->get_playerHealth_6();
		int32_t L_3 = __this->get_attackDamage_3();
		NullCheck(L_2);
		PlayerHealth_TakeDamage_m3772969780(L_2, L_3, /*hidden argument*/NULL);
	}

IL_002d:
	{
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
// System.Void CompleteProject.EnemyHealth::.ctor()
extern "C"  void EnemyHealth__ctor_m2029948778 (EnemyHealth_t1074184144 * __this, const RuntimeMethod* method)
{
	{
		__this->set_startingHealth_2(((int32_t)100));
		__this->set_sinkSpeed_4((2.5f));
		__this->set_scoreValue_5(((int32_t)10));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.EnemyHealth::Awake()
extern "C"  void EnemyHealth_Awake_m2136750458 (EnemyHealth_t1074184144 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyHealth_Awake_m2136750458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		__this->set_anim_7(L_0);
		AudioSource_t3935305588 * L_1 = Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var);
		__this->set_enemyAudio_8(L_1);
		ParticleSystem_t1800779281 * L_2 = Component_GetComponentInChildren_TisParticleSystem_t1800779281_m1692475682(__this, /*hidden argument*/Component_GetComponentInChildren_TisParticleSystem_t1800779281_m1692475682_RuntimeMethod_var);
		__this->set_hitParticles_9(L_2);
		CapsuleCollider_t197597763 * L_3 = Component_GetComponent_TisCapsuleCollider_t197597763_m690992970(__this, /*hidden argument*/Component_GetComponent_TisCapsuleCollider_t197597763_m690992970_RuntimeMethod_var);
		__this->set_capsuleCollider_10(L_3);
		int32_t L_4 = __this->get_startingHealth_2();
		__this->set_currentHealth_3(L_4);
		return;
	}
}
// System.Void CompleteProject.EnemyHealth::Update()
extern "C"  void EnemyHealth_Update_m933242776 (EnemyHealth_t1074184144 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyHealth_Update_m933242776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_isSinking_12();
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_sinkSpeed_4();
		Vector3_t3722313464  L_5 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_Translate_m1810197270(L_1, L_7, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void CompleteProject.EnemyHealth::TakeDamage(System.Int32,UnityEngine.Vector3)
extern "C"  void EnemyHealth_TakeDamage_m466505554 (EnemyHealth_t1074184144 * __this, int32_t ___amount0, Vector3_t3722313464  ___hitPoint1, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isDead_11();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		AudioSource_t3935305588 * L_1 = __this->get_enemyAudio_8();
		NullCheck(L_1);
		AudioSource_Play_m48294159(L_1, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_currentHealth_3();
		int32_t L_3 = ___amount0;
		__this->set_currentHealth_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)));
		ParticleSystem_t1800779281 * L_4 = __this->get_hitParticles_9();
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(L_4, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = ___hitPoint1;
		NullCheck(L_5);
		Transform_set_position_m3387557959(L_5, L_6, /*hidden argument*/NULL);
		ParticleSystem_t1800779281 * L_7 = __this->get_hitParticles_9();
		NullCheck(L_7);
		ParticleSystem_Play_m882713458(L_7, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_currentHealth_3();
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		EnemyHealth_Death_m140552477(__this, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// System.Void CompleteProject.EnemyHealth::Death()
extern "C"  void EnemyHealth_Death_m140552477 (EnemyHealth_t1074184144 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyHealth_Death_m140552477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isDead_11((bool)1);
		int32_t L_0 = ((CoinManager_t3944673524_StaticFields*)il2cpp_codegen_static_fields_for(CoinManager_t3944673524_il2cpp_TypeInfo_var))->get_currentCoin_4();
		((CoinManager_t3944673524_StaticFields*)il2cpp_codegen_static_fields_for(CoinManager_t3944673524_il2cpp_TypeInfo_var))->set_currentCoin_4(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)10))));
		CapsuleCollider_t197597763 * L_1 = __this->get_capsuleCollider_10();
		NullCheck(L_1);
		Collider_set_isTrigger_m1770557358(L_1, (bool)1, /*hidden argument*/NULL);
		Animator_t434523843 * L_2 = __this->get_anim_7();
		NullCheck(L_2);
		Animator_SetTrigger_m2134052629(L_2, _stringLiteral431746817, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_3 = __this->get_enemyAudio_8();
		AudioClip_t3680889665 * L_4 = __this->get_deathClip_6();
		NullCheck(L_3);
		AudioSource_set_clip_m31653938(L_3, L_4, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_5 = __this->get_enemyAudio_8();
		NullCheck(L_5);
		AudioSource_Play_m48294159(L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.EnemyHealth::StartSinking()
extern "C"  void EnemyHealth_StartSinking_m1492931314 (EnemyHealth_t1074184144 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyHealth_StartSinking_m1492931314_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NavMeshAgent_t1276799816 * L_0 = Component_GetComponent_TisNavMeshAgent_t1276799816_m597731532(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_t1276799816_m597731532_RuntimeMethod_var);
		NullCheck(L_0);
		Behaviour_set_enabled_m20417929(L_0, (bool)0, /*hidden argument*/NULL);
		Rigidbody_t3916780224 * L_1 = Component_GetComponent_TisRigidbody_t3916780224_m279685075(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var);
		NullCheck(L_1);
		Rigidbody_set_isKinematic_m1802205683(L_1, (bool)1, /*hidden argument*/NULL);
		__this->set_isSinking_12((bool)1);
		float L_2 = ((ScoreManager_t2448100397_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t2448100397_il2cpp_TypeInfo_var))->get_score_2();
		int32_t L_3 = __this->get_scoreValue_5();
		((ScoreManager_t2448100397_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t2448100397_il2cpp_TypeInfo_var))->set_score_2(((float)il2cpp_codegen_add((float)L_2, (float)(((float)((float)L_3))))));
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m3118546832(NULL /*static, unused*/, L_4, (2.0f), /*hidden argument*/NULL);
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
// System.Void CompleteProject.EnemyManager::.ctor()
extern "C"  void EnemyManager__ctor_m3413400557 (EnemyManager_t2944058352 * __this, const RuntimeMethod* method)
{
	{
		__this->set_spawnTime_4((3.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.EnemyManager::Start()
extern "C"  void EnemyManager_Start_m1501309799 (EnemyManager_t2944058352 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyManager_Start_m1501309799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_spawnTime_4();
		float L_1 = __this->get_spawnTime_4();
		MonoBehaviour_InvokeRepeating_m650519629(__this, _stringLiteral3907562786, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.EnemyManager::Spawn()
extern "C"  void EnemyManager_Spawn_m1600679877 (EnemyManager_t2944058352 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyManager_Spawn_m1600679877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		PlayerHealth_t4039380943 * L_0 = __this->get_playerHealth_2();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_currentHealth_3();
		if ((!(((float)(((float)((float)L_1)))) <= ((float)(0.0f)))))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		TransformU5BU5D_t807237628* L_2 = __this->get_spawnPoints_5();
		NullCheck(L_2);
		int32_t L_3 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_3;
		GameObject_t1113636619 * L_4 = __this->get_enemy_3();
		TransformU5BU5D_t807237628* L_5 = __this->get_spawnPoints_5();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Transform_t3600365921 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		TransformU5BU5D_t807237628* L_10 = __this->get_spawnPoints_5();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Transform_t3600365921 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Quaternion_t2301928331  L_14 = Transform_get_rotation_m3502953881(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_4, L_9, L_14, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
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
// System.Void CompleteProject.EnemyMovement::.ctor()
extern "C"  void EnemyMovement__ctor_m811893491 (EnemyMovement_t2573605316 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.EnemyMovement::Awake()
extern "C"  void EnemyMovement_Awake_m3082245139 (EnemyMovement_t2573605316 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyMovement_Awake_m3082245139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_FindGameObjectWithTag_m2129039296(NULL /*static, unused*/, _stringLiteral2261822918, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		__this->set_player_2(L_1);
		Transform_t3600365921 * L_2 = __this->get_player_2();
		NullCheck(L_2);
		PlayerHealth_t4039380943 * L_3 = Component_GetComponent_TisPlayerHealth_t4039380943_m1551058957(L_2, /*hidden argument*/Component_GetComponent_TisPlayerHealth_t4039380943_m1551058957_RuntimeMethod_var);
		__this->set_playerHealth_3(L_3);
		EnemyHealth_t1074184144 * L_4 = Component_GetComponent_TisEnemyHealth_t1074184144_m2423835117(__this, /*hidden argument*/Component_GetComponent_TisEnemyHealth_t1074184144_m2423835117_RuntimeMethod_var);
		__this->set_enemyHealth_4(L_4);
		NavMeshAgent_t1276799816 * L_5 = Component_GetComponent_TisNavMeshAgent_t1276799816_m597731532(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_t1276799816_m597731532_RuntimeMethod_var);
		__this->set_nav_5(L_5);
		return;
	}
}
// System.Void CompleteProject.EnemyMovement::Update()
extern "C"  void EnemyMovement_Update_m1877489222 (EnemyMovement_t2573605316 * __this, const RuntimeMethod* method)
{
	{
		EnemyHealth_t1074184144 * L_0 = __this->get_enemyHealth_4();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_currentHealth_3();
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		PlayerHealth_t4039380943 * L_2 = __this->get_playerHealth_3();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_currentHealth_3();
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		NavMeshAgent_t1276799816 * L_4 = __this->get_nav_5();
		Transform_t3600365921 * L_5 = __this->get_player_2();
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		NavMeshAgent_SetDestination_m2826390109(L_4, L_6, /*hidden argument*/NULL);
		goto IL_004a;
	}

IL_003e:
	{
		NavMeshAgent_t1276799816 * L_7 = __this->get_nav_5();
		NullCheck(L_7);
		Behaviour_set_enabled_m20417929(L_7, (bool)0, /*hidden argument*/NULL);
	}

IL_004a:
	{
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
// System.Void CompleteProject.GameOverManager::.ctor()
extern "C"  void GameOverManager__ctor_m3159672130 (GameOverManager_t4096720320 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.GameOverManager::Awake()
extern "C"  void GameOverManager_Awake_m3610178834 (GameOverManager_t4096720320 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameOverManager_Awake_m3610178834_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		__this->set_anim_3(L_0);
		return;
	}
}
// System.Void CompleteProject.GameOverManager::Update()
extern "C"  void GameOverManager_Update_m2257072480 (GameOverManager_t4096720320 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameOverManager_Update_m2257072480_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayerHealth_t4039380943 * L_0 = __this->get_playerHealth_2();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_currentHealth_3();
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		Animator_t434523843 * L_2 = __this->get_anim_3();
		NullCheck(L_2);
		Animator_SetTrigger_m2134052629(L_2, _stringLiteral1350712178, /*hidden argument*/NULL);
	}

IL_0021:
	{
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
// System.Void CompleteProject.PlayerHealth::.ctor()
extern "C"  void PlayerHealth__ctor_m4214890017 (PlayerHealth_t4039380943 * __this, const RuntimeMethod* method)
{
	{
		__this->set_startingHealth_2(((int32_t)100));
		__this->set_flashSpeed_7((5.0f));
		Color_t2555686324  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Color__ctor_m2943235014((&L_0), (1.0f), (0.0f), (0.0f), (0.1f), /*hidden argument*/NULL);
		__this->set_flashColour_8(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.PlayerHealth::Awake()
extern "C"  void PlayerHealth_Awake_m2635250788 (PlayerHealth_t4039380943 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerHealth_Awake_m2635250788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		__this->set_anim_9(L_0);
		AudioSource_t3935305588 * L_1 = Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var);
		__this->set_playerAudio_10(L_1);
		PlayerMovement_t1816600158 * L_2 = Component_GetComponent_TisPlayerMovement_t1816600158_m3461791955(__this, /*hidden argument*/Component_GetComponent_TisPlayerMovement_t1816600158_m3461791955_RuntimeMethod_var);
		__this->set_playerMovement_11(L_2);
		PlayerShooting_t763517272 * L_3 = Component_GetComponentInChildren_TisPlayerShooting_t763517272_m1941053385(__this, /*hidden argument*/Component_GetComponentInChildren_TisPlayerShooting_t763517272_m1941053385_RuntimeMethod_var);
		__this->set_playerShooting_12(L_3);
		int32_t L_4 = __this->get_startingHealth_2();
		__this->set_currentHealth_3(L_4);
		return;
	}
}
// System.Void CompleteProject.PlayerHealth::Update()
extern "C"  void PlayerHealth_Update_m4010361699 (PlayerHealth_t4039380943 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_damaged_14();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Image_t2670269651 * L_1 = __this->get_damageImage_5();
		Color_t2555686324  L_2 = __this->get_flashColour_8();
		NullCheck(L_1);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		goto IL_004d;
	}

IL_0021:
	{
		Image_t2670269651 * L_3 = __this->get_damageImage_5();
		Image_t2670269651 * L_4 = __this->get_damageImage_5();
		NullCheck(L_4);
		Color_t2555686324  L_5 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		Color_t2555686324  L_6 = Color_get_clear_m1016382534(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = __this->get_flashSpeed_7();
		float L_8 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t2555686324  L_9 = Color_Lerp_m973389909(NULL /*static, unused*/, L_5, L_6, ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_9);
	}

IL_004d:
	{
		__this->set_damaged_14((bool)0);
		return;
	}
}
// System.Void CompleteProject.PlayerHealth::TakeDamage(System.Int32)
extern "C"  void PlayerHealth_TakeDamage_m3772969780 (PlayerHealth_t4039380943 * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	{
		__this->set_damaged_14((bool)1);
		int32_t L_0 = __this->get_currentHealth_3();
		int32_t L_1 = ___amount0;
		__this->set_currentHealth_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		Slider_t3903728902 * L_2 = __this->get_healthSlider_4();
		int32_t L_3 = __this->get_currentHealth_3();
		NullCheck(L_2);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, (((float)((float)L_3))));
		AudioSource_t3935305588 * L_4 = __this->get_playerAudio_10();
		NullCheck(L_4);
		AudioSource_Play_m48294159(L_4, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_currentHealth_3();
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		bool L_6 = __this->get_isDead_13();
		if (L_6)
		{
			goto IL_004f;
		}
	}
	{
		PlayerHealth_Death_m3207134654(__this, /*hidden argument*/NULL);
	}

IL_004f:
	{
		return;
	}
}
// System.Void CompleteProject.PlayerHealth::Death()
extern "C"  void PlayerHealth_Death_m3207134654 (PlayerHealth_t4039380943 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerHealth_Death_m3207134654_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isDead_13((bool)1);
		PlayerShooting_t763517272 * L_0 = __this->get_playerShooting_12();
		NullCheck(L_0);
		PlayerShooting_DisableEffects_m1778719940(L_0, /*hidden argument*/NULL);
		Animator_t434523843 * L_1 = __this->get_anim_9();
		NullCheck(L_1);
		Animator_SetTrigger_m2134052629(L_1, _stringLiteral1700381037, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_2 = __this->get_playerAudio_10();
		AudioClip_t3680889665 * L_3 = __this->get_deathClip_6();
		NullCheck(L_2);
		AudioSource_set_clip_m31653938(L_2, L_3, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_4 = __this->get_playerAudio_10();
		NullCheck(L_4);
		AudioSource_Play_m48294159(L_4, /*hidden argument*/NULL);
		PlayerMovement_t1816600158 * L_5 = __this->get_playerMovement_11();
		NullCheck(L_5);
		Behaviour_set_enabled_m20417929(L_5, (bool)0, /*hidden argument*/NULL);
		PlayerShooting_t763517272 * L_6 = __this->get_playerShooting_12();
		NullCheck(L_6);
		Behaviour_set_enabled_m20417929(L_6, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.PlayerHealth::RestartLevel()
extern "C"  void PlayerHealth_RestartLevel_m3811890110 (PlayerHealth_t4039380943 * __this, const RuntimeMethod* method)
{
	{
		SceneManager_LoadScene_m3463216446(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
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
// System.Void CompleteProject.PlayerMovement::.ctor()
extern "C"  void PlayerMovement__ctor_m296255602 (PlayerMovement_t1816600158 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_2((6.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.PlayerMovement::Awake()
extern "C"  void PlayerMovement_Awake_m2228100291 (PlayerMovement_t1816600158 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement_Awake_m2228100291_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		__this->set_anim_5(L_0);
		Rigidbody_t3916780224 * L_1 = Component_GetComponent_TisRigidbody_t3916780224_m279685075(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var);
		__this->set_playerRigidbody_6(L_1);
		return;
	}
}
// System.Void CompleteProject.PlayerMovement::FixedUpdate()
extern "C"  void PlayerMovement_FixedUpdate_m2569456057 (PlayerMovement_t1816600158 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement_FixedUpdate_m2569456057_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		float L_0 = CrossPlatformInputManager_GetAxisRaw_m3829676626(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = CrossPlatformInputManager_GetAxisRaw_m3829676626(NULL /*static, unused*/, _stringLiteral2984908384, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = V_0;
		float L_3 = V_1;
		PlayerMovement_Move_m4227028268(__this, L_2, L_3, /*hidden argument*/NULL);
		PlayerMovement_Turning_m3442290832(__this, /*hidden argument*/NULL);
		float L_4 = V_0;
		float L_5 = V_1;
		PlayerMovement_Animating_m42054968(__this, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.PlayerMovement::Move(System.Single,System.Single)
extern "C"  void PlayerMovement_Move_m4227028268 (PlayerMovement_t1816600158 * __this, float ___h0, float ___v1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement_Move_m4227028268_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464 * L_0 = __this->get_address_of_movement_4();
		float L_1 = ___h0;
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = (&V_0)->get_y_2();
		float L_5 = ___v1;
		Vector3_Set_m1737058353(L_0, L_1, L_4, L_5, /*hidden argument*/NULL);
		Vector3_t3722313464 * L_6 = __this->get_address_of_movement_4();
		Vector3_t3722313464  L_7 = Vector3_get_normalized_m2454957984(L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_speed_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_9 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		float L_10 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		__this->set_movement_4(L_11);
		Rigidbody_t3916780224 * L_12 = __this->get_playerRigidbody_6();
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t3722313464  L_14 = Transform_get_position_m36019626(L_13, /*hidden argument*/NULL);
		Vector3_t3722313464  L_15 = __this->get_movement_4();
		Vector3_t3722313464  L_16 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_12);
		Rigidbody_MovePosition_m2109341474(L_12, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.PlayerMovement::Turning()
extern "C"  void PlayerMovement_Turning_m3442290832 (PlayerMovement_t1816600158 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement_Turning_m3442290832_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Quaternion_t2301928331  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		float L_0 = CrossPlatformInputManager_GetAxisRaw_m3829676626(NULL /*static, unused*/, _stringLiteral3403559637, /*hidden argument*/NULL);
		float L_1 = CrossPlatformInputManager_GetAxisRaw_m3829676626(NULL /*static, unused*/, _stringLiteral674676282, /*hidden argument*/NULL);
		Vector3__ctor_m3353183577((&V_0), L_0, (0.0f), L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = Vector3_op_Inequality_m315980366(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0071;
		}
	}
	{
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = Transform_get_position_m36019626(L_9, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		(&V_1)->set_y_2((0.0f));
		Vector3_t3722313464  L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_13 = Quaternion_LookRotation_m4040767668(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		Rigidbody_t3916780224 * L_14 = __this->get_playerRigidbody_6();
		Quaternion_t2301928331  L_15 = V_2;
		NullCheck(L_14);
		Rigidbody_MoveRotation_m72717779(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0071:
	{
		return;
	}
}
// System.Void CompleteProject.PlayerMovement::Animating(System.Single,System.Single)
extern "C"  void PlayerMovement_Animating_m42054968 (PlayerMovement_t1816600158 * __this, float ___h0, float ___v1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement_Animating_m42054968_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayerMovement_t1816600158 * G_B2_0 = NULL;
	PlayerMovement_t1816600158 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	PlayerMovement_t1816600158 * G_B3_1 = NULL;
	{
		float L_0 = ___h0;
		G_B1_0 = __this;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			G_B2_0 = __this;
			goto IL_0019;
		}
	}
	{
		float L_1 = ___v1;
		G_B3_0 = ((((int32_t)((((float)L_1) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_walking_3((bool)G_B3_0);
		Animator_t434523843 * L_2 = __this->get_anim_5();
		bool L_3 = __this->get_walking_3();
		NullCheck(L_2);
		Animator_SetBool_m234840832(L_2, _stringLiteral302131484, L_3, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 CompleteProject.PlayerMovement::GetMovement()
extern "C"  Vector3_t3722313464  PlayerMovement_GetMovement_m4140988239 (PlayerMovement_t1816600158 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = __this->get_movement_4();
		return L_0;
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
// System.Void CompleteProject.PlayerShooting::.ctor()
extern "C"  void PlayerShooting__ctor_m2276789032 (PlayerShooting_t763517272 * __this, const RuntimeMethod* method)
{
	Ray_t3785851493  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		__this->set_damagePerShot_2(((int32_t)20));
		__this->set_timeBetweenBullets_3((0.15f));
		__this->set_range_4((100.0f));
		il2cpp_codegen_initobj((&V_0), sizeof(Ray_t3785851493 ));
		Ray_t3785851493  L_0 = V_0;
		__this->set_shootRay_6(L_0);
		__this->set_effectsDisplayTime_14((0.2f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.PlayerShooting::Awake()
extern "C"  void PlayerShooting_Awake_m1258920341 (PlayerShooting_t763517272 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerShooting_Awake_m1258920341_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral2251434074);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2251434074);
		int32_t L_1 = LayerMask_GetMask_m2229982082(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_shootableMask_8(L_1);
		ParticleSystem_t1800779281 * L_2 = Component_GetComponent_TisParticleSystem_t1800779281_m3884485303(__this, /*hidden argument*/Component_GetComponent_TisParticleSystem_t1800779281_m3884485303_RuntimeMethod_var);
		__this->set_gunParticles_9(L_2);
		LineRenderer_t3154350270 * L_3 = Component_GetComponent_TisLineRenderer_t3154350270_m1658315391(__this, /*hidden argument*/Component_GetComponent_TisLineRenderer_t3154350270_m1658315391_RuntimeMethod_var);
		__this->set_gunLine_10(L_3);
		AudioSource_t3935305588 * L_4 = Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var);
		__this->set_gunAudio_11(L_4);
		Light_t3756812086 * L_5 = Component_GetComponent_TisLight_t3756812086_m916313317(__this, /*hidden argument*/Component_GetComponent_TisLight_t3756812086_m916313317_RuntimeMethod_var);
		__this->set_gunLight_12(L_5);
		return;
	}
}
// System.Void CompleteProject.PlayerShooting::Update()
extern "C"  void PlayerShooting_Update_m1934480358 (PlayerShooting_t763517272 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerShooting_Update_m1934480358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_timer_5();
		float L_1 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timer_5(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		float L_2 = CrossPlatformInputManager_GetAxisRaw_m3829676626(NULL /*static, unused*/, _stringLiteral3403559637, /*hidden argument*/NULL);
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		float L_3 = CrossPlatformInputManager_GetAxisRaw_m3829676626(NULL /*static, unused*/, _stringLiteral674676282, /*hidden argument*/NULL);
		if ((((float)L_3) == ((float)(0.0f))))
		{
			goto IL_0051;
		}
	}

IL_003a:
	{
		float L_4 = __this->get_timer_5();
		float L_5 = __this->get_timeBetweenBullets_3();
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_0051;
		}
	}
	{
		PlayerShooting_Shoot_m1977277932(__this, /*hidden argument*/NULL);
	}

IL_0051:
	{
		float L_6 = __this->get_timer_5();
		float L_7 = __this->get_timeBetweenBullets_3();
		float L_8 = __this->get_effectsDisplayTime_14();
		if ((!(((float)L_6) >= ((float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8))))))
		{
			goto IL_006f;
		}
	}
	{
		PlayerShooting_DisableEffects_m1778719940(__this, /*hidden argument*/NULL);
	}

IL_006f:
	{
		return;
	}
}
// System.Void CompleteProject.PlayerShooting::DisableEffects()
extern "C"  void PlayerShooting_DisableEffects_m1778719940 (PlayerShooting_t763517272 * __this, const RuntimeMethod* method)
{
	{
		LineRenderer_t3154350270 * L_0 = __this->get_gunLine_10();
		NullCheck(L_0);
		Renderer_set_enabled_m1727253150(L_0, (bool)0, /*hidden argument*/NULL);
		Light_t3756812086 * L_1 = __this->get_faceLight_13();
		NullCheck(L_1);
		Behaviour_set_enabled_m20417929(L_1, (bool)0, /*hidden argument*/NULL);
		Light_t3756812086 * L_2 = __this->get_gunLight_12();
		NullCheck(L_2);
		Behaviour_set_enabled_m20417929(L_2, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.PlayerShooting::Shoot()
extern "C"  void PlayerShooting_Shoot_m1977277932 (PlayerShooting_t763517272 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerShooting_Shoot_m1977277932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EnemyHealth_t1074184144 * V_0 = NULL;
	{
		__this->set_timer_5((0.0f));
		AudioSource_t3935305588 * L_0 = __this->get_gunAudio_11();
		NullCheck(L_0);
		AudioSource_Play_m48294159(L_0, /*hidden argument*/NULL);
		Light_t3756812086 * L_1 = __this->get_gunLight_12();
		NullCheck(L_1);
		Behaviour_set_enabled_m20417929(L_1, (bool)1, /*hidden argument*/NULL);
		Light_t3756812086 * L_2 = __this->get_faceLight_13();
		NullCheck(L_2);
		Behaviour_set_enabled_m20417929(L_2, (bool)1, /*hidden argument*/NULL);
		ParticleSystem_t1800779281 * L_3 = __this->get_gunParticles_9();
		NullCheck(L_3);
		ParticleSystem_Stop_m3125854227(L_3, /*hidden argument*/NULL);
		ParticleSystem_t1800779281 * L_4 = __this->get_gunParticles_9();
		NullCheck(L_4);
		ParticleSystem_Play_m882713458(L_4, /*hidden argument*/NULL);
		LineRenderer_t3154350270 * L_5 = __this->get_gunLine_10();
		NullCheck(L_5);
		Renderer_set_enabled_m1727253150(L_5, (bool)1, /*hidden argument*/NULL);
		LineRenderer_t3154350270 * L_6 = __this->get_gunLine_10();
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		LineRenderer_SetPosition_m2111131184(L_6, 0, L_8, /*hidden argument*/NULL);
		Ray_t3785851493 * L_9 = __this->get_address_of_shootRay_6();
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		Ray_set_origin_m3861735347(L_9, L_11, /*hidden argument*/NULL);
		Ray_t3785851493 * L_12 = __this->get_address_of_shootRay_6();
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t3722313464  L_14 = Transform_get_forward_m747522392(L_13, /*hidden argument*/NULL);
		Ray_set_direction_m312599913(L_12, L_14, /*hidden argument*/NULL);
		Ray_t3785851493  L_15 = __this->get_shootRay_6();
		RaycastHit_t1056001966 * L_16 = __this->get_address_of_shootHit_7();
		float L_17 = __this->get_range_4();
		int32_t L_18 = __this->get_shootableMask_8();
		bool L_19 = Physics_Raycast_m1893809531(NULL /*static, unused*/, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0105;
		}
	}
	{
		RaycastHit_t1056001966 * L_20 = __this->get_address_of_shootHit_7();
		Collider_t1773347010 * L_21 = RaycastHit_get_collider_m1464180279(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		EnemyHealth_t1074184144 * L_22 = Component_GetComponent_TisEnemyHealth_t1074184144_m2423835117(L_21, /*hidden argument*/Component_GetComponent_TisEnemyHealth_t1074184144_m2423835117_RuntimeMethod_var);
		V_0 = L_22;
		EnemyHealth_t1074184144 * L_23 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_24 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_23, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00e9;
		}
	}
	{
		EnemyHealth_t1074184144 * L_25 = V_0;
		int32_t L_26 = __this->get_damagePerShot_2();
		RaycastHit_t1056001966 * L_27 = __this->get_address_of_shootHit_7();
		Vector3_t3722313464  L_28 = RaycastHit_get_point_m2236647085(L_27, /*hidden argument*/NULL);
		NullCheck(L_25);
		EnemyHealth_TakeDamage_m466505554(L_25, L_26, L_28, /*hidden argument*/NULL);
	}

IL_00e9:
	{
		LineRenderer_t3154350270 * L_29 = __this->get_gunLine_10();
		RaycastHit_t1056001966 * L_30 = __this->get_address_of_shootHit_7();
		Vector3_t3722313464  L_31 = RaycastHit_get_point_m2236647085(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		LineRenderer_SetPosition_m2111131184(L_29, 1, L_31, /*hidden argument*/NULL);
		goto IL_0137;
	}

IL_0105:
	{
		LineRenderer_t3154350270 * L_32 = __this->get_gunLine_10();
		Ray_t3785851493 * L_33 = __this->get_address_of_shootRay_6();
		Vector3_t3722313464  L_34 = Ray_get_origin_m2819290985(L_33, /*hidden argument*/NULL);
		Ray_t3785851493 * L_35 = __this->get_address_of_shootRay_6();
		Vector3_t3722313464  L_36 = Ray_get_direction_m761601601(L_35, /*hidden argument*/NULL);
		float L_37 = __this->get_range_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_38 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		Vector3_t3722313464  L_39 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_34, L_38, /*hidden argument*/NULL);
		NullCheck(L_32);
		LineRenderer_SetPosition_m2111131184(L_32, 1, L_39, /*hidden argument*/NULL);
	}

IL_0137:
	{
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
// System.Void CompleteProject.ScoreManager::.ctor()
extern "C"  void ScoreManager__ctor_m1488749815 (ScoreManager_t2448100397 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.ScoreManager::Awake()
extern "C"  void ScoreManager_Awake_m466905556 (ScoreManager_t2448100397 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreManager_Awake_m466905556_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ScoreManager_t2448100397_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t2448100397_il2cpp_TypeInfo_var))->set_score_2((0.0f));
		return;
	}
}
// System.Void CompleteProject.ScoreManager::Update()
extern "C"  void ScoreManager_Update_m3712719109 (ScoreManager_t2448100397 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreManager_Update_m3712719109_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayerMovement_t1816600158 * L_0 = __this->get_playerMovement_3();
		NullCheck(L_0);
		bool L_1 = L_0->get_walking_3();
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		PlayerHealth_t4039380943 * L_2 = __this->get_playerHealth_4();
		NullCheck(L_2);
		bool L_3 = L_2->get_isDead_13();
		if (!L_3)
		{
			goto IL_0021;
		}
	}

IL_0020:
	{
		return;
	}

IL_0021:
	{
		float L_4 = ((ScoreManager_t2448100397_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t2448100397_il2cpp_TypeInfo_var))->get_score_2();
		PlayerMovement_t1816600158 * L_5 = __this->get_playerMovement_3();
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = PlayerMovement_GetMovement_m4140988239(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = Vector3_get_magnitude_m27958459((&V_0), /*hidden argument*/NULL);
		((ScoreManager_t2448100397_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t2448100397_il2cpp_TypeInfo_var))->set_score_2(((float)il2cpp_codegen_add((float)L_4, (float)L_7)));
		Text_t1901882714 * L_8 = __this->get_text_5();
		String_t* L_9 = Single_ToString_m3947131094((((ScoreManager_t2448100397_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t2448100397_il2cpp_TypeInfo_var))->get_address_of_score_2()), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3937257545(NULL /*static, unused*/, L_9, _stringLiteral3454908288, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_10);
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
// System.Void Joystick::.ctor()
extern "C"  void Joystick__ctor_m1272315817 (Joystick_t9498292 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick__ctor_m1272315817_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_MovementRange_2(((int32_t)100));
		__this->set_horizontalAxisName_4(_stringLiteral1828639942);
		__this->set_verticalAxisName_5(_stringLiteral2984908384);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Joystick::OnEnable()
extern "C"  void Joystick_OnEnable_m2616696499 (Joystick_t9498292 * __this, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		__this->set_startPos_6(L_1);
		Joystick_CreateVirtualAxes_m3715245240(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C"  void Joystick_UpdateVirtualAxes_m2931167446 (Joystick_t9498292 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_UpdateVirtualAxes_m2931167446_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_startPos_6();
		Vector3_t3722313464  L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_y_2();
		(&V_0)->set_y_2(((-L_3)));
		Vector3_t3722313464  L_4 = V_0;
		int32_t L_5 = __this->get_MovementRange_2();
		Vector3_t3722313464  L_6 = Vector3_op_Division_m510815599(NULL /*static, unused*/, L_4, (((float)((float)L_5))), /*hidden argument*/NULL);
		V_0 = L_6;
		bool L_7 = __this->get_useX_7();
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		VirtualAxis_t1347148391 * L_8 = __this->get_horizontalVirtualAxis_9();
		float L_9 = (&V_0)->get_x_1();
		NullCheck(L_8);
		VirtualAxis_Update_m3060599659(L_8, ((-L_9)), /*hidden argument*/NULL);
	}

IL_0048:
	{
		bool L_10 = __this->get_useY_8();
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		VirtualAxis_t1347148391 * L_11 = __this->get_verticalVirtualAxis_10();
		float L_12 = (&V_0)->get_y_2();
		NullCheck(L_11);
		VirtualAxis_Update_m3060599659(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0065:
	{
		return;
	}
}
// System.Void Joystick::CreateVirtualAxes()
extern "C"  void Joystick_CreateVirtualAxes_m3715245240 (Joystick_t9498292 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_CreateVirtualAxes_m3715245240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Joystick_t9498292 * G_B2_0 = NULL;
	Joystick_t9498292 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Joystick_t9498292 * G_B3_1 = NULL;
	Joystick_t9498292 * G_B5_0 = NULL;
	Joystick_t9498292 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Joystick_t9498292 * G_B6_1 = NULL;
	{
		int32_t L_0 = __this->get_axesToUse_3();
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = __this->get_axesToUse_3();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_useX_7((bool)G_B3_0);
		int32_t L_2 = __this->get_axesToUse_3();
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = __this->get_axesToUse_3();
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0035:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_useY_8((bool)G_B6_0);
		bool L_4 = __this->get_useX_7();
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_5 = __this->get_horizontalAxisName_4();
		VirtualAxis_t1347148391 * L_6 = (VirtualAxis_t1347148391 *)il2cpp_codegen_object_new(VirtualAxis_t1347148391_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m117427821(L_6, L_5, /*hidden argument*/NULL);
		__this->set_horizontalVirtualAxis_9(L_6);
	}

IL_0056:
	{
		bool L_7 = __this->get_useY_8();
		if (!L_7)
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_8 = __this->get_verticalAxisName_5();
		VirtualAxis_t1347148391 * L_9 = (VirtualAxis_t1347148391 *)il2cpp_codegen_object_new(VirtualAxis_t1347148391_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m117427821(L_9, L_8, /*hidden argument*/NULL);
		__this->set_verticalVirtualAxis_10(L_9);
	}

IL_0072:
	{
		return;
	}
}
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Joystick_OnDrag_m1548353041 (Joystick_t9498292 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_OnDrag_m1548353041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	Vector2_t2156229523  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = __this->get_useX_7();
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		PointerEventData_t3807901092 * L_2 = ___data0;
		NullCheck(L_2);
		Vector2_t2156229523  L_3 = PointerEventData_get_position_m437660275(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		float L_4 = (&V_2)->get_x_0();
		Vector3_t3722313464 * L_5 = __this->get_address_of_startPos_6();
		float L_6 = L_5->get_x_1();
		V_1 = (((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)L_4, (float)L_6)))));
		int32_t L_7 = V_1;
		int32_t L_8 = __this->get_MovementRange_2();
		int32_t L_9 = __this->get_MovementRange_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_10 = Mathf_Clamp_m2756574208(NULL /*static, unused*/, L_7, ((-L_8)), L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		(&V_0)->set_x_1((((float)((float)L_11))));
	}

IL_004a:
	{
		bool L_12 = __this->get_useY_8();
		if (!L_12)
		{
			goto IL_008f;
		}
	}
	{
		PointerEventData_t3807901092 * L_13 = ___data0;
		NullCheck(L_13);
		Vector2_t2156229523  L_14 = PointerEventData_get_position_m437660275(L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		float L_15 = (&V_4)->get_y_1();
		Vector3_t3722313464 * L_16 = __this->get_address_of_startPos_6();
		float L_17 = L_16->get_y_2();
		V_3 = (((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)L_15, (float)L_17)))));
		int32_t L_18 = V_3;
		int32_t L_19 = __this->get_MovementRange_2();
		int32_t L_20 = __this->get_MovementRange_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_21 = Mathf_Clamp_m2756574208(NULL /*static, unused*/, L_18, ((-L_19)), L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		int32_t L_22 = V_3;
		(&V_0)->set_y_2((((float)((float)L_22))));
	}

IL_008f:
	{
		Transform_t3600365921 * L_23 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464 * L_24 = __this->get_address_of_startPos_6();
		float L_25 = L_24->get_x_1();
		float L_26 = (&V_0)->get_x_1();
		Vector3_t3722313464 * L_27 = __this->get_address_of_startPos_6();
		float L_28 = L_27->get_y_2();
		float L_29 = (&V_0)->get_y_2();
		Vector3_t3722313464 * L_30 = __this->get_address_of_startPos_6();
		float L_31 = L_30->get_z_3();
		float L_32 = (&V_0)->get_z_3();
		Vector3_t3722313464  L_33;
		memset(&L_33, 0, sizeof(L_33));
		Vector3__ctor_m3353183577((&L_33), ((float)il2cpp_codegen_add((float)L_25, (float)L_26)), ((float)il2cpp_codegen_add((float)L_28, (float)L_29)), ((float)il2cpp_codegen_add((float)L_31, (float)L_32)), /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_position_m3387557959(L_23, L_33, /*hidden argument*/NULL);
		Transform_t3600365921 * L_34 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t3722313464  L_35 = Transform_get_position_m36019626(L_34, /*hidden argument*/NULL);
		Joystick_UpdateVirtualAxes_m2931167446(__this, L_35, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Joystick_OnPointerUp_m3173419772 (Joystick_t9498292 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = __this->get_startPos_6();
		NullCheck(L_0);
		Transform_set_position_m3387557959(L_0, L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = __this->get_startPos_6();
		Joystick_UpdateVirtualAxes_m2931167446(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Joystick_OnPointerDown_m1243099850 (Joystick_t9498292 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Joystick::OnDisable()
extern "C"  void Joystick_OnDisable_m1094642348 (Joystick_t9498292 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_useX_7();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		VirtualAxis_t1347148391 * L_1 = __this->get_horizontalVirtualAxis_9();
		NullCheck(L_1);
		VirtualAxis_Remove_m969104513(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		bool L_2 = __this->get_useY_8();
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		VirtualAxis_t1347148391 * L_3 = __this->get_verticalVirtualAxis_10();
		NullCheck(L_3);
		VirtualAxis_Remove_m969104513(L_3, /*hidden argument*/NULL);
	}

IL_002c:
	{
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
// System.Void MixLevels::.ctor()
extern "C"  void MixLevels__ctor_m1819949532 (MixLevels_t2451904987 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MixLevels::SetSfxLvl(System.Single)
extern "C"  void MixLevels_SetSfxLvl_m996539440 (MixLevels_t2451904987 * __this, float ___sfxLvl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixLevels_SetSfxLvl_m996539440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioMixer_t3521020193 * L_0 = __this->get_masterMixer_2();
		float L_1 = ___sfxLvl0;
		NullCheck(L_0);
		AudioMixer_SetFloat_m3036056706(L_0, _stringLiteral4216931872, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MixLevels::SetMusicLvl(System.Single)
extern "C"  void MixLevels_SetMusicLvl_m3594062045 (MixLevels_t2451904987 * __this, float ___musicLvl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixLevels_SetMusicLvl_m3594062045_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioMixer_t3521020193 * L_0 = __this->get_masterMixer_2();
		float L_1 = ___musicLvl0;
		NullCheck(L_0);
		AudioMixer_SetFloat_m3036056706(L_0, _stringLiteral3902063868, L_1, /*hidden argument*/NULL);
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
// System.Void PauseManager::.ctor()
extern "C"  void PauseManager__ctor_m1546214069 (PauseManager_t1166378904 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PauseManager::Start()
extern "C"  void PauseManager_Start_m1725239283 (PauseManager_t1166378904 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PauseManager_Start_m1725239283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Canvas_t3310196443 * L_0 = Component_GetComponent_TisCanvas_t3310196443_m782269232(__this, /*hidden argument*/Component_GetComponent_TisCanvas_t3310196443_m782269232_RuntimeMethod_var);
		__this->set_canvas_4(L_0);
		return;
	}
}
// System.Void PauseManager::Update()
extern "C"  void PauseManager_Update_m1449314415 (PauseManager_t1166378904 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PauseManager_Update_m1449314415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		Canvas_t3310196443 * L_1 = __this->get_canvas_4();
		Canvas_t3310196443 * L_2 = __this->get_canvas_4();
		NullCheck(L_2);
		bool L_3 = Behaviour_get_enabled_m753527255(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Behaviour_set_enabled_m20417929(L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		PauseManager_Pause_m2696151883(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void PauseManager::Pause()
extern "C"  void PauseManager_Pause_m2696151883 (PauseManager_t1166378904 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		float L_0 = Time_get_timeScale_m701790074(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0015;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		Time_set_timeScale_m1127545364(NULL /*static, unused*/, (((float)((float)G_B3_0))), /*hidden argument*/NULL);
		PauseManager_Lowpass_m4104619204(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PauseManager::Lowpass()
extern "C"  void PauseManager_Lowpass_m4104619204 (PauseManager_t1166378904 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = Time_get_timeScale_m701790074(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		AudioMixerSnapshot_t1921958751 * L_1 = __this->get_paused_2();
		NullCheck(L_1);
		AudioMixerSnapshot_TransitionTo_m2523353171(L_1, (0.01f), /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_0024:
	{
		AudioMixerSnapshot_t1921958751 * L_2 = __this->get_unpaused_3();
		NullCheck(L_2);
		AudioMixerSnapshot_TransitionTo_m2523353171(L_2, (0.01f), /*hidden argument*/NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Void PauseManager::Quit()
extern "C"  void PauseManager_Quit_m2695965265 (PauseManager_t1166378904 * __this, const RuntimeMethod* method)
{
	{
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
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
// System.Void RandomAnimationPoint::.ctor()
extern "C"  void RandomAnimationPoint__ctor_m1013190162 (RandomAnimationPoint_t761985300 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RandomAnimationPoint::OnValidate()
extern "C"  void RandomAnimationPoint_OnValidate_m3403497882 (RandomAnimationPoint_t761985300 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RandomAnimationPoint_OnValidate_m3403497882_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	String_t* G_B2_1 = NULL;
	Animator_t434523843 * G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	String_t* G_B1_1 = NULL;
	Animator_t434523843 * G_B1_2 = NULL;
	float G_B3_0 = 0.0f;
	int32_t G_B3_1 = 0;
	String_t* G_B3_2 = NULL;
	Animator_t434523843 * G_B3_3 = NULL;
	{
		Animator_t434523843 * L_0 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		NullCheck(L_0);
		Animator_Update_m3041769415(L_0, (0.0f), /*hidden argument*/NULL);
		Animator_t434523843 * L_1 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		bool L_2 = __this->get_randomize_2();
		G_B1_0 = 0;
		G_B1_1 = _stringLiteral3540494343;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 0;
			G_B2_1 = _stringLiteral3540494343;
			G_B2_2 = L_1;
			goto IL_0031;
		}
	}
	{
		float L_3 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0037;
	}

IL_0031:
	{
		float L_4 = __this->get_normalizedTime_3();
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0037:
	{
		NullCheck(G_B3_3);
		Animator_Play_m2835034014(G_B3_3, G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
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
// System.Void RandomParticlePoint::.ctor()
extern "C"  void RandomParticlePoint__ctor_m3942767383 (RandomParticlePoint_t2073816061 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RandomParticlePoint::OnValidate()
extern "C"  void RandomParticlePoint_OnValidate_m717360907 (RandomParticlePoint_t2073816061 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RandomParticlePoint_OnValidate_m717360907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParticleSystem_t1800779281 * L_0 = Component_GetComponent_TisParticleSystem_t1800779281_m3884485303(__this, /*hidden argument*/Component_GetComponent_TisParticleSystem_t1800779281_m3884485303_RuntimeMethod_var);
		float L_1 = __this->get_normalizedTime_2();
		NullCheck(L_0);
		ParticleSystem_Simulate_m2186877927(L_0, L_1, (bool)1, (bool)1, /*hidden argument*/NULL);
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
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::.cctor()
extern "C"  void CrossPlatformInputManager__cctor_m3618134741 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager__cctor_m3618134741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileInput_t3295884756 * L_0 = (MobileInput_t3295884756 *)il2cpp_codegen_object_new(MobileInput_t3295884756_il2cpp_TypeInfo_var);
		MobileInput__ctor_m2132218003(L_0, /*hidden argument*/NULL);
		((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->set_virtualInput_0(L_0);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C"  void CrossPlatformInputManager_RegisterVirtualAxis_m3729018904 (RuntimeObject * __this /* static, unused */, VirtualAxis_t1347148391 * ___axis0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_RegisterVirtualAxis_m3729018904_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		VirtualAxis_t1347148391 * L_1 = ___axis0;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualAxis_m4061627445(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C"  void CrossPlatformInputManager_RegisterVirtualButton_m1038377797 (RuntimeObject * __this /* static, unused */, VirtualButton_t3490362950 * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_RegisterVirtualButton_m1038377797_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		VirtualButton_t3490362950 * L_1 = ___button0;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualButton_m539054427(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
extern "C"  void CrossPlatformInputManager_UnRegisterVirtualAxis_m2747492094 (RuntimeObject * __this /* static, unused */, String_t* ____name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_UnRegisterVirtualAxis_m2747492094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ____name0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2730274217, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,CrossPlatformInputManager_UnRegisterVirtualAxis_m2747492094_RuntimeMethod_var);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_2 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_3 = ____name0;
		NullCheck(L_2);
		VirtualInput_UnRegisterVirtualAxis_m2615886023(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
extern "C"  void CrossPlatformInputManager_UnRegisterVirtualButton_m3381002917 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_UnRegisterVirtualButton_m3381002917_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualInput_UnRegisterVirtualButton_m1331827656(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
extern "C"  VirtualAxis_t1347148391 * CrossPlatformInputManager_VirtualAxisReference_m2488295043 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_VirtualAxisReference_m2488295043_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualAxis_t1347148391 * L_2 = VirtualInput_VirtualAxisReference_m265738861(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
extern "C"  float CrossPlatformInputManager_GetAxis_m4045467026 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetAxis_m4045467026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		float L_1 = CrossPlatformInputManager_GetAxis_m3244021904(NULL /*static, unused*/, L_0, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxisRaw(System.String)
extern "C"  float CrossPlatformInputManager_GetAxisRaw_m3829676626 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetAxisRaw_m3829676626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		float L_1 = CrossPlatformInputManager_GetAxis_m3244021904(NULL /*static, unused*/, L_0, (bool)1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
extern "C"  float CrossPlatformInputManager_GetAxis_m3244021904 (RuntimeObject * __this /* static, unused */, String_t* ___name0, bool ___raw1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetAxis_m3244021904_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		bool L_2 = ___raw1;
		NullCheck(L_0);
		float L_3 = VirtFuncInvoker2< float, String_t*, bool >::Invoke(4 /* System.Single UnitySampleAssets.CrossPlatformInput.VirtualInput::GetAxis(System.String,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
extern "C"  bool CrossPlatformInputManager_GetButton_m3105922025 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetButton_m3105922025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(5 /* System.Boolean UnitySampleAssets.CrossPlatformInput.VirtualInput::GetButton(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
extern "C"  bool CrossPlatformInputManager_GetButtonDown_m4159945301 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetButtonDown_m4159945301_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean UnitySampleAssets.CrossPlatformInput.VirtualInput::GetButtonDown(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonUp(System.String)
extern "C"  bool CrossPlatformInputManager_GetButtonUp_m2950373926 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetButtonUp_m2950373926_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(7 /* System.Boolean UnitySampleAssets.CrossPlatformInput.VirtualInput::GetButtonUp(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
extern "C"  void CrossPlatformInputManager_SetButtonDown_m1084881269 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetButtonDown_m1084881269_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetButtonDown(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
extern "C"  void CrossPlatformInputManager_SetButtonUp_m1215372893 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetButtonUp_m1215372893_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetButtonUp(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
extern "C"  void CrossPlatformInputManager_SetAxisPositive_m758253539 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetAxisPositive_m758253539_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetAxisPositive(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
extern "C"  void CrossPlatformInputManager_SetAxisNegative_m4255594822 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetAxisNegative_m4255594822_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetAxisNegative(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
extern "C"  void CrossPlatformInputManager_SetAxisZero_m691309370 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetAxisZero_m691309370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetAxisZero(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
extern "C"  void CrossPlatformInputManager_SetAxis_m990722195 (RuntimeObject * __this /* static, unused */, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetAxis_m990722195_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		float L_2 = ___value1;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, float >::Invoke(13 /* System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetAxis(System.String,System.Single) */, L_0, L_1, L_2);
		return;
	}
}
// UnityEngine.Vector3 UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::get_mousePosition()
extern "C"  Vector3_t3722313464  CrossPlatformInputManager_get_mousePosition_m1763278742 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_get_mousePosition_m1763278742_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = VirtFuncInvoker0< Vector3_t3722313464  >::Invoke(14 /* UnityEngine.Vector3 UnitySampleAssets.CrossPlatformInput.VirtualInput::MousePosition() */, L_0);
		return L_1;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
extern "C"  void CrossPlatformInputManager_SetVirtualMousePositionX_m549431750 (RuntimeObject * __this /* static, unused */, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetVirtualMousePositionX_m549431750_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionX_m1317694797(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
extern "C"  void CrossPlatformInputManager_SetVirtualMousePositionY_m1873444571 (RuntimeObject * __this /* static, unused */, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetVirtualMousePositionY_m1873444571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionY_m1463317316(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
extern "C"  void CrossPlatformInputManager_SetVirtualMousePositionZ_m1931710842 (RuntimeObject * __this /* static, unused */, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetVirtualMousePositionZ_m1931710842_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionZ_m337793731(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
extern "C"  void VirtualAxis__ctor_m117427821 (VirtualAxis_t1347148391 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		VirtualAxis__ctor_m615583067(__this, L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
extern "C"  void VirtualAxis__ctor_m615583067 (VirtualAxis_t1347148391 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualAxis__ctor_m615583067_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		VirtualAxis_set_name_m2759368997(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___matchToInputSettings1;
		VirtualAxis_set_matchWithInputManager_m4167991802(__this, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m3729018904(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
extern "C"  String_t* VirtualAxis_get_name_m4062747206 (VirtualAxis_t1347148391 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
extern "C"  void VirtualAxis_set_name_m2759368997 (VirtualAxis_t1347148391 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
extern "C"  bool VirtualAxis_get_matchWithInputManager_m2401220563 (VirtualAxis_t1347148391 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
extern "C"  void VirtualAxis_set_matchWithInputManager_m4167991802 (VirtualAxis_t1347148391 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
extern "C"  void VirtualAxis_Remove_m969104513 (VirtualAxis_t1347148391 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualAxis_Remove_m969104513_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = VirtualAxis_get_name_m4062747206(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m2747492094(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
extern "C"  void VirtualAxis_Update_m3060599659 (VirtualAxis_t1347148391 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_Value_1(L_0);
		return;
	}
}
// System.Single UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
extern "C"  float VirtualAxis_get_GetValue_m3308232588 (VirtualAxis_t1347148391 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Value_1();
		return L_0;
	}
}
// System.Single UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValueRaw()
extern "C"  float VirtualAxis_get_GetValueRaw_m3438058670 (VirtualAxis_t1347148391 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Value_1();
		return L_0;
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
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
extern "C"  void VirtualButton__ctor_m2590712265 (VirtualButton_t3490362950 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		VirtualButton__ctor_m594979356(__this, L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
extern "C"  void VirtualButton__ctor_m594979356 (VirtualButton_t3490362950 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method)
{
	{
		__this->set_lastPressedFrame_1(((int32_t)-5));
		__this->set_releasedFrame_2(((int32_t)-5));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		VirtualButton_set_name_m3816690259(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___matchToInputSettings1;
		VirtualButton_set_matchWithInputManager_m100546256(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
extern "C"  String_t* VirtualButton_get_name_m3713304515 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
extern "C"  void VirtualButton_set_name_m3816690259 (VirtualButton_t3490362950 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
extern "C"  bool VirtualButton_get_matchWithInputManager_m2372617195 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
extern "C"  void VirtualButton_set_matchWithInputManager_m100546256 (VirtualButton_t3490362950 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
extern "C"  void VirtualButton_Pressed_m2534678636 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_pressed_3();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->set_pressed_3((bool)1);
		int32_t L_1 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lastPressedFrame_1(L_1);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
extern "C"  void VirtualButton_Released_m3958507687 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method)
{
	{
		__this->set_pressed_3((bool)0);
		int32_t L_0 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_releasedFrame_2(L_0);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Remove()
extern "C"  void VirtualButton_Remove_m189601859 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualButton_Remove_m189601859_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = VirtualButton_get_name_m3713304515(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualButton_m3381002917(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
extern "C"  bool VirtualButton_get_GetButton_m4028724520 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_pressed_3();
		return L_0;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
extern "C"  bool VirtualButton_get_GetButtonDown_m3232372385 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_lastPressedFrame_1();
		int32_t L_1 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
extern "C"  bool VirtualButton_get_GetButtonUp_m2683013087 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_releasedFrame_2();
		int32_t L_1 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
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
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
extern "C"  void MobileInput__ctor_m2132218003 (MobileInput_t3295884756 * __this, const RuntimeMethod* method)
{
	{
		VirtualInput__ctor_m1053376383(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
extern "C"  void MobileInput_AddButton_m1546634226 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_AddButton_m1546634226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		VirtualButton_t3490362950 * L_1 = (VirtualButton_t3490362950 *)il2cpp_codegen_object_new(VirtualButton_t3490362950_il2cpp_TypeInfo_var);
		VirtualButton__ctor_m2590712265(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualButton_m1038377797(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
extern "C"  void MobileInput_AddAxes_m882771614 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_AddAxes_m882771614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		VirtualAxis_t1347148391 * L_1 = (VirtualAxis_t1347148391 *)il2cpp_codegen_object_new(VirtualAxis_t1347148391_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m117427821(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m3729018904(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetAxis(System.String,System.Boolean)
extern "C"  float MobileInput_GetAxis_m2377156865 (MobileInput_t3295884756 * __this, String_t* ___name0, bool ___raw1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_GetAxis_m2377156865_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float G_B3_0 = 0.0f;
	{
		Dictionary_2_t1132404690 * L_0 = ((VirtualInput_t4247650776 *)__this)->get_virtualAxes_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m623971441(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m623971441_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		Dictionary_2_t1132404690 * L_3 = ((VirtualInput_t4247650776 *)__this)->get_virtualAxes_0();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualAxis_t1347148391 * L_5 = Dictionary_2_get_Item_m3767727970(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m3767727970_RuntimeMethod_var);
		NullCheck(L_5);
		float L_6 = VirtualAxis_get_GetValue_m3308232588(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
		goto IL_002c;
	}

IL_0027:
	{
		G_B3_0 = (0.0f);
	}

IL_002c:
	{
		return G_B3_0;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonDown(System.String)
extern "C"  void MobileInput_SetButtonDown_m549868324 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetButtonDown_m549868324_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3275619249 * L_0 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3713610116(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3713610116_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddButton_m1546634226(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t3275619249 * L_4 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualButton_t3490362950 * L_6 = Dictionary_2_get_Item_m670004451(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m670004451_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualButton_Pressed_m2534678636(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonUp(System.String)
extern "C"  void MobileInput_SetButtonUp_m2277393409 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetButtonUp_m2277393409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3275619249 * L_0 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualButton_t3490362950 * L_2 = Dictionary_2_get_Item_m670004451(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m670004451_RuntimeMethod_var);
		NullCheck(L_2);
		VirtualButton_Released_m3958507687(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisPositive(System.String)
extern "C"  void MobileInput_SetAxisPositive_m575333630 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetAxisPositive_m575333630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1132404690 * L_0 = ((VirtualInput_t4247650776 *)__this)->get_virtualAxes_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m623971441(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m623971441_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m882771614(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t1132404690 * L_4 = ((VirtualInput_t4247650776 *)__this)->get_virtualAxes_0();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t1347148391 * L_6 = Dictionary_2_get_Item_m3767727970(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m3767727970_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m3060599659(L_6, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisNegative(System.String)
extern "C"  void MobileInput_SetAxisNegative_m3582032963 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetAxisNegative_m3582032963_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1132404690 * L_0 = ((VirtualInput_t4247650776 *)__this)->get_virtualAxes_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m623971441(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m623971441_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m882771614(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t1132404690 * L_4 = ((VirtualInput_t4247650776 *)__this)->get_virtualAxes_0();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t1347148391 * L_6 = Dictionary_2_get_Item_m3767727970(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m3767727970_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m3060599659(L_6, (-1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisZero(System.String)
extern "C"  void MobileInput_SetAxisZero_m2564297357 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetAxisZero_m2564297357_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1132404690 * L_0 = ((VirtualInput_t4247650776 *)__this)->get_virtualAxes_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m623971441(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m623971441_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m882771614(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t1132404690 * L_4 = ((VirtualInput_t4247650776 *)__this)->get_virtualAxes_0();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t1347148391 * L_6 = Dictionary_2_get_Item_m3767727970(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m3767727970_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m3060599659(L_6, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxis(System.String,System.Single)
extern "C"  void MobileInput_SetAxis_m2576160133 (MobileInput_t3295884756 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetAxis_m2576160133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1132404690 * L_0 = ((VirtualInput_t4247650776 *)__this)->get_virtualAxes_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m623971441(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m623971441_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m882771614(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t1132404690 * L_4 = ((VirtualInput_t4247650776 *)__this)->get_virtualAxes_0();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t1347148391 * L_6 = Dictionary_2_get_Item_m3767727970(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m3767727970_RuntimeMethod_var);
		float L_7 = ___value1;
		NullCheck(L_6);
		VirtualAxis_Update_m3060599659(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonDown(System.String)
extern "C"  bool MobileInput_GetButtonDown_m2362171045 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_GetButtonDown_m2362171045_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3275619249 * L_0 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3713610116(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3713610116_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t3275619249 * L_3 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_t3490362950 * L_5 = Dictionary_2_get_Item_m670004451(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m670004451_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButtonDown_m3232372385(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___name0;
		MobileInput_AddButton_m1546634226(__this, L_7, /*hidden argument*/NULL);
		Dictionary_2_t3275619249 * L_8 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_t3490362950 * L_10 = Dictionary_2_get_Item_m670004451(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m670004451_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButtonDown_m3232372385(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonUp(System.String)
extern "C"  bool MobileInput_GetButtonUp_m540826956 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_GetButtonUp_m540826956_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3275619249 * L_0 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3713610116(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3713610116_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t3275619249 * L_3 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_t3490362950 * L_5 = Dictionary_2_get_Item_m670004451(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m670004451_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButtonUp_m2683013087(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___name0;
		MobileInput_AddButton_m1546634226(__this, L_7, /*hidden argument*/NULL);
		Dictionary_2_t3275619249 * L_8 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_t3490362950 * L_10 = Dictionary_2_get_Item_m670004451(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m670004451_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButtonUp_m2683013087(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButton(System.String)
extern "C"  bool MobileInput_GetButton_m367691380 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_GetButton_m367691380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3275619249 * L_0 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3713610116(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3713610116_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t3275619249 * L_3 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_t3490362950 * L_5 = Dictionary_2_get_Item_m670004451(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m670004451_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButton_m4028724520(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___name0;
		MobileInput_AddButton_m1546634226(__this, L_7, /*hidden argument*/NULL);
		Dictionary_2_t3275619249 * L_8 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_t3490362950 * L_10 = Dictionary_2_get_Item_m670004451(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m670004451_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButton_m4028724520(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Vector3 UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::MousePosition()
extern "C"  Vector3_t3722313464  MobileInput_MousePosition_m2392207564 (MobileInput_t3295884756 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = VirtualInput_get_virtualMousePosition_m3832540035(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
extern "C"  void StandaloneInput__ctor_m1552585626 (StandaloneInput_t1877793759 * __this, const RuntimeMethod* method)
{
	{
		VirtualInput__ctor_m1053376383(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetAxis(System.String,System.Boolean)
extern "C"  float StandaloneInput_GetAxis_m3751418588 (StandaloneInput_t1877793759 * __this, String_t* ___name0, bool ___raw1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_GetAxis_m3751418588_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float G_B3_0 = 0.0f;
	{
		bool L_0 = ___raw1;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_2 = Input_GetAxisRaw_m2316819917(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_0011:
	{
		String_t* L_3 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_4 = Input_GetAxis_m4009438427(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButton(System.String)
extern "C"  bool StandaloneInput_GetButton_m391408301 (StandaloneInput_t1877793759 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_GetButton_m391408301_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButton_m2064261504(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonDown(System.String)
extern "C"  bool StandaloneInput_GetButtonDown_m4175847824 (StandaloneInput_t1877793759 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_GetButtonDown_m4175847824_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButtonDown_m3074252807(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonUp(System.String)
extern "C"  bool StandaloneInput_GetButtonUp_m3007880528 (StandaloneInput_t1877793759 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_GetButtonUp_m3007880528_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButtonUp_m4007681079(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonDown(System.String)
extern "C"  void StandaloneInput_SetButtonDown_m1675172227 (StandaloneInput_t1877793759 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetButtonDown_m1675172227_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,StandaloneInput_SetButtonDown_m1675172227_RuntimeMethod_var);
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonUp(System.String)
extern "C"  void StandaloneInput_SetButtonUp_m999497337 (StandaloneInput_t1877793759 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetButtonUp_m999497337_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,StandaloneInput_SetButtonUp_m999497337_RuntimeMethod_var);
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisPositive(System.String)
extern "C"  void StandaloneInput_SetAxisPositive_m3167045619 (StandaloneInput_t1877793759 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetAxisPositive_m3167045619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,StandaloneInput_SetAxisPositive_m3167045619_RuntimeMethod_var);
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisNegative(System.String)
extern "C"  void StandaloneInput_SetAxisNegative_m20802039 (StandaloneInput_t1877793759 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetAxisNegative_m20802039_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,StandaloneInput_SetAxisNegative_m20802039_RuntimeMethod_var);
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisZero(System.String)
extern "C"  void StandaloneInput_SetAxisZero_m2388999529 (StandaloneInput_t1877793759 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetAxisZero_m2388999529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,StandaloneInput_SetAxisZero_m2388999529_RuntimeMethod_var);
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxis(System.String,System.Single)
extern "C"  void StandaloneInput_SetAxis_m1137062756 (StandaloneInput_t1877793759 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetAxis_m1137062756_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,StandaloneInput_SetAxis_m1137062756_RuntimeMethod_var);
	}
}
// UnityEngine.Vector3 UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::MousePosition()
extern "C"  Vector3_t3722313464  StandaloneInput_MousePosition_m3640947727 (StandaloneInput_t1877793759 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_MousePosition_m3640947727_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
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
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::.ctor()
extern "C"  void VirtualInput__ctor_m1053376383 (VirtualInput_t4247650776 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput__ctor_m1053376383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1132404690 * L_0 = (Dictionary_2_t1132404690 *)il2cpp_codegen_object_new(Dictionary_2_t1132404690_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1598708476(L_0, /*hidden argument*/Dictionary_2__ctor_m1598708476_RuntimeMethod_var);
		__this->set_virtualAxes_0(L_0);
		Dictionary_2_t3275619249 * L_1 = (Dictionary_2_t3275619249 *)il2cpp_codegen_object_new(Dictionary_2_t3275619249_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2884814283(L_1, /*hidden argument*/Dictionary_2__ctor_m2884814283_RuntimeMethod_var);
		__this->set_virtualButtons_1(L_1);
		List_1_t3319525431 * L_2 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_2, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_alwaysUseVirtual_2(L_2);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnitySampleAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
extern "C"  Vector3_t3722313464  VirtualInput_get_virtualMousePosition_m3832540035 (VirtualInput_t4247650776 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = __this->get_U3CvirtualMousePositionU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
extern "C"  void VirtualInput_set_virtualMousePosition_m2247952941 (VirtualInput_t4247650776 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = ___value0;
		__this->set_U3CvirtualMousePositionU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C"  void VirtualInput_RegisterVirtualAxis_m4061627445 (VirtualInput_t4247650776 * __this, VirtualAxis_t1347148391 * ___axis0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_RegisterVirtualAxis_m4061627445_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1132404690 * L_0 = __this->get_virtualAxes_0();
		VirtualAxis_t1347148391 * L_1 = ___axis0;
		NullCheck(L_1);
		String_t* L_2 = VirtualAxis_get_name_m4062747206(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = Dictionary_2_ContainsKey_m623971441(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m623971441_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		VirtualAxis_t1347148391 * L_4 = ___axis0;
		NullCheck(L_4);
		String_t* L_5 = VirtualAxis_get_name_m4062747206(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral1316003440, L_5, _stringLiteral499939329, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_0063;
	}

IL_0035:
	{
		Dictionary_2_t1132404690 * L_7 = __this->get_virtualAxes_0();
		VirtualAxis_t1347148391 * L_8 = ___axis0;
		NullCheck(L_8);
		String_t* L_9 = VirtualAxis_get_name_m4062747206(L_8, /*hidden argument*/NULL);
		VirtualAxis_t1347148391 * L_10 = ___axis0;
		NullCheck(L_7);
		Dictionary_2_Add_m1208951171(L_7, L_9, L_10, /*hidden argument*/Dictionary_2_Add_m1208951171_RuntimeMethod_var);
		VirtualAxis_t1347148391 * L_11 = ___axis0;
		NullCheck(L_11);
		bool L_12 = VirtualAxis_get_matchWithInputManager_m2401220563(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0063;
		}
	}
	{
		List_1_t3319525431 * L_13 = __this->get_alwaysUseVirtual_2();
		VirtualAxis_t1347148391 * L_14 = ___axis0;
		NullCheck(L_14);
		String_t* L_15 = VirtualAxis_get_name_m4062747206(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_m1685793073(L_13, L_15, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
	}

IL_0063:
	{
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C"  void VirtualInput_RegisterVirtualButton_m539054427 (VirtualInput_t4247650776 * __this, VirtualButton_t3490362950 * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_RegisterVirtualButton_m539054427_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3275619249 * L_0 = __this->get_virtualButtons_1();
		VirtualButton_t3490362950 * L_1 = ___button0;
		NullCheck(L_1);
		String_t* L_2 = VirtualButton_get_name_m3713304515(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = Dictionary_2_ContainsKey_m3713610116(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m3713610116_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		VirtualButton_t3490362950 * L_4 = ___button0;
		NullCheck(L_4);
		String_t* L_5 = VirtualButton_get_name_m3713304515(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral341380797, L_5, _stringLiteral499939329, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_0063;
	}

IL_0035:
	{
		Dictionary_2_t3275619249 * L_7 = __this->get_virtualButtons_1();
		VirtualButton_t3490362950 * L_8 = ___button0;
		NullCheck(L_8);
		String_t* L_9 = VirtualButton_get_name_m3713304515(L_8, /*hidden argument*/NULL);
		VirtualButton_t3490362950 * L_10 = ___button0;
		NullCheck(L_7);
		Dictionary_2_Add_m943624655(L_7, L_9, L_10, /*hidden argument*/Dictionary_2_Add_m943624655_RuntimeMethod_var);
		VirtualButton_t3490362950 * L_11 = ___button0;
		NullCheck(L_11);
		bool L_12 = VirtualButton_get_matchWithInputManager_m2372617195(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0063;
		}
	}
	{
		List_1_t3319525431 * L_13 = __this->get_alwaysUseVirtual_2();
		VirtualButton_t3490362950 * L_14 = ___button0;
		NullCheck(L_14);
		String_t* L_15 = VirtualButton_get_name_m3713304515(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_m1685793073(L_13, L_15, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
	}

IL_0063:
	{
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
extern "C"  void VirtualInput_UnRegisterVirtualAxis_m2615886023 (VirtualInput_t4247650776 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_UnRegisterVirtualAxis_m2615886023_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1132404690 * L_0 = __this->get_virtualAxes_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m623971441(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m623971441_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t1132404690 * L_3 = __this->get_virtualAxes_0();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		Dictionary_2_Remove_m913603837(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m913603837_RuntimeMethod_var);
	}

IL_001e:
	{
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
extern "C"  void VirtualInput_UnRegisterVirtualButton_m1331827656 (VirtualInput_t4247650776 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_UnRegisterVirtualButton_m1331827656_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3275619249 * L_0 = __this->get_virtualButtons_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3713610116(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3713610116_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t3275619249 * L_3 = __this->get_virtualButtons_1();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		Dictionary_2_Remove_m3912794030(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m3912794030_RuntimeMethod_var);
	}

IL_001e:
	{
		return;
	}
}
// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnitySampleAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
extern "C"  VirtualAxis_t1347148391 * VirtualInput_VirtualAxisReference_m265738861 (VirtualInput_t4247650776 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_VirtualAxisReference_m265738861_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VirtualAxis_t1347148391 * G_B3_0 = NULL;
	{
		Dictionary_2_t1132404690 * L_0 = __this->get_virtualAxes_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m623971441(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m623971441_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Dictionary_2_t1132404690 * L_3 = __this->get_virtualAxes_0();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualAxis_t1347148391 * L_5 = Dictionary_2_get_Item_m3767727970(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m3767727970_RuntimeMethod_var);
		G_B3_0 = L_5;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = ((VirtualAxis_t1347148391 *)(NULL));
	}

IL_0023:
	{
		return G_B3_0;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionX_m1317694797 (VirtualInput_t4247650776 * __this, float ___f0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		float L_0 = ___f0;
		Vector3_t3722313464  L_1 = VirtualInput_get_virtualMousePosition_m3832540035(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_y_2();
		Vector3_t3722313464  L_3 = VirtualInput_get_virtualMousePosition_m3832540035(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = (&V_1)->get_z_3();
		Vector3_t3722313464  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m3353183577((&L_5), L_0, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m2247952941(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionY_m1463317316 (VirtualInput_t4247650776 * __this, float ___f0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector3_t3722313464  L_0 = VirtualInput_get_virtualMousePosition_m3832540035(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = (&V_0)->get_x_1();
		float L_2 = ___f0;
		Vector3_t3722313464  L_3 = VirtualInput_get_virtualMousePosition_m3832540035(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = (&V_1)->get_z_3();
		Vector3_t3722313464  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m3353183577((&L_5), L_1, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m2247952941(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionZ_m337793731 (VirtualInput_t4247650776 * __this, float ___f0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector3_t3722313464  L_0 = VirtualInput_get_virtualMousePosition_m3832540035(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = (&V_0)->get_x_1();
		Vector3_t3722313464  L_2 = VirtualInput_get_virtualMousePosition_m3832540035(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_y_2();
		float L_4 = ___f0;
		Vector3_t3722313464  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m3353183577((&L_5), L_1, L_3, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m2247952941(__this, L_5, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::.ctor()
extern "C"  void MobileControlRig__ctor_m1291720279 (MobileControlRig_t1964600252 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::OnEnable()
extern "C"  void MobileControlRig_OnEnable_m3707707505 (MobileControlRig_t1964600252 * __this, const RuntimeMethod* method)
{
	{
		MobileControlRig_CheckEnableControlRig_m2145489761(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
extern "C"  void MobileControlRig_CheckEnableControlRig_m2145489761 (MobileControlRig_t1964600252 * __this, const RuntimeMethod* method)
{
	{
		MobileControlRig_EnableControlRig_m2658193441(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
extern "C"  void MobileControlRig_EnableControlRig_m2658193441 (MobileControlRig_t1964600252 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileControlRig_EnableControlRig_m2658193441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = Transform_GetEnumerator_m2717073726(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0029;
		}

IL_0011:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck(L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t3600365921 *)CastclassClass((RuntimeObject*)L_3, Transform_t3600365921_il2cpp_TypeInfo_var));
			Transform_t3600365921 * L_4 = V_0;
			NullCheck(L_4);
			GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
			bool L_6 = ___enabled0;
			NullCheck(L_5);
			GameObject_SetActive_m796801857(L_5, L_6, /*hidden argument*/NULL);
		}

IL_0029:
		{
			RuntimeObject* L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0011;
			}
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_1;
			RuntimeObject* L_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_2 = L_10;
			if (!L_10)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_11);
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(57)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
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
// System.Void VolumeHandler::.ctor()
extern "C"  void VolumeHandler__ctor_m1711914545 (VolumeHandler_t704224452 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VolumeHandler::Start()
extern "C"  void VolumeHandler_Start_m1555305517 (VolumeHandler_t704224452 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VolumeHandler_Start_m1555305517_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1151771902, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		GameObject_t1113636619 * L_2 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1151771902, /*hidden argument*/NULL);
		NullCheck(L_2);
		Slider_t3903728902 * L_3 = GameObject_GetComponent_TisSlider_t3903728902_m865256018(L_2, /*hidden argument*/GameObject_GetComponent_TisSlider_t3903728902_m865256018_RuntimeMethod_var);
		NullCheck(L_3);
		SliderEvent_t3180273144 * L_4 = Slider_get_onValueChanged_m2907593587(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = (intptr_t)VolumeHandler_SetVolume_m1972732037_RuntimeMethod_var;
		UnityAction_1_t1982102915 * L_6 = (UnityAction_1_t1982102915 *)il2cpp_codegen_object_new(UnityAction_1_t1982102915_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m336053009(L_6, __this, L_5, /*hidden argument*/UnityAction_1__ctor_m336053009_RuntimeMethod_var);
		NullCheck(L_4);
		UnityEvent_1_AddListener_m3008008915(L_4, L_6, /*hidden argument*/UnityEvent_1_AddListener_m3008008915_RuntimeMethod_var);
	}

IL_0039:
	{
		return;
	}
}
// System.Void VolumeHandler::SetVolume(System.Single)
extern "C"  void VolumeHandler_SetVolume_m1972732037 (VolumeHandler_t704224452 * __this, float ___volume0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VolumeHandler_SetVolume_m1972732037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t3935305588 * L_0 = Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var);
		float L_1 = ___volume0;
		NullCheck(L_0);
		AudioSource_set_volume_m1273312851(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VolumeHandler::OnDestroy()
extern "C"  void VolumeHandler_OnDestroy_m3857069918 (VolumeHandler_t704224452 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VolumeHandler_OnDestroy_m3857069918_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1151771902, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		GameObject_t1113636619 * L_2 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1151771902, /*hidden argument*/NULL);
		NullCheck(L_2);
		Slider_t3903728902 * L_3 = GameObject_GetComponent_TisSlider_t3903728902_m865256018(L_2, /*hidden argument*/GameObject_GetComponent_TisSlider_t3903728902_m865256018_RuntimeMethod_var);
		NullCheck(L_3);
		SliderEvent_t3180273144 * L_4 = Slider_get_onValueChanged_m2907593587(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = (intptr_t)VolumeHandler_SetVolume_m1972732037_RuntimeMethod_var;
		UnityAction_1_t1982102915 * L_6 = (UnityAction_1_t1982102915 *)il2cpp_codegen_object_new(UnityAction_1_t1982102915_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m336053009(L_6, __this, L_5, /*hidden argument*/UnityAction_1__ctor_m336053009_RuntimeMethod_var);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_m4190968495(L_4, L_6, /*hidden argument*/UnityEvent_1_RemoveListener_m4190968495_RuntimeMethod_var);
	}

IL_0039:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
