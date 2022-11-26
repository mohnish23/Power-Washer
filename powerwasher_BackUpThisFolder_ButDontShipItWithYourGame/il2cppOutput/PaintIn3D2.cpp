﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
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

// System.Action`1<Unity.Collections.NativeArray`1<UnityEngine.Color32>>
struct Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<PaintIn3D.P3dCommand>
struct Action_1_t197D90233CFD0A751641723D06DE23097E99A46D;
// System.Collections.Generic.HashSet`1<PaintIn3D.P3dPaintableTexture>
struct HashSet_1_t704CC4569C195936CC31725B4F24ED5D539B50A3;
// System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChangeCounter>
struct ICollection_1_tA42F5F1C6E11D10199CD0F25BF832C191C990E38;
// System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChannelCounter>
struct ICollection_1_t7FE0B2E13EA147FB2712C71A30E1C3DDA65291EB;
// System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dColorCounter>
struct ICollection_1_t2AE3128955ECBBA2598859AECD499805A92414BC;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C;
// System.Collections.Generic.LinkedListNode`1<PaintIn3D.Examples.P3dChangeCounter>
struct LinkedListNode_1_t5B79FCCCB747EA1C7D52F3CF711154C956DBFE6D;
// System.Collections.Generic.LinkedListNode`1<PaintIn3D.Examples.P3dChannelCounter>
struct LinkedListNode_1_t0D2393CE1A0C911186F3C49481250667FFAAF2E3;
// System.Collections.Generic.LinkedListNode`1<PaintIn3D.Examples.P3dColorCounter>
struct LinkedListNode_1_t150D7EC2BBDC599E0A03AC76F023431B7944B1E6;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76;
// System.Collections.Generic.LinkedList`1<PaintIn3D.Examples.P3dChangeCounter>
struct LinkedList_1_tD84633A6C61B300EF3932D5FF9149A5EEC0242FA;
// System.Collections.Generic.LinkedList`1<PaintIn3D.Examples.P3dChannelCounter>
struct LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA;
// System.Collections.Generic.LinkedList`1<PaintIn3D.Examples.P3dColorCounter>
struct LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<PaintIn3D.P3dCommand>
struct List_1_t54F090708FD8BBE1351164EA9B8A477AB71181B2;
// System.Collections.Generic.List`1<PaintIn3D.P3dMaterialCloner>
struct List_1_t0E9725291C3531AE7B3F48A164E76D9381DEA743;
// System.Collections.Generic.List`1<PaintIn3D.P3dModel>
struct List_1_tAC4011F8E14CCFF35F20EBAF7202AE73E16CC115;
// System.Collections.Generic.List`1<PaintIn3D.P3dPaintableState>
struct List_1_t74E0BEBF8CFBD266D746B900F6528A3B72B3168E;
// System.Collections.Generic.List`1<PaintIn3D.P3dPaintableTexture>
struct List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7;
// System.Collections.Generic.List`1<PaintIn3D.Examples.P3dVrTool>
struct List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1;
// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93;
// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87;
// System.Collections.Generic.List`1<PaintIn3D.Examples.P3dColor/Contribution>
struct List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB;
// System.Collections.Generic.List`1<PaintIn3D.Examples.P3dColorCounter/Contribution>
struct List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA;
// PaintIn3D.P3dLinkedBehaviour`1<System.Object>
struct P3dLinkedBehaviour_1_t18ABCA12ED659A36567E803135359D84D43246C3;
// PaintIn3D.P3dLinkedBehaviour`1<PaintIn3D.Examples.P3dColor>
struct P3dLinkedBehaviour_1_tA79BAA47E81203531E02EB6482C4E9B7C6CFAA53;
// PaintIn3D.P3dLinkedBehaviour`1<PaintIn3D.Examples.P3dVrManager>
struct P3dLinkedBehaviour_1_t41C6940491B78B53C39BDFBD3422B9DB38C1B494;
// PaintIn3D.P3dLinkedBehaviour`1<PaintIn3D.Examples.P3dVrTool>
struct P3dLinkedBehaviour_1_t43E8A9923C9A5DC25CE1A7AD8F3E18D7A4D51B33;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.Stack`1<PaintIn3D.P3dCommandFill>
struct Stack_1_tA1F624B1E4D038F4D85940BF71FA5CE058DF58BB;
// System.Collections.Generic.Stack`1<PaintIn3D.Examples.P3dColorCounter/Contribution>
struct Stack_1_t561497B98B40FBF796C24CE6E484D4571592E83B;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// PaintIn3D.IHitLine[]
struct IHitLineU5BU5D_t3A5AA56274ED58F155D9F459EE0E09B847263B91;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// PaintIn3D.Examples.P3dVrTool[]
struct P3dVrToolU5BU5D_t2E03002A3DA7A8E699257936CAB9097FD89336AB;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.XRNodeState[]
struct XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845;
// PaintIn3D.Examples.P3dColor/Contribution[]
struct ContributionU5BU5D_tA2C4028CF72058FAA8398F3F62BA216BA3F3B05E;
// PaintIn3D.Examples.P3dColorCounter/Contribution[]
struct ContributionU5BU5D_t34C73AAAF0FFFC22D6F53D86C2919F7BC302DBC1;
// PaintIn3D.Examples.P3dVrManager/SimulatedState[]
struct SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// PaintIn3D.IHitLine
struct IHitLine_tDB6FE4E05C06DC1DA90E8CBD17E3B85D4BCA00E6;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PaintIn3D.Examples.P3dChangeCounter
struct P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD;
// PaintIn3D.Examples.P3dChannelCounter
struct P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E;
// PaintIn3D.Examples.P3dColor
struct P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682;
// PaintIn3D.Examples.P3dColorCounter
struct P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64;
// PaintIn3D.P3dCommand
struct P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D;
// PaintIn3D.P3dCommandFill
struct P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B;
// PaintIn3D.Examples.P3dGraduallyFade
struct P3dGraduallyFade_t2027A523C7CF2CBD737C7E3E10047FDA82317EAB;
// PaintIn3D.P3dMaterialCloner
struct P3dMaterialCloner_tBF64157DF290AB5A6EABBAE00D440FC78C639876;
// PaintIn3D.P3dModel
struct P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45;
// PaintIn3D.Examples.P3dPaintMultiplayer
struct P3dPaintMultiplayer_t290BA03D064ECACE9D05810C27A01EE24A434E46;
// PaintIn3D.P3dPaintable
struct P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00;
// PaintIn3D.P3dPaintableTexture
struct P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63;
// PaintIn3D.P3dPaintableTextureMonitor
struct P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078;
// PaintIn3D.P3dPaintableTextureMonitorMask
struct P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57;
// PaintIn3D.Examples.P3dProceduralSetup
struct P3dProceduralSetup_t904E8060654D0776D005B775B00C06B430ED9A2A;
// PaintIn3D.P3dReadColor
struct P3dReadColor_tA9EB11219665FC16322C180818DDDB09606D0581;
// PaintIn3D.Examples.P3dReadColorEvent
struct P3dReadColorEvent_tFD6B133BD45667E22AE8B1BFCA79DAE5C2413018;
// PaintIn3D.P3dReader
struct P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7;
// PaintIn3D.Examples.P3dRotate
struct P3dRotate_t82A87FB3C78B3AA94251CA239B1B96DE976594DF;
// PaintIn3D.Examples.P3dToggleScript
struct P3dToggleScript_t9A721E1AC018BBFA21D8F1E3B7246E2CD3BCC5CE;
// PaintIn3D.Examples.P3dTranslate
struct P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091;
// PaintIn3D.Examples.P3dUpgradeEventSystem
struct P3dUpgradeEventSystem_t25DD677E23BD83CEFE670EE5D2310FF5B3E57A2D;
// PaintIn3D.Examples.P3dVrManager
struct P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1;
// PaintIn3D.Examples.P3dVrTool
struct P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// PaintIn3D.Examples.P3dColor/Contribution
struct Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859;
// PaintIn3D.Examples.P3dColorCounter/Contribution
struct Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3;
// PaintIn3D.Examples.P3dPaintMultiplayer/<SimulateNetworkTransmission>d__7
struct U3CSimulateNetworkTransmissionU3Ed__7_tC1A1B5CE4A1DFA256FE3AC757E01216424E4BA9D;
// PaintIn3D.P3dReadColor/ColorEvent
struct ColorEvent_t871C324F6981EB1A0CDE0FC4F559E313017CA4C9;
// PaintIn3D.Examples.P3dReadColorEvent/ColorEvent
struct ColorEvent_tA8C1E814C5CD8FFA0BC95C19D8254FAF51771F06;
// PaintIn3D.Examples.P3dVrManager/SimulatedState
struct SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorEvent_tA8C1E814C5CD8FFA0BC95C19D8254FAF51771F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t7FE0B2E13EA147FB2712C71A30E1C3DDA65291EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t90EDCA196EA9459E6B9BE7F18679EBCAE49FA41D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t9ABDFCC9DB6E4CF901414DD82C7F2BE46CB04C20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tE52964CE0554F1CBA03F6CE2573F66EA1F1EEEB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t0A0ADA3816C555969131A42F00019C721A053834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t0ADBCF3ED0EAA15CAB1C07BCF4664119278E81CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tB8BAB34C8C07A812A775204B1C3256020D334530_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHitLine_tDB6FE4E05C06DC1DA90E8CBD17E3B85D4BCA00E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinkedList_1_tD84633A6C61B300EF3932D5FF9149A5EEC0242FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dInputManager_t1BD83FB878655C53FC056C82B91EF07A56041B66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dLinkedBehaviour_1_t43E8A9923C9A5DC25CE1A7AD8F3E18D7A4D51B33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dLinkedBehaviour_1_tA79BAA47E81203531E02EB6482C4E9B7C6CFAA53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t561497B98B40FBF796C24CE6E484D4571592E83B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF2EA118D0E8276A0B92A18EF96F6167BD01AC673____4F3A974D03B4939FC26A965844D8E5F89E151FF80F59BB8AF511CC703F5DA157_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisP3dReadColor_tA9EB11219665FC16322C180818DDDB09606D0581_m5372876342A8851328870A4BF6D654CD91AE541F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisIHitLine_tDB6FE4E05C06DC1DA90E8CBD17E3B85D4BCA00E6_m08B6EE60601E9B3614775F6AFB10D93D078BEB38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m45953E5026A133C608DD6B470298999D2733B392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m697882349E9DB0FCCBE74B89FC86AA51239220BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m95D57BD0EA974806357341F6956D1B52FB6831DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB93B0712585F8573C53A581CBF764ABE0D9DD909_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m092580E213DE07B370B5BE79ED8FDB42DCA7454B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m554D09004F3CA1F349AC0B84F21996392C777B32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9EDB7C34843601BAA509CFAEFB06CB2A0B99233B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF56BF766027F43574DF0E532AD03DED513838FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4BCC017ACDA5A93A8D4D361E143865E43FBEA79D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6A89916786518783D43F3BE06C36E8362E24EF58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6D725B7323D511F39A1802B03A1B7A16DC79EE99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD0D94B293CBE7F1F394B0682AF603A72FBED7B53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFE0E36B3C1670C308B04C39EDC76838DD59826B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisP3dMaterialCloner_tBF64157DF290AB5A6EABBAE00D440FC78C639876_m1C559E953C8656119575406791F7CD597D9E9515_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisP3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_m7358A5B037798E91FE1AEC0B42019364A1EBCFE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisP3dPaintable_tC5471B5C328513F1757B292031417E5287321A00_m9DB613DF40EECDEF695F50F8FA3621554FB2CC2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_AddLast_m31E656F9095D940FCCAA2C8506DC24885E021FFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_AddLast_m3EC9FB56C5415A29F07C6656619A965F3BE00594_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_AddLast_m5617E0987CE960D429D991AADA76C157DCFFC353_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_GetEnumerator_m6EB4411FED5D2BE86657BE68FE82ED02989A3B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_Remove_m7EF8F0A9DA4A1166B8EF0407725FE4CC6A1664A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_Remove_mCCB091CAE0D60E8AB4ABCB477634CD0FA804239B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_Remove_mE751796C8AFDA7F9E6B97863D3FADBC42A70287D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1__ctor_m575C749969EAD92F3047285669A5D2861BE9A10F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1__ctor_mC24F6AB494DD48362F3D146746DE37D35F206A47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1__ctor_mE1AAA66844BBC60CF5B2D4445D10759918B387EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_get_Count_m83CE6174B7B2D9E6B8734BFD3125E5EA488399B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1E59F78CFDF5019F6670699DD7ED77EB2943D58D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m24AED0BC3D6ACBB4811D869AFB547824F547583E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE69ACAD75069F79230063722F7CF396B587FA82F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m1208F9A66BD7DED4A7CEA0E2801BD82C7DB13940_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m504FE2693AD44B2C1534D2115FC812D866B07E13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m925BDD019B208B30EAB57A2B10E7363B08D60F8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mAB912A9967665778045CEE77BD387D9184C2D1A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mDD6C7A15BFD041A63D02FA44D4E3CB3834F0FC81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m73FAA9A8CCADBF277F87A58E1F9386957FECB512_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m595B6DF07BD1855CAEB99489B41790667EEBF02D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mCF9510FBCAD8C28F64666D97CA5CE55E63385554_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5E194B4E9EF4BB8E21979CCA019DAEF398342C8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6ACE03F2B723C1C5BDE884B6D4229B6C9F922A63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBF165C67CA84AC2699F3C5229BC7D02124BEC170_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD8E218B8766DD801CC5B221926CE287ADBE84E32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1094FA3C98391B17EF9FFA8222124EB833B45C19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mACED5451FC866AA52F9E691E84A895EE9414599C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD30F985D04E6229E20D18BAF321F82684852D354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4368DEC3632E4A9599E17B77628DA6A358E57158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB96AB04FCA460A0138AFC57037063FF9157F7668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDF8E9334A6499AE276A37CC149ADABA010CA6A2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Copy_m7B89E95C500C16215128F9704F441235D18C2C75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m91FFC8B88A790FFBEB65362E2925F5C675B1A9C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m758EC83047117608085E10546B2054D8300A607A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m8C851A2AEB6FF855EA6F3E0AC37DB90F7AD14AC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* P3dChangeCounter_HandleCompleteChange_mB8F3CA641A6DDD7BA0937FABCAF307F8AB68C25C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* P3dLinkedBehaviour_1__ctor_m040F17E1E5975213DB081BAB69319A0EE575C4A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* P3dLinkedBehaviour_1__ctor_mD9317E9DAA7B49C73AF2595D43B70C94ECB61C1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* P3dLinkedBehaviour_1__ctor_mDBB8BA0951D2471E661C7A0A2DBAC9F988BC1299_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* P3dReadColorEvent_HandleColor_m71243E4CF7AF3B36453D173460ECF2A2D267AC6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* P3dReader_NeedsUpdating_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m76E0CA4BACFC6BCDFE18411F3269A1CDF5C0C8EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m2995CFBCEA086B1C5EF111779A909583F2883634_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mFDEFCB3C5644D98E0199DCE420A6BC612146320A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mA052B786CB7E9A6421750103DC69F34096E92EA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m57B32B18715A0DE1D649067DB37209E61B748A07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSimulateNetworkTransmissionU3Ed__7_System_Collections_IEnumerator_Reset_mCFDD31E7B107D3C0B4AC8D0D8AF9D3EEA0C8DD93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mD935AA7032F987581BD350C04192FBE8C25DD4EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_mFDBCDCDF71B4A7800D9FA8B2E9815B8B08D5C302_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IHitLineU5BU5D_t3A5AA56274ED58F155D9F459EE0E09B847263B91;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.LinkedListNode`1<PaintIn3D.Examples.P3dChangeCounter>
struct LinkedListNode_1_t5B79FCCCB747EA1C7D52F3CF711154C956DBFE6D  : public RuntimeObject
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1::list
	LinkedList_1_tD84633A6C61B300EF3932D5FF9149A5EEC0242FA* ___list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::next
	LinkedListNode_1_t5B79FCCCB747EA1C7D52F3CF711154C956DBFE6D* ___next_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::prev
	LinkedListNode_1_t5B79FCCCB747EA1C7D52F3CF711154C956DBFE6D* ___prev_2;
	// T System.Collections.Generic.LinkedListNode`1::item
	P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* ___item_3;
};

// System.Collections.Generic.LinkedListNode`1<PaintIn3D.Examples.P3dChannelCounter>
struct LinkedListNode_1_t0D2393CE1A0C911186F3C49481250667FFAAF2E3  : public RuntimeObject
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1::list
	LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA* ___list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::next
	LinkedListNode_1_t0D2393CE1A0C911186F3C49481250667FFAAF2E3* ___next_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::prev
	LinkedListNode_1_t0D2393CE1A0C911186F3C49481250667FFAAF2E3* ___prev_2;
	// T System.Collections.Generic.LinkedListNode`1::item
	P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* ___item_3;
};

// System.Collections.Generic.LinkedListNode`1<PaintIn3D.Examples.P3dColorCounter>
struct LinkedListNode_1_t150D7EC2BBDC599E0A03AC76F023431B7944B1E6  : public RuntimeObject
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1::list
	LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3* ___list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::next
	LinkedListNode_1_t150D7EC2BBDC599E0A03AC76F023431B7944B1E6* ___next_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::prev
	LinkedListNode_1_t150D7EC2BBDC599E0A03AC76F023431B7944B1E6* ___prev_2;
	// T System.Collections.Generic.LinkedListNode`1::item
	P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* ___item_3;
};

// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76  : public RuntimeObject
{
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::head
	LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* ___head_0;
	// System.Int32 System.Collections.Generic.LinkedList`1::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Generic.LinkedList`1::version
	int32_t ___version_2;
	// System.Object System.Collections.Generic.LinkedList`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_4;
};

// System.Collections.Generic.LinkedList`1<PaintIn3D.Examples.P3dChangeCounter>
struct LinkedList_1_tD84633A6C61B300EF3932D5FF9149A5EEC0242FA  : public RuntimeObject
{
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::head
	LinkedListNode_1_t5B79FCCCB747EA1C7D52F3CF711154C956DBFE6D* ___head_0;
	// System.Int32 System.Collections.Generic.LinkedList`1::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Generic.LinkedList`1::version
	int32_t ___version_2;
	// System.Object System.Collections.Generic.LinkedList`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_4;
};

// System.Collections.Generic.LinkedList`1<PaintIn3D.Examples.P3dChannelCounter>
struct LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA  : public RuntimeObject
{
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::head
	LinkedListNode_1_t0D2393CE1A0C911186F3C49481250667FFAAF2E3* ___head_0;
	// System.Int32 System.Collections.Generic.LinkedList`1::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Generic.LinkedList`1::version
	int32_t ___version_2;
	// System.Object System.Collections.Generic.LinkedList`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_4;
};

// System.Collections.Generic.LinkedList`1<PaintIn3D.Examples.P3dColorCounter>
struct LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3  : public RuntimeObject
{
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::head
	LinkedListNode_1_t150D7EC2BBDC599E0A03AC76F023431B7944B1E6* ___head_0;
	// System.Int32 System.Collections.Generic.LinkedList`1::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Generic.LinkedList`1::version
	int32_t ___version_2;
	// System.Object System.Collections.Generic.LinkedList`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<PaintIn3D.Examples.P3dVrTool>
struct List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	P3dVrToolU5BU5D_t2E03002A3DA7A8E699257936CAB9097FD89336AB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	P3dVrToolU5BU5D_t2E03002A3DA7A8E699257936CAB9097FD89336AB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<PaintIn3D.Examples.P3dColor/Contribution>
struct List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ContributionU5BU5D_tA2C4028CF72058FAA8398F3F62BA216BA3F3B05E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ContributionU5BU5D_tA2C4028CF72058FAA8398F3F62BA216BA3F3B05E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<PaintIn3D.Examples.P3dColorCounter/Contribution>
struct List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ContributionU5BU5D_t34C73AAAF0FFFC22D6F53D86C2919F7BC302DBC1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ContributionU5BU5D_t34C73AAAF0FFFC22D6F53D86C2919F7BC302DBC1* ___s_emptyArray_5;
};

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<PaintIn3D.Examples.P3dColorCounter/Contribution>
struct Stack_1_t561497B98B40FBF796C24CE6E484D4571592E83B  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ContributionU5BU5D_t34C73AAAF0FFFC22D6F53D86C2919F7BC302DBC1* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// PaintIn3D.Examples.P3dColor/Contribution
struct Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859  : public RuntimeObject
{
	// PaintIn3D.Examples.P3dColorCounter PaintIn3D.Examples.P3dColor/Contribution::Counter
	P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* ___Counter_0;
	// System.Int32 PaintIn3D.Examples.P3dColor/Contribution::Solid
	int32_t ___Solid_1;
};

// PaintIn3D.Examples.P3dColorCounter/Contribution
struct Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3  : public RuntimeObject
{
	// PaintIn3D.Examples.P3dColor PaintIn3D.Examples.P3dColorCounter/Contribution::Color
	P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* ___Color_0;
	// System.Int32 PaintIn3D.Examples.P3dColorCounter/Contribution::Count
	int32_t ___Count_1;
	// System.Single PaintIn3D.Examples.P3dColorCounter/Contribution::Ratio
	float ___Ratio_2;
	// System.Byte PaintIn3D.Examples.P3dColorCounter/Contribution::R
	uint8_t ___R_3;
	// System.Byte PaintIn3D.Examples.P3dColorCounter/Contribution::G
	uint8_t ___G_4;
	// System.Byte PaintIn3D.Examples.P3dColorCounter/Contribution::B
	uint8_t ___B_5;
	// System.Byte PaintIn3D.Examples.P3dColorCounter/Contribution::A
	uint8_t ___A_6;
};

struct Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_StaticFields
{
	// System.Collections.Generic.Stack`1<PaintIn3D.Examples.P3dColorCounter/Contribution> PaintIn3D.Examples.P3dColorCounter/Contribution::Pool
	Stack_1_t561497B98B40FBF796C24CE6E484D4571592E83B* ___Pool_7;
};

// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
struct Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22 
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedList`1/Enumerator::_list
	LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* ____list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1/Enumerator::_node
	LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* ____node_1;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.LinkedList`1/Enumerator::_current
	RuntimeObject* ____current_3;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::_index
	int32_t ____index_4;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.LinkedList`1/Enumerator<PaintIn3D.Examples.P3dColorCounter>
struct Enumerator_t4966FBC08A6D138E206D01C5CACE30F3DC6CAFF4 
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedList`1/Enumerator::_list
	LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3* ____list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1/Enumerator::_node
	LinkedListNode_1_t150D7EC2BBDC599E0A03AC76F023431B7944B1E6* ____node_1;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.LinkedList`1/Enumerator::_current
	P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* ____current_3;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::_index
	int32_t ____index_4;
};

// System.Collections.Generic.List`1/Enumerator<PaintIn3D.Examples.P3dVrTool>
struct Enumerator_tE5C8ECB968E9E68FC33D08F3411678FC8E49F335 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<PaintIn3D.Examples.P3dColorCounter/Contribution>
struct Enumerator_t851FBDBED59037AF58113A5E0FD2D28F34041AAC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* ____current_3;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Color32>
struct NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// PaintIn3D.P3dGroup
struct P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D 
{
	// System.Int32 PaintIn3D.P3dGroup::index
	int32_t ___index_0;
};

// PaintIn3D.P3dSlot
struct P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C 
{
	// System.Int32 PaintIn3D.P3dSlot::Index
	int32_t ___Index_0;
	// System.String PaintIn3D.P3dSlot::Name
	String_t* ___Name_1;
};
// Native definition for P/Invoke marshalling of PaintIn3D.P3dSlot
struct P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C_marshaled_pinvoke
{
	int32_t ___Index_0;
	char* ___Name_1;
};
// Native definition for COM marshalling of PaintIn3D.P3dSlot
struct P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C_marshaled_com
{
	int32_t ___Index_0;
	Il2CppChar* ___Name_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.RenderTextureDescriptor
struct RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 
{
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<mipCount>k__BackingField
	int32_t ___U3CmipCountU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::_graphicsFormat
	int32_t ____graphicsFormat_5;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<stencilFormat>k__BackingField
	int32_t ___U3CstencilFormatU3Ek__BackingField_6;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<depthStencilFormat>k__BackingField
	int32_t ___U3CdepthStencilFormatU3Ek__BackingField_7;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_8;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_9;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_10;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_11;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_12;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D24_t4CAFB9E80506C7691A0BBD5D3B6369659C3B4C67 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t4CAFB9E80506C7691A0BBD5D3B6369659C3B4C67__padding[24];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tF2EA118D0E8276A0B92A18EF96F6167BD01AC673  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tF2EA118D0E8276A0B92A18EF96F6167BD01AC673_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::4F3A974D03B4939FC26A965844D8E5F89E151FF80F59BB8AF511CC703F5DA157
	__StaticArrayInitTypeSizeU3D24_t4CAFB9E80506C7691A0BBD5D3B6369659C3B4C67 ___4F3A974D03B4939FC26A965844D8E5F89E151FF80F59BB8AF511CC703F5DA157_0;
};

// UnityEngine.Rendering.AsyncGPUReadbackRequest
struct AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 
{
	// System.IntPtr UnityEngine.Rendering.AsyncGPUReadbackRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Int32 UnityEngine.Rendering.AsyncGPUReadbackRequest::m_Version
	int32_t ___m_Version_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// PaintIn3D.P3dBlendMode
struct P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B 
{
	// System.Int32 PaintIn3D.P3dBlendMode::Index
	int32_t ___Index_17;
	// UnityEngine.Color PaintIn3D.P3dBlendMode::Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_18;
	// UnityEngine.Texture PaintIn3D.P3dBlendMode::Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___Texture_19;
	// System.Single PaintIn3D.P3dBlendMode::Kernel
	float ___Kernel_20;
	// UnityEngine.Vector4 PaintIn3D.P3dBlendMode::Channels
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Channels_21;
};

struct P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B_StaticFields
{
	// System.String[] PaintIn3D.P3dBlendMode::NAMES
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___NAMES_16;
};
// Native definition for P/Invoke marshalling of PaintIn3D.P3dBlendMode
struct P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B_marshaled_pinvoke
{
	int32_t ___Index_17;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_18;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___Texture_19;
	float ___Kernel_20;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Channels_21;
};
// Native definition for COM marshalling of PaintIn3D.P3dBlendMode
struct P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B_marshaled_com
{
	int32_t ___Index_17;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_18;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___Texture_19;
	float ___Kernel_20;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Channels_21;
};

// PaintIn3D.P3dCommand
struct P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D  : public RuntimeObject
{
	// System.Int32 PaintIn3D.P3dCommand::Index
	int32_t ___Index_0;
	// System.Boolean PaintIn3D.P3dCommand::Preview
	bool ___Preview_1;
	// System.Boolean PaintIn3D.P3dCommand::Double
	bool ___Double_2;
	// System.Int32 PaintIn3D.P3dCommand::Priority
	int32_t ___Priority_3;
	// UnityEngine.Material PaintIn3D.P3dCommand::Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___Material_4;
	// System.Int32 PaintIn3D.P3dCommand::Pass
	int32_t ___Pass_5;
	// PaintIn3D.P3dModel PaintIn3D.P3dCommand::Model
	P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* ___Model_6;
	// System.Int32 PaintIn3D.P3dCommand::Submesh
	int32_t ___Submesh_7;
	// UnityEngine.Texture PaintIn3D.P3dCommand::LocalMaskTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___LocalMaskTexture_8;
	// UnityEngine.Vector4 PaintIn3D.P3dCommand::LocalMaskChannel
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___LocalMaskChannel_9;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// UnityEngine.XR.XRNodeState
struct XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A 
{
	// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::m_Type
	int32_t ___m_Type_0;
	// UnityEngine.XR.AvailableTrackingData UnityEngine.XR.XRNodeState::m_AvailableFields
	int32_t ___m_AvailableFields_1;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_2;
	// UnityEngine.Quaternion UnityEngine.XR.XRNodeState::m_Rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation_3;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity_5;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Acceleration
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Acceleration_6;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularAcceleration
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularAcceleration_7;
	// System.Int32 UnityEngine.XR.XRNodeState::m_Tracked
	int32_t ___m_Tracked_8;
	// System.UInt64 UnityEngine.XR.XRNodeState::m_UniqueID
	uint64_t ___m_UniqueID_9;
};

// PaintIn3D.Examples.P3dPaintMultiplayer/<SimulateNetworkTransmission>d__7
struct U3CSimulateNetworkTransmissionU3Ed__7_tC1A1B5CE4A1DFA256FE3AC757E01216424E4BA9D  : public RuntimeObject
{
	// System.Int32 PaintIn3D.Examples.P3dPaintMultiplayer/<SimulateNetworkTransmission>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PaintIn3D.Examples.P3dPaintMultiplayer/<SimulateNetworkTransmission>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PaintIn3D.Examples.P3dPaintMultiplayer PaintIn3D.Examples.P3dPaintMultiplayer/<SimulateNetworkTransmission>d__7::<>4__this
	P3dPaintMultiplayer_t290BA03D064ECACE9D05810C27A01EE24A434E46* ___U3CU3E4__this_2;
	// System.Boolean PaintIn3D.Examples.P3dPaintMultiplayer/<SimulateNetworkTransmission>d__7::preview
	bool ___preview_3;
	// System.Int32 PaintIn3D.Examples.P3dPaintMultiplayer/<SimulateNetworkTransmission>d__7::priority
	int32_t ___priority_4;
	// System.Single PaintIn3D.Examples.P3dPaintMultiplayer/<SimulateNetworkTransmission>d__7::pressure
	float ___pressure_5;
	// System.Int32 PaintIn3D.Examples.P3dPaintMultiplayer/<SimulateNetworkTransmission>d__7::seed
	int32_t ___seed_6;
	// UnityEngine.Vector3 PaintIn3D.Examples.P3dPaintMultiplayer/<SimulateNetworkTransmission>d__7::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_7;
	// UnityEngine.Vector3 PaintIn3D.Examples.P3dPaintMultiplayer/<SimulateNetworkTransmission>d__7::endPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPosition_8;
	// UnityEngine.Quaternion PaintIn3D.Examples.P3dPaintMultiplayer/<SimulateNetworkTransmission>d__7::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_9;
};

// PaintIn3D.P3dReadColor/ColorEvent
struct ColorEvent_t871C324F6981EB1A0CDE0FC4F559E313017CA4C9  : public UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9
{
};

// PaintIn3D.Examples.P3dReadColorEvent/ColorEvent
struct ColorEvent_tA8C1E814C5CD8FFA0BC95C19D8254FAF51771F06  : public UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9
{
};

// PaintIn3D.Examples.P3dVrManager/SimulatedState
struct SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D  : public RuntimeObject
{
	// UnityEngine.XR.XRNode PaintIn3D.Examples.P3dVrManager/SimulatedState::Node
	int32_t ___Node_0;
	// System.Boolean PaintIn3D.Examples.P3dVrManager/SimulatedState::Set
	bool ___Set_1;
	// UnityEngine.Vector3 PaintIn3D.Examples.P3dVrManager/SimulatedState::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_2;
	// UnityEngine.Quaternion PaintIn3D.Examples.P3dVrManager/SimulatedState::Rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>
struct Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ____current_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// PaintIn3D.P3dCommandFill
struct P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B  : public P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D
{
	// PaintIn3D.P3dBlendMode PaintIn3D.P3dCommandFill::Blend
	P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B ___Blend_10;
	// UnityEngine.Texture PaintIn3D.P3dCommandFill::Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___Texture_11;
	// UnityEngine.Color PaintIn3D.P3dCommandFill::Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_12;
	// System.Single PaintIn3D.P3dCommandFill::Opacity
	float ___Opacity_13;
	// System.Single PaintIn3D.P3dCommandFill::Minimum
	float ___Minimum_14;
};

struct P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B_StaticFields
{
	// PaintIn3D.P3dCommandFill PaintIn3D.P3dCommandFill::Instance
	P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B* ___Instance_15;
	// System.Collections.Generic.Stack`1<PaintIn3D.P3dCommandFill> PaintIn3D.P3dCommandFill::pool
	Stack_1_tA1F624B1E4D038F4D85940BF71FA5CE058DF58BB* ___pool_16;
	// UnityEngine.Material PaintIn3D.P3dCommandFill::cachedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___cachedMaterial_17;
};

// PaintIn3D.P3dReader
struct P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7  : public RuntimeObject
{
	// UnityEngine.Rendering.AsyncGPUReadbackRequest PaintIn3D.P3dReader::request
	AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 ___request_0;
	// System.Boolean PaintIn3D.P3dReader::requested
	bool ___requested_1;
	// UnityEngine.RenderTexture PaintIn3D.P3dReader::buffer
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___buffer_2;
	// UnityEngine.Vector2Int PaintIn3D.P3dReader::originalSize
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___originalSize_3;
	// UnityEngine.Vector2Int PaintIn3D.P3dReader::downsampledSize
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___downsampledSize_4;
	// System.Int32 PaintIn3D.P3dReader::downsampleSteps
	int32_t ___downsampleSteps_5;
	// System.Int32 PaintIn3D.P3dReader::downsampleBoost
	int32_t ___downsampleBoost_6;
	// UnityEngine.Texture2D PaintIn3D.P3dReader::tempTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tempTexture_7;
	// System.Action`1<Unity.Collections.NativeArray`1<UnityEngine.Color32>> PaintIn3D.P3dReader::OnComplete
	Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* ___OnComplete_8;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Action`1<Unity.Collections.NativeArray`1<UnityEngine.Color32>>
struct Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// PaintIn3D.P3dLinkedBehaviour`1<PaintIn3D.Examples.P3dColor>
struct P3dLinkedBehaviour_1_tA79BAA47E81203531E02EB6482C4E9B7C6CFAA53  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// T PaintIn3D.P3dLinkedBehaviour`1::PrevInstance
	P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* ___PrevInstance_6;
	// T PaintIn3D.P3dLinkedBehaviour`1::NextInstance
	P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* ___NextInstance_7;
};

struct P3dLinkedBehaviour_1_tA79BAA47E81203531E02EB6482C4E9B7C6CFAA53_StaticFields
{
	// T PaintIn3D.P3dLinkedBehaviour`1::FirstInstance
	P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* ___FirstInstance_4;
	// System.Int32 PaintIn3D.P3dLinkedBehaviour`1::InstanceCount
	int32_t ___InstanceCount_5;
};

// PaintIn3D.P3dLinkedBehaviour`1<PaintIn3D.P3dModel>
struct P3dLinkedBehaviour_1_t50D6044F4FFFE890DD6B5D019E707726E84121D0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// T PaintIn3D.P3dLinkedBehaviour`1::PrevInstance
	P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* ___PrevInstance_6;
	// T PaintIn3D.P3dLinkedBehaviour`1::NextInstance
	P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* ___NextInstance_7;
};

struct P3dLinkedBehaviour_1_t50D6044F4FFFE890DD6B5D019E707726E84121D0_StaticFields
{
	// T PaintIn3D.P3dLinkedBehaviour`1::FirstInstance
	P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* ___FirstInstance_4;
	// System.Int32 PaintIn3D.P3dLinkedBehaviour`1::InstanceCount
	int32_t ___InstanceCount_5;
};

// PaintIn3D.P3dLinkedBehaviour`1<PaintIn3D.P3dPaintableTexture>
struct P3dLinkedBehaviour_1_t5F021E7AEECA17A9E488B3346EA377FDA080A73A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// T PaintIn3D.P3dLinkedBehaviour`1::PrevInstance
	P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* ___PrevInstance_6;
	// T PaintIn3D.P3dLinkedBehaviour`1::NextInstance
	P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* ___NextInstance_7;
};

struct P3dLinkedBehaviour_1_t5F021E7AEECA17A9E488B3346EA377FDA080A73A_StaticFields
{
	// T PaintIn3D.P3dLinkedBehaviour`1::FirstInstance
	P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* ___FirstInstance_4;
	// System.Int32 PaintIn3D.P3dLinkedBehaviour`1::InstanceCount
	int32_t ___InstanceCount_5;
};

// PaintIn3D.P3dLinkedBehaviour`1<PaintIn3D.Examples.P3dVrManager>
struct P3dLinkedBehaviour_1_t41C6940491B78B53C39BDFBD3422B9DB38C1B494  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// T PaintIn3D.P3dLinkedBehaviour`1::PrevInstance
	P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* ___PrevInstance_6;
	// T PaintIn3D.P3dLinkedBehaviour`1::NextInstance
	P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* ___NextInstance_7;
};

struct P3dLinkedBehaviour_1_t41C6940491B78B53C39BDFBD3422B9DB38C1B494_StaticFields
{
	// T PaintIn3D.P3dLinkedBehaviour`1::FirstInstance
	P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* ___FirstInstance_4;
	// System.Int32 PaintIn3D.P3dLinkedBehaviour`1::InstanceCount
	int32_t ___InstanceCount_5;
};

// PaintIn3D.P3dLinkedBehaviour`1<PaintIn3D.Examples.P3dVrTool>
struct P3dLinkedBehaviour_1_t43E8A9923C9A5DC25CE1A7AD8F3E18D7A4D51B33  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// T PaintIn3D.P3dLinkedBehaviour`1::PrevInstance
	P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* ___PrevInstance_6;
	// T PaintIn3D.P3dLinkedBehaviour`1::NextInstance
	P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* ___NextInstance_7;
};

struct P3dLinkedBehaviour_1_t43E8A9923C9A5DC25CE1A7AD8F3E18D7A4D51B33_StaticFields
{
	// T PaintIn3D.P3dLinkedBehaviour`1::FirstInstance
	P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* ___FirstInstance_4;
	// System.Int32 PaintIn3D.P3dLinkedBehaviour`1::InstanceCount
	int32_t ___InstanceCount_5;
};

// PaintIn3D.Examples.P3dGraduallyFade
struct P3dGraduallyFade_t2027A523C7CF2CBD737C7E3E10047FDA82317EAB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PaintIn3D.P3dPaintableTexture PaintIn3D.Examples.P3dGraduallyFade::paintableTexture
	P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* ___paintableTexture_4;
	// UnityEngine.Texture PaintIn3D.Examples.P3dGraduallyFade::maskTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___maskTexture_5;
	// PaintIn3D.P3dPaintableTexture PaintIn3D.Examples.P3dGraduallyFade::maskPaintableTexture
	P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* ___maskPaintableTexture_6;
	// PaintIn3D.P3dChannel PaintIn3D.Examples.P3dGraduallyFade::maskChannel
	int32_t ___maskChannel_7;
	// PaintIn3D.P3dBlendMode PaintIn3D.Examples.P3dGraduallyFade::blendMode
	P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B ___blendMode_8;
	// UnityEngine.Texture PaintIn3D.Examples.P3dGraduallyFade::texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_9;
	// UnityEngine.Color PaintIn3D.Examples.P3dGraduallyFade::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_10;
	// System.Single PaintIn3D.Examples.P3dGraduallyFade::threshold
	float ___threshold_11;
	// System.Single PaintIn3D.Examples.P3dGraduallyFade::speed
	float ___speed_12;
	// System.Single PaintIn3D.Examples.P3dGraduallyFade::counter
	float ___counter_13;
};

// PaintIn3D.P3dMaterialCloner
struct P3dMaterialCloner_tBF64157DF290AB5A6EABBAE00D440FC78C639876  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 PaintIn3D.P3dMaterialCloner::index
	int32_t ___index_4;
	// UnityEngine.Renderer PaintIn3D.P3dMaterialCloner::cachedRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___cachedRenderer_5;
	// System.Boolean PaintIn3D.P3dMaterialCloner::cachedRendererSet
	bool ___cachedRendererSet_6;
	// PaintIn3D.P3dPaintable PaintIn3D.P3dMaterialCloner::cachedPaintable
	P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00* ___cachedPaintable_7;
	// System.Boolean PaintIn3D.P3dMaterialCloner::cachedPaintableSet
	bool ___cachedPaintableSet_8;
	// System.Boolean PaintIn3D.P3dMaterialCloner::activated
	bool ___activated_9;
	// UnityEngine.Material PaintIn3D.P3dMaterialCloner::current
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___current_10;
	// UnityEngine.Material PaintIn3D.P3dMaterialCloner::original
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___original_11;
};

// PaintIn3D.Examples.P3dPaintMultiplayer
struct P3dPaintMultiplayer_t290BA03D064ECACE9D05810C27A01EE24A434E46  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PaintIn3D.Examples.P3dPaintMultiplayer::delay
	float ___delay_4;
};

// PaintIn3D.P3dPaintableTextureMonitor
struct P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PaintIn3D.P3dPaintableTexture PaintIn3D.P3dPaintableTextureMonitor::paintableTexture
	P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* ___paintableTexture_4;
	// System.Single PaintIn3D.P3dPaintableTextureMonitor::interval
	float ___interval_5;
	// System.Boolean PaintIn3D.P3dPaintableTextureMonitor::async
	bool ___async_6;
	// System.Int32 PaintIn3D.P3dPaintableTextureMonitor::downsampleSteps
	int32_t ___downsampleSteps_7;
	// System.Action PaintIn3D.P3dPaintableTextureMonitor::OnUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnUpdated_8;
	// PaintIn3D.P3dPaintableTexture PaintIn3D.P3dPaintableTextureMonitor::registeredPaintableTexture
	P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* ___registeredPaintableTexture_9;
	// System.Single PaintIn3D.P3dPaintableTextureMonitor::cooldown
	float ___cooldown_10;
	// PaintIn3D.P3dReader PaintIn3D.P3dPaintableTextureMonitor::currentReader
	P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* ___currentReader_11;
	// System.Boolean PaintIn3D.P3dPaintableTextureMonitor::currentDirty
	bool ___currentDirty_12;
	// Unity.Collections.NativeArray`1<UnityEngine.Color32> PaintIn3D.P3dPaintableTextureMonitor::currentPixels
	NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___currentPixels_13;
};

// PaintIn3D.Examples.P3dProceduralSetup
struct P3dProceduralSetup_t904E8060654D0776D005B775B00C06B430ED9A2A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material PaintIn3D.Examples.P3dProceduralSetup::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_4;
	// System.Single PaintIn3D.Examples.P3dProceduralSetup::size
	float ___size_5;
	// UnityEngine.Mesh PaintIn3D.Examples.P3dProceduralSetup::generatedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___generatedMesh_6;
};

// PaintIn3D.P3dReadColor
struct P3dReadColor_tA9EB11219665FC16322C180818DDDB09606D0581  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PaintIn3D.P3dGroup PaintIn3D.P3dReadColor::group
	P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D ___group_4;
	// System.Boolean PaintIn3D.P3dReadColor::preview
	bool ___preview_5;
	// UnityEngine.Color PaintIn3D.P3dReadColor::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_6;
	// PaintIn3D.P3dReadColor/ColorEvent PaintIn3D.P3dReadColor::onColor
	ColorEvent_t871C324F6981EB1A0CDE0FC4F559E313017CA4C9* ___onColor_7;
};

// PaintIn3D.Examples.P3dReadColorEvent
struct P3dReadColorEvent_tFD6B133BD45667E22AE8B1BFCA79DAE5C2413018  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Color PaintIn3D.Examples.P3dReadColorEvent::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_4;
	// System.Single PaintIn3D.Examples.P3dReadColorEvent::threshold
	float ___threshold_5;
	// PaintIn3D.Examples.P3dReadColorEvent/ColorEvent PaintIn3D.Examples.P3dReadColorEvent::onColor
	ColorEvent_tA8C1E814C5CD8FFA0BC95C19D8254FAF51771F06* ___onColor_6;
	// PaintIn3D.P3dReadColor PaintIn3D.Examples.P3dReadColorEvent::cachedReadColor
	P3dReadColor_tA9EB11219665FC16322C180818DDDB09606D0581* ___cachedReadColor_7;
};

// PaintIn3D.Examples.P3dRotate
struct P3dRotate_t82A87FB3C78B3AA94251CA239B1B96DE976594DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Space PaintIn3D.Examples.P3dRotate::space
	int32_t ___space_4;
	// UnityEngine.Vector3 PaintIn3D.Examples.P3dRotate::perSecond
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___perSecond_5;
};

// PaintIn3D.Examples.P3dToggleScript
struct P3dToggleScript_t9A721E1AC018BBFA21D8F1E3B7246E2CD3BCC5CE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.KeyCode PaintIn3D.Examples.P3dToggleScript::key
	int32_t ___key_4;
	// UnityEngine.MonoBehaviour PaintIn3D.Examples.P3dToggleScript::target
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___target_5;
	// System.Boolean PaintIn3D.Examples.P3dToggleScript::storeStates
	bool ___storeStates_6;
};

// PaintIn3D.Examples.P3dTranslate
struct P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Space PaintIn3D.Examples.P3dTranslate::space
	int32_t ___space_4;
	// System.Single PaintIn3D.Examples.P3dTranslate::multiplier
	float ___multiplier_5;
	// System.Single PaintIn3D.Examples.P3dTranslate::damping
	float ___damping_6;
	// UnityEngine.Vector3 PaintIn3D.Examples.P3dTranslate::perSecond
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___perSecond_7;
	// UnityEngine.Vector3 PaintIn3D.Examples.P3dTranslate::remainingDelta
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___remainingDelta_8;
};

// PaintIn3D.Examples.P3dUpgradeEventSystem
struct P3dUpgradeEventSystem_t25DD677E23BD83CEFE670EE5D2310FF5B3E57A2D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// PaintIn3D.Examples.P3dColor
struct P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682  : public P3dLinkedBehaviour_1_tA79BAA47E81203531E02EB6482C4E9B7C6CFAA53
{
	// UnityEngine.Color PaintIn3D.Examples.P3dColor::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_8;
	// System.Collections.Generic.List`1<PaintIn3D.Examples.P3dColor/Contribution> PaintIn3D.Examples.P3dColor::contributions
	List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB* ___contributions_9;
};

// PaintIn3D.P3dModel
struct P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45  : public P3dLinkedBehaviour_1_t50D6044F4FFFE890DD6B5D019E707726E84121D0
{
	// PaintIn3D.P3dPaintable PaintIn3D.P3dModel::paintable
	P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00* ___paintable_8;
	// System.Boolean PaintIn3D.P3dModel::includeScale
	bool ___includeScale_9;
	// UnityEngine.Renderer PaintIn3D.P3dModel::cachedRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___cachedRenderer_10;
	// System.Boolean PaintIn3D.P3dModel::cachedRendererSet
	bool ___cachedRendererSet_11;
	// UnityEngine.SkinnedMeshRenderer PaintIn3D.P3dModel::cachedSkinned
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___cachedSkinned_12;
	// UnityEngine.MeshFilter PaintIn3D.P3dModel::cachedFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___cachedFilter_13;
	// System.Boolean PaintIn3D.P3dModel::cachedSkinnedSet
	bool ___cachedSkinnedSet_14;
	// UnityEngine.Transform PaintIn3D.P3dModel::cachedTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cachedTransform_15;
	// UnityEngine.GameObject PaintIn3D.P3dModel::cachedGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cachedGameObject_16;
	// UnityEngine.Material[] PaintIn3D.P3dModel::materials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___materials_17;
	// System.Boolean PaintIn3D.P3dModel::materialsSet
	bool ___materialsSet_18;
	// UnityEngine.Mesh PaintIn3D.P3dModel::bakedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___bakedMesh_19;
	// System.Boolean PaintIn3D.P3dModel::bakedMeshSet
	bool ___bakedMeshSet_20;
	// System.Boolean PaintIn3D.P3dModel::prepared
	bool ___prepared_21;
	// UnityEngine.Mesh PaintIn3D.P3dModel::preparedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___preparedMesh_22;
	// UnityEngine.Matrix4x4 PaintIn3D.P3dModel::preparedMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___preparedMatrix_23;
	// System.Int32[] PaintIn3D.P3dModel::preparedTriangles
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___preparedTriangles_24;
	// UnityEngine.Vector3[] PaintIn3D.P3dModel::preparedPositions
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___preparedPositions_25;
	// UnityEngine.Vector2[] PaintIn3D.P3dModel::preparedCoord0
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___preparedCoord0_26;
	// UnityEngine.Vector2[] PaintIn3D.P3dModel::preparedCoord1
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___preparedCoord1_27;
};

struct P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_StaticFields
{
	// System.Collections.Generic.List`1<PaintIn3D.P3dModel> PaintIn3D.P3dModel::tempModels
	List_1_tAC4011F8E14CCFF35F20EBAF7202AE73E16CC115* ___tempModels_28;
};

// PaintIn3D.P3dPaintableTexture
struct P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63  : public P3dLinkedBehaviour_1_t5F021E7AEECA17A9E488B3346EA377FDA080A73A
{
	// PaintIn3D.P3dSlot PaintIn3D.P3dPaintableTexture::slot
	P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C ___slot_8;
	// PaintIn3D.P3dCoord PaintIn3D.P3dPaintableTexture::coord
	int32_t ___coord_9;
	// PaintIn3D.P3dGroup PaintIn3D.P3dPaintableTexture::group
	P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D ___group_10;
	// PaintIn3D.P3dPaintableTexture/UndoRedoType PaintIn3D.P3dPaintableTexture::undoRedo
	int32_t ___undoRedo_11;
	// System.Int32 PaintIn3D.P3dPaintableTexture::stateLimit
	int32_t ___stateLimit_12;
	// PaintIn3D.P3dPaintableTexture/SaveLoadType PaintIn3D.P3dPaintableTexture::saveLoad
	int32_t ___saveLoad_13;
	// System.String PaintIn3D.P3dPaintableTexture::saveName
	String_t* ___saveName_14;
	// System.Int32 PaintIn3D.P3dPaintableTexture::width
	int32_t ___width_15;
	// System.Int32 PaintIn3D.P3dPaintableTexture::height
	int32_t ___height_16;
	// UnityEngine.Texture PaintIn3D.P3dPaintableTexture::texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_17;
	// UnityEngine.Color PaintIn3D.P3dPaintableTexture::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_18;
	// UnityEngine.RenderTextureFormat PaintIn3D.P3dPaintableTexture::format
	int32_t ___format_19;
	// PaintIn3D.P3dPaintableTexture/MipType PaintIn3D.P3dPaintableTexture::mipMaps
	int32_t ___mipMaps_20;
	// PaintIn3D.P3dPaintableTexture/FilterType PaintIn3D.P3dPaintableTexture::filter
	int32_t ___filter_21;
	// PaintIn3D.P3dPaintableTexture/AnisoType PaintIn3D.P3dPaintableTexture::aniso
	int32_t ___aniso_22;
	// PaintIn3D.P3dPaintableTexture/WrapType PaintIn3D.P3dPaintableTexture::wrapU
	int32_t ___wrapU_23;
	// PaintIn3D.P3dPaintableTexture/WrapType PaintIn3D.P3dPaintableTexture::wrapV
	int32_t ___wrapV_24;
	// PaintIn3D.P3dPaintableTexture/ExistingType PaintIn3D.P3dPaintableTexture::existing
	int32_t ___existing_25;
	// PaintIn3D.P3dPaintableTexture/ConversionType PaintIn3D.P3dPaintableTexture::conversion
	int32_t ___conversion_26;
	// UnityEngine.Texture PaintIn3D.P3dPaintableTexture::localMaskTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___localMaskTexture_27;
	// PaintIn3D.P3dChannel PaintIn3D.P3dPaintableTexture::localMaskChannel
	int32_t ___localMaskChannel_28;
	// System.String PaintIn3D.P3dPaintableTexture::shaderKeyword
	String_t* ___shaderKeyword_29;
	// System.Boolean PaintIn3D.P3dPaintableTexture::isDummy
	bool ___isDummy_30;
	// System.String PaintIn3D.P3dPaintableTexture::output
	String_t* ___output_31;
	// System.Action`1<PaintIn3D.P3dCommand> PaintIn3D.P3dPaintableTexture::OnAddCommand
	Action_1_t197D90233CFD0A751641723D06DE23097E99A46D* ___OnAddCommand_32;
	// System.Action`1<System.Boolean> PaintIn3D.P3dPaintableTexture::OnModified
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnModified_33;
	// System.Boolean PaintIn3D.P3dPaintableTexture::activated
	bool ___activated_34;
	// UnityEngine.RenderTexture PaintIn3D.P3dPaintableTexture::current
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___current_35;
	// UnityEngine.RenderTexture PaintIn3D.P3dPaintableTexture::preview
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___preview_36;
	// System.Collections.Generic.List`1<PaintIn3D.P3dPaintableState> PaintIn3D.P3dPaintableTexture::paintableStates
	List_1_t74E0BEBF8CFBD266D746B900F6528A3B72B3168E* ___paintableStates_37;
	// System.Int32 PaintIn3D.P3dPaintableTexture::stateIndex
	int32_t ___stateIndex_38;
	// PaintIn3D.P3dPaintable PaintIn3D.P3dPaintableTexture::paintable
	P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00* ___paintable_39;
	// System.Boolean PaintIn3D.P3dPaintableTexture::paintableSet
	bool ___paintableSet_40;
	// UnityEngine.Material PaintIn3D.P3dPaintableTexture::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_41;
	// System.Boolean PaintIn3D.P3dPaintableTexture::materialSet
	bool ___materialSet_42;
	// UnityEngine.Texture PaintIn3D.P3dPaintableTexture::oldTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___oldTexture_43;
	// System.Collections.Generic.List`1<PaintIn3D.P3dCommand> PaintIn3D.P3dPaintableTexture::paintCommands
	List_1_t54F090708FD8BBE1351164EA9B8A477AB71181B2* ___paintCommands_44;
	// System.Collections.Generic.List`1<PaintIn3D.P3dCommand> PaintIn3D.P3dPaintableTexture::previewCommands
	List_1_t54F090708FD8BBE1351164EA9B8A477AB71181B2* ___previewCommands_45;
	// System.Collections.Generic.List`1<PaintIn3D.P3dCommand> PaintIn3D.P3dPaintableTexture::localCommands
	List_1_t54F090708FD8BBE1351164EA9B8A477AB71181B2* ___localCommands_46;
};

struct P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_StaticFields
{
	// System.Collections.Generic.List`1<PaintIn3D.P3dPaintableTexture> PaintIn3D.P3dPaintableTexture::tempPaintableTextures
	List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* ___tempPaintableTextures_47;
};

// PaintIn3D.P3dPaintableTextureMonitorMask
struct P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57  : public P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078
{
	// UnityEngine.Mesh PaintIn3D.P3dPaintableTextureMonitorMask::maskMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___maskMesh_14;
	// UnityEngine.Texture PaintIn3D.P3dPaintableTextureMonitorMask::maskTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___maskTexture_15;
	// PaintIn3D.P3dChannel PaintIn3D.P3dPaintableTextureMonitorMask::maskChannel
	int32_t ___maskChannel_16;
	// System.Int32 PaintIn3D.P3dPaintableTextureMonitorMask::total
	int32_t ___total_17;
	// System.Boolean PaintIn3D.P3dPaintableTextureMonitorMask::maskDirty
	bool ___maskDirty_18;
	// PaintIn3D.P3dReader PaintIn3D.P3dPaintableTextureMonitorMask::maskReader
	P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* ___maskReader_19;
	// Unity.Collections.NativeArray`1<System.Byte> PaintIn3D.P3dPaintableTextureMonitorMask::maskPixels
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___maskPixels_20;
};

// PaintIn3D.Examples.P3dVrManager
struct P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1  : public P3dLinkedBehaviour_1_t41C6940491B78B53C39BDFBD3422B9DB38C1B494
{
	// System.Single PaintIn3D.Examples.P3dVrManager::grabDistance
	float ___grabDistance_8;
	// UnityEngine.KeyCode PaintIn3D.Examples.P3dVrManager::simulatedLeftTrigger
	int32_t ___simulatedLeftTrigger_9;
	// UnityEngine.KeyCode PaintIn3D.Examples.P3dVrManager::simulatedLeftGrip
	int32_t ___simulatedLeftGrip_10;
	// UnityEngine.KeyCode PaintIn3D.Examples.P3dVrManager::simulatedRightTrigger
	int32_t ___simulatedRightTrigger_11;
	// UnityEngine.KeyCode PaintIn3D.Examples.P3dVrManager::simulatedRightGrip
	int32_t ___simulatedRightGrip_12;
	// UnityEngine.Vector3 PaintIn3D.Examples.P3dVrManager::simulatedTilt
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___simulatedTilt_13;
	// UnityEngine.Vector3 PaintIn3D.Examples.P3dVrManager::simulatedOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___simulatedOffset_14;
	// System.Single PaintIn3D.Examples.P3dVrManager::simulatedReach
	float ___simulatedReach_15;
	// UnityEngine.Vector3 PaintIn3D.Examples.P3dVrManager::simulatedEyeOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___simulatedEyeOffset_16;
	// System.Single PaintIn3D.Examples.P3dVrManager::simulatedNormalInfluence
	float ___simulatedNormalInfluence_17;
	// PaintIn3D.Examples.P3dVrManager/SimulatedState[] PaintIn3D.Examples.P3dVrManager::simulatedStates
	SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749* ___simulatedStates_18;
	// System.Single PaintIn3D.Examples.P3dVrManager::hitDistance
	float ___hitDistance_19;
	// UnityEngine.Quaternion PaintIn3D.Examples.P3dVrManager::hitRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___hitRotation_20;
	// System.Boolean PaintIn3D.Examples.P3dVrManager::LeftTrigger
	bool ___LeftTrigger_21;
	// System.Boolean PaintIn3D.Examples.P3dVrManager::RightTrigger
	bool ___RightTrigger_22;
	// System.Boolean PaintIn3D.Examples.P3dVrManager::LeftGrip
	bool ___LeftGrip_23;
	// System.Boolean PaintIn3D.Examples.P3dVrManager::RightGrip
	bool ___RightGrip_24;
	// System.Boolean PaintIn3D.Examples.P3dVrManager::PrevLeftTrigger
	bool ___PrevLeftTrigger_25;
	// System.Boolean PaintIn3D.Examples.P3dVrManager::PrevRightTrigger
	bool ___PrevRightTrigger_26;
	// System.Boolean PaintIn3D.Examples.P3dVrManager::PrevLeftGrip
	bool ___PrevLeftGrip_27;
	// System.Boolean PaintIn3D.Examples.P3dVrManager::PrevRightGrip
	bool ___PrevRightGrip_28;
};

struct P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> PaintIn3D.Examples.P3dVrManager::states
	List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* ___states_29;
	// System.Collections.Generic.List`1<PaintIn3D.Examples.P3dVrTool> PaintIn3D.Examples.P3dVrManager::tempTools
	List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* ___tempTools_30;
};

// PaintIn3D.Examples.P3dVrTool
struct P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D  : public P3dLinkedBehaviour_1_t43E8A9923C9A5DC25CE1A7AD8F3E18D7A4D51B33
{
	// UnityEngine.XR.XRNode PaintIn3D.Examples.P3dVrTool::node
	int32_t ___node_8;
	// System.Boolean PaintIn3D.Examples.P3dVrTool::storeStates
	bool ___storeStates_9;
	// UnityEngine.Vector3 PaintIn3D.Examples.P3dVrTool::localOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localOffset_10;
	// UnityEngine.Vector3 PaintIn3D.Examples.P3dVrTool::simulatedOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___simulatedOffset_11;
	// UnityEngine.Vector3 PaintIn3D.Examples.P3dVrTool::simulatedKeyOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___simulatedKeyOffset_12;
	// System.Single PaintIn3D.Examples.P3dVrTool::simulatedDampening
	float ___simulatedDampening_13;
	// UnityEngine.Events.UnityEvent PaintIn3D.Examples.P3dVrTool::onGrabbed
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onGrabbed_14;
	// UnityEngine.Events.UnityEvent PaintIn3D.Examples.P3dVrTool::onDropped
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onDropped_15;
	// UnityEngine.Events.UnityEvent PaintIn3D.Examples.P3dVrTool::onTriggerPress
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onTriggerPress_16;
	// UnityEngine.Events.UnityEvent PaintIn3D.Examples.P3dVrTool::onTriggerRelease
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onTriggerRelease_17;
	// UnityEngine.Events.UnityEvent PaintIn3D.Examples.P3dVrTool::onGripPress
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onGripPress_18;
	// UnityEngine.Events.UnityEvent PaintIn3D.Examples.P3dVrTool::onGripRelease
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onGripRelease_19;
};

struct P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D_StaticFields
{
	// System.Collections.Generic.List`1<PaintIn3D.Examples.P3dVrTool> PaintIn3D.Examples.P3dVrTool::tempTools
	List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* ___tempTools_20;
};

// PaintIn3D.Examples.P3dChangeCounter
struct P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD  : public P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57
{
	// System.Collections.Generic.LinkedListNode`1<PaintIn3D.Examples.P3dChangeCounter> PaintIn3D.Examples.P3dChangeCounter::node
	LinkedListNode_1_t5B79FCCCB747EA1C7D52F3CF711154C956DBFE6D* ___node_22;
	// System.Single PaintIn3D.Examples.P3dChangeCounter::threshold
	float ___threshold_23;
	// UnityEngine.Texture PaintIn3D.Examples.P3dChangeCounter::texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_24;
	// UnityEngine.Color PaintIn3D.Examples.P3dChangeCounter::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_25;
	// System.Int32 PaintIn3D.Examples.P3dChangeCounter::count
	int32_t ___count_26;
	// System.Boolean PaintIn3D.Examples.P3dChangeCounter::changeDirty
	bool ___changeDirty_27;
	// PaintIn3D.P3dReader PaintIn3D.Examples.P3dChangeCounter::changeReader
	P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* ___changeReader_28;
	// Unity.Collections.NativeArray`1<UnityEngine.Color32> PaintIn3D.Examples.P3dChangeCounter::changePixels
	NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___changePixels_29;
};

struct P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_StaticFields
{
	// System.Collections.Generic.LinkedList`1<PaintIn3D.Examples.P3dChangeCounter> PaintIn3D.Examples.P3dChangeCounter::Instances
	LinkedList_1_tD84633A6C61B300EF3932D5FF9149A5EEC0242FA* ___Instances_21;
};

// PaintIn3D.Examples.P3dChannelCounter
struct P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E  : public P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57
{
	// System.Collections.Generic.LinkedListNode`1<PaintIn3D.Examples.P3dChannelCounter> PaintIn3D.Examples.P3dChannelCounter::node
	LinkedListNode_1_t0D2393CE1A0C911186F3C49481250667FFAAF2E3* ___node_22;
	// System.Single PaintIn3D.Examples.P3dChannelCounter::threshold
	float ___threshold_23;
	// System.Int32 PaintIn3D.Examples.P3dChannelCounter::countR
	int32_t ___countR_24;
	// System.Int32 PaintIn3D.Examples.P3dChannelCounter::countG
	int32_t ___countG_25;
	// System.Int32 PaintIn3D.Examples.P3dChannelCounter::countB
	int32_t ___countB_26;
	// System.Int32 PaintIn3D.Examples.P3dChannelCounter::countA
	int32_t ___countA_27;
};

struct P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_StaticFields
{
	// System.Collections.Generic.LinkedList`1<PaintIn3D.Examples.P3dChannelCounter> PaintIn3D.Examples.P3dChannelCounter::Instances
	LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA* ___Instances_21;
};

// PaintIn3D.Examples.P3dColorCounter
struct P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64  : public P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57
{
	// System.Collections.Generic.LinkedListNode`1<PaintIn3D.Examples.P3dColorCounter> PaintIn3D.Examples.P3dColorCounter::node
	LinkedListNode_1_t150D7EC2BBDC599E0A03AC76F023431B7944B1E6* ___node_22;
	// System.Single PaintIn3D.Examples.P3dColorCounter::threshold
	float ___threshold_23;
	// System.Collections.Generic.List`1<PaintIn3D.Examples.P3dColorCounter/Contribution> PaintIn3D.Examples.P3dColorCounter::contributions
	List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA* ___contributions_24;
};

struct P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_StaticFields
{
	// System.Collections.Generic.LinkedList`1<PaintIn3D.Examples.P3dColorCounter> PaintIn3D.Examples.P3dColorCounter::Instances
	LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3* ___Instances_21;
};

// PaintIn3D.P3dPaintable
struct P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00  : public P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45
{
	// PaintIn3D.P3dPaintable/ActivationType PaintIn3D.P3dPaintable::activation
	int32_t ___activation_29;
	// UnityEngine.Vector3 PaintIn3D.P3dPaintable::baseScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___baseScale_30;
	// System.Collections.Generic.List`1<UnityEngine.Renderer> PaintIn3D.P3dPaintable::otherRenderers
	List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* ___otherRenderers_31;
	// UnityEngine.Events.UnityEvent PaintIn3D.P3dPaintable::onActivated
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onActivated_32;
	// System.Boolean PaintIn3D.P3dPaintable::activated
	bool ___activated_33;
	// System.Collections.Generic.HashSet`1<PaintIn3D.P3dPaintableTexture> PaintIn3D.P3dPaintable::paintableTextures
	HashSet_1_t704CC4569C195936CC31725B4F24ED5D539B50A3* ___paintableTextures_34;
	// System.Collections.Generic.List`1<PaintIn3D.P3dPaintableTexture> PaintIn3D.P3dPaintable::tempPaintableTextures
	List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* ___tempPaintableTextures_36;
};

struct P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00_StaticFields
{
	// System.Collections.Generic.List`1<PaintIn3D.P3dMaterialCloner> PaintIn3D.P3dPaintable::materialCloners
	List_1_t0E9725291C3531AE7B3F48A164E76D9381DEA743* ___materialCloners_35;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// PaintIn3D.IHitLine[]
struct IHitLineU5BU5D_t3A5AA56274ED58F155D9F459EE0E09B847263B91  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// PaintIn3D.Examples.P3dVrManager/SimulatedState[]
struct SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749  : public RuntimeArray
{
	ALIGN_FIELD (8) SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* m_Items[1];

	inline SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m561D1879521834F2C181DF56266AB10500F1C9F6_gshared (UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mD935AA7032F987581BD350C04192FBE8C25DD4EE_gshared (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_mFDBCDCDF71B4A7800D9FA8B2E9815B8B08D5C302_gshared (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_gshared (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_gshared (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD List_1_GetEnumerator_mAB912A9967665778045CEE77BD387D9184C2D1A9_gshared (List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m45953E5026A133C608DD6B470298999D2733B392_gshared (Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A Enumerator_get_Current_mD0D94B293CBE7F1F394B0682AF603A72FBED7B53_gshared_inline (Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m554D09004F3CA1F349AC0B84F21996392C777B32_gshared (Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dLinkedBehaviour`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dLinkedBehaviour_1__ctor_mC50F908D731B24092546E17EA21D0A6D6C9544CB_gshared (P3dLinkedBehaviour_1_t18ABCA12ED659A36567E803135359D84D43246C3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mD8E218B8766DD801CC5B221926CE287ADBE84E32_gshared (List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Color32>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_gshared (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Color32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m91FFC8B88A790FFBEB65362E2925F5C675B1A9C6_gshared (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Color32>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m758EC83047117608085E10546B2054D8300A607A_gshared (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Color32>::Copy(Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_m7B89E95C500C16215128F9704F441235D18C2C75_gshared (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___src0, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___dst1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Color32>::.ctor(Unity.Collections.NativeArray`1<T>,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m8C851A2AEB6FF855EA6F3E0AC37DB90F7AD14AC6_gshared (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* __this, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___array0, int32_t ___allocator1, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<System.Byte>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* LinkedList_1_AddLast_mF5239C871EADC44D51C6B621592A9CAC43449A2E_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.Collections.NativeArray`1<UnityEngine.Color32>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mD1DAA77F82DFC182C1D5CE9D323B1D05C2D1E4B7_gshared (Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_Remove_m6B592B94D9AEF003EAE59FCB5455DA67AB4E423C_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* ___node0, const RuntimeMethod* method) ;
// System.Boolean PaintIn3D.P3dReader::NeedsUpdating<UnityEngine.Color32>(PaintIn3D.P3dReader,Unity.Collections.NativeArray`1<T>,UnityEngine.RenderTexture,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dReader_NeedsUpdating_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m76E0CA4BACFC6BCDFE18411F3269A1CDF5C0C8EB_gshared (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* ___reader0, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___array1, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___texture2, int32_t ___downsampleSteps3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1__ctor_m2732A2EC5597469086D48C79A12B3563DEA501C5_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LinkedList_1_get_Count_mBFF1AE23B10EDF501026201C0427AA5820AECD82_gshared_inline (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22 LinkedList_1_GetEnumerator_m2522814971CB421FDF996D386A650A3F8FA0E30C_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m9E60B472E2E61202E9CFBED3DA607374973EA744_gshared (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mCD39BA1871E5D5BE52D8AA0B27886D9B5B10BBF9_gshared_inline (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m5148B3CE498B6E84B883D3EB4A7A080238A2609D_gshared (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* __this, float ___time0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<PaintIn3D.IHitLine>()
inline IHitLineU5BU5D_t3A5AA56274ED58F155D9F459EE0E09B847263B91* Component_GetComponentsInChildren_TisIHitLine_tDB6FE4E05C06DC1DA90E8CBD17E3B85D4BCA00E6_m08B6EE60601E9B3614775F6AFB10D93D078BEB38 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  IHitLineU5BU5D_t3A5AA56274ED58F155D9F459EE0E09B847263B91* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.Examples.P3dProceduralSetup::UpdateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dProceduralSetup_UpdateMesh_mCBA735E991B493616C8BAEB2A2B94E87814F20BB (P3dProceduralSetup_t904E8060654D0776D005B775B00C06B430ED9A2A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshCollider>()
inline MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* GameObject_AddComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFE0E36B3C1670C308B04C39EDC76838DD59826B7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C (MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<PaintIn3D.P3dPaintable>()
inline P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00* GameObject_AddComponent_TisP3dPaintable_tC5471B5C328513F1757B292031417E5287321A00_m9DB613DF40EECDEF695F50F8FA3621554FB2CC2B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<PaintIn3D.P3dMaterialCloner>()
inline P3dMaterialCloner_tBF64157DF290AB5A6EABBAE00D440FC78C639876* GameObject_AddComponent_TisP3dMaterialCloner_tBF64157DF290AB5A6EABBAE00D440FC78C639876_m1C559E953C8656119575406791F7CD597D9E9515 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  P3dMaterialCloner_tBF64157DF290AB5A6EABBAE00D440FC78C639876* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void PaintIn3D.P3dMaterialCloner::set_Index(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void P3dMaterialCloner_set_Index_m93EE92BC0A9B138A59FBACC624C8B9946E8C8417_inline (P3dMaterialCloner_tBF64157DF290AB5A6EABBAE00D440FC78C639876* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<PaintIn3D.P3dPaintableTexture>()
inline P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* GameObject_AddComponent_TisP3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_m7358A5B037798E91FE1AEC0B42019364A1EBCFE1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void PaintIn3D.P3dSlot::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dSlot__ctor_m94D018FBF673769031508CFD1818315C221FE68A (P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C* __this, int32_t ___newIndex0, String_t* ___newName1, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dPaintableTexture::set_Slot(PaintIn3D.P3dSlot)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void P3dPaintableTexture_set_Slot_m9B8A8230E8A783BD9E25C84127F6AFA01FBA0518_inline (P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* __this, P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateTangents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateTangents_m92AC413FAF889C5E811D86DCE0C25ED4625825EC (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.Examples.P3dReadColorEvent/ColorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorEvent__ctor_mD82D8BC7590B3DB8D1BFFDC364D8F179CCD3E933 (ColorEvent_tA8C1E814C5CD8FFA0BC95C19D8254FAF51771F06* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<PaintIn3D.P3dReadColor>()
inline P3dReadColor_tA9EB11219665FC16322C180818DDDB09606D0581* Component_GetComponent_TisP3dReadColor_tA9EB11219665FC16322C180818DDDB09606D0581_m5372876342A8851328870A4BF6D654CD91AE541F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  P3dReadColor_tA9EB11219665FC16322C180818DDDB09606D0581* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// PaintIn3D.P3dReadColor/ColorEvent PaintIn3D.P3dReadColor::get_OnColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorEvent_t871C324F6981EB1A0CDE0FC4F559E313017CA4C9* P3dReadColor_get_OnColor_m9E9F1D9B7BFEF599DBFD1B55F7D13C56EF2CFC3F (P3dReadColor_tA9EB11219665FC16322C180818DDDB09606D0581* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m561D1879521834F2C181DF56266AB10500F1C9F6 (UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m561D1879521834F2C181DF56266AB10500F1C9F6_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mD935AA7032F987581BD350C04192FBE8C25DD4EE (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9*, UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F*, const RuntimeMethod*))UnityEvent_1_AddListener_mD935AA7032F987581BD350C04192FBE8C25DD4EE_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_mFDBCDCDF71B4A7800D9FA8B2E9815B8B08D5C302 (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9*, UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F*, const RuntimeMethod*))UnityEvent_1_RemoveListener_mFDBCDCDF71B4A7800D9FA8B2E9815B8B08D5C302_gshared)(__this, ___call0, method);
}
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
inline void UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_gshared)(__this, ___arg00, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
inline void UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9*, const RuntimeMethod*))UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// System.Boolean PaintIn3D.P3dInputManager::IsPressed(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dInputManager_IsPressed_m5E1C8BB1F7EE413A27990940C1FD0DFA27B6FF8C (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dStateManager::StoreAllStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dStateManager_StoreAllStates_m6826D145BC61570B8E611A286518036D9D160B6A (const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Void PaintIn3D.Examples.P3dTranslate::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dTranslate_Translate_m7C14FEBFD43735BD36CDA1BA212F8752A0248683 (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Space PaintIn3D.Examples.P3dTranslate::get_Space()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t P3dTranslate_get_Space_m1780C48704A8E610FDD83BCAF8F370E8A2204FDD_inline (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Void PaintIn3D.Examples.P3dTranslate::TranslateWorld(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dTranslate_TranslateWorld_m82FF7779D23BE15B24D2BA9CBDBA694C7268FC1A (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Single PaintIn3D.Examples.P3dTranslate::get_Multiplier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float P3dTranslate_get_Multiplier_mCCD94575DB5F66D55A45F8D7CE22241DC693B06C_inline (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single PaintIn3D.Examples.P3dTranslate::get_Damping()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float P3dTranslate_get_Damping_m0D2BC23D04C32987E73B6A2B0F443B5250A8888E_inline (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, const RuntimeMethod* method) ;
// System.Single PaintIn3D.P3dHelper::DampenFactor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dHelper_DampenFactor_m25BC0A89681F5444A5D55D1D4CF8FCB9B20EEED3 (float ___dampening0, float ___elapsed1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRSettings::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSettings_get_enabled_mC22ABF5BF7D835DAB861A1FA384DBB8904D15E70 (const RuntimeMethod* method) ;
// System.Boolean PaintIn3D.Examples.P3dVrManager::TryGetPosition(UnityEngine.XR.XRNode,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dVrManager_TryGetPosition_m687A990E85721DC80063FD809CF23C6BC0BB5224 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___node0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___position1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean PaintIn3D.Examples.P3dVrManager::get_IsSimulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dVrManager_get_IsSimulation_m4BA2663C0A2BAB7484654FA8467CD01DC1604750 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputTracking::GetNodeStates(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTracking_GetNodeStates_mA2E8D154A47C817ED74AD42F6B38A9C906A57A67 (List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* ___nodeStates0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::GetEnumerator()
inline Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD List_1_GetEnumerator_mAB912A9967665778045CEE77BD387D9184C2D1A9 (List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD (*) (List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87*, const RuntimeMethod*))List_1_GetEnumerator_mAB912A9967665778045CEE77BD387D9184C2D1A9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::Dispose()
inline void Enumerator_Dispose_m45953E5026A133C608DD6B470298999D2733B392 (Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD*, const RuntimeMethod*))Enumerator_Dispose_m45953E5026A133C608DD6B470298999D2733B392_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::get_Current()
inline XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A Enumerator_get_Current_mD0D94B293CBE7F1F394B0682AF603A72FBED7B53_inline (Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD* __this, const RuntimeMethod* method)
{
	return ((  XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A (*) (Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD*, const RuntimeMethod*))Enumerator_get_Current_mD0D94B293CBE7F1F394B0682AF603A72FBED7B53_gshared_inline)(__this, method);
}
// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::get_nodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRNodeState_get_nodeType_mFC49286B25FF7732CE6CAF231A1DE5C083C13932 (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRNodeState::TryGetPosition(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetPosition_mC17C5DFEEA4062A6D91D7E252DD108829AC4E0A6 (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___position0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::MoveNext()
inline bool Enumerator_MoveNext_m554D09004F3CA1F349AC0B84F21996392C777B32 (Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD*, const RuntimeMethod*))Enumerator_MoveNext_m554D09004F3CA1F349AC0B84F21996392C777B32_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.XRNodeState::TryGetRotation(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetRotation_mA7F9597BE3AFE747BF2F95BF491779520FEF7301 (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 PaintIn3D.P3dInputManager::get_MousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 P3dInputManager_get_MousePosition_mD1C6B0C7DF52F1DFDB50E05C83F3DE89C1C36806 (const RuntimeMethod* method) ;
// System.Boolean PaintIn3D.P3dInputManager::PointOverGui(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dInputManager_PointOverGui_m99B6196ED7B6FC06753C4DE03C8DE925A7925CE6 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition0, const RuntimeMethod* method) ;
// UnityEngine.Camera PaintIn3D.P3dHelper::GetCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* P3dHelper_GetCamera_m380DFA085167B71A0C44443E851030D050528BD8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, float ___distance0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Void PaintIn3D.Examples.P3dVrManager::SetSimulatedState(UnityEngine.XR.XRNode,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager_SetSimulatedState_mC7A32ED73435B2CE2DB407351F03B6C9C1D1CED5 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___node0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m220E1BBBF9AF7A6D0EAC417FA07C820B2344FA1A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void PaintIn3D.Examples.P3dVrManager::UpdateTools(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager_UpdateTools_mAE06A10014E6272DB679510C3852A68818C24413 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___node0, const RuntimeMethod* method) ;
// System.Void PaintIn3D.Examples.P3dVrTool::GetTools(UnityEngine.XR.XRNode,System.Collections.Generic.List`1<PaintIn3D.Examples.P3dVrTool>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrTool_GetTools_m8806FC729C0AF344691C52DF860CF41A6906D84C (int32_t ___node0, List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1** ___tools1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PaintIn3D.Examples.P3dVrTool>::GetEnumerator()
inline Enumerator_tE5C8ECB968E9E68FC33D08F3411678FC8E49F335 List_1_GetEnumerator_mDD6C7A15BFD041A63D02FA44D4E3CB3834F0FC81 (List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE5C8ECB968E9E68FC33D08F3411678FC8E49F335 (*) (List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<PaintIn3D.Examples.P3dVrTool>::Dispose()
inline void Enumerator_Dispose_m697882349E9DB0FCCBE74B89FC86AA51239220BB (Enumerator_tE5C8ECB968E9E68FC33D08F3411678FC8E49F335* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE5C8ECB968E9E68FC33D08F3411678FC8E49F335*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<PaintIn3D.Examples.P3dVrTool>::get_Current()
inline P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* Enumerator_get_Current_m6D725B7323D511F39A1802B03A1B7A16DC79EE99_inline (Enumerator_tE5C8ECB968E9E68FC33D08F3411678FC8E49F335* __this, const RuntimeMethod* method)
{
	return ((  P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* (*) (Enumerator_tE5C8ECB968E9E68FC33D08F3411678FC8E49F335*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.XR.XRNode PaintIn3D.Examples.P3dVrTool::get_Node()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t P3dVrTool_get_Node_mFC3537859D75C3E99B3A5D1C33EFA66AC1BCC803_inline (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.Examples.P3dVrTool::UpdateGripped(PaintIn3D.Examples.P3dVrManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrTool_UpdateGripped_mFB61909458D9514D5F674D3D7CD13AF2BB19D6E1 (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* ___vrManager0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<PaintIn3D.Examples.P3dVrTool>::MoveNext()
inline bool Enumerator_MoveNext_m9EDB7C34843601BAA509CFAEFB06CB2A0B99233B (Enumerator_tE5C8ECB968E9E68FC33D08F3411678FC8E49F335* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE5C8ECB968E9E68FC33D08F3411678FC8E49F335*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void PaintIn3D.Examples.P3dVrManager/SimulatedState::.ctor(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedState__ctor_m12A5EEDF987568EDAC7F46ABFF147EB332C5DA12 (SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* __this, int32_t ___newNode0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dLinkedBehaviour`1<PaintIn3D.Examples.P3dVrManager>::.ctor()
inline void P3dLinkedBehaviour_1__ctor_mD9317E9DAA7B49C73AF2595D43B70C94ECB61C1D (P3dLinkedBehaviour_1_t41C6940491B78B53C39BDFBD3422B9DB38C1B494* __this, const RuntimeMethod* method)
{
	((  void (*) (P3dLinkedBehaviour_1_t41C6940491B78B53C39BDFBD3422B9DB38C1B494*, const RuntimeMethod*))P3dLinkedBehaviour_1__ctor_mC50F908D731B24092546E17EA21D0A6D6C9544CB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::.ctor()
inline void List_1__ctor_mD8E218B8766DD801CC5B221926CE287ADBE84E32 (List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87*, const RuntimeMethod*))List_1__ctor_mD8E218B8766DD801CC5B221926CE287ADBE84E32_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<PaintIn3D.Examples.P3dVrTool>::.ctor()
inline void List_1__ctor_m5E194B4E9EF4BB8E21979CCA019DAEF398342C8B (List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.Examples.P3dVrTool::Drop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrTool_Drop_m8D605279E95FC19EFFCF221B2871D39FD7C88BF7 (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<PaintIn3D.Examples.P3dVrTool> PaintIn3D.Examples.P3dVrTool::GetTools(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* P3dVrTool_GetTools_mA073D07EB79044B2B3396EA8C0E8C2B2CD67BECA (int32_t ___node0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<PaintIn3D.Examples.P3dVrTool>::IndexOf(T)
inline int32_t List_1_IndexOf_m73FAA9A8CCADBF277F87A58E1F9386957FECB512 (List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* __this, P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1*, P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<PaintIn3D.Examples.P3dVrTool>::get_Count()
inline int32_t List_1_get_Count_mACED5451FC866AA52F9E691E84A895EE9414599C_inline (List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<PaintIn3D.Examples.P3dVrTool>::get_Item(System.Int32)
inline P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* List_1_get_Item_mB96AB04FCA460A0138AFC57037063FF9157F7668 (List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* (*) (List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void PaintIn3D.Examples.P3dVrTool::Grab(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrTool_Grab_m88565C4D196F938FA0C8FAFFA4EE12AC796D60CC (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, int32_t ___newNode0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<PaintIn3D.Examples.P3dVrTool>::Clear()
inline void List_1_Clear_m504FE2693AD44B2C1534D2115FC812D866B07E13_inline (List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<PaintIn3D.Examples.P3dVrTool>::Add(T)
inline void List_1_Add_m1E59F78CFDF5019F6670699DD7ED77EB2943D58D_inline (List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* __this, P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1*, P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean PaintIn3D.Examples.P3dVrManager::GetTrigger(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dVrManager_GetTrigger_mDA23F2FAA2815A253C45AADAF56E463E7BC9DC80 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___node0, const RuntimeMethod* method) ;
// System.Boolean PaintIn3D.Examples.P3dVrManager::TryGetRotation(UnityEngine.XR.XRNode,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dVrManager_TryGetRotation_m1C14358F3AF543F913382E8361B3592C1F84BE04 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___node0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rotation1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean PaintIn3D.Examples.P3dVrManager::GetTriggerPressed(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dVrManager_GetTriggerPressed_mC14F58C8D28E64DEFD76ACE9833B854954DA2A8F (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___node0, const RuntimeMethod* method) ;
// System.Boolean PaintIn3D.Examples.P3dVrManager::GetTriggerReleased(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dVrManager_GetTriggerReleased_mC2E79B178186A76DF70BCD61BF6BD0573D0BAEA5 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___node0, const RuntimeMethod* method) ;
// System.Boolean PaintIn3D.Examples.P3dVrManager::GetGripPressed(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dVrManager_GetGripPressed_mFEFAEB0640B4020EF3A563F32BC8F6D6E0766CD7 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___node0, const RuntimeMethod* method) ;
// System.Boolean PaintIn3D.Examples.P3dVrManager::GetGripReleased(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dVrManager_GetGripReleased_m59D79D85EA50E1A97D4085E116CB06929C167F99 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___node0, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dLinkedBehaviour`1<PaintIn3D.Examples.P3dVrTool>::.ctor()
inline void P3dLinkedBehaviour_1__ctor_mDBB8BA0951D2471E661C7A0A2DBAC9F988BC1299 (P3dLinkedBehaviour_1_t43E8A9923C9A5DC25CE1A7AD8F3E18D7A4D51B33* __this, const RuntimeMethod* method)
{
	((  void (*) (P3dLinkedBehaviour_1_t43E8A9923C9A5DC25CE1A7AD8F3E18D7A4D51B33*, const RuntimeMethod*))P3dLinkedBehaviour_1__ctor_mC50F908D731B24092546E17EA21D0A6D6C9544CB_gshared)(__this, method);
}
// System.Int64 PaintIn3D.Examples.P3dChangeCounter::GetCount(System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChangeCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t P3dChangeCounter_GetCount_m3BED9025AF2FE78E5175A409EA4B539683D339D2 (RuntimeObject* ___counters0, const RuntimeMethod* method) ;
// System.Int64 PaintIn3D.Examples.P3dChangeCounter::GetTotal(System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChangeCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t P3dChangeCounter_GetTotal_m0A54769A9A3A395F582FADDF07DE8E10114A3847 (RuntimeObject* ___counters0, const RuntimeMethod* method) ;
// System.Single PaintIn3D.P3dHelper::Divide(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dHelper_Divide_m28D902114AA27F5ABDB388E5F750A121610E1A65 (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Color32>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Color32>::Dispose()
inline void NativeArray_1_Dispose_m91FFC8B88A790FFBEB65362E2925F5C675B1A9C6 (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D*, const RuntimeMethod*))NativeArray_1_Dispose_m91FFC8B88A790FFBEB65362E2925F5C675B1A9C6_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Color32>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m758EC83047117608085E10546B2054D8300A607A (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m758EC83047117608085E10546B2054D8300A607A_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Color32>::Copy(Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<T>)
inline void NativeArray_1_Copy_m7B89E95C500C16215128F9704F441235D18C2C75 (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___src0, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___dst1, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D, const RuntimeMethod*))NativeArray_1_Copy_m7B89E95C500C16215128F9704F441235D18C2C75_gshared)(___src0, ___dst1, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Color32>::.ctor(Unity.Collections.NativeArray`1<T>,Unity.Collections.Allocator)
inline void NativeArray_1__ctor_m8C851A2AEB6FF855EA6F3E0AC37DB90F7AD14AC6 (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* __this, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___array0, int32_t ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D*, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m8C851A2AEB6FF855EA6F3E0AC37DB90F7AD14AC6_gshared)(__this, ___array0, ___allocator1, method);
}
// System.Int32 PaintIn3D.P3dReader::get_DownsampleBoost()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t P3dReader_get_DownsampleBoost_mDB506481EC62604A391227A9F55F82ADFAFA23A0_inline (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<System.Byte>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_gshared)(__this, method);
}
// System.Void PaintIn3D.P3dPaintableTextureMonitor::InvokeOnUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintableTextureMonitor_InvokeOnUpdated_m973D9D449BBCF9E77928E5D4C65D69D9CE61D099 (P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dPaintableTextureMonitorMask::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintableTextureMonitorMask_OnEnable_m76650F2E7B61B2D118C1180F9A507C186EABA6A3 (P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<PaintIn3D.Examples.P3dChangeCounter>::AddLast(T)
inline LinkedListNode_1_t5B79FCCCB747EA1C7D52F3CF711154C956DBFE6D* LinkedList_1_AddLast_m3EC9FB56C5415A29F07C6656619A965F3BE00594 (LinkedList_1_tD84633A6C61B300EF3932D5FF9149A5EEC0242FA* __this, P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* ___value0, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_t5B79FCCCB747EA1C7D52F3CF711154C956DBFE6D* (*) (LinkedList_1_tD84633A6C61B300EF3932D5FF9149A5EEC0242FA*, P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD*, const RuntimeMethod*))LinkedList_1_AddLast_mF5239C871EADC44D51C6B621592A9CAC43449A2E_gshared)(__this, ___value0, method);
}
// System.Void System.Action`1<Unity.Collections.NativeArray`1<UnityEngine.Color32>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mD1DAA77F82DFC182C1D5CE9D323B1D05C2D1E4B7 (Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mD1DAA77F82DFC182C1D5CE9D323B1D05C2D1E4B7_gshared)(__this, ___object0, ___method1, method);
}
// System.Void PaintIn3D.P3dReader::add_OnComplete(System.Action`1<Unity.Collections.NativeArray`1<UnityEngine.Color32>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dReader_add_OnComplete_mDFFE350011A2C71EF1862BFE252020BAE6E0AAB4 (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* ___value0, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dPaintableTextureMonitorMask::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintableTextureMonitorMask_OnDisable_mCA845C2E965A853D95C020EEA9035E9273D3F3F3 (P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1<PaintIn3D.Examples.P3dChangeCounter>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
inline void LinkedList_1_Remove_mE751796C8AFDA7F9E6B97863D3FADBC42A70287D (LinkedList_1_tD84633A6C61B300EF3932D5FF9149A5EEC0242FA* __this, LinkedListNode_1_t5B79FCCCB747EA1C7D52F3CF711154C956DBFE6D* ___node0, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_tD84633A6C61B300EF3932D5FF9149A5EEC0242FA*, LinkedListNode_1_t5B79FCCCB747EA1C7D52F3CF711154C956DBFE6D*, const RuntimeMethod*))LinkedList_1_Remove_m6B592B94D9AEF003EAE59FCB5455DA67AB4E423C_gshared)(__this, ___node0, method);
}
// System.Void PaintIn3D.P3dReader::remove_OnComplete(System.Action`1<Unity.Collections.NativeArray`1<UnityEngine.Color32>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dReader_remove_OnComplete_m84EF0B0012144214AF3F074305792628C8EFB7D1 (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* ___value0, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dPaintableTextureMonitorMask::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintableTextureMonitorMask_OnDestroy_m9DDB895EA2A89C7E46033FB4C68D00D10D2EEAE7 (P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dReader::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dReader_Release_m5A459BB1F1801EBD3F1DD9CBDA94FB82079458F2 (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dPaintableTextureMonitorMask::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintableTextureMonitorMask_Update_mEFF1D6103AE6098302E0603E4E3835E21DC9C5D6 (P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dReader__ctor_m7488B54594DB3D8C8611D7641CE62F52CF90EBED (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, const RuntimeMethod* method) ;
// System.Boolean PaintIn3D.P3dReader::get_Requested()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool P3dReader_get_Requested_mDCD8CEB59E98149E15F50B8CFBA1DE1C77A13B26_inline (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, const RuntimeMethod* method) ;
// System.Boolean PaintIn3D.P3dPaintableTexture::get_Activated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool P3dPaintableTexture_get_Activated_m0BAD20D94A97B033796003EF1E0A781173CC205D_inline (P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture PaintIn3D.P3dPaintableTexture::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* P3dPaintableTexture_get_Current_m42C0BE96C6A74B703F1A64763F921D15752F5092_inline (P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* __this, const RuntimeMethod* method) ;
// System.Boolean PaintIn3D.P3dReader::NeedsUpdating<UnityEngine.Color32>(PaintIn3D.P3dReader,Unity.Collections.NativeArray`1<T>,UnityEngine.RenderTexture,System.Int32)
inline bool P3dReader_NeedsUpdating_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m76E0CA4BACFC6BCDFE18411F3269A1CDF5C0C8EB (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* ___reader0, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___array1, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___texture2, int32_t ___downsampleSteps3, const RuntimeMethod* method)
{
	return ((  bool (*) (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7*, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*, int32_t, const RuntimeMethod*))P3dReader_NeedsUpdating_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m76E0CA4BACFC6BCDFE18411F3269A1CDF5C0C8EB_gshared)(___reader0, ___array1, ___texture2, ___downsampleSteps3, method);
}
// UnityEngine.RenderTextureDescriptor UnityEngine.RenderTexture::get_descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 RenderTexture_get_descriptor_m2FABD5CF6CCF410D1311FCBC7C9D9ECDEE9C7CC2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_useMipMap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_useMipMap_m2A2A3BC4C8ECCC532AC33E7034502EB2AE242539 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture PaintIn3D.P3dHelper::GetRenderTexture(UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* P3dHelper_GetRenderTexture_m9C6FC5416865484352376DBED1A154468D7B327A (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___desc0, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommandReplace::Blit(UnityEngine.RenderTexture,UnityEngine.Texture,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommandReplace_Blit_mCFDC7EFA8CA2E3377BFEA446142DE888ED7FBF9F (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___renderTexture0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tint2, const RuntimeMethod* method) ;
// System.Int32 PaintIn3D.P3dPaintableTextureMonitor::get_DownsampleSteps()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t P3dPaintableTextureMonitor_get_DownsampleSteps_mC4B3A5AA635EC5AD96504D0A6974E7B927D7EFFB_inline (P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078* __this, const RuntimeMethod* method) ;
// System.Boolean PaintIn3D.P3dPaintableTextureMonitor::get_Async()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool P3dPaintableTextureMonitor_get_Async_m2CFE64AD61358D521DBD4E08885E52B38E8B582E_inline (P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dReader::Request(UnityEngine.RenderTexture,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dReader_Request_m638D53DBE2AAC0CB7AE55DA22A30214686FB4E0D (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___texture0, int32_t ___downsample1, bool ___async2, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture PaintIn3D.P3dHelper::ReleaseRenderTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* P3dHelper_ReleaseRenderTexture_m6562A8009CD4881E5118C3DB2DB67CDB54373C8F (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___renderTexture0, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dReader::UpdateRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dReader_UpdateRequest_m3F75484B2C09F1CE40DB17552B4384F90275FD52 (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dPaintableTextureMonitorMask::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintableTextureMonitorMask__ctor_m98BD8A6A0B69C149BF9ADB8A8D87F3C7B1DDA4AA (P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1<PaintIn3D.Examples.P3dChangeCounter>::.ctor()
inline void LinkedList_1__ctor_mC24F6AB494DD48362F3D146746DE37D35F206A47 (LinkedList_1_tD84633A6C61B300EF3932D5FF9149A5EEC0242FA* __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_tD84633A6C61B300EF3932D5FF9149A5EEC0242FA*, const RuntimeMethod*))LinkedList_1__ctor_m2732A2EC5597469086D48C79A12B3563DEA501C5_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) ;
// System.Int64 PaintIn3D.Examples.P3dChannelCounter::GetCountR(System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChannelCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t P3dChannelCounter_GetCountR_m057DBF90336BD28E2298E3C446E1B690E76A1DA9 (RuntimeObject* ___counters0, const RuntimeMethod* method) ;
// System.Int64 PaintIn3D.Examples.P3dChannelCounter::GetTotal(System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChannelCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t P3dChannelCounter_GetTotal_m27244980535DA925958FC415D4E4617A0FA9B933 (RuntimeObject* ___counters0, const RuntimeMethod* method) ;
// System.Int64 PaintIn3D.Examples.P3dChannelCounter::GetCountG(System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChannelCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t P3dChannelCounter_GetCountG_m44B8C2FF6C2B0748972E050C6681DF9499D98859 (RuntimeObject* ___counters0, const RuntimeMethod* method) ;
// System.Int64 PaintIn3D.Examples.P3dChannelCounter::GetCountB(System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChannelCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t P3dChannelCounter_GetCountB_m84FE7A52779ECC7EB5A86F6760A81A5AB7BE0EA0 (RuntimeObject* ___counters0, const RuntimeMethod* method) ;
// System.Int64 PaintIn3D.Examples.P3dChannelCounter::GetCountA(System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChannelCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t P3dChannelCounter_GetCountA_m93573DAEC8BA7DF1EE1374B2883D0B424F56DFB6 (RuntimeObject* ___counters0, const RuntimeMethod* method) ;
// System.Single PaintIn3D.Examples.P3dChannelCounter::get_RatioR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dChannelCounter_get_RatioR_m0D2E11217861559047C64ECBE94DC8ADAA632E2D (P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* __this, const RuntimeMethod* method) ;
// System.Single PaintIn3D.Examples.P3dChannelCounter::get_RatioG()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dChannelCounter_get_RatioG_mDD004ADB7CF68AD77288954478DCDA2519AFBE72 (P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* __this, const RuntimeMethod* method) ;
// System.Single PaintIn3D.Examples.P3dChannelCounter::get_RatioB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dChannelCounter_get_RatioB_m81E306181FCB678AC9898F1011AB0365CA4BA3FE (P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* __this, const RuntimeMethod* method) ;
// System.Single PaintIn3D.Examples.P3dChannelCounter::get_RatioA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dChannelCounter_get_RatioA_m6845C2633798E5AA7E273F72541006FB31C1ED67 (P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.LinkedList`1<PaintIn3D.Examples.P3dChannelCounter>::get_Count()
inline int32_t LinkedList_1_get_Count_m83CE6174B7B2D9E6B8734BFD3125E5EA488399B2_inline (LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA*, const RuntimeMethod*))LinkedList_1_get_Count_mBFF1AE23B10EDF501026201C0427AA5820AECD82_gshared_inline)(__this, method);
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Division_m9B1B8692D50C864CFA585BDF97FB6FBC18967D90_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<PaintIn3D.Examples.P3dChannelCounter>::AddLast(T)
inline LinkedListNode_1_t0D2393CE1A0C911186F3C49481250667FFAAF2E3* LinkedList_1_AddLast_m31E656F9095D940FCCAA2C8506DC24885E021FFB (LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA* __this, P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* ___value0, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_t0D2393CE1A0C911186F3C49481250667FFAAF2E3* (*) (LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA*, P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E*, const RuntimeMethod*))LinkedList_1_AddLast_mF5239C871EADC44D51C6B621592A9CAC43449A2E_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.LinkedList`1<PaintIn3D.Examples.P3dChannelCounter>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
inline void LinkedList_1_Remove_m7EF8F0A9DA4A1166B8EF0407725FE4CC6A1664A0 (LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA* __this, LinkedListNode_1_t0D2393CE1A0C911186F3C49481250667FFAAF2E3* ___node0, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA*, LinkedListNode_1_t0D2393CE1A0C911186F3C49481250667FFAAF2E3*, const RuntimeMethod*))LinkedList_1_Remove_m6B592B94D9AEF003EAE59FCB5455DA67AB4E423C_gshared)(__this, ___node0, method);
}
// System.Void System.Collections.Generic.LinkedList`1<PaintIn3D.Examples.P3dChannelCounter>::.ctor()
inline void LinkedList_1__ctor_mE1AAA66844BBC60CF5B2D4445D10759918B387EB (LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA* __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA*, const RuntimeMethod*))LinkedList_1__ctor_m2732A2EC5597469086D48C79A12B3563DEA501C5_gshared)(__this, method);
}
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<PaintIn3D.Examples.P3dColorCounter>::GetEnumerator()
inline Enumerator_t4966FBC08A6D138E206D01C5CACE30F3DC6CAFF4 LinkedList_1_GetEnumerator_m6EB4411FED5D2BE86657BE68FE82ED02989A3B3B (LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4966FBC08A6D138E206D01C5CACE30F3DC6CAFF4 (*) (LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3*, const RuntimeMethod*))LinkedList_1_GetEnumerator_m2522814971CB421FDF996D386A650A3F8FA0E30C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.LinkedList`1/Enumerator<PaintIn3D.Examples.P3dColorCounter>::Dispose()
inline void Enumerator_Dispose_mB93B0712585F8573C53A581CBF764ABE0D9DD909 (Enumerator_t4966FBC08A6D138E206D01C5CACE30F3DC6CAFF4* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4966FBC08A6D138E206D01C5CACE30F3DC6CAFF4*, const RuntimeMethod*))Enumerator_Dispose_m9E60B472E2E61202E9CFBED3DA607374973EA744_gshared)(__this, method);
}
// T System.Collections.Generic.LinkedList`1/Enumerator<PaintIn3D.Examples.P3dColorCounter>::get_Current()
inline P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* Enumerator_get_Current_m6A89916786518783D43F3BE06C36E8362E24EF58_inline (Enumerator_t4966FBC08A6D138E206D01C5CACE30F3DC6CAFF4* __this, const RuntimeMethod* method)
{
	return ((  P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* (*) (Enumerator_t4966FBC08A6D138E206D01C5CACE30F3DC6CAFF4*, const RuntimeMethod*))Enumerator_get_Current_mCD39BA1871E5D5BE52D8AA0B27886D9B5B10BBF9_gshared_inline)(__this, method);
}
// System.Int32 PaintIn3D.P3dPaintableTextureMonitorMask::get_Total()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t P3dPaintableTextureMonitorMask_get_Total_mADDA805EFBB74AD8E4E0E362E134D6151A859D43_inline (P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.LinkedList`1/Enumerator<PaintIn3D.Examples.P3dColorCounter>::MoveNext()
inline bool Enumerator_MoveNext_mF56BF766027F43574DF0E532AD03DED513838FFD (Enumerator_t4966FBC08A6D138E206D01C5CACE30F3DC6CAFF4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4966FBC08A6D138E206D01C5CACE30F3DC6CAFF4*, const RuntimeMethod*))Enumerator_MoveNext_m5148B3CE498B6E84B883D3EB4A7A080238A2609D_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<PaintIn3D.Examples.P3dColor/Contribution>::get_Count()
inline int32_t List_1_get_Count_m1094FA3C98391B17EF9FFA8222124EB833B45C19_inline (List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<PaintIn3D.Examples.P3dColor/Contribution>::get_Item(System.Int32)
inline Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859* List_1_get_Item_mDF8E9334A6499AE276A37CC149ADABA010CA6A2F (List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859* (*) (List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<PaintIn3D.Examples.P3dColor/Contribution>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m595B6DF07BD1855CAEB99489B41790667EEBF02D (List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Int32 PaintIn3D.Examples.P3dColor::get_Total()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dColor_get_Total_mC582490CA50C652CFB768D0BB9FA3CA49B786022 (P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* __this, const RuntimeMethod* method) ;
// System.Int32 PaintIn3D.Examples.P3dColor::get_Solid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dColor_get_Solid_mA0AC3D7DCEBD131E1CEAA26E83932FB7D8B901AC (P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* __this, const RuntimeMethod* method) ;
// System.Boolean PaintIn3D.Examples.P3dColor::TryGetContribution(PaintIn3D.Examples.P3dColorCounter,PaintIn3D.Examples.P3dColor/Contribution&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dColor_TryGetContribution_mBA6D486E2530D5A2C6E3E84B8D635EA644FEEB42 (P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* __this, P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* ___counter0, Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859** ___contribution1, const RuntimeMethod* method) ;
// System.Void PaintIn3D.Examples.P3dColor/Contribution::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Contribution__ctor_mFDF3A443C6EC7656B46C68146951E1625467CC47 (Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<PaintIn3D.Examples.P3dColor/Contribution>::Add(T)
inline void List_1_Add_m24AED0BC3D6ACBB4811D869AFB547824F547583E_inline (List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB* __this, Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB*, Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<PaintIn3D.Examples.P3dColor/Contribution>::.ctor()
inline void List_1__ctor_m6ACE03F2B723C1C5BDE884B6D4229B6C9F922A63 (List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void PaintIn3D.P3dLinkedBehaviour`1<PaintIn3D.Examples.P3dColor>::.ctor()
inline void P3dLinkedBehaviour_1__ctor_m040F17E1E5975213DB081BAB69319A0EE575C4A8 (P3dLinkedBehaviour_1_tA79BAA47E81203531E02EB6482C4E9B7C6CFAA53* __this, const RuntimeMethod* method)
{
	((  void (*) (P3dLinkedBehaviour_1_tA79BAA47E81203531E02EB6482C4E9B7C6CFAA53*, const RuntimeMethod*))P3dLinkedBehaviour_1__ctor_mC50F908D731B24092546E17EA21D0A6D6C9544CB_gshared)(__this, method);
}
// System.Int32 PaintIn3D.Examples.P3dColorCounter::Count(PaintIn3D.Examples.P3dColor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dColorCounter_Count_mB9FD7A05DA1B5E3E893E30F9E996B934E2953416 (P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* __this, P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* ___color0, const RuntimeMethod* method) ;
// System.Int64 PaintIn3D.Examples.P3dColorCounter::GetCount(PaintIn3D.Examples.P3dColor,System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dColorCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t P3dColorCounter_GetCount_mEAC286C6D4964E06AA507160BD069B48C8B16AB5 (P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* ___color0, RuntimeObject* ___counters1, const RuntimeMethod* method) ;
// System.Int64 PaintIn3D.Examples.P3dColorCounter::GetTotal(System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dColorCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t P3dColorCounter_GetTotal_mA39C4FAE62ED0B805AAE59918900D5DB702D1CD6 (RuntimeObject* ___counters0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PaintIn3D.Examples.P3dColorCounter/Contribution>::GetEnumerator()
inline Enumerator_t851FBDBED59037AF58113A5E0FD2D28F34041AAC List_1_GetEnumerator_m925BDD019B208B30EAB57A2B10E7363B08D60F8A (List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t851FBDBED59037AF58113A5E0FD2D28F34041AAC (*) (List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<PaintIn3D.Examples.P3dColorCounter/Contribution>::Dispose()
inline void Enumerator_Dispose_m95D57BD0EA974806357341F6956D1B52FB6831DA (Enumerator_t851FBDBED59037AF58113A5E0FD2D28F34041AAC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t851FBDBED59037AF58113A5E0FD2D28F34041AAC*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<PaintIn3D.Examples.P3dColorCounter/Contribution>::get_Current()
inline Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* Enumerator_get_Current_m4BCC017ACDA5A93A8D4D361E143865E43FBEA79D_inline (Enumerator_t851FBDBED59037AF58113A5E0FD2D28F34041AAC* __this, const RuntimeMethod* method)
{
	return ((  Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* (*) (Enumerator_t851FBDBED59037AF58113A5E0FD2D28F34041AAC*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<PaintIn3D.Examples.P3dColorCounter/Contribution>::MoveNext()
inline bool Enumerator_MoveNext_m092580E213DE07B370B5BE79ED8FDB42DCA7454B (Enumerator_t851FBDBED59037AF58113A5E0FD2D28F34041AAC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t851FBDBED59037AF58113A5E0FD2D28F34041AAC*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<PaintIn3D.Examples.P3dColorCounter>::AddLast(T)
inline LinkedListNode_1_t150D7EC2BBDC599E0A03AC76F023431B7944B1E6* LinkedList_1_AddLast_m5617E0987CE960D429D991AADA76C157DCFFC353 (LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3* __this, P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* ___value0, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_t150D7EC2BBDC599E0A03AC76F023431B7944B1E6* (*) (LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3*, P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64*, const RuntimeMethod*))LinkedList_1_AddLast_mF5239C871EADC44D51C6B621592A9CAC43449A2E_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.LinkedList`1<PaintIn3D.Examples.P3dColorCounter>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
inline void LinkedList_1_Remove_mCCB091CAE0D60E8AB4ABCB477634CD0FA804239B (LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3* __this, LinkedListNode_1_t150D7EC2BBDC599E0A03AC76F023431B7944B1E6* ___node0, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3*, LinkedListNode_1_t150D7EC2BBDC599E0A03AC76F023431B7944B1E6*, const RuntimeMethod*))LinkedList_1_Remove_m6B592B94D9AEF003EAE59FCB5455DA67AB4E423C_gshared)(__this, ___node0, method);
}
// System.Void PaintIn3D.Examples.P3dColorCounter::Contribute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dColorCounter_Contribute_m147D3FA7109874CAC321BF8DCFE98FF205868186 (P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* __this, int32_t ___scale0, const RuntimeMethod* method) ;
// System.Void PaintIn3D.Examples.P3dColorCounter::PrepareContributions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dColorCounter_PrepareContributions_m9450E855460E5662653D94855021DE8A928E7891 (P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<PaintIn3D.Examples.P3dColorCounter/Contribution>::get_Item(System.Int32)
inline Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* List_1_get_Item_m4368DEC3632E4A9599E17B77628DA6A358E57158 (List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* (*) (List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<PaintIn3D.Examples.P3dColorCounter/Contribution>::get_Count()
inline int32_t List_1_get_Count_mD30F985D04E6229E20D18BAF321F82684852D354_inline (List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<PaintIn3D.Examples.P3dColorCounter/Contribution>::Push(T)
inline void Stack_1_Push_mFDEFCB3C5644D98E0199DCE420A6BC612146320A (Stack_1_t561497B98B40FBF796C24CE6E484D4571592E83B* __this, Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t561497B98B40FBF796C24CE6E484D4571592E83B*, Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<PaintIn3D.Examples.P3dColorCounter/Contribution>::Clear()
inline void List_1_Clear_m1208F9A66BD7DED4A7CEA0E2801BD82C7DB13940_inline (List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void PaintIn3D.Examples.P3dColorCounter::ClearContributions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dColorCounter_ClearContributions_mA4A564698D9846C064CD1497648CA7B1ED35C09B (P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<PaintIn3D.Examples.P3dColorCounter/Contribution>::get_Count()
inline int32_t Stack_1_get_Count_m57B32B18715A0DE1D649067DB37209E61B748A07_inline (Stack_1_t561497B98B40FBF796C24CE6E484D4571592E83B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t561497B98B40FBF796C24CE6E484D4571592E83B*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
// System.Void PaintIn3D.Examples.P3dColorCounter/Contribution::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Contribution__ctor_m265EBAB5306C6F35528EA4B7714BC8A4E1945A68 (Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<PaintIn3D.Examples.P3dColorCounter/Contribution>::Pop()
inline Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* Stack_1_Pop_m2995CFBCEA086B1C5EF111779A909583F2883634 (Stack_1_t561497B98B40FBF796C24CE6E484D4571592E83B* __this, const RuntimeMethod* method)
{
	return ((  Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* (*) (Stack_1_t561497B98B40FBF796C24CE6E484D4571592E83B*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// UnityEngine.Color PaintIn3D.Examples.P3dColor::get_Color()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F P3dColor_get_Color_mA1B0417A7D2F26C173E12AD7F709923C9A19CA6E_inline (P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<PaintIn3D.Examples.P3dColorCounter/Contribution>::Add(T)
inline void List_1_Add_mE69ACAD75069F79230063722F7CF396B587FA82F_inline (List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA* __this, Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA*, Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void PaintIn3D.Examples.P3dColor::Contribute(PaintIn3D.Examples.P3dColorCounter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dColor_Contribute_m38859475E793FECF4B72C34038C420572320F193 (P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* __this, P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* ___counter0, int32_t ___solid1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<PaintIn3D.Examples.P3dColorCounter/Contribution>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mCF9510FBCAD8C28F64666D97CA5CE55E63385554 (List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<PaintIn3D.Examples.P3dColorCounter/Contribution>::.ctor()
inline void List_1__ctor_mBF165C67CA84AC2699F3C5229BC7D02124BEC170 (List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.LinkedList`1<PaintIn3D.Examples.P3dColorCounter>::.ctor()
inline void LinkedList_1__ctor_m575C749969EAD92F3047285669A5D2861BE9A10F (LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3* __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3*, const RuntimeMethod*))LinkedList_1__ctor_m2732A2EC5597469086D48C79A12B3563DEA501C5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<PaintIn3D.Examples.P3dColorCounter/Contribution>::.ctor()
inline void Stack_1__ctor_mA052B786CB7E9A6421750103DC69F34096E92EA9 (Stack_1_t561497B98B40FBF796C24CE6E484D4571592E83B* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t561497B98B40FBF796C24CE6E484D4571592E83B*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommand::SetState(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommand_SetState_m0C81A54F3052088E285F1708825AE29FF6441B5B (P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D* __this, bool ___preview0, int32_t ___priority1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommandFill::SetMaterial(PaintIn3D.P3dBlendMode,UnityEngine.Texture,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommandFill_SetMaterial_m981E45BE77F3F9B94C9B08407F733C2E6EB49FAC (P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B* __this, P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B ___blendMode0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, float ___opacity3, float ___minimum4, const RuntimeMethod* method) ;
// PaintIn3D.P3dPaintable PaintIn3D.P3dPaintableTexture::get_Paintable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00* P3dPaintableTexture_get_Paintable_m64B0576F293F60E2B8427B8D1390F0D0DA9E8EB7 (P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* __this, const RuntimeMethod* method) ;
// PaintIn3D.P3dCommand PaintIn3D.P3dPaintableManager::Submit(PaintIn3D.P3dCommand,PaintIn3D.P3dModel,PaintIn3D.P3dPaintableTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D* P3dPaintableManager_Submit_m8AA1CBCFFF81BC4CC046875FC8CDEAECC4F87B38 (P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D* ___command0, P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* ___model1, P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* ___paintableTexture2, const RuntimeMethod* method) ;
// UnityEngine.Vector4 PaintIn3D.P3dHelper::IndexToVector(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 P3dHelper_IndexToVector_m4ADA054981DB1A4CC9E26D5D2A1547DCE7DAB19A (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_one_m0AA55064B3C47D9D94E5BC4EE6AEC5B6E4F2D151_inline (const RuntimeMethod* method) ;
// PaintIn3D.P3dBlendMode PaintIn3D.P3dBlendMode::ReplaceOriginal(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B P3dBlendMode_ReplaceOriginal_m585AE6C584D5F90B71F3E2E6FFE01F46B6B10135 (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___channels0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PaintIn3D.Examples.P3dPaintMultiplayer/<SimulateNetworkTransmission>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSimulateNetworkTransmissionU3Ed__7__ctor_mDC0E4372E6843336ED09C8D5F7802F2C4B43196E (U3CSimulateNetworkTransmissionU3Ed__7_tC1A1B5CE4A1DFA256FE3AC757E01216424E4BA9D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dPaintMultiplayer/<SimulateNetworkTransmission>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSimulateNetworkTransmissionU3Ed__7_System_IDisposable_Dispose_m44F5445127DE4F3F78FC8C97E8E9CCE7BD8559A7 (U3CSimulateNetworkTransmissionU3Ed__7_tC1A1B5CE4A1DFA256FE3AC757E01216424E4BA9D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PaintIn3D.Examples.P3dPaintMultiplayer/<SimulateNetworkTransmission>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSimulateNetworkTransmissionU3Ed__7_MoveNext_mF878978D7E6E3363A4F98B8E5D644165009C3B62 (U3CSimulateNetworkTransmissionU3Ed__7_tC1A1B5CE4A1DFA256FE3AC757E01216424E4BA9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisIHitLine_tDB6FE4E05C06DC1DA90E8CBD17E3B85D4BCA00E6_m08B6EE60601E9B3614775F6AFB10D93D078BEB38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHitLine_tDB6FE4E05C06DC1DA90E8CBD17E3B85D4BCA00E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	P3dPaintMultiplayer_t290BA03D064ECACE9D05810C27A01EE24A434E46* V_1 = NULL;
	IHitLineU5BU5D_t3A5AA56274ED58F155D9F459EE0E09B847263B91* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		P3dPaintMultiplayer_t290BA03D064ECACE9D05810C27A01EE24A434E46* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSecondsRealtime(delay);
		P3dPaintMultiplayer_t290BA03D064ECACE9D05810C27A01EE24A434E46* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___delay_4;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_6 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// foreach (var hitLine in GetComponentsInChildren<IHitLine>())
		P3dPaintMultiplayer_t290BA03D064ECACE9D05810C27A01EE24A434E46* L_7 = V_1;
		NullCheck(L_7);
		IHitLineU5BU5D_t3A5AA56274ED58F155D9F459EE0E09B847263B91* L_8;
		L_8 = Component_GetComponentsInChildren_TisIHitLine_tDB6FE4E05C06DC1DA90E8CBD17E3B85D4BCA00E6_m08B6EE60601E9B3614775F6AFB10D93D078BEB38(L_7, Component_GetComponentsInChildren_TisIHitLine_tDB6FE4E05C06DC1DA90E8CBD17E3B85D4BCA00E6_m08B6EE60601E9B3614775F6AFB10D93D078BEB38_RuntimeMethod_var);
		V_2 = L_8;
		V_3 = 0;
		goto IL_0093;
	}

IL_004a:
	{
		// foreach (var hitLine in GetComponentsInChildren<IHitLine>())
		IHitLineU5BU5D_t3A5AA56274ED58F155D9F459EE0E09B847263B91* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = L_12;
		// if ((Object)hitLine != this)
		RuntimeObject* L_13 = V_4;
		P3dPaintMultiplayer_t290BA03D064ECACE9D05810C27A01EE24A434E46* L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)CastclassClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)), L_14, NULL);
		if (!L_15)
		{
			goto IL_008f;
		}
	}
	{
		// hitLine.HandleHitLine(preview, priority, pressure, seed, position, endPosition, rotation);
		RuntimeObject* L_16 = V_4;
		bool L_17 = __this->___preview_3;
		int32_t L_18 = __this->___priority_4;
		float L_19 = __this->___pressure_5;
		int32_t L_20 = __this->___seed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___position_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___endPosition_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = __this->___rotation_9;
		NullCheck(L_16);
		InterfaceActionInvoker7< bool, int32_t, float, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(0 /* System.Void PaintIn3D.IHitLine::HandleHitLine(System.Boolean,System.Int32,System.Single,System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion) */, IHitLine_tDB6FE4E05C06DC1DA90E8CBD17E3B85D4BCA00E6_il2cpp_TypeInfo_var, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23);
	}

IL_008f:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0093:
	{
		// foreach (var hitLine in GetComponentsInChildren<IHitLine>())
		int32_t L_25 = V_3;
		IHitLineU5BU5D_t3A5AA56274ED58F155D9F459EE0E09B847263B91* L_26 = V_2;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_004a;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object PaintIn3D.Examples.P3dPaintMultiplayer/<SimulateNetworkTransmission>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSimulateNetworkTransmissionU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m00237D7B20DE9C2B605BD6B7DC8AE3B9244218CE (U3CSimulateNetworkTransmissionU3Ed__7_tC1A1B5CE4A1DFA256FE3AC757E01216424E4BA9D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dPaintMultiplayer/<SimulateNetworkTransmission>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSimulateNetworkTransmissionU3Ed__7_System_Collections_IEnumerator_Reset_mCFDD31E7B107D3C0B4AC8D0D8AF9D3EEA0C8DD93 (U3CSimulateNetworkTransmissionU3Ed__7_tC1A1B5CE4A1DFA256FE3AC757E01216424E4BA9D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSimulateNetworkTransmissionU3Ed__7_System_Collections_IEnumerator_Reset_mCFDD31E7B107D3C0B4AC8D0D8AF9D3EEA0C8DD93_RuntimeMethod_var)));
	}
}
// System.Object PaintIn3D.Examples.P3dPaintMultiplayer/<SimulateNetworkTransmission>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSimulateNetworkTransmissionU3Ed__7_System_Collections_IEnumerator_get_Current_mED0F1517212DB992DFBFDE830EDF5460F2407A13 (U3CSimulateNetworkTransmissionU3Ed__7_tC1A1B5CE4A1DFA256FE3AC757E01216424E4BA9D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void PaintIn3D.Examples.P3dProceduralSetup::set_Material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dProceduralSetup_set_Material_m4640C89487B640C771E6B035A4B2EC97F6A59AFF (P3dProceduralSetup_t904E8060654D0776D005B775B00C06B430ED9A2A* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) 
{
	{
		// public Material Material { set { material = value; } get { return material; } } [SerializeField] private Material material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___value0;
		__this->___material_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___material_4), (void*)L_0);
		// public Material Material { set { material = value; } get { return material; } } [SerializeField] private Material material;
		return;
	}
}
// UnityEngine.Material PaintIn3D.Examples.P3dProceduralSetup::get_Material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* P3dProceduralSetup_get_Material_m10D0B8E3D0AF389034561CD8D0F00811F94E91E4 (P3dProceduralSetup_t904E8060654D0776D005B775B00C06B430ED9A2A* __this, const RuntimeMethod* method) 
{
	{
		// public Material Material { set { material = value; } get { return material; } } [SerializeField] private Material material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___material_4;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dProceduralSetup::set_Size(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dProceduralSetup_set_Size_mBCF9B5ABEEFC334325A818DAC481B7B2B77CD8A7 (P3dProceduralSetup_t904E8060654D0776D005B775B00C06B430ED9A2A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Size { set { size = value; } get { return size; } } [SerializeField] private float size = 1.0f;
		float L_0 = ___value0;
		__this->___size_5 = L_0;
		// public float Size { set { size = value; } get { return size; } } [SerializeField] private float size = 1.0f;
		return;
	}
}
// System.Single PaintIn3D.Examples.P3dProceduralSetup::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dProceduralSetup_get_Size_m4A7C5354B1D449B3771D4D810DE5A0082B3F3BCB (P3dProceduralSetup_t904E8060654D0776D005B775B00C06B430ED9A2A* __this, const RuntimeMethod* method) 
{
	{
		// public float Size { set { size = value; } get { return size; } } [SerializeField] private float size = 1.0f;
		float L_0 = __this->___size_5;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dProceduralSetup::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dProceduralSetup_Awake_mDC890EA6F07550242779B6CA45F41AB48121430E (P3dProceduralSetup_t904E8060654D0776D005B775B00C06B430ED9A2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFE0E36B3C1670C308B04C39EDC76838DD59826B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisP3dMaterialCloner_tBF64157DF290AB5A6EABBAE00D440FC78C639876_m1C559E953C8656119575406791F7CD597D9E9515_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisP3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_m7358A5B037798E91FE1AEC0B42019364A1EBCFE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisP3dPaintable_tC5471B5C328513F1757B292031417E5287321A00_m9DB613DF40EECDEF695F50F8FA3621554FB2CC2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateMesh();
		P3dProceduralSetup_UpdateMesh_mCBA735E991B493616C8BAEB2A2B94E87814F20BB(__this, NULL);
		// gameObject.AddComponent<MeshFilter>().sharedMesh = generatedMesh;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_1;
		L_1 = GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94(L_0, GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = __this->___generatedMesh_6;
		NullCheck(L_1);
		MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_1, L_2, NULL);
		// gameObject.AddComponent<MeshCollider>().sharedMesh = generatedMesh;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_4;
		L_4 = GameObject_AddComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFE0E36B3C1670C308B04C39EDC76838DD59826B7(L_3, GameObject_AddComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFE0E36B3C1670C308B04C39EDC76838DD59826B7_RuntimeMethod_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5 = __this->___generatedMesh_6;
		NullCheck(L_4);
		MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C(L_4, L_5, NULL);
		// gameObject.AddComponent<MeshRenderer>().sharedMaterial = material;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_7;
		L_7 = GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D(L_6, GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___material_4;
		NullCheck(L_7);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_7, L_8, NULL);
		// gameObject.AddComponent<P3dPaintable>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00* L_10;
		L_10 = GameObject_AddComponent_TisP3dPaintable_tC5471B5C328513F1757B292031417E5287321A00_m9DB613DF40EECDEF695F50F8FA3621554FB2CC2B(L_9, GameObject_AddComponent_TisP3dPaintable_tC5471B5C328513F1757B292031417E5287321A00_m9DB613DF40EECDEF695F50F8FA3621554FB2CC2B_RuntimeMethod_var);
		// var materialCloner = gameObject.AddComponent<P3dMaterialCloner>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_11);
		P3dMaterialCloner_tBF64157DF290AB5A6EABBAE00D440FC78C639876* L_12;
		L_12 = GameObject_AddComponent_TisP3dMaterialCloner_tBF64157DF290AB5A6EABBAE00D440FC78C639876_m1C559E953C8656119575406791F7CD597D9E9515(L_11, GameObject_AddComponent_TisP3dMaterialCloner_tBF64157DF290AB5A6EABBAE00D440FC78C639876_m1C559E953C8656119575406791F7CD597D9E9515_RuntimeMethod_var);
		// materialCloner.Index = 0;
		NullCheck(L_12);
		P3dMaterialCloner_set_Index_m93EE92BC0A9B138A59FBACC624C8B9946E8C8417_inline(L_12, 0, NULL);
		// var paintableTexture = gameObject.AddComponent<P3dPaintableTexture>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_13);
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_14;
		L_14 = GameObject_AddComponent_TisP3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_m7358A5B037798E91FE1AEC0B42019364A1EBCFE1(L_13, GameObject_AddComponent_TisP3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_m7358A5B037798E91FE1AEC0B42019364A1EBCFE1_RuntimeMethod_var);
		// paintableTexture.Slot = new P3dSlot(0, "_MainTex");
		P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C L_15;
		memset((&L_15), 0, sizeof(L_15));
		P3dSlot__ctor_m94D018FBF673769031508CFD1818315C221FE68A((&L_15), 0, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, /*hidden argument*/NULL);
		NullCheck(L_14);
		P3dPaintableTexture_set_Slot_m9B8A8230E8A783BD9E25C84127F6AFA01FBA0518_inline(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dProceduralSetup::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dProceduralSetup_OnDestroy_mA2F25DF9EA960ACDB2A1686A6C8D561E9458CB99 (P3dProceduralSetup_t904E8060654D0776D005B775B00C06B430ED9A2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(generatedMesh);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___generatedMesh_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dProceduralSetup::UpdateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dProceduralSetup_UpdateMesh_mCBA735E991B493616C8BAEB2A2B94E87814F20BB (P3dProceduralSetup_t904E8060654D0776D005B775B00C06B430ED9A2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF2EA118D0E8276A0B92A18EF96F6167BD01AC673____4F3A974D03B4939FC26A965844D8E5F89E151FF80F59BB8AF511CC703F5DA157_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (generatedMesh == null)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___generatedMesh_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// generatedMesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_2, NULL);
		__this->___generatedMesh_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___generatedMesh_6), (void*)L_2);
		goto IL_0026;
	}

IL_001b:
	{
		// generatedMesh.Clear();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3 = __this->___generatedMesh_6;
		NullCheck(L_3);
		Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0(L_3, NULL);
	}

IL_0026:
	{
		// generatedMesh.vertices = new Vector3[] { new Vector3(-size, -size), new Vector3(+size, -size), new Vector3(-size, +size), new Vector3(+size, +size) };
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4 = __this->___generatedMesh_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = L_5;
		float L_7 = __this->___size_5;
		float L_8 = __this->___size_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_9), ((-L_7)), ((-L_8)), /*hidden argument*/NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_9);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = L_6;
		float L_11 = __this->___size_5;
		float L_12 = __this->___size_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_13), L_11, ((-L_12)), /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_13);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = L_10;
		float L_15 = __this->___size_5;
		float L_16 = __this->___size_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_17), ((-L_15)), L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_17);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = L_14;
		float L_19 = __this->___size_5;
		float L_20 = __this->___size_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_21), L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_21);
		NullCheck(L_4);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_4, L_18, NULL);
		// generatedMesh.uv = new Vector2[] { new Vector2(0.0f, 0.0f), new Vector2(1.0f, 0.0f), new Vector2(0.0f, 1.0f), new Vector2(1.0f, 1.0f) };
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_22 = __this->___generatedMesh_6;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_23 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_24 = L_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_25), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_25);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_26 = L_24;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_27), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_27);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_28 = L_26;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_29), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_29);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_30 = L_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_31);
		NullCheck(L_22);
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_22, L_30, NULL);
		// generatedMesh.triangles = new int[] { 0, 1, 2, 3, 2, 1 };
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_32 = __this->___generatedMesh_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = L_33;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_35 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF2EA118D0E8276A0B92A18EF96F6167BD01AC673____4F3A974D03B4939FC26A965844D8E5F89E151FF80F59BB8AF511CC703F5DA157_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_34, L_35, NULL);
		NullCheck(L_32);
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_32, L_34, NULL);
		// generatedMesh.RecalculateBounds();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_36 = __this->___generatedMesh_6;
		NullCheck(L_36);
		Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B(L_36, NULL);
		// generatedMesh.RecalculateNormals();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_37 = __this->___generatedMesh_6;
		NullCheck(L_37);
		Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B(L_37, NULL);
		// generatedMesh.RecalculateTangents();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_38 = __this->___generatedMesh_6;
		NullCheck(L_38);
		Mesh_RecalculateTangents_m92AC413FAF889C5E811D86DCE0C25ED4625825EC(L_38, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dProceduralSetup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dProceduralSetup__ctor_m783B7F776846691774D3DA764BC0745A5D3060DD (P3dProceduralSetup_t904E8060654D0776D005B775B00C06B430ED9A2A* __this, const RuntimeMethod* method) 
{
	{
		// public float Size { set { size = value; } get { return size; } } [SerializeField] private float size = 1.0f;
		__this->___size_5 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PaintIn3D.Examples.P3dReadColorEvent::set_Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dReadColorEvent_set_Color_mC2E5246D7C47488801E97B4DB7B85A4526A2433D (P3dReadColorEvent_tFD6B133BD45667E22AE8B1BFCA79DAE5C2413018* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___color_4 = L_0;
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		return;
	}
}
// UnityEngine.Color PaintIn3D.Examples.P3dReadColorEvent::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F P3dReadColorEvent_get_Color_mDB357F96D9E6142D7CFAD0EA0C63820D013F9496 (P3dReadColorEvent_tFD6B133BD45667E22AE8B1BFCA79DAE5C2413018* __this, const RuntimeMethod* method) 
{
	{
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_4;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dReadColorEvent::set_Threshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dReadColorEvent_set_Threshold_mF1384C7C5802541A7E4812FF9B45BF577C6C1478 (P3dReadColorEvent_tFD6B133BD45667E22AE8B1BFCA79DAE5C2413018* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Threshold { set { threshold = value; } get { return threshold; } } [Range(0.0f, 1.0f)] [SerializeField] private float threshold = 0.1f;
		float L_0 = ___value0;
		__this->___threshold_5 = L_0;
		// public float Threshold { set { threshold = value; } get { return threshold; } } [Range(0.0f, 1.0f)] [SerializeField] private float threshold = 0.1f;
		return;
	}
}
// System.Single PaintIn3D.Examples.P3dReadColorEvent::get_Threshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dReadColorEvent_get_Threshold_m51E2FCB7DB2090D6B8954F723C742FCCCF2ED92D (P3dReadColorEvent_tFD6B133BD45667E22AE8B1BFCA79DAE5C2413018* __this, const RuntimeMethod* method) 
{
	{
		// public float Threshold { set { threshold = value; } get { return threshold; } } [Range(0.0f, 1.0f)] [SerializeField] private float threshold = 0.1f;
		float L_0 = __this->___threshold_5;
		return L_0;
	}
}
// PaintIn3D.Examples.P3dReadColorEvent/ColorEvent PaintIn3D.Examples.P3dReadColorEvent::get_OnColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorEvent_tA8C1E814C5CD8FFA0BC95C19D8254FAF51771F06* P3dReadColorEvent_get_OnColor_mE485971B0B4EEA9D9C65E1664E0CFC95E7F5A91D (P3dReadColorEvent_tFD6B133BD45667E22AE8B1BFCA79DAE5C2413018* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorEvent_tA8C1E814C5CD8FFA0BC95C19D8254FAF51771F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ColorEvent OnColor { get { if (onColor == null) onColor = new ColorEvent(); return onColor; } } [SerializeField] private ColorEvent onColor;
		ColorEvent_tA8C1E814C5CD8FFA0BC95C19D8254FAF51771F06* L_0 = __this->___onColor_6;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public ColorEvent OnColor { get { if (onColor == null) onColor = new ColorEvent(); return onColor; } } [SerializeField] private ColorEvent onColor;
		ColorEvent_tA8C1E814C5CD8FFA0BC95C19D8254FAF51771F06* L_1 = (ColorEvent_tA8C1E814C5CD8FFA0BC95C19D8254FAF51771F06*)il2cpp_codegen_object_new(ColorEvent_tA8C1E814C5CD8FFA0BC95C19D8254FAF51771F06_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ColorEvent__ctor_mD82D8BC7590B3DB8D1BFFDC364D8F179CCD3E933(L_1, NULL);
		__this->___onColor_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onColor_6), (void*)L_1);
	}

IL_0013:
	{
		// public ColorEvent OnColor { get { if (onColor == null) onColor = new ColorEvent(); return onColor; } } [SerializeField] private ColorEvent onColor;
		ColorEvent_tA8C1E814C5CD8FFA0BC95C19D8254FAF51771F06* L_2 = __this->___onColor_6;
		return L_2;
	}
}
// System.Void PaintIn3D.Examples.P3dReadColorEvent::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dReadColorEvent_OnEnable_mD5C59ECEFC9B52A98D5B28105F77604D34862116 (P3dReadColorEvent_tFD6B133BD45667E22AE8B1BFCA79DAE5C2413018* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisP3dReadColor_tA9EB11219665FC16322C180818DDDB09606D0581_m5372876342A8851328870A4BF6D654CD91AE541F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dReadColorEvent_HandleColor_m71243E4CF7AF3B36453D173460ECF2A2D267AC6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mD935AA7032F987581BD350C04192FBE8C25DD4EE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cachedReadColor = GetComponent<P3dReadColor>();
		P3dReadColor_tA9EB11219665FC16322C180818DDDB09606D0581* L_0;
		L_0 = Component_GetComponent_TisP3dReadColor_tA9EB11219665FC16322C180818DDDB09606D0581_m5372876342A8851328870A4BF6D654CD91AE541F(__this, Component_GetComponent_TisP3dReadColor_tA9EB11219665FC16322C180818DDDB09606D0581_m5372876342A8851328870A4BF6D654CD91AE541F_RuntimeMethod_var);
		__this->___cachedReadColor_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachedReadColor_7), (void*)L_0);
		// cachedReadColor.OnColor.AddListener(HandleColor);
		P3dReadColor_tA9EB11219665FC16322C180818DDDB09606D0581* L_1 = __this->___cachedReadColor_7;
		NullCheck(L_1);
		ColorEvent_t871C324F6981EB1A0CDE0FC4F559E313017CA4C9* L_2;
		L_2 = P3dReadColor_get_OnColor_m9E9F1D9B7BFEF599DBFD1B55F7D13C56EF2CFC3F(L_1, NULL);
		UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F* L_3 = (UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F*)il2cpp_codegen_object_new(UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_m561D1879521834F2C181DF56266AB10500F1C9F6(L_3, __this, (intptr_t)((void*)P3dReadColorEvent_HandleColor_m71243E4CF7AF3B36453D173460ECF2A2D267AC6B_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mD935AA7032F987581BD350C04192FBE8C25DD4EE(L_2, L_3, UnityEvent_1_AddListener_mD935AA7032F987581BD350C04192FBE8C25DD4EE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dReadColorEvent::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dReadColorEvent_OnDisable_mE9329C0DC30FC63948B663965C24B9177B136B81 (P3dReadColorEvent_tFD6B133BD45667E22AE8B1BFCA79DAE5C2413018* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dReadColorEvent_HandleColor_m71243E4CF7AF3B36453D173460ECF2A2D267AC6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mFDBCDCDF71B4A7800D9FA8B2E9815B8B08D5C302_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cachedReadColor.OnColor.RemoveListener(HandleColor);
		P3dReadColor_tA9EB11219665FC16322C180818DDDB09606D0581* L_0 = __this->___cachedReadColor_7;
		NullCheck(L_0);
		ColorEvent_t871C324F6981EB1A0CDE0FC4F559E313017CA4C9* L_1;
		L_1 = P3dReadColor_get_OnColor_m9E9F1D9B7BFEF599DBFD1B55F7D13C56EF2CFC3F(L_0, NULL);
		UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F* L_2 = (UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F*)il2cpp_codegen_object_new(UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_m561D1879521834F2C181DF56266AB10500F1C9F6(L_2, __this, (intptr_t)((void*)P3dReadColorEvent_HandleColor_m71243E4CF7AF3B36453D173460ECF2A2D267AC6B_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_mFDBCDCDF71B4A7800D9FA8B2E9815B8B08D5C302(L_1, L_2, UnityEvent_1_RemoveListener_mFDBCDCDF71B4A7800D9FA8B2E9815B8B08D5C302_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dReadColorEvent::HandleColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dReadColorEvent_HandleColor_m71243E4CF7AF3B36453D173460ECF2A2D267AC6B (P3dReadColorEvent_tFD6B133BD45667E22AE8B1BFCA79DAE5C2413018* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___read0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// var color32     = (Color32)color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1;
		L_1 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_0, NULL);
		V_0 = L_1;
		// var read32      = (Color32)read;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___read0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_3;
		L_3 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_2, NULL);
		V_1 = L_3;
		// var threshold32 = (int)(threshold * 255.0f);
		float L_4 = __this->___threshold_5;
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_4, (255.0f))));
		// var distance    = 0;
		// distance += System.Math.Abs(color32.r - read32.r);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_5 = V_0;
		uint8_t L_6 = L_5.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7 = V_1;
		uint8_t L_8 = L_7.___r_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_8)));
		// distance += System.Math.Abs(color32.g - read32.g);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_10 = V_0;
		uint8_t L_11 = L_10.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12 = V_1;
		uint8_t L_13 = L_12.___g_2;
		int32_t L_14;
		L_14 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_13)));
		// distance += System.Math.Abs(color32.b - read32.b);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_15 = V_0;
		uint8_t L_16 = L_15.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_1;
		uint8_t L_18 = L_17.___b_3;
		int32_t L_19;
		L_19 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_18)));
		// distance += System.Math.Abs(color32.a - read32.a);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_20 = V_0;
		uint8_t L_21 = L_20.___a_4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_22 = V_1;
		uint8_t L_23 = L_22.___a_4;
		int32_t L_24;
		L_24 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_23)));
		// if (distance <= threshold32)
		int32_t L_25 = V_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(0, L_9)), L_14)), L_19)), L_24))) > ((int32_t)L_25)))
		{
			goto IL_008a;
		}
	}
	{
		// if (onColor != null)
		ColorEvent_tA8C1E814C5CD8FFA0BC95C19D8254FAF51771F06* L_26 = __this->___onColor_6;
		if (!L_26)
		{
			goto IL_008a;
		}
	}
	{
		// onColor.Invoke(color);
		ColorEvent_tA8C1E814C5CD8FFA0BC95C19D8254FAF51771F06* L_27 = __this->___onColor_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = __this->___color_4;
		NullCheck(L_27);
		UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D(L_27, L_28, UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dReadColorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dReadColorEvent__ctor_mC68D422DA2ED7250E757B1EC9C0F556986DB83DA (P3dReadColorEvent_tFD6B133BD45667E22AE8B1BFCA79DAE5C2413018* __this, const RuntimeMethod* method) 
{
	{
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___color_4 = L_0;
		// public float Threshold { set { threshold = value; } get { return threshold; } } [Range(0.0f, 1.0f)] [SerializeField] private float threshold = 0.1f;
		__this->___threshold_5 = (0.100000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PaintIn3D.Examples.P3dReadColorEvent/ColorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorEvent__ctor_mD82D8BC7590B3DB8D1BFFDC364D8F179CCD3E933 (ColorEvent_tA8C1E814C5CD8FFA0BC95C19D8254FAF51771F06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D(__this, UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_RuntimeMethod_var);
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
// System.Void PaintIn3D.Examples.P3dRotate::set_Space(UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dRotate_set_Space_mA6F9B2803610B15CF48ED035430732056C977A56 (P3dRotate_t82A87FB3C78B3AA94251CA239B1B96DE976594DF* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public Space Space { set { space = value; } get { return space; } } [SerializeField] private Space space = Space.Self;
		int32_t L_0 = ___value0;
		__this->___space_4 = L_0;
		// public Space Space { set { space = value; } get { return space; } } [SerializeField] private Space space = Space.Self;
		return;
	}
}
// UnityEngine.Space PaintIn3D.Examples.P3dRotate::get_Space()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dRotate_get_Space_m10AA522E4732B7F8211AD04D52DDF1F65A27AC39 (P3dRotate_t82A87FB3C78B3AA94251CA239B1B96DE976594DF* __this, const RuntimeMethod* method) 
{
	{
		// public Space Space { set { space = value; } get { return space; } } [SerializeField] private Space space = Space.Self;
		int32_t L_0 = __this->___space_4;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dRotate::set_PerSecond(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dRotate_set_PerSecond_mC44C12FDCE05360530932074D6E2F1994D006ED1 (P3dRotate_t82A87FB3C78B3AA94251CA239B1B96DE976594DF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 PerSecond { set { perSecond = value; } get { return perSecond; } } [SerializeField] private Vector3 perSecond;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___perSecond_5 = L_0;
		// public Vector3 PerSecond { set { perSecond = value; } get { return perSecond; } } [SerializeField] private Vector3 perSecond;
		return;
	}
}
// UnityEngine.Vector3 PaintIn3D.Examples.P3dRotate::get_PerSecond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P3dRotate_get_PerSecond_mE4475519DFA21C8EDA41146AB15BB041F14D9D62 (P3dRotate_t82A87FB3C78B3AA94251CA239B1B96DE976594DF* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 PerSecond { set { perSecond = value; } get { return perSecond; } } [SerializeField] private Vector3 perSecond;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___perSecond_5;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dRotate_Update_m5C21C9AC1D89FC8855553D423050943E4ACAE66E (P3dRotate_t82A87FB3C78B3AA94251CA239B1B96DE976594DF* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(perSecond * Time.deltaTime, space);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___perSecond_5;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		int32_t L_4 = __this->___space_4;
		NullCheck(L_0);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_0, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dRotate__ctor_mED1C5C2D3AEABBB3F727C4E12A677C53ED0F19EC (P3dRotate_t82A87FB3C78B3AA94251CA239B1B96DE976594DF* __this, const RuntimeMethod* method) 
{
	{
		// public Space Space { set { space = value; } get { return space; } } [SerializeField] private Space space = Space.Self;
		__this->___space_4 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PaintIn3D.Examples.P3dToggleScript::set_Key(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dToggleScript_set_Key_m120DC6F52A263E345E0952D595AD4460A130BF07 (P3dToggleScript_t9A721E1AC018BBFA21D8F1E3B7246E2CD3BCC5CE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public KeyCode Key { set { key = value; } get { return key; } } [SerializeField] private KeyCode key = KeyCode.Mouse0;
		int32_t L_0 = ___value0;
		__this->___key_4 = L_0;
		// public KeyCode Key { set { key = value; } get { return key; } } [SerializeField] private KeyCode key = KeyCode.Mouse0;
		return;
	}
}
// UnityEngine.KeyCode PaintIn3D.Examples.P3dToggleScript::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dToggleScript_get_Key_m3059182A7BFEE6183D16EBC07795D1C649AB769C (P3dToggleScript_t9A721E1AC018BBFA21D8F1E3B7246E2CD3BCC5CE* __this, const RuntimeMethod* method) 
{
	{
		// public KeyCode Key { set { key = value; } get { return key; } } [SerializeField] private KeyCode key = KeyCode.Mouse0;
		int32_t L_0 = __this->___key_4;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dToggleScript::set_Target(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dToggleScript_set_Target_mDDD36EE7045CE2BF15CDB75D073FA79EB8E8EC0F (P3dToggleScript_t9A721E1AC018BBFA21D8F1E3B7246E2CD3BCC5CE* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___value0, const RuntimeMethod* method) 
{
	{
		// public MonoBehaviour Target { set { target = value; } get { return target; } } [SerializeField] private MonoBehaviour target;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = ___value0;
		__this->___target_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_5), (void*)L_0);
		// public MonoBehaviour Target { set { target = value; } get { return target; } } [SerializeField] private MonoBehaviour target;
		return;
	}
}
// UnityEngine.MonoBehaviour PaintIn3D.Examples.P3dToggleScript::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* P3dToggleScript_get_Target_mCCAA66AB83FE59556878A2930984E928686B3782 (P3dToggleScript_t9A721E1AC018BBFA21D8F1E3B7246E2CD3BCC5CE* __this, const RuntimeMethod* method) 
{
	{
		// public MonoBehaviour Target { set { target = value; } get { return target; } } [SerializeField] private MonoBehaviour target;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->___target_5;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dToggleScript::set_StoreStates(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dToggleScript_set_StoreStates_m2C9A727737D32FCED9E3B7CA012506FD140291C5 (P3dToggleScript_t9A721E1AC018BBFA21D8F1E3B7246E2CD3BCC5CE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool StoreStates { set { storeStates = value; } get { return storeStates; } } [SerializeField] protected bool storeStates;
		bool L_0 = ___value0;
		__this->___storeStates_6 = L_0;
		// public bool StoreStates { set { storeStates = value; } get { return storeStates; } } [SerializeField] protected bool storeStates;
		return;
	}
}
// System.Boolean PaintIn3D.Examples.P3dToggleScript::get_StoreStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dToggleScript_get_StoreStates_mD884B05984C59541A6472D693FAC6B04E3A7DD31 (P3dToggleScript_t9A721E1AC018BBFA21D8F1E3B7246E2CD3BCC5CE* __this, const RuntimeMethod* method) 
{
	{
		// public bool StoreStates { set { storeStates = value; } get { return storeStates; } } [SerializeField] protected bool storeStates;
		bool L_0 = __this->___storeStates_6;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dToggleScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dToggleScript_Update_m255C6E33684D21A654A7A309D674BBF408B41BC4 (P3dToggleScript_t9A721E1AC018BBFA21D8F1E3B7246E2CD3BCC5CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dInputManager_t1BD83FB878655C53FC056C82B91EF07A56041B66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (target != null)
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->___target_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		// if (P3dInputManager.IsPressed(key) == true)
		int32_t L_2 = __this->___key_4;
		il2cpp_codegen_runtime_class_init_inline(P3dInputManager_t1BD83FB878655C53FC056C82B91EF07A56041B66_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = P3dInputManager_IsPressed_m5E1C8BB1F7EE413A27990940C1FD0DFA27B6FF8C(L_2, NULL);
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		// if (storeStates == true && target.enabled == false)
		bool L_4 = __this->___storeStates_6;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_5 = __this->___target_5;
		NullCheck(L_5);
		bool L_6;
		L_6 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_5, NULL);
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		// P3dStateManager.StoreAllStates();
		P3dStateManager_StoreAllStates_m6826D145BC61570B8E611A286518036D9D160B6A(NULL);
	}

IL_0035:
	{
		// target.enabled = true;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_7 = __this->___target_5;
		NullCheck(L_7);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)1, NULL);
		return;
	}

IL_0042:
	{
		// target.enabled = false;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_8 = __this->___target_5;
		NullCheck(L_8);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_8, (bool)0, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dToggleScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dToggleScript__ctor_mDE9165A0616A000D4A534767663644DE47C26ABC (P3dToggleScript_t9A721E1AC018BBFA21D8F1E3B7246E2CD3BCC5CE* __this, const RuntimeMethod* method) 
{
	{
		// public KeyCode Key { set { key = value; } get { return key; } } [SerializeField] private KeyCode key = KeyCode.Mouse0;
		__this->___key_4 = ((int32_t)323);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PaintIn3D.Examples.P3dTranslate::set_Space(UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dTranslate_set_Space_m1F0490045B8DB905D4EAD154BAEBCE21F1678F82 (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public Space Space { set { space = value; } get { return space; } } [SerializeField] private Space space = Space.Self;
		int32_t L_0 = ___value0;
		__this->___space_4 = L_0;
		// public Space Space { set { space = value; } get { return space; } } [SerializeField] private Space space = Space.Self;
		return;
	}
}
// UnityEngine.Space PaintIn3D.Examples.P3dTranslate::get_Space()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dTranslate_get_Space_m1780C48704A8E610FDD83BCAF8F370E8A2204FDD (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, const RuntimeMethod* method) 
{
	{
		// public Space Space { set { space = value; } get { return space; } } [SerializeField] private Space space = Space.Self;
		int32_t L_0 = __this->___space_4;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dTranslate::set_Multiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dTranslate_set_Multiplier_m26C2F992CE775BE4CE174D18D23D83571A083566 (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Multiplier { set { multiplier = value; } get { return multiplier; } } [SerializeField] private float multiplier = 1.0f;
		float L_0 = ___value0;
		__this->___multiplier_5 = L_0;
		// public float Multiplier { set { multiplier = value; } get { return multiplier; } } [SerializeField] private float multiplier = 1.0f;
		return;
	}
}
// System.Single PaintIn3D.Examples.P3dTranslate::get_Multiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dTranslate_get_Multiplier_mCCD94575DB5F66D55A45F8D7CE22241DC693B06C (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, const RuntimeMethod* method) 
{
	{
		// public float Multiplier { set { multiplier = value; } get { return multiplier; } } [SerializeField] private float multiplier = 1.0f;
		float L_0 = __this->___multiplier_5;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dTranslate::set_Damping(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dTranslate_set_Damping_mEE75D973465FD239DABF91CE583B64E80F16722C (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Damping { set { damping = value; } get { return damping; } } [FSA("dampening")] [SerializeField] private float damping = 10.0f;
		float L_0 = ___value0;
		__this->___damping_6 = L_0;
		// public float Damping { set { damping = value; } get { return damping; } } [FSA("dampening")] [SerializeField] private float damping = 10.0f;
		return;
	}
}
// System.Single PaintIn3D.Examples.P3dTranslate::get_Damping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dTranslate_get_Damping_m0D2BC23D04C32987E73B6A2B0F443B5250A8888E (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, const RuntimeMethod* method) 
{
	{
		// public float Damping { set { damping = value; } get { return damping; } } [FSA("dampening")] [SerializeField] private float damping = 10.0f;
		float L_0 = __this->___damping_6;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dTranslate::set_PerSecond(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dTranslate_set_PerSecond_m0E44D70C25F9AC2B6F28B85E048EB6142CB0DA95 (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 PerSecond { set { perSecond = value; } get { return perSecond; } } [SerializeField] private Vector3 perSecond;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___perSecond_7 = L_0;
		// public Vector3 PerSecond { set { perSecond = value; } get { return perSecond; } } [SerializeField] private Vector3 perSecond;
		return;
	}
}
// UnityEngine.Vector3 PaintIn3D.Examples.P3dTranslate::get_PerSecond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P3dTranslate_get_PerSecond_mDC8D05997AF09076110198C7B6F11B7F955DD4F8 (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 PerSecond { set { perSecond = value; } get { return perSecond; } } [SerializeField] private Vector3 perSecond;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___perSecond_7;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dTranslate::TranslateX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dTranslate_TranslateX_mEA979DF2F891501FBE58611822E1F3D9AD29D769 (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, float ___magnitude0, const RuntimeMethod* method) 
{
	{
		// Translate(Vector3.right * magnitude);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		float L_1 = ___magnitude0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_1, NULL);
		P3dTranslate_Translate_m7C14FEBFD43735BD36CDA1BA212F8752A0248683(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dTranslate::TranslateY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dTranslate_TranslateY_m375246447C5703B9ADE597293F002FB783DC3A4E (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, float ___magnitude0, const RuntimeMethod* method) 
{
	{
		// Translate(Vector3.up * magnitude);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_1 = ___magnitude0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_1, NULL);
		P3dTranslate_Translate_m7C14FEBFD43735BD36CDA1BA212F8752A0248683(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dTranslate::TranslateZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dTranslate_TranslateZ_m9335C86421CECF4A6C2A3B958F05F46088FBC7F8 (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, float ___magnitude0, const RuntimeMethod* method) 
{
	{
		// Translate(Vector3.forward * magnitude);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_1 = ___magnitude0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_1, NULL);
		P3dTranslate_Translate_m7C14FEBFD43735BD36CDA1BA212F8752A0248683(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dTranslate::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dTranslate_Translate_m7C14FEBFD43735BD36CDA1BA212F8752A0248683 (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	{
		// if (Space == Space.Self)
		int32_t L_0;
		L_0 = P3dTranslate_get_Space_m1780C48704A8E610FDD83BCAF8F370E8A2204FDD_inline(__this, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		// vector = transform.TransformVector(vector);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98(L_1, L_2, NULL);
		___vector0 = L_3;
	}

IL_0017:
	{
		// TranslateWorld(vector);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		P3dTranslate_TranslateWorld_m82FF7779D23BE15B24D2BA9CBDBA694C7268FC1A(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dTranslate::TranslateWorld(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dTranslate_TranslateWorld_m82FF7779D23BE15B24D2BA9CBDBA694C7268FC1A (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	{
		// remainingDelta += vector * Multiplier;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___remainingDelta_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___vector0;
		float L_2;
		L_2 = P3dTranslate_get_Multiplier_mCCD94575DB5F66D55A45F8D7CE22241DC693B06C_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_3, NULL);
		__this->___remainingDelta_8 = L_4;
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dTranslate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dTranslate_Update_mCD10410B0AB1FDBF6E4C80D0A644221BF26D1E6B (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var factor   = P3dHelper.DampenFactor(Damping, Time.deltaTime);
		float L_0;
		L_0 = P3dTranslate_get_Damping_m0D2BC23D04C32987E73B6A2B0F443B5250A8888E_inline(__this, NULL);
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		il2cpp_codegen_runtime_class_init_inline(P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = P3dHelper_DampenFactor_m25BC0A89681F5444A5D55D1D4CF8FCB9B20EEED3(L_0, L_1, NULL);
		V_0 = L_2;
		// var newDelta = Vector3.Lerp(remainingDelta, Vector3.zero, factor);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___remainingDelta_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_3, L_4, L_5, NULL);
		V_1 = L_6;
		// transform.position += remainingDelta - newDelta;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_7;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___remainingDelta_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_10, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_12, NULL);
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_13, NULL);
		// transform.Translate(perSecond * Time.deltaTime, space);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___perSecond_7;
		float L_16;
		L_16 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		int32_t L_18 = __this->___space_4;
		NullCheck(L_14);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(L_14, L_17, L_18, NULL);
		// remainingDelta = newDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		__this->___remainingDelta_8 = L_19;
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dTranslate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dTranslate__ctor_mF470B3F24556F0B464C77A44C0BB3A64FA8FD9D7 (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, const RuntimeMethod* method) 
{
	{
		// public Space Space { set { space = value; } get { return space; } } [SerializeField] private Space space = Space.Self;
		__this->___space_4 = 1;
		// public float Multiplier { set { multiplier = value; } get { return multiplier; } } [SerializeField] private float multiplier = 1.0f;
		__this->___multiplier_5 = (1.0f);
		// public float Damping { set { damping = value; } get { return damping; } } [FSA("dampening")] [SerializeField] private float damping = 10.0f;
		__this->___damping_6 = (10.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PaintIn3D.Examples.P3dUpgradeEventSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dUpgradeEventSystem__ctor_mB27CC78A1C07F09F5F47456E2EDCF60E0B042015 (P3dUpgradeEventSystem_t25DD677E23BD83CEFE670EE5D2310FF5B3E57A2D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PaintIn3D.Examples.P3dVrManager::set_GrabDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager_set_GrabDistance_m2E4A180B8C037EDCEC8382D5C3FAB1249C07E562 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float GrabDistance { set { grabDistance = value; } get { return grabDistance; } } [SerializeField] private float grabDistance = 0.3f;
		float L_0 = ___value0;
		__this->___grabDistance_8 = L_0;
		// public float GrabDistance { set { grabDistance = value; } get { return grabDistance; } } [SerializeField] private float grabDistance = 0.3f;
		return;
	}
}
// System.Single PaintIn3D.Examples.P3dVrManager::get_GrabDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dVrManager_get_GrabDistance_m5465C40DED2A7D0FD34E05B063B1D38F1976F011 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, const RuntimeMethod* method) 
{
	{
		// public float GrabDistance { set { grabDistance = value; } get { return grabDistance; } } [SerializeField] private float grabDistance = 0.3f;
		float L_0 = __this->___grabDistance_8;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dVrManager::set_SimulatedLeftTrigger(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager_set_SimulatedLeftTrigger_m291AB426E7A194091E95C3E643E6FCDAFC78DF9F (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public KeyCode SimulatedLeftTrigger { set { simulatedLeftTrigger = value; } get { return simulatedLeftTrigger; } } [SerializeField] private KeyCode simulatedLeftTrigger = KeyCode.Mouse0;
		int32_t L_0 = ___value0;
		__this->___simulatedLeftTrigger_9 = L_0;
		// public KeyCode SimulatedLeftTrigger { set { simulatedLeftTrigger = value; } get { return simulatedLeftTrigger; } } [SerializeField] private KeyCode simulatedLeftTrigger = KeyCode.Mouse0;
		return;
	}
}
// UnityEngine.KeyCode PaintIn3D.Examples.P3dVrManager::get_SimulatedLeftTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dVrManager_get_SimulatedLeftTrigger_m7F9EB08A7353F1A83632D5A293DABBEF1292402D (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, const RuntimeMethod* method) 
{
	{
		// public KeyCode SimulatedLeftTrigger { set { simulatedLeftTrigger = value; } get { return simulatedLeftTrigger; } } [SerializeField] private KeyCode simulatedLeftTrigger = KeyCode.Mouse0;
		int32_t L_0 = __this->___simulatedLeftTrigger_9;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dVrManager::set_SimulatedLeftGrip(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager_set_SimulatedLeftGrip_mCA3DD5495D91E127B58838E6D2A57486164E8FEC (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public KeyCode SimulatedLeftGrip { set { simulatedLeftGrip = value; } get { return simulatedLeftGrip; } } [SerializeField] private KeyCode simulatedLeftGrip = KeyCode.LeftControl;
		int32_t L_0 = ___value0;
		__this->___simulatedLeftGrip_10 = L_0;
		// public KeyCode SimulatedLeftGrip { set { simulatedLeftGrip = value; } get { return simulatedLeftGrip; } } [SerializeField] private KeyCode simulatedLeftGrip = KeyCode.LeftControl;
		return;
	}
}
// UnityEngine.KeyCode PaintIn3D.Examples.P3dVrManager::get_SimulatedLeftGrip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dVrManager_get_SimulatedLeftGrip_mC54B166929C26A06DD47E57FA3A50AC595617452 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, const RuntimeMethod* method) 
{
	{
		// public KeyCode SimulatedLeftGrip { set { simulatedLeftGrip = value; } get { return simulatedLeftGrip; } } [SerializeField] private KeyCode simulatedLeftGrip = KeyCode.LeftControl;
		int32_t L_0 = __this->___simulatedLeftGrip_10;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dVrManager::set_SimulatedRightTrigger(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager_set_SimulatedRightTrigger_m26752721D84AE95DDF56F8DA3E05CC5C8BBC06B8 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public KeyCode SimulatedRightTrigger { set { simulatedRightTrigger = value; } get { return simulatedRightTrigger; } } [SerializeField] private KeyCode simulatedRightTrigger = KeyCode.Mouse1;
		int32_t L_0 = ___value0;
		__this->___simulatedRightTrigger_11 = L_0;
		// public KeyCode SimulatedRightTrigger { set { simulatedRightTrigger = value; } get { return simulatedRightTrigger; } } [SerializeField] private KeyCode simulatedRightTrigger = KeyCode.Mouse1;
		return;
	}
}
// UnityEngine.KeyCode PaintIn3D.Examples.P3dVrManager::get_SimulatedRightTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dVrManager_get_SimulatedRightTrigger_mCE97349F2C542596F1AD6FB754920326E43C069C (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, const RuntimeMethod* method) 
{
	{
		// public KeyCode SimulatedRightTrigger { set { simulatedRightTrigger = value; } get { return simulatedRightTrigger; } } [SerializeField] private KeyCode simulatedRightTrigger = KeyCode.Mouse1;
		int32_t L_0 = __this->___simulatedRightTrigger_11;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dVrManager::set_SimulatedRightGrip(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager_set_SimulatedRightGrip_mB4DC5F43339304C9DFEFC8608908777BC41E1C46 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public KeyCode SimulatedRightGrip { set { simulatedRightGrip = value; } get { return simulatedRightGrip; } } [SerializeField] private KeyCode simulatedRightGrip = KeyCode.RightControl;
		int32_t L_0 = ___value0;
		__this->___simulatedRightGrip_12 = L_0;
		// public KeyCode SimulatedRightGrip { set { simulatedRightGrip = value; } get { return simulatedRightGrip; } } [SerializeField] private KeyCode simulatedRightGrip = KeyCode.RightControl;
		return;
	}
}
// UnityEngine.KeyCode PaintIn3D.Examples.P3dVrManager::get_SimulatedRightGrip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dVrManager_get_SimulatedRightGrip_m58574676CFC258E5740B54E3F2971F60354A31B6 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, const RuntimeMethod* method) 
{
	{
		// public KeyCode SimulatedRightGrip { set { simulatedRightGrip = value; } get { return simulatedRightGrip; } } [SerializeField] private KeyCode simulatedRightGrip = KeyCode.RightControl;
		int32_t L_0 = __this->___simulatedRightGrip_12;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dVrManager::set_SimulatedTilt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager_set_SimulatedTilt_m8F268BC3AE0C769E08490DC5CE4F609EBF2C68FF (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 SimulatedTilt { set { simulatedTilt = value; } get { return simulatedTilt; } } [SerializeField] private Vector3 simulatedTilt = new Vector3(0.0f, -15.0f, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___simulatedTilt_13 = L_0;
		// public Vector3 SimulatedTilt { set { simulatedTilt = value; } get { return simulatedTilt; } } [SerializeField] private Vector3 simulatedTilt = new Vector3(0.0f, -15.0f, 0.0f);
		return;
	}
}
// UnityEngine.Vector3 PaintIn3D.Examples.P3dVrManager::get_SimulatedTilt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P3dVrManager_get_SimulatedTilt_m64993935CB3E25E612D3FFBD0ABCA79791C8B3B9 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 SimulatedTilt { set { simulatedTilt = value; } get { return simulatedTilt; } } [SerializeField] private Vector3 simulatedTilt = new Vector3(0.0f, -15.0f, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___simulatedTilt_13;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dVrManager::set_SimulatedOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager_set_SimulatedOffset_m8DF98C8813F5D9B34CB776D2BFA5AD04A627E467 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 SimulatedOffset { set { simulatedOffset = value; } get { return simulatedOffset; } } [SerializeField] private Vector3 simulatedOffset = new Vector3(0.0f, 0.0f, -0.2f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___simulatedOffset_14 = L_0;
		// public Vector3 SimulatedOffset { set { simulatedOffset = value; } get { return simulatedOffset; } } [SerializeField] private Vector3 simulatedOffset = new Vector3(0.0f, 0.0f, -0.2f);
		return;
	}
}
// UnityEngine.Vector3 PaintIn3D.Examples.P3dVrManager::get_SimulatedOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P3dVrManager_get_SimulatedOffset_mB6BBD841D9E58E6F6A1D2CCBDC0AE4B807306F63 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 SimulatedOffset { set { simulatedOffset = value; } get { return simulatedOffset; } } [SerializeField] private Vector3 simulatedOffset = new Vector3(0.0f, 0.0f, -0.2f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___simulatedOffset_14;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dVrManager::set_SimulatedDistanceMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager_set_SimulatedDistanceMax_m5E0C90DD520C7C1FA1DAA65355D8AEFEE77938FF (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float SimulatedDistanceMax { set { simulatedReach = value; } get { return simulatedReach; } } [SerializeField] private float simulatedReach = 1.0f;
		float L_0 = ___value0;
		__this->___simulatedReach_15 = L_0;
		// public float SimulatedDistanceMax { set { simulatedReach = value; } get { return simulatedReach; } } [SerializeField] private float simulatedReach = 1.0f;
		return;
	}
}
// System.Single PaintIn3D.Examples.P3dVrManager::get_SimulatedDistanceMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dVrManager_get_SimulatedDistanceMax_mA881E02AD28EA09791F3E6CA4118DE22717F29D7 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, const RuntimeMethod* method) 
{
	{
		// public float SimulatedDistanceMax { set { simulatedReach = value; } get { return simulatedReach; } } [SerializeField] private float simulatedReach = 1.0f;
		float L_0 = __this->___simulatedReach_15;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dVrManager::set_SimulatedEyeOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager_set_SimulatedEyeOffset_m1AA120BD402C17B46EF9C4D1A58CA01E8843933A (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 SimulatedEyeOffset { set { simulatedEyeOffset = value; } get { return simulatedEyeOffset; } } [SerializeField] private Vector3 simulatedEyeOffset = new Vector3(-0.0325f, 0.0f, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___simulatedEyeOffset_16 = L_0;
		// public Vector3 SimulatedEyeOffset { set { simulatedEyeOffset = value; } get { return simulatedEyeOffset; } } [SerializeField] private Vector3 simulatedEyeOffset = new Vector3(-0.0325f, 0.0f, 0.0f);
		return;
	}
}
// UnityEngine.Vector3 PaintIn3D.Examples.P3dVrManager::get_SimulatedEyeOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P3dVrManager_get_SimulatedEyeOffset_mD0CC1B8A45A36619F2C7BB8D070406CE109D034B (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 SimulatedEyeOffset { set { simulatedEyeOffset = value; } get { return simulatedEyeOffset; } } [SerializeField] private Vector3 simulatedEyeOffset = new Vector3(-0.0325f, 0.0f, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___simulatedEyeOffset_16;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dVrManager::set_SimulatedNormalInfluence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager_set_SimulatedNormalInfluence_m58CEDA8E1E23CC8CC8A1F9545A3323BFBD62CD2B (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float SimulatedNormalInfluence { set { simulatedNormalInfluence = value; } get { return simulatedNormalInfluence; } } [Range(0.0f, 1.0f)] [SerializeField] private float simulatedNormalInfluence = 0.25f;
		float L_0 = ___value0;
		__this->___simulatedNormalInfluence_17 = L_0;
		// public float SimulatedNormalInfluence { set { simulatedNormalInfluence = value; } get { return simulatedNormalInfluence; } } [Range(0.0f, 1.0f)] [SerializeField] private float simulatedNormalInfluence = 0.25f;
		return;
	}
}
// System.Single PaintIn3D.Examples.P3dVrManager::get_SimulatedNormalInfluence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dVrManager_get_SimulatedNormalInfluence_mA0F5793234771C470B211F7FC65302276CF37E1D (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, const RuntimeMethod* method) 
{
	{
		// public float SimulatedNormalInfluence { set { simulatedNormalInfluence = value; } get { return simulatedNormalInfluence; } } [Range(0.0f, 1.0f)] [SerializeField] private float simulatedNormalInfluence = 0.25f;
		float L_0 = __this->___simulatedNormalInfluence_17;
		return L_0;
	}
}
// System.Boolean PaintIn3D.Examples.P3dVrManager::get_IsSimulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dVrManager_get_IsSimulation_m4BA2663C0A2BAB7484654FA8467CD01DC1604750 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, const RuntimeMethod* method) 
{
	{
		// return XRSettings.enabled == false;
		bool L_0;
		L_0 = XRSettings_get_enabled_mC22ABF5BF7D835DAB861A1FA384DBB8904D15E70(NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void PaintIn3D.Examples.P3dVrManager::SetRightTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager_SetRightTrigger_m8CB80C73E6C7537B1CA30BD736F5A1D5B5AF04E9 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// RightTrigger = value;
		bool L_0 = ___value0;
		__this->___RightTrigger_22 = L_0;
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dVrManager::SetLeftTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager_SetLeftTrigger_mA475FB5D8DDEA47FDFADCC425DB95785B2044B19 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// LeftTrigger = value;
		bool L_0 = ___value0;
		__this->___LeftTrigger_21 = L_0;
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dVrManager::SetLeftGrip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager_SetLeftGrip_m7945AAB2E9567F9E1616B4572068339E490B30BC (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// LeftGrip = value;
		bool L_0 = ___value0;
		__this->___LeftGrip_23 = L_0;
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dVrManager::SetRightGrip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager_SetRightGrip_m70190BFC910989B53BCDABFF055945F455D404E7 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// RightGrip = value;
		bool L_0 = ___value0;
		__this->___RightGrip_24 = L_0;
		// }
		return;
	}
}
// System.Boolean PaintIn3D.Examples.P3dVrManager::GetTrigger(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dVrManager_GetTrigger_mDA23F2FAA2815A253C45AADAF56E463E7BC9DC80 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___node0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___node0;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___node0;
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_0011;
		}
	}
	{
		goto IL_0018;
	}

IL_000a:
	{
		// case XRNode.LeftHand: return LeftTrigger == true;
		bool L_2 = __this->___LeftTrigger_21;
		return L_2;
	}

IL_0011:
	{
		// case XRNode.RightHand: return RightTrigger == true;
		bool L_3 = __this->___RightTrigger_22;
		return L_3;
	}

IL_0018:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean PaintIn3D.Examples.P3dVrManager::GetTriggerPressed(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dVrManager_GetTriggerPressed_mC14F58C8D28E64DEFD76ACE9833B854954DA2A8F (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___node0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___node0;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___node0;
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_0032;
	}

IL_000a:
	{
		// case XRNode.LeftHand: return LeftTrigger == true && PrevLeftTrigger == false;
		bool L_2 = __this->___LeftTrigger_21;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		bool L_3 = __this->___PrevLeftTrigger_25;
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_001c:
	{
		return (bool)0;
	}

IL_001e:
	{
		// case XRNode.RightHand: return RightTrigger == true && PrevRightTrigger == false;
		bool L_4 = __this->___RightTrigger_22;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		bool L_5 = __this->___PrevRightTrigger_26;
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_0030:
	{
		return (bool)0;
	}

IL_0032:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean PaintIn3D.Examples.P3dVrManager::GetTriggerReleased(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dVrManager_GetTriggerReleased_mC2E79B178186A76DF70BCD61BF6BD0573D0BAEA5 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___node0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___node0;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___node0;
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_002c;
	}

IL_000a:
	{
		// case XRNode.LeftHand: return LeftTrigger == false && PrevLeftTrigger == true;
		bool L_2 = __this->___LeftTrigger_21;
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		bool L_3 = __this->___PrevLeftTrigger_25;
		return L_3;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		// case XRNode.RightHand: return RightTrigger == false && PrevRightTrigger == true;
		bool L_4 = __this->___RightTrigger_22;
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		bool L_5 = __this->___PrevRightTrigger_26;
		return L_5;
	}

IL_002a:
	{
		return (bool)0;
	}

IL_002c:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean PaintIn3D.Examples.P3dVrManager::GetGrip(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dVrManager_GetGrip_m22BE8D0ED66687FC424A89387A8DCCC2E81ED9B9 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___node0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___node0;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___node0;
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_0011;
		}
	}
	{
		goto IL_0018;
	}

IL_000a:
	{
		// case XRNode.LeftHand: return LeftGrip == true;
		bool L_2 = __this->___LeftGrip_23;
		return L_2;
	}

IL_0011:
	{
		// case XRNode.RightHand: return RightGrip == true;
		bool L_3 = __this->___RightGrip_24;
		return L_3;
	}

IL_0018:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean PaintIn3D.Examples.P3dVrManager::GetGripPressed(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dVrManager_GetGripPressed_mFEFAEB0640B4020EF3A563F32BC8F6D6E0766CD7 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___node0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___node0;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___node0;
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_0032;
	}

IL_000a:
	{
		// case XRNode.LeftHand: return LeftGrip == true && PrevLeftGrip == false;
		bool L_2 = __this->___LeftGrip_23;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		bool L_3 = __this->___PrevLeftGrip_27;
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_001c:
	{
		return (bool)0;
	}

IL_001e:
	{
		// case XRNode.RightHand: return RightGrip == true && PrevRightGrip == false;
		bool L_4 = __this->___RightGrip_24;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		bool L_5 = __this->___PrevRightGrip_28;
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_0030:
	{
		return (bool)0;
	}

IL_0032:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean PaintIn3D.Examples.P3dVrManager::GetGripReleased(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dVrManager_GetGripReleased_m59D79D85EA50E1A97D4085E116CB06929C167F99 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___node0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___node0;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___node0;
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_002c;
	}

IL_000a:
	{
		// case XRNode.LeftHand: return LeftGrip == false && PrevLeftGrip == true;
		bool L_2 = __this->___LeftGrip_23;
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		bool L_3 = __this->___PrevLeftGrip_27;
		return L_3;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		// case XRNode.RightHand: return RightGrip == false && PrevRightGrip == true;
		bool L_4 = __this->___RightGrip_24;
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		bool L_5 = __this->___PrevRightGrip_28;
		return L_5;
	}

IL_002a:
	{
		return (bool)0;
	}

IL_002c:
	{
		// return false;
		return (bool)0;
	}
}
// UnityEngine.XR.XRNode PaintIn3D.Examples.P3dVrManager::GetClosestNode(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dVrManager_GetClosestNode_m693F6C279189AC90C2EE5C26F90B00E537CE9318 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, float ___maximumDistance1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// var bestNode     = (XRNode)(-1);
		V_0 = (-1);
		// var bestDistance = maximumDistance;
		float L_0 = ___maximumDistance1;
		V_1 = L_0;
		// var position     = default(Vector3);
		il2cpp_codegen_initobj((&V_2), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// if (TryGetPosition(XRNode.LeftHand, ref position) == true)
		bool L_1;
		L_1 = P3dVrManager_TryGetPosition_m687A990E85721DC80063FD809CF23C6BC0BB5224(__this, 4, (&V_2), NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// var distance = Vector3.Distance(point, position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___point0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_2;
		float L_4;
		L_4 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_2, L_3, NULL);
		V_3 = L_4;
		// if (distance < bestDistance)
		float L_5 = V_3;
		float L_6 = V_1;
		if ((!(((float)L_5) < ((float)L_6))))
		{
			goto IL_0027;
		}
	}
	{
		// bestDistance = distance;
		float L_7 = V_3;
		V_1 = L_7;
		// bestNode     = XRNode.LeftHand;
		V_0 = 4;
	}

IL_0027:
	{
		// if (TryGetPosition(XRNode.RightHand, ref position) == true)
		bool L_8;
		L_8 = P3dVrManager_TryGetPosition_m687A990E85721DC80063FD809CF23C6BC0BB5224(__this, 5, (&V_2), NULL);
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		// var distance = Vector3.Distance(point, position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___point0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_2;
		float L_11;
		L_11 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_9, L_10, NULL);
		V_4 = L_11;
		// if (distance < bestDistance)
		float L_12 = V_4;
		float L_13 = V_1;
		if ((!(((float)L_12) < ((float)L_13))))
		{
			goto IL_0045;
		}
	}
	{
		// bestDistance = distance;
		float L_14 = V_4;
		V_1 = L_14;
		// bestNode     = XRNode.RightHand;
		V_0 = 5;
	}

IL_0045:
	{
		// return bestNode;
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Void PaintIn3D.Examples.P3dVrManager::SetSimulatedState(UnityEngine.XR.XRNode,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager_SetSimulatedState_mC7A32ED73435B2CE2DB407351F03B6C9C1D1CED5 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___node0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) 
{
	SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749* V_0 = NULL;
	int32_t V_1 = 0;
	SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* V_2 = NULL;
	{
		// foreach (var simulatedState in simulatedStates)
		SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749* L_0 = __this->___simulatedStates_18;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000b:
	{
		// foreach (var simulatedState in simulatedStates)
		SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (simulatedState.Node == node)
		SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* L_5 = V_2;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Node_0;
		int32_t L_7 = ___node0;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_002e;
		}
	}
	{
		// simulatedState.Set      = true;
		SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* L_8 = V_2;
		NullCheck(L_8);
		L_8->___Set_1 = (bool)1;
		// simulatedState.Position = position;
		SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* L_9 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___position1;
		NullCheck(L_9);
		L_9->___Position_2 = L_10;
		// simulatedState.Rotation = rotation;
		SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* L_11 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___rotation2;
		NullCheck(L_11);
		L_11->___Rotation_3 = L_12;
		// return;
		return;
	}

IL_002e:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0032:
	{
		// foreach (var simulatedState in simulatedStates)
		int32_t L_14 = V_1;
		SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean PaintIn3D.Examples.P3dVrManager::TryGetPosition(UnityEngine.XR.XRNode,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dVrManager_TryGetPosition_m687A990E85721DC80063FD809CF23C6BC0BB5224 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___node0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___position1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m45953E5026A133C608DD6B470298999D2733B392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m554D09004F3CA1F349AC0B84F21996392C777B32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD0D94B293CBE7F1F394B0682AF603A72FBED7B53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAB912A9967665778045CEE77BD387D9184C2D1A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749* V_0 = NULL;
	int32_t V_1 = 0;
	SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* V_2 = NULL;
	Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD V_3;
	memset((&V_3), 0, sizeof(V_3));
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		// if (IsSimulation == true)
		bool L_0;
		L_0 = P3dVrManager_get_IsSimulation_m4BA2663C0A2BAB7484654FA8467CD01DC1604750(__this, NULL);
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		// foreach (var simulatedState in simulatedStates)
		SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749* L_1 = __this->___simulatedStates_18;
		V_0 = L_1;
		V_1 = 0;
		goto IL_003c;
	}

IL_0013:
	{
		// foreach (var simulatedState in simulatedStates)
		SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if (simulatedState.Node == node)
		SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Node_0;
		int32_t L_8 = ___node0;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0038;
		}
	}
	{
		// if (simulatedState.Set == false)
		SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* L_9 = V_2;
		NullCheck(L_9);
		bool L_10 = L_9->___Set_1;
		if (L_10)
		{
			goto IL_002a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002a:
	{
		// position = simulatedState.Position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = ___position1;
		SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* L_12 = V_2;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___Position_2;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_11 = L_13;
		// return true;
		return (bool)1;
	}

IL_0038:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003c:
	{
		// foreach (var simulatedState in simulatedStates)
		int32_t L_15 = V_1;
		SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0093;
	}

IL_0044:
	{
		// InputTracking.GetNodeStates(states);
		il2cpp_codegen_runtime_class_init_inline(P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_il2cpp_TypeInfo_var);
		List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* L_17 = ((P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_StaticFields*)il2cpp_codegen_static_fields_for(P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_il2cpp_TypeInfo_var))->___states_29;
		InputTracking_GetNodeStates_mA2E8D154A47C817ED74AD42F6B38A9C906A57A67(L_17, NULL);
		// foreach (var state in states)
		List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* L_18 = ((P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_StaticFields*)il2cpp_codegen_static_fields_for(P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_il2cpp_TypeInfo_var))->___states_29;
		NullCheck(L_18);
		Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD L_19;
		L_19 = List_1_GetEnumerator_mAB912A9967665778045CEE77BD387D9184C2D1A9(L_18, List_1_GetEnumerator_mAB912A9967665778045CEE77BD387D9184C2D1A9_RuntimeMethod_var);
		V_3 = L_19;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0085:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m45953E5026A133C608DD6B470298999D2733B392((&V_3), Enumerator_Dispose_m45953E5026A133C608DD6B470298999D2733B392_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007a_1;
			}

IL_005b_1:
			{
				// foreach (var state in states)
				XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_20;
				L_20 = Enumerator_get_Current_mD0D94B293CBE7F1F394B0682AF603A72FBED7B53_inline((&V_3), Enumerator_get_Current_mD0D94B293CBE7F1F394B0682AF603A72FBED7B53_RuntimeMethod_var);
				V_4 = L_20;
				// if (state.nodeType == node)
				int32_t L_21;
				L_21 = XRNodeState_get_nodeType_mFC49286B25FF7732CE6CAF231A1DE5C083C13932((&V_4), NULL);
				int32_t L_22 = ___node0;
				if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
				{
					goto IL_007a_1;
				}
			}
			{
				// return state.TryGetPosition(out position);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = ___position1;
				bool L_24;
				L_24 = XRNodeState_TryGetPosition_mC17C5DFEEA4062A6D91D7E252DD108829AC4E0A6((&V_4), L_23, NULL);
				V_5 = L_24;
				goto IL_0095;
			}

IL_007a_1:
			{
				// foreach (var state in states)
				bool L_25;
				L_25 = Enumerator_MoveNext_m554D09004F3CA1F349AC0B84F21996392C777B32((&V_3), Enumerator_MoveNext_m554D09004F3CA1F349AC0B84F21996392C777B32_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_005b_1;
				}
			}
			{
				goto IL_0093;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0093:
	{
		// return false;
		return (bool)0;
	}

IL_0095:
	{
		// }
		bool L_26 = V_5;
		return L_26;
	}
}
// System.Boolean PaintIn3D.Examples.P3dVrManager::TryGetRotation(UnityEngine.XR.XRNode,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dVrManager_TryGetRotation_m1C14358F3AF543F913382E8361B3592C1F84BE04 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___node0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rotation1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m45953E5026A133C608DD6B470298999D2733B392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m554D09004F3CA1F349AC0B84F21996392C777B32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD0D94B293CBE7F1F394B0682AF603A72FBED7B53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAB912A9967665778045CEE77BD387D9184C2D1A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749* V_0 = NULL;
	int32_t V_1 = 0;
	SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* V_2 = NULL;
	Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD V_3;
	memset((&V_3), 0, sizeof(V_3));
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		// if (IsSimulation == true)
		bool L_0;
		L_0 = P3dVrManager_get_IsSimulation_m4BA2663C0A2BAB7484654FA8467CD01DC1604750(__this, NULL);
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		// foreach (var simulatedState in simulatedStates)
		SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749* L_1 = __this->___simulatedStates_18;
		V_0 = L_1;
		V_1 = 0;
		goto IL_003c;
	}

IL_0013:
	{
		// foreach (var simulatedState in simulatedStates)
		SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if (simulatedState.Node == node)
		SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Node_0;
		int32_t L_8 = ___node0;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0038;
		}
	}
	{
		// if (simulatedState.Set == false)
		SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* L_9 = V_2;
		NullCheck(L_9);
		bool L_10 = L_9->___Set_1;
		if (L_10)
		{
			goto IL_002a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002a:
	{
		// rotation = simulatedState.Rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_11 = ___rotation1;
		SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* L_12 = V_2;
		NullCheck(L_12);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12->___Rotation_3;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_11 = L_13;
		// return true;
		return (bool)1;
	}

IL_0038:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003c:
	{
		// foreach (var simulatedState in simulatedStates)
		int32_t L_15 = V_1;
		SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0093;
	}

IL_0044:
	{
		// InputTracking.GetNodeStates(states);
		il2cpp_codegen_runtime_class_init_inline(P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_il2cpp_TypeInfo_var);
		List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* L_17 = ((P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_StaticFields*)il2cpp_codegen_static_fields_for(P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_il2cpp_TypeInfo_var))->___states_29;
		InputTracking_GetNodeStates_mA2E8D154A47C817ED74AD42F6B38A9C906A57A67(L_17, NULL);
		// foreach (var state in states)
		List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* L_18 = ((P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_StaticFields*)il2cpp_codegen_static_fields_for(P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_il2cpp_TypeInfo_var))->___states_29;
		NullCheck(L_18);
		Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD L_19;
		L_19 = List_1_GetEnumerator_mAB912A9967665778045CEE77BD387D9184C2D1A9(L_18, List_1_GetEnumerator_mAB912A9967665778045CEE77BD387D9184C2D1A9_RuntimeMethod_var);
		V_3 = L_19;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0085:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m45953E5026A133C608DD6B470298999D2733B392((&V_3), Enumerator_Dispose_m45953E5026A133C608DD6B470298999D2733B392_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007a_1;
			}

IL_005b_1:
			{
				// foreach (var state in states)
				XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_20;
				L_20 = Enumerator_get_Current_mD0D94B293CBE7F1F394B0682AF603A72FBED7B53_inline((&V_3), Enumerator_get_Current_mD0D94B293CBE7F1F394B0682AF603A72FBED7B53_RuntimeMethod_var);
				V_4 = L_20;
				// if (state.nodeType == node)
				int32_t L_21;
				L_21 = XRNodeState_get_nodeType_mFC49286B25FF7732CE6CAF231A1DE5C083C13932((&V_4), NULL);
				int32_t L_22 = ___node0;
				if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
				{
					goto IL_007a_1;
				}
			}
			{
				// return state.TryGetRotation(out rotation);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_23 = ___rotation1;
				bool L_24;
				L_24 = XRNodeState_TryGetRotation_mA7F9597BE3AFE747BF2F95BF491779520FEF7301((&V_4), L_23, NULL);
				V_5 = L_24;
				goto IL_0095;
			}

IL_007a_1:
			{
				// foreach (var state in states)
				bool L_25;
				L_25 = Enumerator_MoveNext_m554D09004F3CA1F349AC0B84F21996392C777B32((&V_3), Enumerator_MoveNext_m554D09004F3CA1F349AC0B84F21996392C777B32_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_005b_1;
				}
			}
			{
				goto IL_0093;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0093:
	{
		// return false;
		return (bool)0;
	}

IL_0095:
	{
		// }
		bool L_26 = V_5;
		return L_26;
	}
}
// System.Void PaintIn3D.Examples.P3dVrManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager_Start_m58431DB4C31EE4D231BA9E2135F3D3C44DBB6A35 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, const RuntimeMethod* method) 
{
	{
		// hitDistance = simulatedReach * 0.25f;
		float L_0 = __this->___simulatedReach_15;
		__this->___hitDistance_19 = ((float)il2cpp_codegen_multiply(L_0, (0.25f)));
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dVrManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager_Update_m5D193780FABE954BF1BB412C9059DF81850ED793 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dInputManager_t1BD83FB878655C53FC056C82B91EF07A56041B66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsSimulation == true)
		bool L_0;
		L_0 = P3dVrManager_get_IsSimulation_m4BA2663C0A2BAB7484654FA8467CD01DC1604750(__this, NULL);
		if (!L_0)
		{
			goto IL_0074;
		}
	}
	{
		// LeftTrigger  = P3dInputManager.IsPressed(simulatedLeftTrigger);
		int32_t L_1 = __this->___simulatedLeftTrigger_9;
		il2cpp_codegen_runtime_class_init_inline(P3dInputManager_t1BD83FB878655C53FC056C82B91EF07A56041B66_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = P3dInputManager_IsPressed_m5E1C8BB1F7EE413A27990940C1FD0DFA27B6FF8C(L_1, NULL);
		__this->___LeftTrigger_21 = L_2;
		// LeftGrip     = P3dInputManager.IsPressed(simulatedLeftGrip);
		int32_t L_3 = __this->___simulatedLeftGrip_10;
		bool L_4;
		L_4 = P3dInputManager_IsPressed_m5E1C8BB1F7EE413A27990940C1FD0DFA27B6FF8C(L_3, NULL);
		__this->___LeftGrip_23 = L_4;
		// RightTrigger = P3dInputManager.IsPressed(simulatedRightTrigger);
		int32_t L_5 = __this->___simulatedRightTrigger_11;
		bool L_6;
		L_6 = P3dInputManager_IsPressed_m5E1C8BB1F7EE413A27990940C1FD0DFA27B6FF8C(L_5, NULL);
		__this->___RightTrigger_22 = L_6;
		// RightGrip    = P3dInputManager.IsPressed(simulatedRightGrip);
		int32_t L_7 = __this->___simulatedRightGrip_12;
		bool L_8;
		L_8 = P3dInputManager_IsPressed_m5E1C8BB1F7EE413A27990940C1FD0DFA27B6FF8C(L_7, NULL);
		__this->___RightGrip_24 = L_8;
		// if (P3dInputManager.PointOverGui(P3dInputManager.MousePosition) == true)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = P3dInputManager_get_MousePosition_mD1C6B0C7DF52F1DFDB50E05C83F3DE89C1C36806(NULL);
		bool L_10;
		L_10 = P3dInputManager_PointOverGui_m99B6196ED7B6FC06753C4DE03C8DE925A7925CE6(L_9, NULL);
		if (!L_10)
		{
			goto IL_0074;
		}
	}
	{
		// LeftTrigger  = false;
		__this->___LeftTrigger_21 = (bool)0;
		// LeftGrip     = false;
		__this->___LeftGrip_23 = (bool)0;
		// RightTrigger = false;
		__this->___RightTrigger_22 = (bool)0;
		// RightGrip    = false;
		__this->___RightGrip_24 = (bool)0;
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dVrManager::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager_LateUpdate_m8BF6AEC985F8F98FFBC914A12741090F2868DECA (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dInputManager_t1BD83FB878655C53FC056C82B91EF07A56041B66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	{
		// var camera = P3dHelper.GetCamera();
		il2cpp_codegen_runtime_class_init_inline(P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = P3dHelper_GetCamera_m380DFA085167B71A0C44443E851030D050528BD8((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL, NULL);
		V_0 = L_0;
		// if (camera != null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0252;
		}
	}
	{
		// var ray = camera.ScreenPointToRay(P3dInputManager.MousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(P3dInputManager_t1BD83FB878655C53FC056C82B91EF07A56041B66_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = P3dInputManager_get_MousePosition_mD1C6B0C7DF52F1DFDB50E05C83F3DE89C1C36806(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_4, NULL);
		NullCheck(L_3);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_6;
		L_6 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_3, L_5, NULL);
		V_1 = L_6;
		// var hit = default(RaycastHit);
		il2cpp_codegen_initobj((&V_2), sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// var cam = camera.transform.rotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = V_0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		V_3 = L_9;
		// if (Physics.Raycast(ray, out hit, simulatedReach) == true)
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_10 = V_1;
		float L_11 = __this->___simulatedReach_15;
		bool L_12;
		L_12 = Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685(L_10, (&V_2), L_11, NULL);
		if (!L_12)
		{
			goto IL_0077;
		}
	}
	{
		// hitDistance = hit.distance;
		float L_13;
		L_13 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_2), NULL);
		__this->___hitDistance_19 = L_13;
		// hitRotation = Quaternion.Inverse(cam) * Quaternion.LookRotation(-hit.normal);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_16, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_17, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_15, L_18, NULL);
		__this->___hitRotation_20 = L_19;
	}

IL_0077:
	{
		// var leftHandRot = Quaternion.Slerp(cam, cam * hitRotation, simulatedNormalInfluence) * Quaternion.Euler(simulatedTilt.x, -simulatedTilt.y, simulatedTilt.z);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = __this->___hitRotation_20;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_21, L_22, NULL);
		float L_24 = __this->___simulatedNormalInfluence_17;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_20, L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = (&__this->___simulatedTilt_13);
		float L_27 = L_26->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&__this->___simulatedTilt_13);
		float L_29 = L_28->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = (&__this->___simulatedTilt_13);
		float L_31 = L_30->___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_27, ((-L_29)), L_31, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_25, L_32, NULL);
		V_4 = L_33;
		// var leftHandPos = ray.GetPoint(hitDistance) + leftHandRot * new Vector3(simulatedOffset.x, simulatedOffset.y, simulatedOffset.z);
		float L_34 = __this->___hitDistance_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF((&V_1), L_34, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_37 = (&__this->___simulatedOffset_14);
		float L_38 = L_37->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_39 = (&__this->___simulatedOffset_14);
		float L_40 = L_39->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_41 = (&__this->___simulatedOffset_14);
		float L_42 = L_41->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_43), L_38, L_40, L_42, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_36, L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_35, L_44, NULL);
		V_5 = L_45;
		// SetSimulatedState(XRNode.LeftHand, leftHandPos, leftHandRot);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_47 = V_4;
		P3dVrManager_SetSimulatedState_mC7A32ED73435B2CE2DB407351F03B6C9C1D1CED5(__this, 4, L_46, L_47, NULL);
		// var rightHandRot = Quaternion.Slerp(cam, cam * hitRotation, simulatedNormalInfluence) * Quaternion.Euler(simulatedTilt.x, simulatedTilt.y, simulatedTilt.z);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = __this->___hitRotation_20;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51;
		L_51 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_49, L_50, NULL);
		float L_52 = __this->___simulatedNormalInfluence_17;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53;
		L_53 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_48, L_51, L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_54 = (&__this->___simulatedTilt_13);
		float L_55 = L_54->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_56 = (&__this->___simulatedTilt_13);
		float L_57 = L_56->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_58 = (&__this->___simulatedTilt_13);
		float L_59 = L_58->___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60;
		L_60 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_55, L_57, L_59, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_61;
		L_61 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_53, L_60, NULL);
		V_6 = L_61;
		// var rightHandPos = ray.GetPoint(hitDistance) + rightHandRot * new Vector3(simulatedOffset.x, -simulatedOffset.y, simulatedOffset.z);
		float L_62 = __this->___hitDistance_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF((&V_1), L_62, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_65 = (&__this->___simulatedOffset_14);
		float L_66 = L_65->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_67 = (&__this->___simulatedOffset_14);
		float L_68 = L_67->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_69 = (&__this->___simulatedOffset_14);
		float L_70 = L_69->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		memset((&L_71), 0, sizeof(L_71));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_71), L_66, ((-L_68)), L_70, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_64, L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_63, L_72, NULL);
		V_7 = L_73;
		// SetSimulatedState(XRNode.RightHand, rightHandPos, rightHandRot);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_75 = V_6;
		P3dVrManager_SetSimulatedState_mC7A32ED73435B2CE2DB407351F03B6C9C1D1CED5(__this, 5, L_74, L_75, NULL);
		// SetSimulatedState(XRNode.Head, camera.transform.position, camera.transform.rotation);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_76 = V_0;
		NullCheck(L_76);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77;
		L_77 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_76, NULL);
		NullCheck(L_77);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_77, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_79 = V_0;
		NullCheck(L_79);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80;
		L_80 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_79, NULL);
		NullCheck(L_80);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_81;
		L_81 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_80, NULL);
		P3dVrManager_SetSimulatedState_mC7A32ED73435B2CE2DB407351F03B6C9C1D1CED5(__this, 3, L_78, L_81, NULL);
		// SetSimulatedState(XRNode.CenterEye, camera.transform.position, camera.transform.rotation);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_82 = V_0;
		NullCheck(L_82);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83;
		L_83 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_82, NULL);
		NullCheck(L_83);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_83, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_85 = V_0;
		NullCheck(L_85);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_86;
		L_86 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_85, NULL);
		NullCheck(L_86);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_87;
		L_87 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_86, NULL);
		P3dVrManager_SetSimulatedState_mC7A32ED73435B2CE2DB407351F03B6C9C1D1CED5(__this, 2, L_84, L_87, NULL);
		// SetSimulatedState(XRNode.LeftEye, camera.transform.TransformPoint(simulatedEyeOffset.x, simulatedEyeOffset.y, simulatedEyeOffset.z), camera.transform.rotation);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_88 = V_0;
		NullCheck(L_88);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89;
		L_89 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_88, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_90 = (&__this->___simulatedEyeOffset_16);
		float L_91 = L_90->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_92 = (&__this->___simulatedEyeOffset_16);
		float L_93 = L_92->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_94 = (&__this->___simulatedEyeOffset_16);
		float L_95 = L_94->___z_4;
		NullCheck(L_89);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Transform_TransformPoint_m220E1BBBF9AF7A6D0EAC417FA07C820B2344FA1A(L_89, L_91, L_93, L_95, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_97 = V_0;
		NullCheck(L_97);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_98;
		L_98 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_97, NULL);
		NullCheck(L_98);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_99;
		L_99 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_98, NULL);
		P3dVrManager_SetSimulatedState_mC7A32ED73435B2CE2DB407351F03B6C9C1D1CED5(__this, 0, L_96, L_99, NULL);
		// SetSimulatedState(XRNode.RightEye, camera.transform.TransformPoint(-simulatedEyeOffset.x, simulatedEyeOffset.y, simulatedEyeOffset.z), camera.transform.rotation);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_100 = V_0;
		NullCheck(L_100);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
		L_101 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_100, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_102 = (&__this->___simulatedEyeOffset_16);
		float L_103 = L_102->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_104 = (&__this->___simulatedEyeOffset_16);
		float L_105 = L_104->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_106 = (&__this->___simulatedEyeOffset_16);
		float L_107 = L_106->___z_4;
		NullCheck(L_101);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Transform_TransformPoint_m220E1BBBF9AF7A6D0EAC417FA07C820B2344FA1A(L_101, ((-L_103)), L_105, L_107, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_109 = V_0;
		NullCheck(L_109);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_110;
		L_110 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_109, NULL);
		NullCheck(L_110);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_111;
		L_111 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_110, NULL);
		P3dVrManager_SetSimulatedState_mC7A32ED73435B2CE2DB407351F03B6C9C1D1CED5(__this, 1, L_108, L_111, NULL);
	}

IL_0252:
	{
		// for (var i = 0; i <= 8; i++)
		V_8 = 0;
		goto IL_0265;
	}

IL_0257:
	{
		// UpdateTools((XRNode)i);
		int32_t L_112 = V_8;
		P3dVrManager_UpdateTools_mAE06A10014E6272DB679510C3852A68818C24413(__this, L_112, NULL);
		// for (var i = 0; i <= 8; i++)
		int32_t L_113 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_113, 1));
	}

IL_0265:
	{
		// for (var i = 0; i <= 8; i++)
		int32_t L_114 = V_8;
		if ((((int32_t)L_114) <= ((int32_t)8)))
		{
			goto IL_0257;
		}
	}
	{
		// PrevLeftTrigger  = LeftTrigger;
		bool L_115 = __this->___LeftTrigger_21;
		__this->___PrevLeftTrigger_25 = L_115;
		// PrevLeftGrip     = LeftGrip;
		bool L_116 = __this->___LeftGrip_23;
		__this->___PrevLeftGrip_27 = L_116;
		// PrevRightTrigger = RightTrigger;
		bool L_117 = __this->___RightTrigger_22;
		__this->___PrevRightTrigger_26 = L_117;
		// PrevRightGrip    = RightGrip;
		bool L_118 = __this->___RightGrip_24;
		__this->___PrevRightGrip_28 = L_118;
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dVrManager::UpdateTools(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager_UpdateTools_mAE06A10014E6272DB679510C3852A68818C24413 (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, int32_t ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m697882349E9DB0FCCBE74B89FC86AA51239220BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9EDB7C34843601BAA509CFAEFB06CB2A0B99233B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6D725B7323D511F39A1802B03A1B7A16DC79EE99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDD6C7A15BFD041A63D02FA44D4E3CB3834F0FC81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE5C8ECB968E9E68FC33D08F3411678FC8E49F335 V_0;
	memset((&V_0), 0, sizeof(V_0));
	P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* V_1 = NULL;
	{
		// P3dVrTool.GetTools(node, ref tempTools);
		int32_t L_0 = ___node0;
		il2cpp_codegen_runtime_class_init_inline(P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_runtime_class_init_inline(P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D_il2cpp_TypeInfo_var);
		P3dVrTool_GetTools_m8806FC729C0AF344691C52DF860CF41A6906D84C(L_0, (&((P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_StaticFields*)il2cpp_codegen_static_fields_for(P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_il2cpp_TypeInfo_var))->___tempTools_30), NULL);
		// foreach (var tool in tempTools)
		List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* L_1 = ((P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_StaticFields*)il2cpp_codegen_static_fields_for(P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_il2cpp_TypeInfo_var))->___tempTools_30;
		NullCheck(L_1);
		Enumerator_tE5C8ECB968E9E68FC33D08F3411678FC8E49F335 L_2;
		L_2 = List_1_GetEnumerator_mDD6C7A15BFD041A63D02FA44D4E3CB3834F0FC81(L_1, List_1_GetEnumerator_mDD6C7A15BFD041A63D02FA44D4E3CB3834F0FC81_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m697882349E9DB0FCCBE74B89FC86AA51239220BB((&V_0), Enumerator_Dispose_m697882349E9DB0FCCBE74B89FC86AA51239220BB_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0039_1;
			}

IL_0018_1:
			{
				// foreach (var tool in tempTools)
				P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* L_3;
				L_3 = Enumerator_get_Current_m6D725B7323D511F39A1802B03A1B7A16DC79EE99_inline((&V_0), Enumerator_get_Current_m6D725B7323D511F39A1802B03A1B7A16DC79EE99_RuntimeMethod_var);
				V_1 = L_3;
				// if (tool != null && tool.Node == node)
				P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* L_4 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_5;
				L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_5)
				{
					goto IL_0039_1;
				}
			}
			{
				P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* L_6 = V_1;
				NullCheck(L_6);
				int32_t L_7;
				L_7 = P3dVrTool_get_Node_mFC3537859D75C3E99B3A5D1C33EFA66AC1BCC803_inline(L_6, NULL);
				int32_t L_8 = ___node0;
				if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
				{
					goto IL_0039_1;
				}
			}
			{
				// tool.UpdateGripped(this);
				P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* L_9 = V_1;
				NullCheck(L_9);
				P3dVrTool_UpdateGripped_mFB61909458D9514D5F674D3D7CD13AF2BB19D6E1(L_9, __this, NULL);
			}

IL_0039_1:
			{
				// foreach (var tool in tempTools)
				bool L_10;
				L_10 = Enumerator_MoveNext_m9EDB7C34843601BAA509CFAEFB06CB2A0B99233B((&V_0), Enumerator_MoveNext_m9EDB7C34843601BAA509CFAEFB06CB2A0B99233B_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_0052;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dVrManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager__ctor_m3FC0FF43A96F951BD92B0E1C5143DB6D484844BE (P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dLinkedBehaviour_1__ctor_mD9317E9DAA7B49C73AF2595D43B70C94ECB61C1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float GrabDistance { set { grabDistance = value; } get { return grabDistance; } } [SerializeField] private float grabDistance = 0.3f;
		__this->___grabDistance_8 = (0.300000012f);
		// public KeyCode SimulatedLeftTrigger { set { simulatedLeftTrigger = value; } get { return simulatedLeftTrigger; } } [SerializeField] private KeyCode simulatedLeftTrigger = KeyCode.Mouse0;
		__this->___simulatedLeftTrigger_9 = ((int32_t)323);
		// public KeyCode SimulatedLeftGrip { set { simulatedLeftGrip = value; } get { return simulatedLeftGrip; } } [SerializeField] private KeyCode simulatedLeftGrip = KeyCode.LeftControl;
		__this->___simulatedLeftGrip_10 = ((int32_t)306);
		// public KeyCode SimulatedRightTrigger { set { simulatedRightTrigger = value; } get { return simulatedRightTrigger; } } [SerializeField] private KeyCode simulatedRightTrigger = KeyCode.Mouse1;
		__this->___simulatedRightTrigger_11 = ((int32_t)324);
		// public KeyCode SimulatedRightGrip { set { simulatedRightGrip = value; } get { return simulatedRightGrip; } } [SerializeField] private KeyCode simulatedRightGrip = KeyCode.RightControl;
		__this->___simulatedRightGrip_12 = ((int32_t)305);
		// public Vector3 SimulatedTilt { set { simulatedTilt = value; } get { return simulatedTilt; } } [SerializeField] private Vector3 simulatedTilt = new Vector3(0.0f, -15.0f, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (-15.0f), (0.0f), /*hidden argument*/NULL);
		__this->___simulatedTilt_13 = L_0;
		// public Vector3 SimulatedOffset { set { simulatedOffset = value; } get { return simulatedOffset; } } [SerializeField] private Vector3 simulatedOffset = new Vector3(0.0f, 0.0f, -0.2f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (0.0f), (-0.200000003f), /*hidden argument*/NULL);
		__this->___simulatedOffset_14 = L_1;
		// public float SimulatedDistanceMax { set { simulatedReach = value; } get { return simulatedReach; } } [SerializeField] private float simulatedReach = 1.0f;
		__this->___simulatedReach_15 = (1.0f);
		// public Vector3 SimulatedEyeOffset { set { simulatedEyeOffset = value; } get { return simulatedEyeOffset; } } [SerializeField] private Vector3 simulatedEyeOffset = new Vector3(-0.0325f, 0.0f, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (-0.0324999988f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___simulatedEyeOffset_16 = L_2;
		// public float SimulatedNormalInfluence { set { simulatedNormalInfluence = value; } get { return simulatedNormalInfluence; } } [Range(0.0f, 1.0f)] [SerializeField] private float simulatedNormalInfluence = 0.25f;
		__this->___simulatedNormalInfluence_17 = (0.25f);
		// private SimulatedState[] simulatedStates = new SimulatedState[]
		//     {
		//         new SimulatedState(XRNode.LeftEye),
		//         new SimulatedState(XRNode.RightEye),
		//         new SimulatedState(XRNode.CenterEye),
		//         new SimulatedState(XRNode.Head),
		//         new SimulatedState(XRNode.LeftHand),
		//         new SimulatedState(XRNode.RightHand)
		//     };
		SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749* L_3 = (SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749*)(SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749*)SZArrayNew(SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749_il2cpp_TypeInfo_var, (uint32_t)6);
		SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749* L_4 = L_3;
		SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* L_5 = (SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D*)il2cpp_codegen_object_new(SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SimulatedState__ctor_m12A5EEDF987568EDAC7F46ABFF147EB332C5DA12(L_5, 0, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D*)L_5);
		SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749* L_6 = L_4;
		SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* L_7 = (SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D*)il2cpp_codegen_object_new(SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		SimulatedState__ctor_m12A5EEDF987568EDAC7F46ABFF147EB332C5DA12(L_7, 1, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D*)L_7);
		SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749* L_8 = L_6;
		SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* L_9 = (SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D*)il2cpp_codegen_object_new(SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		SimulatedState__ctor_m12A5EEDF987568EDAC7F46ABFF147EB332C5DA12(L_9, 2, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D*)L_9);
		SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749* L_10 = L_8;
		SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* L_11 = (SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D*)il2cpp_codegen_object_new(SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		SimulatedState__ctor_m12A5EEDF987568EDAC7F46ABFF147EB332C5DA12(L_11, 3, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D*)L_11);
		SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749* L_12 = L_10;
		SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* L_13 = (SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D*)il2cpp_codegen_object_new(SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		SimulatedState__ctor_m12A5EEDF987568EDAC7F46ABFF147EB332C5DA12(L_13, 4, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D*)L_13);
		SimulatedStateU5BU5D_tDBE0F3CDE0BE8C067A532D4B60393441EC8FA749* L_14 = L_12;
		SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* L_15 = (SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D*)il2cpp_codegen_object_new(SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		SimulatedState__ctor_m12A5EEDF987568EDAC7F46ABFF147EB332C5DA12(L_15, 5, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D*)L_15);
		__this->___simulatedStates_18 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___simulatedStates_18), (void*)L_14);
		// private Quaternion hitRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___hitRotation_20 = L_16;
		P3dLinkedBehaviour_1__ctor_mD9317E9DAA7B49C73AF2595D43B70C94ECB61C1D(__this, P3dLinkedBehaviour_1__ctor_mD9317E9DAA7B49C73AF2595D43B70C94ECB61C1D_RuntimeMethod_var);
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dVrManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrManager__cctor_m9311E605C4C0DC378883A7BEAAA3774E322B63EE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5E194B4E9EF4BB8E21979CCA019DAEF398342C8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD8E218B8766DD801CC5B221926CE287ADBE84E32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<XRNodeState> states = new List<XRNodeState>();
		List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* L_0 = (List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87*)il2cpp_codegen_object_new(List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD8E218B8766DD801CC5B221926CE287ADBE84E32(L_0, List_1__ctor_mD8E218B8766DD801CC5B221926CE287ADBE84E32_RuntimeMethod_var);
		((P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_StaticFields*)il2cpp_codegen_static_fields_for(P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_il2cpp_TypeInfo_var))->___states_29 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_StaticFields*)il2cpp_codegen_static_fields_for(P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_il2cpp_TypeInfo_var))->___states_29), (void*)L_0);
		// private static List<P3dVrTool> tempTools = new List<P3dVrTool>();
		List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* L_1 = (List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1*)il2cpp_codegen_object_new(List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m5E194B4E9EF4BB8E21979CCA019DAEF398342C8B(L_1, List_1__ctor_m5E194B4E9EF4BB8E21979CCA019DAEF398342C8B_RuntimeMethod_var);
		((P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_StaticFields*)il2cpp_codegen_static_fields_for(P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_il2cpp_TypeInfo_var))->___tempTools_30 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_StaticFields*)il2cpp_codegen_static_fields_for(P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1_il2cpp_TypeInfo_var))->___tempTools_30), (void*)L_1);
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
// System.Void PaintIn3D.Examples.P3dVrManager/SimulatedState::.ctor(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedState__ctor_m12A5EEDF987568EDAC7F46ABFF147EB332C5DA12 (SimulatedState_t93F9F218951AB0A2C3C7387E1F8330E4E0F5801D* __this, int32_t ___newNode0, const RuntimeMethod* method) 
{
	{
		// public Quaternion Rotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___Rotation_3 = L_0;
		// public SimulatedState(XRNode newNode)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Node = newNode;
		int32_t L_1 = ___newNode0;
		__this->___Node_0 = L_1;
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
// System.Void PaintIn3D.Examples.P3dVrTool::set_Node(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrTool_set_Node_mA0B6AEFA1B76D5B20027FA75752C856EEDAA238B (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public XRNode Node { set { node = value; } get { return node; } } [SerializeField] private XRNode node = XRNode.RightHand;
		int32_t L_0 = ___value0;
		__this->___node_8 = L_0;
		// public XRNode Node { set { node = value; } get { return node; } } [SerializeField] private XRNode node = XRNode.RightHand;
		return;
	}
}
// UnityEngine.XR.XRNode PaintIn3D.Examples.P3dVrTool::get_Node()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dVrTool_get_Node_mFC3537859D75C3E99B3A5D1C33EFA66AC1BCC803 (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, const RuntimeMethod* method) 
{
	{
		// public XRNode Node { set { node = value; } get { return node; } } [SerializeField] private XRNode node = XRNode.RightHand;
		int32_t L_0 = __this->___node_8;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dVrTool::set_StoreStates(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrTool_set_StoreStates_m0F0E9AE83274292246E0A3A08978151A9A140117 (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool StoreStates { set { storeStates = value; } get { return storeStates; } } [SerializeField] private bool storeStates = true;
		bool L_0 = ___value0;
		__this->___storeStates_9 = L_0;
		// public bool StoreStates { set { storeStates = value; } get { return storeStates; } } [SerializeField] private bool storeStates = true;
		return;
	}
}
// System.Boolean PaintIn3D.Examples.P3dVrTool::get_StoreStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dVrTool_get_StoreStates_m50FF7D8936FFE6212C0E18350B2A076D5DAD34F7 (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, const RuntimeMethod* method) 
{
	{
		// public bool StoreStates { set { storeStates = value; } get { return storeStates; } } [SerializeField] private bool storeStates = true;
		bool L_0 = __this->___storeStates_9;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dVrTool::set_LocalOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrTool_set_LocalOffset_mA5B18E136E084D2BD70009831FFF39E17DC78670 (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 LocalOffset { set { localOffset = value; } get { return localOffset; } } [SerializeField] private Vector3 localOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___localOffset_10 = L_0;
		// public Vector3 LocalOffset { set { localOffset = value; } get { return localOffset; } } [SerializeField] private Vector3 localOffset;
		return;
	}
}
// UnityEngine.Vector3 PaintIn3D.Examples.P3dVrTool::get_LocalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P3dVrTool_get_LocalOffset_m1BA2D7D34B27C04D7EE55D838164F815C2BD699D (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 LocalOffset { set { localOffset = value; } get { return localOffset; } } [SerializeField] private Vector3 localOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___localOffset_10;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dVrTool::set_SimulatedOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrTool_set_SimulatedOffset_m537522D2B31DE0200A24D65B30D1227EAF75BE67 (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 SimulatedOffset { set { simulatedOffset = value; } get { return simulatedOffset; } } [SerializeField] private Vector3 simulatedOffset = new Vector3(0.0f, 0.0f, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___simulatedOffset_11 = L_0;
		// public Vector3 SimulatedOffset { set { simulatedOffset = value; } get { return simulatedOffset; } } [SerializeField] private Vector3 simulatedOffset = new Vector3(0.0f, 0.0f, 0.0f);
		return;
	}
}
// UnityEngine.Vector3 PaintIn3D.Examples.P3dVrTool::get_SimulatedOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P3dVrTool_get_SimulatedOffset_mC9309B4A0AE9E33A6F6CA7282F2D5D652A841468 (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 SimulatedOffset { set { simulatedOffset = value; } get { return simulatedOffset; } } [SerializeField] private Vector3 simulatedOffset = new Vector3(0.0f, 0.0f, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___simulatedOffset_11;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dVrTool::set_SimulatedKeyOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrTool_set_SimulatedKeyOffset_m4CB42F30C71189BA4071D51A7DFDC4F05A73D24D (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 SimulatedKeyOffset { set { simulatedKeyOffset = value; } get { return simulatedKeyOffset; } } [SerializeField] private Vector3 simulatedKeyOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___simulatedKeyOffset_12 = L_0;
		// public Vector3 SimulatedKeyOffset { set { simulatedKeyOffset = value; } get { return simulatedKeyOffset; } } [SerializeField] private Vector3 simulatedKeyOffset;
		return;
	}
}
// UnityEngine.Vector3 PaintIn3D.Examples.P3dVrTool::get_SimulatedKeyOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P3dVrTool_get_SimulatedKeyOffset_mE20B3CE73AD01615EC6B86B76DA39440AE159030 (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 SimulatedKeyOffset { set { simulatedKeyOffset = value; } get { return simulatedKeyOffset; } } [SerializeField] private Vector3 simulatedKeyOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___simulatedKeyOffset_12;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dVrTool::set_SimulatedDampening(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrTool_set_SimulatedDampening_m2DB011B5C42F34C139160D7847A8B2C90FFE63C1 (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float SimulatedDampening { set { simulatedDampening = value; } get { return simulatedDampening; } } [SerializeField] private float simulatedDampening = 5.0f;
		float L_0 = ___value0;
		__this->___simulatedDampening_13 = L_0;
		// public float SimulatedDampening { set { simulatedDampening = value; } get { return simulatedDampening; } } [SerializeField] private float simulatedDampening = 5.0f;
		return;
	}
}
// System.Single PaintIn3D.Examples.P3dVrTool::get_SimulatedDampening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dVrTool_get_SimulatedDampening_m7B35BC9266C087076B298342ABE0F4F32B576A49 (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, const RuntimeMethod* method) 
{
	{
		// public float SimulatedDampening { set { simulatedDampening = value; } get { return simulatedDampening; } } [SerializeField] private float simulatedDampening = 5.0f;
		float L_0 = __this->___simulatedDampening_13;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent PaintIn3D.Examples.P3dVrTool::get_OnGrabbed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* P3dVrTool_get_OnGrabbed_m693E3DD545858DCF42198C5F91A361D6DEBEC82E (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityEvent OnGrabbed { get { if (onGrabbed == null) onGrabbed = new UnityEvent(); return onGrabbed; } } [SerializeField] private UnityEvent onGrabbed;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onGrabbed_14;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public UnityEvent OnGrabbed { get { if (onGrabbed == null) onGrabbed = new UnityEvent(); return onGrabbed; } } [SerializeField] private UnityEvent onGrabbed;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___onGrabbed_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onGrabbed_14), (void*)L_1);
	}

IL_0013:
	{
		// public UnityEvent OnGrabbed { get { if (onGrabbed == null) onGrabbed = new UnityEvent(); return onGrabbed; } } [SerializeField] private UnityEvent onGrabbed;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = __this->___onGrabbed_14;
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent PaintIn3D.Examples.P3dVrTool::get_OnDropped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* P3dVrTool_get_OnDropped_m9F9FF4378D3A6F87F33EEF9ECAB3BA4CEC1CE356 (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityEvent OnDropped { get { if (onDropped == null) onDropped = new UnityEvent(); return onDropped; } } [SerializeField] private UnityEvent onDropped;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onDropped_15;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public UnityEvent OnDropped { get { if (onDropped == null) onDropped = new UnityEvent(); return onDropped; } } [SerializeField] private UnityEvent onDropped;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___onDropped_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onDropped_15), (void*)L_1);
	}

IL_0013:
	{
		// public UnityEvent OnDropped { get { if (onDropped == null) onDropped = new UnityEvent(); return onDropped; } } [SerializeField] private UnityEvent onDropped;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = __this->___onDropped_15;
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent PaintIn3D.Examples.P3dVrTool::get_OnTriggerPress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* P3dVrTool_get_OnTriggerPress_m64CC5A41AA519E1F3A05047FDBAF5BBB7AE35D7B (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityEvent OnTriggerPress { get { if (onTriggerPress == null) onTriggerPress = new UnityEvent(); return onTriggerPress; } } [SerializeField] private UnityEvent onTriggerPress;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onTriggerPress_16;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public UnityEvent OnTriggerPress { get { if (onTriggerPress == null) onTriggerPress = new UnityEvent(); return onTriggerPress; } } [SerializeField] private UnityEvent onTriggerPress;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___onTriggerPress_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onTriggerPress_16), (void*)L_1);
	}

IL_0013:
	{
		// public UnityEvent OnTriggerPress { get { if (onTriggerPress == null) onTriggerPress = new UnityEvent(); return onTriggerPress; } } [SerializeField] private UnityEvent onTriggerPress;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = __this->___onTriggerPress_16;
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent PaintIn3D.Examples.P3dVrTool::get_OnTriggerRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* P3dVrTool_get_OnTriggerRelease_m509AC58C69F38734108D614614CDE50E44EF65A1 (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityEvent OnTriggerRelease { get { if (onTriggerRelease == null) onTriggerRelease = new UnityEvent(); return onTriggerRelease; } } [SerializeField] private UnityEvent onTriggerRelease;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onTriggerRelease_17;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public UnityEvent OnTriggerRelease { get { if (onTriggerRelease == null) onTriggerRelease = new UnityEvent(); return onTriggerRelease; } } [SerializeField] private UnityEvent onTriggerRelease;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___onTriggerRelease_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onTriggerRelease_17), (void*)L_1);
	}

IL_0013:
	{
		// public UnityEvent OnTriggerRelease { get { if (onTriggerRelease == null) onTriggerRelease = new UnityEvent(); return onTriggerRelease; } } [SerializeField] private UnityEvent onTriggerRelease;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = __this->___onTriggerRelease_17;
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent PaintIn3D.Examples.P3dVrTool::get_OnGripPress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* P3dVrTool_get_OnGripPress_m630E30BAFB6F381B877D9BF8BCAFAE8AC369667E (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityEvent OnGripPress { get { if (onGripPress == null) onGripPress = new UnityEvent(); return onGripPress; } } [SerializeField] private UnityEvent onGripPress;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onGripPress_18;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public UnityEvent OnGripPress { get { if (onGripPress == null) onGripPress = new UnityEvent(); return onGripPress; } } [SerializeField] private UnityEvent onGripPress;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___onGripPress_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onGripPress_18), (void*)L_1);
	}

IL_0013:
	{
		// public UnityEvent OnGripPress { get { if (onGripPress == null) onGripPress = new UnityEvent(); return onGripPress; } } [SerializeField] private UnityEvent onGripPress;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = __this->___onGripPress_18;
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent PaintIn3D.Examples.P3dVrTool::get_OnGripRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* P3dVrTool_get_OnGripRelease_m6CDBDB4D8F7D2836436A83E71152B212418B2648 (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityEvent OnGripRelease { get { if (onGripRelease == null) onGripRelease = new UnityEvent(); return onGripRelease; } } [SerializeField] private UnityEvent onGripRelease;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onGripRelease_19;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public UnityEvent OnGripRelease { get { if (onGripRelease == null) onGripRelease = new UnityEvent(); return onGripRelease; } } [SerializeField] private UnityEvent onGripRelease;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___onGripRelease_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onGripRelease_19), (void*)L_1);
	}

IL_0013:
	{
		// public UnityEvent OnGripRelease { get { if (onGripRelease == null) onGripRelease = new UnityEvent(); return onGripRelease; } } [SerializeField] private UnityEvent onGripRelease;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = __this->___onGripRelease_19;
		return L_2;
	}
}
// System.Void PaintIn3D.Examples.P3dVrTool::Grab(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrTool_Grab_m88565C4D196F938FA0C8FAFFA4EE12AC796D60CC (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, int32_t ___newNode0, const RuntimeMethod* method) 
{
	{
		// if (node != newNode)
		int32_t L_0 = __this->___node_8;
		int32_t L_1 = ___newNode0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0029;
		}
	}
	{
		// Drop();
		P3dVrTool_Drop_m8D605279E95FC19EFFCF221B2871D39FD7C88BF7(__this, NULL);
		// node = newNode;
		int32_t L_2 = ___newNode0;
		__this->___node_8 = L_2;
		// if (onGrabbed != null)
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = __this->___onGrabbed_14;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// onGrabbed.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = __this->___onGrabbed_14;
		NullCheck(L_4);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_4, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dVrTool::Drop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrTool_Drop_m8D605279E95FC19EFFCF221B2871D39FD7C88BF7 (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, const RuntimeMethod* method) 
{
	{
		// if (node >= 0)
		int32_t L_0 = __this->___node_8;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		// node = (XRNode)(-1);
		__this->___node_8 = (-1);
		// if (onDropped != null)
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = __this->___onDropped_15;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// onDropped.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = __this->___onDropped_15;
		NullCheck(L_2);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_2, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dVrTool::DropAndGrabNextTool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrTool_DropAndGrabNextTool_m68DF774FDF570D4D47AF997EB457D04764433F98 (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m73FAA9A8CCADBF277F87A58E1F9386957FECB512_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mACED5451FC866AA52F9E691E84A895EE9414599C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB96AB04FCA460A0138AFC57037063FF9157F7668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (node >= 0)
		int32_t L_0 = __this->___node_8;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		// var previousNode = node;
		int32_t L_1 = __this->___node_8;
		V_0 = L_1;
		// Drop();
		P3dVrTool_Drop_m8D605279E95FC19EFFCF221B2871D39FD7C88BF7(__this, NULL);
		// var tools = GetTools((XRNode)(-1));
		il2cpp_codegen_runtime_class_init_inline(P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D_il2cpp_TypeInfo_var);
		List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* L_2;
		L_2 = P3dVrTool_GetTools_mA073D07EB79044B2B3396EA8C0E8C2B2CD67BECA((-1), NULL);
		V_1 = L_2;
		// var index = tools.IndexOf(this);
		List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_IndexOf_m73FAA9A8CCADBF277F87A58E1F9386957FECB512(L_3, __this, List_1_IndexOf_m73FAA9A8CCADBF277F87A58E1F9386957FECB512_RuntimeMethod_var);
		V_2 = L_4;
		// tools[(index + 1) % tools.Count].Grab(previousNode);
		List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* L_5 = V_1;
		int32_t L_6 = V_2;
		List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mACED5451FC866AA52F9E691E84A895EE9414599C_inline(L_7, List_1_get_Count_mACED5451FC866AA52F9E691E84A895EE9414599C_RuntimeMethod_var);
		NullCheck(L_5);
		P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* L_9;
		L_9 = List_1_get_Item_mB96AB04FCA460A0138AFC57037063FF9157F7668(L_5, ((int32_t)(((int32_t)il2cpp_codegen_add(L_6, 1))%L_8)), List_1_get_Item_mB96AB04FCA460A0138AFC57037063FF9157F7668_RuntimeMethod_var);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		P3dVrTool_Grab_m88565C4D196F938FA0C8FAFFA4EE12AC796D60CC(L_9, L_10, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<PaintIn3D.Examples.P3dVrTool> PaintIn3D.Examples.P3dVrTool::GetTools(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* P3dVrTool_GetTools_mA073D07EB79044B2B3396EA8C0E8C2B2CD67BECA (int32_t ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetTools(node, ref tempTools);
		int32_t L_0 = ___node0;
		il2cpp_codegen_runtime_class_init_inline(P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D_il2cpp_TypeInfo_var);
		P3dVrTool_GetTools_m8806FC729C0AF344691C52DF860CF41A6906D84C(L_0, (&((P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D_StaticFields*)il2cpp_codegen_static_fields_for(P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D_il2cpp_TypeInfo_var))->___tempTools_20), NULL);
		// return tempTools;
		List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* L_1 = ((P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D_StaticFields*)il2cpp_codegen_static_fields_for(P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D_il2cpp_TypeInfo_var))->___tempTools_20;
		return L_1;
	}
}
// System.Void PaintIn3D.Examples.P3dVrTool::GetTools(UnityEngine.XR.XRNode,System.Collections.Generic.List`1<PaintIn3D.Examples.P3dVrTool>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrTool_GetTools_m8806FC729C0AF344691C52DF860CF41A6906D84C (int32_t ___node0, List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1** ___tools1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1E59F78CFDF5019F6670699DD7ED77EB2943D58D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m504FE2693AD44B2C1534D2115FC812D866B07E13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5E194B4E9EF4BB8E21979CCA019DAEF398342C8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dLinkedBehaviour_1_t43E8A9923C9A5DC25CE1A7AD8F3E18D7A4D51B33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (tools == null)
		List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1** L_0 = ___tools1;
		List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* L_1 = *((List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1**)L_0);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		// tools = new List<P3dVrTool>();
		List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1** L_2 = ___tools1;
		List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* L_3 = (List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1*)il2cpp_codegen_object_new(List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m5E194B4E9EF4BB8E21979CCA019DAEF398342C8B(L_3, List_1__ctor_m5E194B4E9EF4BB8E21979CCA019DAEF398342C8B_RuntimeMethod_var);
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_3);
		goto IL_0014;
	}

IL_000d:
	{
		// tools.Clear();
		List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1** L_4 = ___tools1;
		List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* L_5 = *((List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1**)L_4);
		NullCheck(L_5);
		List_1_Clear_m504FE2693AD44B2C1534D2115FC812D866B07E13_inline(L_5, List_1_Clear_m504FE2693AD44B2C1534D2115FC812D866B07E13_RuntimeMethod_var);
	}

IL_0014:
	{
		// var instance = FirstInstance;
		P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* L_6 = ((P3dLinkedBehaviour_1_t43E8A9923C9A5DC25CE1A7AD8F3E18D7A4D51B33_StaticFields*)il2cpp_codegen_static_fields_for(P3dLinkedBehaviour_1_t43E8A9923C9A5DC25CE1A7AD8F3E18D7A4D51B33_il2cpp_TypeInfo_var))->___FirstInstance_4;
		V_0 = L_6;
		// for (var i = 0; i < InstanceCount; i++)
		V_1 = 0;
		goto IL_003a;
	}

IL_001e:
	{
		// if (instance.node == node)
		P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___node_8;
		int32_t L_9 = ___node0;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_002f;
		}
	}
	{
		// tools.Add(instance);
		List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1** L_10 = ___tools1;
		List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* L_11 = *((List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1**)L_10);
		P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* L_12 = V_0;
		NullCheck(L_11);
		List_1_Add_m1E59F78CFDF5019F6670699DD7ED77EB2943D58D_inline(L_11, L_12, List_1_Add_m1E59F78CFDF5019F6670699DD7ED77EB2943D58D_RuntimeMethod_var);
	}

IL_002f:
	{
		// instance = instance.NextInstance;
		P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* L_13 = V_0;
		NullCheck(L_13);
		P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* L_14 = ((P3dLinkedBehaviour_1_t43E8A9923C9A5DC25CE1A7AD8F3E18D7A4D51B33*)L_13)->___NextInstance_7;
		V_0 = L_14;
		// for (var i = 0; i < InstanceCount; i++)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003a:
	{
		// for (var i = 0; i < InstanceCount; i++)
		int32_t L_16 = V_1;
		int32_t L_17 = ((P3dLinkedBehaviour_1_t43E8A9923C9A5DC25CE1A7AD8F3E18D7A4D51B33_StaticFields*)il2cpp_codegen_static_fields_for(P3dLinkedBehaviour_1_t43E8A9923C9A5DC25CE1A7AD8F3E18D7A4D51B33_il2cpp_TypeInfo_var))->___InstanceCount_5;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_001e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dVrTool::DropAllTools(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrTool_DropAllTools_mF3CEA99F9FB646AF97D12683519D31C24040D4C5 (int32_t ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dLinkedBehaviour_1_t43E8A9923C9A5DC25CE1A7AD8F3E18D7A4D51B33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var instance = FirstInstance;
		P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* L_0 = ((P3dLinkedBehaviour_1_t43E8A9923C9A5DC25CE1A7AD8F3E18D7A4D51B33_StaticFields*)il2cpp_codegen_static_fields_for(P3dLinkedBehaviour_1_t43E8A9923C9A5DC25CE1A7AD8F3E18D7A4D51B33_il2cpp_TypeInfo_var))->___FirstInstance_4;
		V_0 = L_0;
		// for (var i = 0; i < InstanceCount; i++)
		V_1 = 0;
		goto IL_0024;
	}

IL_000a:
	{
		// if (instance.node == node)
		P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___node_8;
		int32_t L_3 = ___node0;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0019;
		}
	}
	{
		// instance.Drop();
		P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* L_4 = V_0;
		NullCheck(L_4);
		P3dVrTool_Drop_m8D605279E95FC19EFFCF221B2871D39FD7C88BF7(L_4, NULL);
	}

IL_0019:
	{
		// instance = instance.NextInstance;
		P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* L_5 = V_0;
		NullCheck(L_5);
		P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* L_6 = ((P3dLinkedBehaviour_1_t43E8A9923C9A5DC25CE1A7AD8F3E18D7A4D51B33*)L_5)->___NextInstance_7;
		V_0 = L_6;
		// for (var i = 0; i < InstanceCount; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0024:
	{
		// for (var i = 0; i < InstanceCount; i++)
		int32_t L_8 = V_1;
		int32_t L_9 = ((P3dLinkedBehaviour_1_t43E8A9923C9A5DC25CE1A7AD8F3E18D7A4D51B33_StaticFields*)il2cpp_codegen_static_fields_for(P3dLinkedBehaviour_1_t43E8A9923C9A5DC25CE1A7AD8F3E18D7A4D51B33_il2cpp_TypeInfo_var))->___InstanceCount_5;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dVrTool::UpdateGripped(PaintIn3D.Examples.P3dVrManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrTool_UpdateGripped_mFB61909458D9514D5F674D3D7CD13AF2BB19D6E1 (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* ___vrManager0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	float V_4 = 0.0f;
	{
		// var position    = default(Vector3);
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// var positionSet = false;
		V_1 = (bool)0;
		// if (vrManager.TryGetPosition(node, ref position) == true)
		P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* L_0 = ___vrManager0;
		int32_t L_1 = __this->___node_8;
		NullCheck(L_0);
		bool L_2;
		L_2 = P3dVrManager_TryGetPosition_m687A990E85721DC80063FD809CF23C6BC0BB5224(L_0, L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0089;
		}
	}
	{
		// positionSet = true;
		V_1 = (bool)1;
		// if (vrManager.IsSimulation == true)
		P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* L_3 = ___vrManager0;
		NullCheck(L_3);
		bool L_4;
		L_4 = P3dVrManager_get_IsSimulation_m4BA2663C0A2BAB7484654FA8467CD01DC1604750(L_3, NULL);
		if (!L_4)
		{
			goto IL_006c;
		}
	}
	{
		// position += transform.rotation * localOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___localOffset_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_9, NULL);
		V_0 = L_10;
		// if (vrManager.GetTrigger(node) == true)
		P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* L_11 = ___vrManager0;
		int32_t L_12 = __this->___node_8;
		NullCheck(L_11);
		bool L_13;
		L_13 = P3dVrManager_GetTrigger_mDA23F2FAA2815A253C45AADAF56E463E7BC9DC80(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_006c;
		}
	}
	{
		// position += transform.rotation * simulatedKeyOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___simulatedKeyOffset_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_16, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_14, L_18, NULL);
		V_0 = L_19;
	}

IL_006c:
	{
		// position += transform.rotation * simulatedOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_21);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___simulatedOffset_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_22, L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_24, NULL);
		V_0 = L_25;
	}

IL_0089:
	{
		// var rotation    = default(Quaternion);
		il2cpp_codegen_initobj((&V_2), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		// var rotationSet = false;
		V_3 = (bool)0;
		// if (vrManager.TryGetRotation(node, ref rotation) == true)
		P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* L_26 = ___vrManager0;
		int32_t L_27 = __this->___node_8;
		NullCheck(L_26);
		bool L_28;
		L_28 = P3dVrManager_TryGetRotation_m1C14358F3AF543F913382E8361B3592C1F84BE04(L_26, L_27, (&V_2), NULL);
		if (!L_28)
		{
			goto IL_00a5;
		}
	}
	{
		// rotationSet = true;
		V_3 = (bool)1;
	}

IL_00a5:
	{
		// var dampening = 1.0f;
		V_4 = (1.0f);
		// if (vrManager.IsSimulation == true)
		P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* L_29 = ___vrManager0;
		NullCheck(L_29);
		bool L_30;
		L_30 = P3dVrManager_get_IsSimulation_m4BA2663C0A2BAB7484654FA8467CD01DC1604750(L_29, NULL);
		if (!L_30)
		{
			goto IL_00c6;
		}
	}
	{
		// dampening = P3dHelper.DampenFactor(simulatedDampening, Time.deltaTime);
		float L_31 = __this->___simulatedDampening_13;
		float L_32;
		L_32 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		il2cpp_codegen_runtime_class_init_inline(P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		float L_33;
		L_33 = P3dHelper_DampenFactor_m25BC0A89681F5444A5D55D1D4CF8FCB9B20EEED3(L_31, L_32, NULL);
		V_4 = L_33;
	}

IL_00c6:
	{
		// if (positionSet == true)
		bool L_34 = V_1;
		if (!L_34)
		{
			goto IL_00e7;
		}
	}
	{
		// transform.position = Vector3.Lerp(transform.position, position, dampening);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_0;
		float L_39 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_37, L_38, L_39, NULL);
		NullCheck(L_35);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_35, L_40, NULL);
	}

IL_00e7:
	{
		// if (rotationSet == true)
		bool L_41 = V_3;
		if (!L_41)
		{
			goto IL_0108;
		}
	}
	{
		// transform.rotation = Quaternion.Slerp(transform.rotation, rotation, dampening);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_43);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44;
		L_44 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_43, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45 = V_2;
		float L_46 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_47;
		L_47 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_44, L_45, L_46, NULL);
		NullCheck(L_42);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_42, L_47, NULL);
	}

IL_0108:
	{
		// if (vrManager.GetTriggerPressed(node) == true)
		P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* L_48 = ___vrManager0;
		int32_t L_49 = __this->___node_8;
		NullCheck(L_48);
		bool L_50;
		L_50 = P3dVrManager_GetTriggerPressed_mC14F58C8D28E64DEFD76ACE9833B854954DA2A8F(L_48, L_49, NULL);
		if (!L_50)
		{
			goto IL_0136;
		}
	}
	{
		// if (storeStates == true)
		bool L_51 = __this->___storeStates_9;
		if (!L_51)
		{
			goto IL_0123;
		}
	}
	{
		// P3dStateManager.StoreAllStates();
		P3dStateManager_StoreAllStates_m6826D145BC61570B8E611A286518036D9D160B6A(NULL);
	}

IL_0123:
	{
		// if (onTriggerPress != null)
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_52 = __this->___onTriggerPress_16;
		if (!L_52)
		{
			goto IL_0136;
		}
	}
	{
		// onTriggerPress.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_53 = __this->___onTriggerPress_16;
		NullCheck(L_53);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_53, NULL);
	}

IL_0136:
	{
		// if (vrManager.GetTriggerReleased(node) == true)
		P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* L_54 = ___vrManager0;
		int32_t L_55 = __this->___node_8;
		NullCheck(L_54);
		bool L_56;
		L_56 = P3dVrManager_GetTriggerReleased_mC2E79B178186A76DF70BCD61BF6BD0573D0BAEA5(L_54, L_55, NULL);
		if (!L_56)
		{
			goto IL_0157;
		}
	}
	{
		// if (onTriggerRelease != null)
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_57 = __this->___onTriggerRelease_17;
		if (!L_57)
		{
			goto IL_0157;
		}
	}
	{
		// onTriggerRelease.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_58 = __this->___onTriggerRelease_17;
		NullCheck(L_58);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_58, NULL);
	}

IL_0157:
	{
		// if (vrManager.GetGripPressed(node) == true)
		P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* L_59 = ___vrManager0;
		int32_t L_60 = __this->___node_8;
		NullCheck(L_59);
		bool L_61;
		L_61 = P3dVrManager_GetGripPressed_mFEFAEB0640B4020EF3A563F32BC8F6D6E0766CD7(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0178;
		}
	}
	{
		// if (onGripPress != null)
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_62 = __this->___onGripPress_18;
		if (!L_62)
		{
			goto IL_0178;
		}
	}
	{
		// onGripPress.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_63 = __this->___onGripPress_18;
		NullCheck(L_63);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_63, NULL);
	}

IL_0178:
	{
		// if (vrManager.GetGripReleased(node) == true)
		P3dVrManager_t80014AC71B72D5DCF430197DE83E1621BF4CF0E1* L_64 = ___vrManager0;
		int32_t L_65 = __this->___node_8;
		NullCheck(L_64);
		bool L_66;
		L_66 = P3dVrManager_GetGripReleased_m59D79D85EA50E1A97D4085E116CB06929C167F99(L_64, L_65, NULL);
		if (!L_66)
		{
			goto IL_0199;
		}
	}
	{
		// if (onGripRelease != null)
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_67 = __this->___onGripRelease_19;
		if (!L_67)
		{
			goto IL_0199;
		}
	}
	{
		// onGripRelease.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_68 = __this->___onGripRelease_19;
		NullCheck(L_68);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_68, NULL);
	}

IL_0199:
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dVrTool::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrTool_Start_mF14D4415AE53BEE022C247909019366E6E57BA2D (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, const RuntimeMethod* method) 
{
	{
		// if (node >= 0)
		int32_t L_0 = __this->___node_8;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		// if (onGrabbed != null)
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = __this->___onGrabbed_14;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// onGrabbed.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = __this->___onGrabbed_14;
		NullCheck(L_2);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_2, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dVrTool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrTool__ctor_m4E3DB1C394F4770B593D5D08B8BC74156ECEC7E8 (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dLinkedBehaviour_1__ctor_mDBB8BA0951D2471E661C7A0A2DBAC9F988BC1299_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRNode Node { set { node = value; } get { return node; } } [SerializeField] private XRNode node = XRNode.RightHand;
		__this->___node_8 = 5;
		// public bool StoreStates { set { storeStates = value; } get { return storeStates; } } [SerializeField] private bool storeStates = true;
		__this->___storeStates_9 = (bool)1;
		// public Vector3 SimulatedOffset { set { simulatedOffset = value; } get { return simulatedOffset; } } [SerializeField] private Vector3 simulatedOffset = new Vector3(0.0f, 0.0f, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___simulatedOffset_11 = L_0;
		// public float SimulatedDampening { set { simulatedDampening = value; } get { return simulatedDampening; } } [SerializeField] private float simulatedDampening = 5.0f;
		__this->___simulatedDampening_13 = (5.0f);
		P3dLinkedBehaviour_1__ctor_mDBB8BA0951D2471E661C7A0A2DBAC9F988BC1299(__this, P3dLinkedBehaviour_1__ctor_mDBB8BA0951D2471E661C7A0A2DBAC9F988BC1299_RuntimeMethod_var);
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dVrTool::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dVrTool__cctor_mE9B4F8D0A31326C600B517A03F9B41A8A9D0CEBD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5E194B4E9EF4BB8E21979CCA019DAEF398342C8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<P3dVrTool> tempTools = new List<P3dVrTool>();
		List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1* L_0 = (List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1*)il2cpp_codegen_object_new(List_1_t0855D13B3F067A583B0582AD0CD63BB34773A4E1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m5E194B4E9EF4BB8E21979CCA019DAEF398342C8B(L_0, List_1__ctor_m5E194B4E9EF4BB8E21979CCA019DAEF398342C8B_RuntimeMethod_var);
		((P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D_StaticFields*)il2cpp_codegen_static_fields_for(P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D_il2cpp_TypeInfo_var))->___tempTools_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D_StaticFields*)il2cpp_codegen_static_fields_for(P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D_il2cpp_TypeInfo_var))->___tempTools_20), (void*)L_0);
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
// System.Void PaintIn3D.Examples.P3dChangeCounter::set_Threshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dChangeCounter_set_Threshold_m16425868CC935EBA7826E8DBEC2D510397D82A91 (P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Threshold { set { threshold = value; } get { return threshold; } } [Range(0.0f, 1.0f)] [SerializeField] private float threshold = 0.1f;
		float L_0 = ___value0;
		__this->___threshold_23 = L_0;
		// public float Threshold { set { threshold = value; } get { return threshold; } } [Range(0.0f, 1.0f)] [SerializeField] private float threshold = 0.1f;
		return;
	}
}
// System.Single PaintIn3D.Examples.P3dChangeCounter::get_Threshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dChangeCounter_get_Threshold_mE7A1B175063B63ADB219846A8E7F399133C22F2B (P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* __this, const RuntimeMethod* method) 
{
	{
		// public float Threshold { set { threshold = value; } get { return threshold; } } [Range(0.0f, 1.0f)] [SerializeField] private float threshold = 0.1f;
		float L_0 = __this->___threshold_23;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dChangeCounter::set_Texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dChangeCounter_set_Texture_m376B54ED79A0A332F44E29AB433358417727CC5C (P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) 
{
	{
		// public Texture Texture { set { texture = value; } get { return texture; } } [SerializeField] private Texture texture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___value0;
		__this->___texture_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texture_24), (void*)L_0);
		// public Texture Texture { set { texture = value; } get { return texture; } } [SerializeField] private Texture texture;
		return;
	}
}
// UnityEngine.Texture PaintIn3D.Examples.P3dChangeCounter::get_Texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* P3dChangeCounter_get_Texture_m250102049957D6DE7663EBE3E5E8018876679E06 (P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* __this, const RuntimeMethod* method) 
{
	{
		// public Texture Texture { set { texture = value; } get { return texture; } } [SerializeField] private Texture texture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___texture_24;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dChangeCounter::set_Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dChangeCounter_set_Color_m8864D629564188D6E853C545F23DCD32C36711F5 (P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___color_25 = L_0;
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		return;
	}
}
// UnityEngine.Color PaintIn3D.Examples.P3dChangeCounter::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F P3dChangeCounter_get_Color_m7BC18FF9C9BFC24CFF21BA49289433E1587C6003 (P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* __this, const RuntimeMethod* method) 
{
	{
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_25;
		return L_0;
	}
}
// System.Int32 PaintIn3D.Examples.P3dChangeCounter::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dChangeCounter_get_Count_m268087CDA8AD274B376A2A250A92DDA51C259A49 (P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* __this, const RuntimeMethod* method) 
{
	{
		// public int Count { get { return count; } } [SerializeField] private int count;
		int32_t L_0 = __this->___count_26;
		return L_0;
	}
}
// System.Single PaintIn3D.Examples.P3dChangeCounter::get_Ratio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dChangeCounter_get_Ratio_mE2F30583C954A635976CD8B8D9FDE1F9EF0D9E54 (P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* __this, const RuntimeMethod* method) 
{
	{
		// public float Ratio { get { return total > 0 ? count / (float)total : 0.0f; } }
		int32_t L_0 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		return (0.0f);
	}

IL_000f:
	{
		int32_t L_1 = __this->___count_26;
		int32_t L_2 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17;
		return ((float)(((float)L_1)/((float)L_2)));
	}
}
// System.Int64 PaintIn3D.Examples.P3dChangeCounter::GetTotal(System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChangeCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t P3dChangeCounter_GetTotal_m0A54769A9A3A395F582FADDF07DE8E10114A3847 (RuntimeObject* ___counters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9ABDFCC9DB6E4CF901414DD82C7F2BE46CB04C20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0ADBCF3ED0EAA15CAB1C07BCF4664119278E81CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* V_2 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// var total = 0L; foreach (var counter in counters ?? Instances) { total += counter.total; } return total;
		V_0 = ((int64_t)0);
		// var total = 0L; foreach (var counter in counters ?? Instances) { total += counter.total; } return total;
		RuntimeObject* L_0 = ___counters0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_il2cpp_TypeInfo_var);
		LinkedList_1_tD84633A6C61B300EF3932D5FF9149A5EEC0242FA* L_2 = ((P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_StaticFields*)il2cpp_codegen_static_fields_for(P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_il2cpp_TypeInfo_var))->___Instances_21;
		G_B2_0 = ((RuntimeObject*)(L_2));
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<PaintIn3D.Examples.P3dChangeCounter>::GetEnumerator() */, IEnumerable_1_t9ABDFCC9DB6E4CF901414DD82C7F2BE46CB04C20_il2cpp_TypeInfo_var, G_B2_0);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0039:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_0015_1:
			{
				// var total = 0L; foreach (var counter in counters ?? Instances) { total += counter.total; } return total;
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* L_7;
				L_7 = InterfaceFuncInvoker0< P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<PaintIn3D.Examples.P3dChangeCounter>::get_Current() */, IEnumerator_1_t0ADBCF3ED0EAA15CAB1C07BCF4664119278E81CF_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				// var total = 0L; foreach (var counter in counters ?? Instances) { total += counter.total; } return total;
				int64_t L_8 = V_0;
				P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* L_9 = V_2;
				NullCheck(L_9);
				int32_t L_10 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)L_9)->___total_17;
				V_0 = ((int64_t)il2cpp_codegen_add(L_8, ((int64_t)L_10)));
			}

IL_0026_1:
			{
				// var total = 0L; foreach (var counter in counters ?? Instances) { total += counter.total; } return total;
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// var total = 0L; foreach (var counter in counters ?? Instances) { total += counter.total; } return total;
		int64_t L_13 = V_0;
		return L_13;
	}
}
// System.Int64 PaintIn3D.Examples.P3dChangeCounter::GetCount(System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChangeCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t P3dChangeCounter_GetCount_m3BED9025AF2FE78E5175A409EA4B539683D339D2 (RuntimeObject* ___counters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9ABDFCC9DB6E4CF901414DD82C7F2BE46CB04C20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0ADBCF3ED0EAA15CAB1C07BCF4664119278E81CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* V_2 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.count; } return solid;
		V_0 = ((int64_t)0);
		// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.count; } return solid;
		RuntimeObject* L_0 = ___counters0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_il2cpp_TypeInfo_var);
		LinkedList_1_tD84633A6C61B300EF3932D5FF9149A5EEC0242FA* L_2 = ((P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_StaticFields*)il2cpp_codegen_static_fields_for(P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_il2cpp_TypeInfo_var))->___Instances_21;
		G_B2_0 = ((RuntimeObject*)(L_2));
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<PaintIn3D.Examples.P3dChangeCounter>::GetEnumerator() */, IEnumerable_1_t9ABDFCC9DB6E4CF901414DD82C7F2BE46CB04C20_il2cpp_TypeInfo_var, G_B2_0);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0039:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_0015_1:
			{
				// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.count; } return solid;
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* L_7;
				L_7 = InterfaceFuncInvoker0< P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<PaintIn3D.Examples.P3dChangeCounter>::get_Current() */, IEnumerator_1_t0ADBCF3ED0EAA15CAB1C07BCF4664119278E81CF_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.count; } return solid;
				int64_t L_8 = V_0;
				P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* L_9 = V_2;
				NullCheck(L_9);
				int32_t L_10 = L_9->___count_26;
				V_0 = ((int64_t)il2cpp_codegen_add(L_8, ((int64_t)L_10)));
			}

IL_0026_1:
			{
				// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.count; } return solid;
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.count; } return solid;
		int64_t L_13 = V_0;
		return L_13;
	}
}
// System.Single PaintIn3D.Examples.P3dChangeCounter::GetRatio(System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChangeCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dChangeCounter_GetRatio_m4D7BC9EA487506127CC409177F91F6DC28DF22BC (RuntimeObject* ___counters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return P3dHelper.Divide(GetCount(counters), GetTotal(counters));
		RuntimeObject* L_0 = ___counters0;
		il2cpp_codegen_runtime_class_init_inline(P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = P3dChangeCounter_GetCount_m3BED9025AF2FE78E5175A409EA4B539683D339D2(L_0, NULL);
		RuntimeObject* L_2 = ___counters0;
		int64_t L_3;
		L_3 = P3dChangeCounter_GetTotal_m0A54769A9A3A395F582FADDF07DE8E10114A3847(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = P3dHelper_Divide_m28D902114AA27F5ABDB388E5F750A121610E1A65(((float)L_1), ((float)L_3), NULL);
		return L_4;
	}
}
// System.Void PaintIn3D.Examples.P3dChangeCounter::HandleCompleteChange(Unity.Collections.NativeArray`1<UnityEngine.Color32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dChangeCounter_HandleCompleteChange_mB8F3CA641A6DDD7BA0937FABCAF307F8AB68C25C (P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* __this, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___pixels0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Copy_m7B89E95C500C16215128F9704F441235D18C2C75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m91FFC8B88A790FFBEB65362E2925F5C675B1A9C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m758EC83047117608085E10546B2054D8300A607A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m8C851A2AEB6FF855EA6F3E0AC37DB90F7AD14AC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (changePixels.IsCreated == true && changePixels.Length != pixels.Length)
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_0 = (&__this->___changePixels_29);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D(L_0, NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_2 = (&__this->___changePixels_29);
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_2)->___m_Length_1);
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___pixels0))->___m_Length_1);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002c;
		}
	}
	{
		// changePixels.Dispose();
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_5 = (&__this->___changePixels_29);
		NativeArray_1_Dispose_m91FFC8B88A790FFBEB65362E2925F5C675B1A9C6(L_5, NativeArray_1_Dispose_m91FFC8B88A790FFBEB65362E2925F5C675B1A9C6_RuntimeMethod_var);
	}

IL_002c:
	{
		// if (changePixels.IsCreated == false)
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_6 = (&__this->___changePixels_29);
		bool L_7;
		L_7 = NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D(L_6, NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_004d;
		}
	}
	{
		// changePixels = new NativeArray<Color32>(pixels.Length, Allocator.Persistent);
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___pixels0))->___m_Length_1);
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeArray_1__ctor_m758EC83047117608085E10546B2054D8300A607A((&L_9), L_8, 4, 1, /*hidden argument*/NativeArray_1__ctor_m758EC83047117608085E10546B2054D8300A607A_RuntimeMethod_var);
		__this->___changePixels_29 = L_9;
	}

IL_004d:
	{
		// if (changePixels.IsCreated == true)
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_10 = (&__this->___changePixels_29);
		bool L_11;
		L_11 = NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D(L_10, NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0068;
		}
	}
	{
		// NativeArray<Color32>.Copy(pixels, changePixels);
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_12 = ___pixels0;
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_13 = __this->___changePixels_29;
		NativeArray_1_Copy_m7B89E95C500C16215128F9704F441235D18C2C75(L_12, L_13, NativeArray_1_Copy_m7B89E95C500C16215128F9704F441235D18C2C75_RuntimeMethod_var);
		goto IL_0075;
	}

IL_0068:
	{
		// changePixels = new NativeArray<Color32>(pixels, Allocator.Persistent);
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_14 = ___pixels0;
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_15;
		memset((&L_15), 0, sizeof(L_15));
		NativeArray_1__ctor_m8C851A2AEB6FF855EA6F3E0AC37DB90F7AD14AC6((&L_15), L_14, 4, /*hidden argument*/NativeArray_1__ctor_m8C851A2AEB6FF855EA6F3E0AC37DB90F7AD14AC6_RuntimeMethod_var);
		__this->___changePixels_29 = L_15;
	}

IL_0075:
	{
		// HandleComplete(changeReader.DownsampleBoost);
		P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* L_16 = __this->___changeReader_28;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = P3dReader_get_DownsampleBoost_mDB506481EC62604A391227A9F55F82ADFAFA23A0_inline(L_16, NULL);
		VirtualActionInvoker1< int32_t >::Invoke(8 /* System.Void PaintIn3D.P3dPaintableTextureMonitor::HandleComplete(System.Int32) */, __this, L_17);
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dChangeCounter::HandleComplete(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dChangeCounter_HandleComplete_m730112A3AB3E8BAA609AB488CB42C1216BCD27F1 (P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* __this, int32_t ___boost0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_2;
	memset((&V_2), 0, sizeof(V_2));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (currentPixels.IsCreated == false || maskPixels.IsCreated == false || changePixels.IsCreated == false || currentPixels.Length != maskPixels.Length || currentPixels.Length != changePixels.Length)
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_0 = (&((P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078*)__this)->___currentPixels_13);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D(L_0, NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_2 = (&((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___maskPixels_20);
		bool L_3;
		L_3 = NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081(L_2, NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0057;
		}
	}
	{
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_4 = (&__this->___changePixels_29);
		bool L_5;
		L_5 = NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D(L_4, NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0057;
		}
	}
	{
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_6 = (&((P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078*)__this)->___currentPixels_13);
		int32_t L_7;
		L_7 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_6)->___m_Length_1);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_8 = (&((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___maskPixels_20);
		int32_t L_9;
		L_9 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_8)->___m_Length_1);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0057;
		}
	}
	{
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_10 = (&((P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078*)__this)->___currentPixels_13);
		int32_t L_11;
		L_11 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_10)->___m_Length_1);
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_12 = (&__this->___changePixels_29);
		int32_t L_13;
		L_13 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_12)->___m_Length_1);
		if ((((int32_t)L_11) == ((int32_t)L_13)))
		{
			goto IL_0058;
		}
	}

IL_0057:
	{
		// return;
		return;
	}

IL_0058:
	{
		// var threshold32 = (byte)(threshold * 255.0f);
		float L_14 = __this->___threshold_23;
		V_0 = (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		// count = 0;
		__this->___count_26 = 0;
		// total = 0;
		((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17 = 0;
		// for (var i = 0; i < currentPixels.Length; i++)
		V_1 = 0;
		goto IL_0118;
	}

IL_007b:
	{
		// if (maskPixels[i] > 127)
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_15 = (&((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___maskPixels_20);
		int32_t L_16 = V_1;
		uint8_t L_17;
		L_17 = IL2CPP_NATIVEARRAY_GET_ITEM(uint8_t, (L_15)->___m_Buffer_0, L_16);
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0114;
		}
	}
	{
		// total++;
		int32_t L_18 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17;
		((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		// var currentPixel = currentPixels[i];
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_19 = (&((P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078*)__this)->___currentPixels_13);
		int32_t L_20 = V_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_21;
		L_21 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (L_19)->___m_Buffer_0, L_20);
		V_2 = L_21;
		// var changePixel  = changePixels[i];
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_22 = (&__this->___changePixels_29);
		int32_t L_23 = V_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_24;
		L_24 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (L_22)->___m_Buffer_0, L_23);
		V_3 = L_24;
		// var distance     = 0;
		// distance += System.Math.Abs(changePixel.r - currentPixel.r);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_25 = V_3;
		uint8_t L_26 = L_25.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_27 = V_2;
		uint8_t L_28 = L_27.___r_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_29;
		L_29 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)L_28)));
		// distance += System.Math.Abs(changePixel.g - currentPixel.g);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_30 = V_3;
		uint8_t L_31 = L_30.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_32 = V_2;
		uint8_t L_33 = L_32.___g_2;
		int32_t L_34;
		L_34 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)L_33)));
		// distance += System.Math.Abs(changePixel.b - currentPixel.b);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_35 = V_3;
		uint8_t L_36 = L_35.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_37 = V_2;
		uint8_t L_38 = L_37.___b_3;
		int32_t L_39;
		L_39 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_38)));
		// distance += System.Math.Abs(changePixel.a - currentPixel.a);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_40 = V_3;
		uint8_t L_41 = L_40.___a_4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_42 = V_2;
		uint8_t L_43 = L_42.___a_4;
		int32_t L_44;
		L_44 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)L_43)));
		// if (distance <= threshold32)
		uint8_t L_45 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(0, L_29)), L_34)), L_39)), L_44))) > ((int32_t)L_45)))
		{
			goto IL_0114;
		}
	}
	{
		// count++;
		int32_t L_46 = __this->___count_26;
		__this->___count_26 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_0114:
	{
		// for (var i = 0; i < currentPixels.Length; i++)
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0118:
	{
		// for (var i = 0; i < currentPixels.Length; i++)
		int32_t L_48 = V_1;
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_49 = (&((P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078*)__this)->___currentPixels_13);
		int32_t L_50;
		L_50 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_49)->___m_Length_1);
		if ((((int32_t)L_48) < ((int32_t)L_50)))
		{
			goto IL_007b;
		}
	}
	{
		// total *= boost;
		int32_t L_51 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17;
		int32_t L_52 = ___boost0;
		((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17 = ((int32_t)il2cpp_codegen_multiply(L_51, L_52));
		// count *= boost;
		int32_t L_53 = __this->___count_26;
		int32_t L_54 = ___boost0;
		__this->___count_26 = ((int32_t)il2cpp_codegen_multiply(L_53, L_54));
		// InvokeOnUpdated();
		P3dPaintableTextureMonitor_InvokeOnUpdated_m973D9D449BBCF9E77928E5D4C65D69D9CE61D099(__this, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dChangeCounter::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dChangeCounter_OnEnable_m4CCA2254BFD2CADDEC8842A4B4648D12BB6C5901 (P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_AddLast_m3EC9FB56C5415A29F07C6656619A965F3BE00594_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dChangeCounter_HandleCompleteChange_mB8F3CA641A6DDD7BA0937FABCAF307F8AB68C25C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		P3dPaintableTextureMonitorMask_OnEnable_m76650F2E7B61B2D118C1180F9A507C186EABA6A3(__this, NULL);
		// node = Instances.AddLast(this);
		il2cpp_codegen_runtime_class_init_inline(P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_il2cpp_TypeInfo_var);
		LinkedList_1_tD84633A6C61B300EF3932D5FF9149A5EEC0242FA* L_0 = ((P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_StaticFields*)il2cpp_codegen_static_fields_for(P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_il2cpp_TypeInfo_var))->___Instances_21;
		NullCheck(L_0);
		LinkedListNode_1_t5B79FCCCB747EA1C7D52F3CF711154C956DBFE6D* L_1;
		L_1 = LinkedList_1_AddLast_m3EC9FB56C5415A29F07C6656619A965F3BE00594(L_0, __this, LinkedList_1_AddLast_m3EC9FB56C5415A29F07C6656619A965F3BE00594_RuntimeMethod_var);
		__this->___node_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___node_22), (void*)L_1);
		// if (changeReader != null)
		P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* L_2 = __this->___changeReader_28;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// changeReader.OnComplete += HandleCompleteChange;
		P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* L_3 = __this->___changeReader_28;
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_4 = (Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F*)il2cpp_codegen_object_new(Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_mD1DAA77F82DFC182C1D5CE9D323B1D05C2D1E4B7(L_4, __this, (intptr_t)((void*)P3dChangeCounter_HandleCompleteChange_mB8F3CA641A6DDD7BA0937FABCAF307F8AB68C25C_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		P3dReader_add_OnComplete_mDFFE350011A2C71EF1862BFE252020BAE6E0AAB4(L_3, L_4, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dChangeCounter::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dChangeCounter_OnDisable_mE7BADFEE29967C428CC6953EA795ABA0086E435C (P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_Remove_mE751796C8AFDA7F9E6B97863D3FADBC42A70287D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dChangeCounter_HandleCompleteChange_mB8F3CA641A6DDD7BA0937FABCAF307F8AB68C25C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		P3dPaintableTextureMonitorMask_OnDisable_mCA845C2E965A853D95C020EEA9035E9273D3F3F3(__this, NULL);
		// Instances.Remove(node); node = null;
		il2cpp_codegen_runtime_class_init_inline(P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_il2cpp_TypeInfo_var);
		LinkedList_1_tD84633A6C61B300EF3932D5FF9149A5EEC0242FA* L_0 = ((P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_StaticFields*)il2cpp_codegen_static_fields_for(P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_il2cpp_TypeInfo_var))->___Instances_21;
		LinkedListNode_1_t5B79FCCCB747EA1C7D52F3CF711154C956DBFE6D* L_1 = __this->___node_22;
		NullCheck(L_0);
		LinkedList_1_Remove_mE751796C8AFDA7F9E6B97863D3FADBC42A70287D(L_0, L_1, LinkedList_1_Remove_mE751796C8AFDA7F9E6B97863D3FADBC42A70287D_RuntimeMethod_var);
		// Instances.Remove(node); node = null;
		__this->___node_22 = (LinkedListNode_1_t5B79FCCCB747EA1C7D52F3CF711154C956DBFE6D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___node_22), (void*)(LinkedListNode_1_t5B79FCCCB747EA1C7D52F3CF711154C956DBFE6D*)NULL);
		// if (changeReader != null)
		P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* L_2 = __this->___changeReader_28;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// changeReader.OnComplete -= HandleCompleteChange;
		P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* L_3 = __this->___changeReader_28;
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_4 = (Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F*)il2cpp_codegen_object_new(Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_mD1DAA77F82DFC182C1D5CE9D323B1D05C2D1E4B7(L_4, __this, (intptr_t)((void*)P3dChangeCounter_HandleCompleteChange_mB8F3CA641A6DDD7BA0937FABCAF307F8AB68C25C_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		P3dReader_remove_OnComplete_m84EF0B0012144214AF3F074305792628C8EFB7D1(L_3, L_4, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dChangeCounter::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dChangeCounter_OnDestroy_m54D13830DFBB587F11229A483A0BD8CC2D223BF4 (P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m91FFC8B88A790FFBEB65362E2925F5C675B1A9C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDestroy();
		P3dPaintableTextureMonitorMask_OnDestroy_m9DDB895EA2A89C7E46033FB4C68D00D10D2EEAE7(__this, NULL);
		// if (changeReader != null)
		P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* L_0 = __this->___changeReader_28;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// changeReader.Release();
		P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* L_1 = __this->___changeReader_28;
		NullCheck(L_1);
		P3dReader_Release_m5A459BB1F1801EBD3F1DD9CBDA94FB82079458F2(L_1, NULL);
	}

IL_0019:
	{
		// if (changePixels.IsCreated == true)
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_2 = (&__this->___changePixels_29);
		bool L_3;
		L_3 = NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D(L_2, NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// changePixels.Dispose();
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_4 = (&__this->___changePixels_29);
		NativeArray_1_Dispose_m91FFC8B88A790FFBEB65362E2925F5C675B1A9C6(L_4, NativeArray_1_Dispose_m91FFC8B88A790FFBEB65362E2925F5C675B1A9C6_RuntimeMethod_var);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dChangeCounter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dChangeCounter_Update_mF8F18FFA9664893873EB01A97FAD6CE4861CE788 (P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dChangeCounter_HandleCompleteChange_mB8F3CA641A6DDD7BA0937FABCAF307F8AB68C25C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dReader_NeedsUpdating_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m76E0CA4BACFC6BCDFE18411F3269A1CDF5C0C8EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_1 = NULL;
	{
		// base.Update();
		P3dPaintableTextureMonitorMask_Update_mEFF1D6103AE6098302E0603E4E3835E21DC9C5D6(__this, NULL);
		// if (changeReader == null)
		P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* L_0 = __this->___changeReader_28;
		if (L_0)
		{
			goto IL_0030;
		}
	}
	{
		// changeReader = new P3dReader();
		P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* L_1 = (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7*)il2cpp_codegen_object_new(P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		P3dReader__ctor_m7488B54594DB3D8C8611D7641CE62F52CF90EBED(L_1, NULL);
		__this->___changeReader_28 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___changeReader_28), (void*)L_1);
		// changeReader.OnComplete += HandleCompleteChange;
		P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* L_2 = __this->___changeReader_28;
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_3 = (Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F*)il2cpp_codegen_object_new(Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mD1DAA77F82DFC182C1D5CE9D323B1D05C2D1E4B7(L_3, __this, (intptr_t)((void*)P3dChangeCounter_HandleCompleteChange_mB8F3CA641A6DDD7BA0937FABCAF307F8AB68C25C_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		P3dReader_add_OnComplete_mDFFE350011A2C71EF1862BFE252020BAE6E0AAB4(L_2, L_3, NULL);
	}

IL_0030:
	{
		// if (changeReader.Requested == false && registeredPaintableTexture != null && registeredPaintableTexture.Activated == true)
		P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* L_4 = __this->___changeReader_28;
		NullCheck(L_4);
		bool L_5;
		L_5 = P3dReader_get_Requested_mDCD8CEB59E98149E15F50B8CFBA1DE1C77A13B26_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_00e5;
		}
	}
	{
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_6 = ((P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078*)__this)->___registeredPaintableTexture_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_00e5;
		}
	}
	{
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_8 = ((P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078*)__this)->___registeredPaintableTexture_9;
		NullCheck(L_8);
		bool L_9;
		L_9 = P3dPaintableTexture_get_Activated_m0BAD20D94A97B033796003EF1E0A781173CC205D_inline(L_8, NULL);
		if (!L_9)
		{
			goto IL_00e5;
		}
	}
	{
		// if (P3dReader.NeedsUpdating(changeReader, changePixels, registeredPaintableTexture.Current, downsampleSteps) == true || changeDirty == true)
		P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* L_10 = __this->___changeReader_28;
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_11 = __this->___changePixels_29;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_12 = ((P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078*)__this)->___registeredPaintableTexture_9;
		NullCheck(L_12);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13;
		L_13 = P3dPaintableTexture_get_Current_m42C0BE96C6A74B703F1A64763F921D15752F5092_inline(L_12, NULL);
		int32_t L_14 = ((P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078*)__this)->___downsampleSteps_7;
		bool L_15;
		L_15 = P3dReader_NeedsUpdating_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m76E0CA4BACFC6BCDFE18411F3269A1CDF5C0C8EB(L_10, L_11, L_13, L_14, P3dReader_NeedsUpdating_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m76E0CA4BACFC6BCDFE18411F3269A1CDF5C0C8EB_RuntimeMethod_var);
		if (L_15)
		{
			goto IL_008d;
		}
	}
	{
		bool L_16 = __this->___changeDirty_27;
		if (!L_16)
		{
			goto IL_00e5;
		}
	}

IL_008d:
	{
		// changeDirty = false;
		__this->___changeDirty_27 = (bool)0;
		// var desc          = registeredPaintableTexture.Current.descriptor; desc.useMipMap = false;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_17 = ((P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078*)__this)->___registeredPaintableTexture_9;
		NullCheck(L_17);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18;
		L_18 = P3dPaintableTexture_get_Current_m42C0BE96C6A74B703F1A64763F921D15752F5092_inline(L_17, NULL);
		NullCheck(L_18);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_19;
		L_19 = RenderTexture_get_descriptor_m2FABD5CF6CCF410D1311FCBC7C9D9ECDEE9C7CC2(L_18, NULL);
		V_0 = L_19;
		// var desc          = registeredPaintableTexture.Current.descriptor; desc.useMipMap = false;
		RenderTextureDescriptor_set_useMipMap_m2A2A3BC4C8ECCC532AC33E7034502EB2AE242539((&V_0), (bool)0, NULL);
		// var renderTexture = P3dHelper.GetRenderTexture(desc);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_21;
		L_21 = P3dHelper_GetRenderTexture_m9C6FC5416865484352376DBED1A154468D7B327A(L_20, NULL);
		V_1 = L_21;
		// P3dCommandReplace.Blit(renderTexture, texture, color);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_22 = V_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_23 = __this->___texture_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = __this->___color_25;
		il2cpp_codegen_runtime_class_init_inline(P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E_il2cpp_TypeInfo_var);
		P3dCommandReplace_Blit_mCFDC7EFA8CA2E3377BFEA446142DE888ED7FBF9F(L_22, L_23, L_24, NULL);
		// changeReader.Request(renderTexture, DownsampleSteps, Async);
		P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* L_25 = __this->___changeReader_28;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26 = V_1;
		int32_t L_27;
		L_27 = P3dPaintableTextureMonitor_get_DownsampleSteps_mC4B3A5AA635EC5AD96504D0A6974E7B927D7EFFB_inline(__this, NULL);
		bool L_28;
		L_28 = P3dPaintableTextureMonitor_get_Async_m2CFE64AD61358D521DBD4E08885E52B38E8B582E_inline(__this, NULL);
		NullCheck(L_25);
		P3dReader_Request_m638D53DBE2AAC0CB7AE55DA22A30214686FB4E0D(L_25, L_26, L_27, L_28, NULL);
		// P3dHelper.ReleaseRenderTexture(renderTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_29 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_30;
		L_30 = P3dHelper_ReleaseRenderTexture_m6562A8009CD4881E5118C3DB2DB67CDB54373C8F(L_29, NULL);
	}

IL_00e5:
	{
		// changeReader.UpdateRequest();
		P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* L_31 = __this->___changeReader_28;
		NullCheck(L_31);
		P3dReader_UpdateRequest_m3F75484B2C09F1CE40DB17552B4384F90275FD52(L_31, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dChangeCounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dChangeCounter__ctor_m6B5DBB4AC9C1CDCD73418D37DC05E3DD64290F06 (P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD* __this, const RuntimeMethod* method) 
{
	{
		// public float Threshold { set { threshold = value; } get { return threshold; } } [Range(0.0f, 1.0f)] [SerializeField] private float threshold = 0.1f;
		__this->___threshold_23 = (0.100000001f);
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___color_25 = L_0;
		P3dPaintableTextureMonitorMask__ctor_m98BD8A6A0B69C149BF9ADB8A8D87F3C7B1DDA4AA(__this, NULL);
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dChangeCounter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dChangeCounter__cctor_m199358B53402D00DA77FFB41867E7A537DCC5508 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_mC24F6AB494DD48362F3D146746DE37D35F206A47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_tD84633A6C61B300EF3932D5FF9149A5EEC0242FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static LinkedList<P3dChangeCounter> Instances = new LinkedList<P3dChangeCounter>(); private LinkedListNode<P3dChangeCounter> node;
		LinkedList_1_tD84633A6C61B300EF3932D5FF9149A5EEC0242FA* L_0 = (LinkedList_1_tD84633A6C61B300EF3932D5FF9149A5EEC0242FA*)il2cpp_codegen_object_new(LinkedList_1_tD84633A6C61B300EF3932D5FF9149A5EEC0242FA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LinkedList_1__ctor_mC24F6AB494DD48362F3D146746DE37D35F206A47(L_0, LinkedList_1__ctor_mC24F6AB494DD48362F3D146746DE37D35F206A47_RuntimeMethod_var);
		((P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_StaticFields*)il2cpp_codegen_static_fields_for(P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_il2cpp_TypeInfo_var))->___Instances_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_StaticFields*)il2cpp_codegen_static_fields_for(P3dChangeCounter_t1D3E72DE2D652384DBF1EBE09B0A161E055F96BD_il2cpp_TypeInfo_var))->___Instances_21), (void*)L_0);
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
// System.Void PaintIn3D.Examples.P3dChannelCounter::set_Threshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dChannelCounter_set_Threshold_mB4A05C903B1C25AEBDA73DF92E2A3708706BFEFC (P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Threshold { set { threshold = value; } get { return threshold; } } [Range(0.0f, 1.0f)] [SerializeField] private float threshold = 0.5f;
		float L_0 = ___value0;
		__this->___threshold_23 = L_0;
		// public float Threshold { set { threshold = value; } get { return threshold; } } [Range(0.0f, 1.0f)] [SerializeField] private float threshold = 0.5f;
		return;
	}
}
// System.Single PaintIn3D.Examples.P3dChannelCounter::get_Threshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dChannelCounter_get_Threshold_mFEE6D3757867D1F6D97BCD4C4F97A264C89B2E7D (P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* __this, const RuntimeMethod* method) 
{
	{
		// public float Threshold { set { threshold = value; } get { return threshold; } } [Range(0.0f, 1.0f)] [SerializeField] private float threshold = 0.5f;
		float L_0 = __this->___threshold_23;
		return L_0;
	}
}
// System.Int32 PaintIn3D.Examples.P3dChannelCounter::get_CountR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dChannelCounter_get_CountR_m2C6E5821BC1460DAE1D6954C1AE7B0664EEAA641 (P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* __this, const RuntimeMethod* method) 
{
	{
		// public int CountR { get { return countR; } } [SerializeField] private int countR;
		int32_t L_0 = __this->___countR_24;
		return L_0;
	}
}
// System.Int32 PaintIn3D.Examples.P3dChannelCounter::get_CountG()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dChannelCounter_get_CountG_m04C5E9193F8682CA41E2746B6A817452C92D058B (P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* __this, const RuntimeMethod* method) 
{
	{
		// public int CountG { get { return countG; } } [SerializeField] private int countG;
		int32_t L_0 = __this->___countG_25;
		return L_0;
	}
}
// System.Int32 PaintIn3D.Examples.P3dChannelCounter::get_CountB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dChannelCounter_get_CountB_mDBC39805A49A7A8E9C6BCDBDC4C57479E25AFA45 (P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* __this, const RuntimeMethod* method) 
{
	{
		// public int CountB { get { return countB; } } [SerializeField] private int countB;
		int32_t L_0 = __this->___countB_26;
		return L_0;
	}
}
// System.Int32 PaintIn3D.Examples.P3dChannelCounter::get_CountA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dChannelCounter_get_CountA_m23898EDA259B9D8AD5715361AE1913129CA99A38 (P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* __this, const RuntimeMethod* method) 
{
	{
		// public int CountA { get { return countA; } } [SerializeField] private int countA;
		int32_t L_0 = __this->___countA_27;
		return L_0;
	}
}
// System.Single PaintIn3D.Examples.P3dChannelCounter::get_RatioR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dChannelCounter_get_RatioR_m0D2E11217861559047C64ECBE94DC8ADAA632E2D (P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* __this, const RuntimeMethod* method) 
{
	{
		// public float RatioR { get { return total > 0 ? countR / (float)total : 0.0f; } }
		int32_t L_0 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		return (0.0f);
	}

IL_000f:
	{
		int32_t L_1 = __this->___countR_24;
		int32_t L_2 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17;
		return ((float)(((float)L_1)/((float)L_2)));
	}
}
// System.Single PaintIn3D.Examples.P3dChannelCounter::get_RatioG()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dChannelCounter_get_RatioG_mDD004ADB7CF68AD77288954478DCDA2519AFBE72 (P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* __this, const RuntimeMethod* method) 
{
	{
		// public float RatioG { get { return total > 0 ? countG / (float)total : 0.0f; } }
		int32_t L_0 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		return (0.0f);
	}

IL_000f:
	{
		int32_t L_1 = __this->___countG_25;
		int32_t L_2 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17;
		return ((float)(((float)L_1)/((float)L_2)));
	}
}
// System.Single PaintIn3D.Examples.P3dChannelCounter::get_RatioB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dChannelCounter_get_RatioB_m81E306181FCB678AC9898F1011AB0365CA4BA3FE (P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* __this, const RuntimeMethod* method) 
{
	{
		// public float RatioB { get { return total > 0 ? countB / (float)total : 0.0f; } }
		int32_t L_0 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		return (0.0f);
	}

IL_000f:
	{
		int32_t L_1 = __this->___countB_26;
		int32_t L_2 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17;
		return ((float)(((float)L_1)/((float)L_2)));
	}
}
// System.Single PaintIn3D.Examples.P3dChannelCounter::get_RatioA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dChannelCounter_get_RatioA_m6845C2633798E5AA7E273F72541006FB31C1ED67 (P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* __this, const RuntimeMethod* method) 
{
	{
		// public float RatioA { get { return total > 0 ? countA / (float)total : 0.0f; } }
		int32_t L_0 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		return (0.0f);
	}

IL_000f:
	{
		int32_t L_1 = __this->___countA_27;
		int32_t L_2 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17;
		return ((float)(((float)L_1)/((float)L_2)));
	}
}
// UnityEngine.Vector4 PaintIn3D.Examples.P3dChannelCounter::get_RatioRGBA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 P3dChannelCounter_get_RatioRGBA_m6D54AC91189B919320ABFC05BAB2311BC91FB544 (P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// if (total > 0)
		int32_t L_0 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		// var ratios = default(Vector4);
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		// var scale  = 1.0f / total;
		int32_t L_1 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17;
		V_1 = ((float)((1.0f)/((float)L_1)));
		// ratios.x = Mathf.Clamp01(countR * scale);
		int32_t L_2 = __this->___countR_24;
		float L_3 = V_1;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_multiply(((float)L_2), L_3)), NULL);
		(&V_0)->___x_1 = L_4;
		// ratios.y = Mathf.Clamp01(countG * scale);
		int32_t L_5 = __this->___countG_25;
		float L_6 = V_1;
		float L_7;
		L_7 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_multiply(((float)L_5), L_6)), NULL);
		(&V_0)->___y_2 = L_7;
		// ratios.z = Mathf.Clamp01(countB * scale);
		int32_t L_8 = __this->___countB_26;
		float L_9 = V_1;
		float L_10;
		L_10 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_multiply(((float)L_8), L_9)), NULL);
		(&V_0)->___z_3 = L_10;
		// ratios.w = Mathf.Clamp01(countA * scale);
		int32_t L_11 = __this->___countA_27;
		float L_12 = V_1;
		float L_13;
		L_13 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_multiply(((float)L_11), L_12)), NULL);
		(&V_0)->___w_4 = L_13;
		// return ratios;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = V_0;
		return L_14;
	}

IL_0075:
	{
		// return Vector4.zero;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15;
		L_15 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		return L_15;
	}
}
// System.Int64 PaintIn3D.Examples.P3dChannelCounter::GetTotal(System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChannelCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t P3dChannelCounter_GetTotal_m27244980535DA925958FC415D4E4617A0FA9B933 (RuntimeObject* ___counters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE52964CE0554F1CBA03F6CE2573F66EA1F1EEEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0A0ADA3816C555969131A42F00019C721A053834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* V_2 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// var total = 0L; foreach (var counter in counters ?? Instances) { total += counter.total; } return total;
		V_0 = ((int64_t)0);
		// var total = 0L; foreach (var counter in counters ?? Instances) { total += counter.total; } return total;
		RuntimeObject* L_0 = ___counters0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA* L_2 = ((P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_StaticFields*)il2cpp_codegen_static_fields_for(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var))->___Instances_21;
		G_B2_0 = ((RuntimeObject*)(L_2));
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<PaintIn3D.Examples.P3dChannelCounter>::GetEnumerator() */, IEnumerable_1_tE52964CE0554F1CBA03F6CE2573F66EA1F1EEEB1_il2cpp_TypeInfo_var, G_B2_0);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0039:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_0015_1:
			{
				// var total = 0L; foreach (var counter in counters ?? Instances) { total += counter.total; } return total;
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* L_7;
				L_7 = InterfaceFuncInvoker0< P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<PaintIn3D.Examples.P3dChannelCounter>::get_Current() */, IEnumerator_1_t0A0ADA3816C555969131A42F00019C721A053834_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				// var total = 0L; foreach (var counter in counters ?? Instances) { total += counter.total; } return total;
				int64_t L_8 = V_0;
				P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* L_9 = V_2;
				NullCheck(L_9);
				int32_t L_10 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)L_9)->___total_17;
				V_0 = ((int64_t)il2cpp_codegen_add(L_8, ((int64_t)L_10)));
			}

IL_0026_1:
			{
				// var total = 0L; foreach (var counter in counters ?? Instances) { total += counter.total; } return total;
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// var total = 0L; foreach (var counter in counters ?? Instances) { total += counter.total; } return total;
		int64_t L_13 = V_0;
		return L_13;
	}
}
// System.Int64 PaintIn3D.Examples.P3dChannelCounter::GetCountR(System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChannelCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t P3dChannelCounter_GetCountR_m057DBF90336BD28E2298E3C446E1B690E76A1DA9 (RuntimeObject* ___counters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE52964CE0554F1CBA03F6CE2573F66EA1F1EEEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0A0ADA3816C555969131A42F00019C721A053834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* V_2 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countR; } return solid;
		V_0 = ((int64_t)0);
		// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countR; } return solid;
		RuntimeObject* L_0 = ___counters0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA* L_2 = ((P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_StaticFields*)il2cpp_codegen_static_fields_for(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var))->___Instances_21;
		G_B2_0 = ((RuntimeObject*)(L_2));
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<PaintIn3D.Examples.P3dChannelCounter>::GetEnumerator() */, IEnumerable_1_tE52964CE0554F1CBA03F6CE2573F66EA1F1EEEB1_il2cpp_TypeInfo_var, G_B2_0);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0039:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_0015_1:
			{
				// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countR; } return solid;
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* L_7;
				L_7 = InterfaceFuncInvoker0< P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<PaintIn3D.Examples.P3dChannelCounter>::get_Current() */, IEnumerator_1_t0A0ADA3816C555969131A42F00019C721A053834_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countR; } return solid;
				int64_t L_8 = V_0;
				P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* L_9 = V_2;
				NullCheck(L_9);
				int32_t L_10 = L_9->___countR_24;
				V_0 = ((int64_t)il2cpp_codegen_add(L_8, ((int64_t)L_10)));
			}

IL_0026_1:
			{
				// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countR; } return solid;
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countR; } return solid;
		int64_t L_13 = V_0;
		return L_13;
	}
}
// System.Int64 PaintIn3D.Examples.P3dChannelCounter::GetCountG(System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChannelCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t P3dChannelCounter_GetCountG_m44B8C2FF6C2B0748972E050C6681DF9499D98859 (RuntimeObject* ___counters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE52964CE0554F1CBA03F6CE2573F66EA1F1EEEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0A0ADA3816C555969131A42F00019C721A053834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* V_2 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countG; } return solid;
		V_0 = ((int64_t)0);
		// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countG; } return solid;
		RuntimeObject* L_0 = ___counters0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA* L_2 = ((P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_StaticFields*)il2cpp_codegen_static_fields_for(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var))->___Instances_21;
		G_B2_0 = ((RuntimeObject*)(L_2));
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<PaintIn3D.Examples.P3dChannelCounter>::GetEnumerator() */, IEnumerable_1_tE52964CE0554F1CBA03F6CE2573F66EA1F1EEEB1_il2cpp_TypeInfo_var, G_B2_0);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0039:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_0015_1:
			{
				// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countG; } return solid;
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* L_7;
				L_7 = InterfaceFuncInvoker0< P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<PaintIn3D.Examples.P3dChannelCounter>::get_Current() */, IEnumerator_1_t0A0ADA3816C555969131A42F00019C721A053834_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countG; } return solid;
				int64_t L_8 = V_0;
				P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* L_9 = V_2;
				NullCheck(L_9);
				int32_t L_10 = L_9->___countG_25;
				V_0 = ((int64_t)il2cpp_codegen_add(L_8, ((int64_t)L_10)));
			}

IL_0026_1:
			{
				// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countG; } return solid;
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countG; } return solid;
		int64_t L_13 = V_0;
		return L_13;
	}
}
// System.Int64 PaintIn3D.Examples.P3dChannelCounter::GetCountB(System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChannelCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t P3dChannelCounter_GetCountB_m84FE7A52779ECC7EB5A86F6760A81A5AB7BE0EA0 (RuntimeObject* ___counters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE52964CE0554F1CBA03F6CE2573F66EA1F1EEEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0A0ADA3816C555969131A42F00019C721A053834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* V_2 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countB; } return solid;
		V_0 = ((int64_t)0);
		// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countB; } return solid;
		RuntimeObject* L_0 = ___counters0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA* L_2 = ((P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_StaticFields*)il2cpp_codegen_static_fields_for(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var))->___Instances_21;
		G_B2_0 = ((RuntimeObject*)(L_2));
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<PaintIn3D.Examples.P3dChannelCounter>::GetEnumerator() */, IEnumerable_1_tE52964CE0554F1CBA03F6CE2573F66EA1F1EEEB1_il2cpp_TypeInfo_var, G_B2_0);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0039:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_0015_1:
			{
				// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countB; } return solid;
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* L_7;
				L_7 = InterfaceFuncInvoker0< P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<PaintIn3D.Examples.P3dChannelCounter>::get_Current() */, IEnumerator_1_t0A0ADA3816C555969131A42F00019C721A053834_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countB; } return solid;
				int64_t L_8 = V_0;
				P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* L_9 = V_2;
				NullCheck(L_9);
				int32_t L_10 = L_9->___countB_26;
				V_0 = ((int64_t)il2cpp_codegen_add(L_8, ((int64_t)L_10)));
			}

IL_0026_1:
			{
				// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countB; } return solid;
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countB; } return solid;
		int64_t L_13 = V_0;
		return L_13;
	}
}
// System.Int64 PaintIn3D.Examples.P3dChannelCounter::GetCountA(System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChannelCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t P3dChannelCounter_GetCountA_m93573DAEC8BA7DF1EE1374B2883D0B424F56DFB6 (RuntimeObject* ___counters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE52964CE0554F1CBA03F6CE2573F66EA1F1EEEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0A0ADA3816C555969131A42F00019C721A053834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* V_2 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countA; } return solid;
		V_0 = ((int64_t)0);
		// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countA; } return solid;
		RuntimeObject* L_0 = ___counters0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA* L_2 = ((P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_StaticFields*)il2cpp_codegen_static_fields_for(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var))->___Instances_21;
		G_B2_0 = ((RuntimeObject*)(L_2));
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<PaintIn3D.Examples.P3dChannelCounter>::GetEnumerator() */, IEnumerable_1_tE52964CE0554F1CBA03F6CE2573F66EA1F1EEEB1_il2cpp_TypeInfo_var, G_B2_0);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0039:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_0015_1:
			{
				// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countA; } return solid;
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* L_7;
				L_7 = InterfaceFuncInvoker0< P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<PaintIn3D.Examples.P3dChannelCounter>::get_Current() */, IEnumerator_1_t0A0ADA3816C555969131A42F00019C721A053834_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countA; } return solid;
				int64_t L_8 = V_0;
				P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* L_9 = V_2;
				NullCheck(L_9);
				int32_t L_10 = L_9->___countA_27;
				V_0 = ((int64_t)il2cpp_codegen_add(L_8, ((int64_t)L_10)));
			}

IL_0026_1:
			{
				// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countA; } return solid;
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// var solid = 0L; foreach (var counter in counters ?? Instances) { solid += counter.countA; } return solid;
		int64_t L_13 = V_0;
		return L_13;
	}
}
// System.Single PaintIn3D.Examples.P3dChannelCounter::GetRatioR(System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChannelCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dChannelCounter_GetRatioR_m1FCF44D262897CC50E648971C3309BA6187515AC (RuntimeObject* ___counters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return P3dHelper.Divide(GetCountR(counters), GetTotal(counters));
		RuntimeObject* L_0 = ___counters0;
		il2cpp_codegen_runtime_class_init_inline(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = P3dChannelCounter_GetCountR_m057DBF90336BD28E2298E3C446E1B690E76A1DA9(L_0, NULL);
		RuntimeObject* L_2 = ___counters0;
		int64_t L_3;
		L_3 = P3dChannelCounter_GetTotal_m27244980535DA925958FC415D4E4617A0FA9B933(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = P3dHelper_Divide_m28D902114AA27F5ABDB388E5F750A121610E1A65(((float)L_1), ((float)L_3), NULL);
		return L_4;
	}
}
// System.Single PaintIn3D.Examples.P3dChannelCounter::GetRatioG(System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChannelCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dChannelCounter_GetRatioG_m65F717E2BB826BBFD37DD4F09158675E65DB3312 (RuntimeObject* ___counters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return P3dHelper.Divide(GetCountG(counters), GetTotal(counters));
		RuntimeObject* L_0 = ___counters0;
		il2cpp_codegen_runtime_class_init_inline(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = P3dChannelCounter_GetCountG_m44B8C2FF6C2B0748972E050C6681DF9499D98859(L_0, NULL);
		RuntimeObject* L_2 = ___counters0;
		int64_t L_3;
		L_3 = P3dChannelCounter_GetTotal_m27244980535DA925958FC415D4E4617A0FA9B933(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = P3dHelper_Divide_m28D902114AA27F5ABDB388E5F750A121610E1A65(((float)L_1), ((float)L_3), NULL);
		return L_4;
	}
}
// System.Single PaintIn3D.Examples.P3dChannelCounter::GetRatioB(System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChannelCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dChannelCounter_GetRatioB_mE2F16A35473C21C1FB5DD8A6EF339AEE5787961A (RuntimeObject* ___counters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return P3dHelper.Divide(GetCountB(counters), GetTotal(counters));
		RuntimeObject* L_0 = ___counters0;
		il2cpp_codegen_runtime_class_init_inline(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = P3dChannelCounter_GetCountB_m84FE7A52779ECC7EB5A86F6760A81A5AB7BE0EA0(L_0, NULL);
		RuntimeObject* L_2 = ___counters0;
		int64_t L_3;
		L_3 = P3dChannelCounter_GetTotal_m27244980535DA925958FC415D4E4617A0FA9B933(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = P3dHelper_Divide_m28D902114AA27F5ABDB388E5F750A121610E1A65(((float)L_1), ((float)L_3), NULL);
		return L_4;
	}
}
// System.Single PaintIn3D.Examples.P3dChannelCounter::GetRatioA(System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChannelCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dChannelCounter_GetRatioA_m505DD939D1B1D7B5D6363A6DE783843DEF1CE4C0 (RuntimeObject* ___counters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return P3dHelper.Divide(GetCountA(counters), GetTotal(counters));
		RuntimeObject* L_0 = ___counters0;
		il2cpp_codegen_runtime_class_init_inline(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = P3dChannelCounter_GetCountA_m93573DAEC8BA7DF1EE1374B2883D0B424F56DFB6(L_0, NULL);
		RuntimeObject* L_2 = ___counters0;
		int64_t L_3;
		L_3 = P3dChannelCounter_GetTotal_m27244980535DA925958FC415D4E4617A0FA9B933(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = P3dHelper_Divide_m28D902114AA27F5ABDB388E5F750A121610E1A65(((float)L_1), ((float)L_3), NULL);
		return L_4;
	}
}
// UnityEngine.Vector4 PaintIn3D.Examples.P3dChannelCounter::GetRatioRGBA(System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChannelCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 P3dChannelCounter_GetRatioRGBA_m90F9B8F180F831FFB7A8C9BF765CE631D7985399 (RuntimeObject* ___counters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t7FE0B2E13EA147FB2712C71A30E1C3DDA65291EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE52964CE0554F1CBA03F6CE2573F66EA1F1EEEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0A0ADA3816C555969131A42F00019C721A053834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_get_Count_m83CE6174B7B2D9E6B8734BFD3125E5EA488399B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* V_2 = NULL;
	{
		// if (counters == null) counters = Instances;
		RuntimeObject* L_0 = ___counters0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (counters == null) counters = Instances;
		il2cpp_codegen_runtime_class_init_inline(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA* L_1 = ((P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_StaticFields*)il2cpp_codegen_static_fields_for(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var))->___Instances_21;
		___counters0 = L_1;
	}

IL_000a:
	{
		// if (counters.Count > 0)
		RuntimeObject* L_2 = ___counters0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dChannelCounter>::get_Count() */, ICollection_1_t7FE0B2E13EA147FB2712C71A30E1C3DDA65291EB_il2cpp_TypeInfo_var, L_2);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0096;
		}
	}
	{
		// var total = Vector4.zero;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		L_4 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		V_0 = L_4;
		// foreach (var counter in counters)
		RuntimeObject* L_5 = ___counters0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<PaintIn3D.Examples.P3dChannelCounter>::GetEnumerator() */, IEnumerable_1_tE52964CE0554F1CBA03F6CE2573F66EA1F1EEEB1_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_1;
					if (!L_7)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_8 = V_1;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0083:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0070_1;
			}

IL_0025_1:
			{
				// foreach (var counter in counters)
				RuntimeObject* L_9 = V_1;
				NullCheck(L_9);
				P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* L_10;
				L_10 = InterfaceFuncInvoker0< P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<PaintIn3D.Examples.P3dChannelCounter>::get_Current() */, IEnumerator_1_t0A0ADA3816C555969131A42F00019C721A053834_il2cpp_TypeInfo_var, L_9);
				V_2 = L_10;
				// total.x += counter.RatioR;
				float* L_11 = (&(&V_0)->___x_1);
				float* L_12 = L_11;
				float L_13 = *((float*)L_12);
				P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* L_14 = V_2;
				NullCheck(L_14);
				float L_15;
				L_15 = P3dChannelCounter_get_RatioR_m0D2E11217861559047C64ECBE94DC8ADAA632E2D(L_14, NULL);
				*((float*)L_12) = (float)((float)il2cpp_codegen_add(L_13, L_15));
				// total.y += counter.RatioG;
				float* L_16 = (&(&V_0)->___y_2);
				float* L_17 = L_16;
				float L_18 = *((float*)L_17);
				P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* L_19 = V_2;
				NullCheck(L_19);
				float L_20;
				L_20 = P3dChannelCounter_get_RatioG_mDD004ADB7CF68AD77288954478DCDA2519AFBE72(L_19, NULL);
				*((float*)L_17) = (float)((float)il2cpp_codegen_add(L_18, L_20));
				// total.z += counter.RatioB;
				float* L_21 = (&(&V_0)->___z_3);
				float* L_22 = L_21;
				float L_23 = *((float*)L_22);
				P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* L_24 = V_2;
				NullCheck(L_24);
				float L_25;
				L_25 = P3dChannelCounter_get_RatioB_m81E306181FCB678AC9898F1011AB0365CA4BA3FE(L_24, NULL);
				*((float*)L_22) = (float)((float)il2cpp_codegen_add(L_23, L_25));
				// total.w += counter.RatioA;
				float* L_26 = (&(&V_0)->___w_4);
				float* L_27 = L_26;
				float L_28 = *((float*)L_27);
				P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* L_29 = V_2;
				NullCheck(L_29);
				float L_30;
				L_30 = P3dChannelCounter_get_RatioA_m6845C2633798E5AA7E273F72541006FB31C1ED67(L_29, NULL);
				*((float*)L_27) = (float)((float)il2cpp_codegen_add(L_28, L_30));
			}

IL_0070_1:
			{
				// foreach (var counter in counters)
				RuntimeObject* L_31 = V_1;
				NullCheck(L_31);
				bool L_32;
				L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_31);
				if (L_32)
				{
					goto IL_0025_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// return total / Instances.Count;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_33 = V_0;
		il2cpp_codegen_runtime_class_init_inline(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA* L_34 = ((P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_StaticFields*)il2cpp_codegen_static_fields_for(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var))->___Instances_21;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = LinkedList_1_get_Count_m83CE6174B7B2D9E6B8734BFD3125E5EA488399B2_inline(L_34, LinkedList_1_get_Count_m83CE6174B7B2D9E6B8734BFD3125E5EA488399B2_RuntimeMethod_var);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_36;
		L_36 = Vector4_op_Division_m9B1B8692D50C864CFA585BDF97FB6FBC18967D90_inline(L_33, ((float)L_35), NULL);
		return L_36;
	}

IL_0096:
	{
		// return Vector4.zero;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_37;
		L_37 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		return L_37;
	}
}
// System.Void PaintIn3D.Examples.P3dChannelCounter::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dChannelCounter_OnEnable_m7C5761474F9BD4EE14396EC45AAF081A69EBD70B (P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_AddLast_m31E656F9095D940FCCAA2C8506DC24885E021FFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// node = Instances.AddLast(this);
		il2cpp_codegen_runtime_class_init_inline(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA* L_0 = ((P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_StaticFields*)il2cpp_codegen_static_fields_for(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var))->___Instances_21;
		NullCheck(L_0);
		LinkedListNode_1_t0D2393CE1A0C911186F3C49481250667FFAAF2E3* L_1;
		L_1 = LinkedList_1_AddLast_m31E656F9095D940FCCAA2C8506DC24885E021FFB(L_0, __this, LinkedList_1_AddLast_m31E656F9095D940FCCAA2C8506DC24885E021FFB_RuntimeMethod_var);
		__this->___node_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___node_22), (void*)L_1);
		// base.OnEnable();
		P3dPaintableTextureMonitorMask_OnEnable_m76650F2E7B61B2D118C1180F9A507C186EABA6A3(__this, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dChannelCounter::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dChannelCounter_OnDisable_m4B0BB0B1AA4D68D9885AEAC68E72FC705BDC6258 (P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_Remove_m7EF8F0A9DA4A1166B8EF0407725FE4CC6A1664A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		P3dPaintableTextureMonitorMask_OnDisable_mCA845C2E965A853D95C020EEA9035E9273D3F3F3(__this, NULL);
		// Instances.Remove(node); node = null;
		il2cpp_codegen_runtime_class_init_inline(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA* L_0 = ((P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_StaticFields*)il2cpp_codegen_static_fields_for(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var))->___Instances_21;
		LinkedListNode_1_t0D2393CE1A0C911186F3C49481250667FFAAF2E3* L_1 = __this->___node_22;
		NullCheck(L_0);
		LinkedList_1_Remove_m7EF8F0A9DA4A1166B8EF0407725FE4CC6A1664A0(L_0, L_1, LinkedList_1_Remove_m7EF8F0A9DA4A1166B8EF0407725FE4CC6A1664A0_RuntimeMethod_var);
		// Instances.Remove(node); node = null;
		__this->___node_22 = (LinkedListNode_1_t0D2393CE1A0C911186F3C49481250667FFAAF2E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___node_22), (void*)(LinkedListNode_1_t0D2393CE1A0C911186F3C49481250667FFAAF2E3*)NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dChannelCounter::HandleComplete(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dChannelCounter_HandleComplete_m95FADEAB80248DF7727DD3C405DA2AA926A14100 (P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* __this, int32_t ___boost0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	{
		// if (currentPixels.IsCreated == false || maskPixels.IsCreated == false || currentPixels.Length != maskPixels.Length)
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_0 = (&((P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078*)__this)->___currentPixels_13);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D(L_0, NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_2 = (&((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___maskPixels_20);
		bool L_3;
		L_3 = NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081(L_2, NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_4 = (&((P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078*)__this)->___currentPixels_13);
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_4)->___m_Length_1);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_6 = (&((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___maskPixels_20);
		int32_t L_7;
		L_7 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_6)->___m_Length_1);
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0033;
		}
	}

IL_0032:
	{
		// return;
		return;
	}

IL_0033:
	{
		// var threshold32 = (byte)(threshold * 255.0f);
		float L_8 = __this->___threshold_23;
		V_0 = (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)il2cpp_codegen_multiply(L_8, (255.0f))));
		// countR = 0;
		__this->___countR_24 = 0;
		// countG = 0;
		__this->___countG_25 = 0;
		// countB = 0;
		__this->___countB_26 = 0;
		// countA = 0;
		__this->___countA_27 = 0;
		// total  = 0;
		((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17 = 0;
		// for (var i = 0; i < currentPixels.Length; i++)
		V_1 = 0;
		goto IL_00f4;
	}

IL_006b:
	{
		// if (maskPixels[i] > 127)
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_9 = (&((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___maskPixels_20);
		int32_t L_10 = V_1;
		uint8_t L_11;
		L_11 = IL2CPP_NATIVEARRAY_GET_ITEM(uint8_t, (L_9)->___m_Buffer_0, L_10);
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)127))))
		{
			goto IL_00f0;
		}
	}
	{
		// total++;
		int32_t L_12 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17;
		((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		// var currentPixel32 = currentPixels[i];
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_13 = (&((P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078*)__this)->___currentPixels_13);
		int32_t L_14 = V_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_15;
		L_15 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (L_13)->___m_Buffer_0, L_14);
		// if (currentPixel32.r >= threshold32) countR++;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16 = L_15;
		uint8_t L_17 = L_16.___r_1;
		uint8_t L_18 = V_0;
		G_B7_0 = L_16;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			G_B8_0 = L_16;
			goto IL_00ac;
		}
	}
	{
		// if (currentPixel32.r >= threshold32) countR++;
		int32_t L_19 = __this->___countR_24;
		__this->___countR_24 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		G_B8_0 = G_B7_0;
	}

IL_00ac:
	{
		// if (currentPixel32.g >= threshold32) countG++;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_20 = G_B8_0;
		uint8_t L_21 = L_20.___g_2;
		uint8_t L_22 = V_0;
		G_B9_0 = L_20;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			G_B10_0 = L_20;
			goto IL_00c3;
		}
	}
	{
		// if (currentPixel32.g >= threshold32) countG++;
		int32_t L_23 = __this->___countG_25;
		__this->___countG_25 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		G_B10_0 = G_B9_0;
	}

IL_00c3:
	{
		// if (currentPixel32.b >= threshold32) countB++;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_24 = G_B10_0;
		uint8_t L_25 = L_24.___b_3;
		uint8_t L_26 = V_0;
		G_B11_0 = L_24;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			G_B12_0 = L_24;
			goto IL_00da;
		}
	}
	{
		// if (currentPixel32.b >= threshold32) countB++;
		int32_t L_27 = __this->___countB_26;
		__this->___countB_26 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		G_B12_0 = G_B11_0;
	}

IL_00da:
	{
		// if (currentPixel32.a >= threshold32) countA++;
		uint8_t L_28 = G_B12_0.___a_4;
		uint8_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_00f0;
		}
	}
	{
		// if (currentPixel32.a >= threshold32) countA++;
		int32_t L_30 = __this->___countA_27;
		__this->___countA_27 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00f0:
	{
		// for (var i = 0; i < currentPixels.Length; i++)
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00f4:
	{
		// for (var i = 0; i < currentPixels.Length; i++)
		int32_t L_32 = V_1;
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_33 = (&((P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078*)__this)->___currentPixels_13);
		int32_t L_34;
		L_34 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_33)->___m_Length_1);
		if ((((int32_t)L_32) < ((int32_t)L_34)))
		{
			goto IL_006b;
		}
	}
	{
		// countR *= boost;
		int32_t L_35 = __this->___countR_24;
		int32_t L_36 = ___boost0;
		__this->___countR_24 = ((int32_t)il2cpp_codegen_multiply(L_35, L_36));
		// countG *= boost;
		int32_t L_37 = __this->___countG_25;
		int32_t L_38 = ___boost0;
		__this->___countG_25 = ((int32_t)il2cpp_codegen_multiply(L_37, L_38));
		// countB *= boost;
		int32_t L_39 = __this->___countB_26;
		int32_t L_40 = ___boost0;
		__this->___countB_26 = ((int32_t)il2cpp_codegen_multiply(L_39, L_40));
		// countA *= boost;
		int32_t L_41 = __this->___countA_27;
		int32_t L_42 = ___boost0;
		__this->___countA_27 = ((int32_t)il2cpp_codegen_multiply(L_41, L_42));
		// total  *= boost;
		int32_t L_43 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17;
		int32_t L_44 = ___boost0;
		((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17 = ((int32_t)il2cpp_codegen_multiply(L_43, L_44));
		// InvokeOnUpdated();
		P3dPaintableTextureMonitor_InvokeOnUpdated_m973D9D449BBCF9E77928E5D4C65D69D9CE61D099(__this, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dChannelCounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dChannelCounter__ctor_m3A1C95BD6062F84BE708A65A2772E2994D22F9CF (P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E* __this, const RuntimeMethod* method) 
{
	{
		// public float Threshold { set { threshold = value; } get { return threshold; } } [Range(0.0f, 1.0f)] [SerializeField] private float threshold = 0.5f;
		__this->___threshold_23 = (0.5f);
		P3dPaintableTextureMonitorMask__ctor_m98BD8A6A0B69C149BF9ADB8A8D87F3C7B1DDA4AA(__this, NULL);
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dChannelCounter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dChannelCounter__cctor_mF31913EDC5C53EB43AE4BF4422E591A461FCFAB5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_mE1AAA66844BBC60CF5B2D4445D10759918B387EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static LinkedList<P3dChannelCounter> Instances = new LinkedList<P3dChannelCounter>(); private LinkedListNode<P3dChannelCounter> node;
		LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA* L_0 = (LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA*)il2cpp_codegen_object_new(LinkedList_1_tE91C3249567F32DB728C72EE21F0B87BB159E5EA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LinkedList_1__ctor_mE1AAA66844BBC60CF5B2D4445D10759918B387EB(L_0, LinkedList_1__ctor_mE1AAA66844BBC60CF5B2D4445D10759918B387EB_RuntimeMethod_var);
		((P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_StaticFields*)il2cpp_codegen_static_fields_for(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var))->___Instances_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_StaticFields*)il2cpp_codegen_static_fields_for(P3dChannelCounter_tF7BBE1A2251E97F0A05836FCFA3F136A6C9EAF2E_il2cpp_TypeInfo_var))->___Instances_21), (void*)L_0);
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
// System.Void PaintIn3D.Examples.P3dColor::set_Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dColor_set_Color_m1AE09CEE4147BE420E3AD9DFD29812D4E6579921 (P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___color_8 = L_0;
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color;
		return;
	}
}
// UnityEngine.Color PaintIn3D.Examples.P3dColor::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F P3dColor_get_Color_mA1B0417A7D2F26C173E12AD7F709923C9A19CA6E (P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* __this, const RuntimeMethod* method) 
{
	{
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_8;
		return L_0;
	}
}
// System.Int32 PaintIn3D.Examples.P3dColor::get_Total()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dColor_get_Total_mC582490CA50C652CFB768D0BB9FA3CA49B786022 (P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB93B0712585F8573C53A581CBF764ABE0D9DD909_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF56BF766027F43574DF0E532AD03DED513838FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6A89916786518783D43F3BE06C36E8362E24EF58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_GetEnumerator_m6EB4411FED5D2BE86657BE68FE82ED02989A3B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t4966FBC08A6D138E206D01C5CACE30F3DC6CAFF4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* V_2 = NULL;
	{
		// var total = 0;
		V_0 = 0;
		// foreach (var colorCounter in P3dColorCounter.Instances)
		il2cpp_codegen_runtime_class_init_inline(P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_il2cpp_TypeInfo_var);
		LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3* L_0 = ((P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_StaticFields*)il2cpp_codegen_static_fields_for(P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_il2cpp_TypeInfo_var))->___Instances_21;
		NullCheck(L_0);
		Enumerator_t4966FBC08A6D138E206D01C5CACE30F3DC6CAFF4 L_1;
		L_1 = LinkedList_1_GetEnumerator_m6EB4411FED5D2BE86657BE68FE82ED02989A3B3B(L_0, LinkedList_1_GetEnumerator_m6EB4411FED5D2BE86657BE68FE82ED02989A3B3B_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB93B0712585F8573C53A581CBF764ABE0D9DD909((&V_1), Enumerator_Dispose_mB93B0712585F8573C53A581CBF764ABE0D9DD909_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0020_1;
			}

IL_000f_1:
			{
				// foreach (var colorCounter in P3dColorCounter.Instances)
				P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* L_2;
				L_2 = Enumerator_get_Current_m6A89916786518783D43F3BE06C36E8362E24EF58_inline((&V_1), Enumerator_get_Current_m6A89916786518783D43F3BE06C36E8362E24EF58_RuntimeMethod_var);
				V_2 = L_2;
				// total += colorCounter.Total;
				int32_t L_3 = V_0;
				P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* L_4 = V_2;
				NullCheck(L_4);
				int32_t L_5;
				L_5 = P3dPaintableTextureMonitorMask_get_Total_mADDA805EFBB74AD8E4E0E362E134D6151A859D43_inline(L_4, NULL);
				V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_5));
			}

IL_0020_1:
			{
				// foreach (var colorCounter in P3dColorCounter.Instances)
				bool L_6;
				L_6 = Enumerator_MoveNext_mF56BF766027F43574DF0E532AD03DED513838FFD((&V_1), Enumerator_MoveNext_mF56BF766027F43574DF0E532AD03DED513838FFD_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0039;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		// return total;
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Int32 PaintIn3D.Examples.P3dColor::get_Solid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dColor_get_Solid_mA0AC3D7DCEBD131E1CEAA26E83932FB7D8B901AC (P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m595B6DF07BD1855CAEB99489B41790667EEBF02D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1094FA3C98391B17EF9FFA8222124EB833B45C19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDF8E9334A6499AE276A37CC149ADABA010CA6A2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859* V_2 = NULL;
	{
		// var solid = 0;
		V_0 = 0;
		// if (contributions != null)
		List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB* L_0 = __this->___contributions_9;
		if (!L_0)
		{
			goto IL_0061;
		}
	}
	{
		// for (var i = contributions.Count - 1; i >= 0; i--)
		List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB* L_1 = __this->___contributions_9;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m1094FA3C98391B17EF9FFA8222124EB833B45C19_inline(L_1, List_1_get_Count_m1094FA3C98391B17EF9FFA8222124EB833B45C19_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		goto IL_005d;
	}

IL_001a:
	{
		// var contribution = contributions[i];
		List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB* L_3 = __this->___contributions_9;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859* L_5;
		L_5 = List_1_get_Item_mDF8E9334A6499AE276A37CC149ADABA010CA6A2F(L_3, L_4, List_1_get_Item_mDF8E9334A6499AE276A37CC149ADABA010CA6A2F_RuntimeMethod_var);
		V_2 = L_5;
		// if (contribution.Counter != null && contribution.Counter.isActiveAndEnabled == true)
		Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859* L_6 = V_2;
		NullCheck(L_6);
		P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* L_7 = L_6->___Counter_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859* L_9 = V_2;
		NullCheck(L_9);
		P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* L_10 = L_9->___Counter_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(L_10, NULL);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		// solid += contribution.Solid;
		int32_t L_12 = V_0;
		Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859* L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->___Solid_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, L_14));
		goto IL_0059;
	}

IL_004d:
	{
		// contributions.RemoveAt(i);
		List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB* L_15 = __this->___contributions_9;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		List_1_RemoveAt_m595B6DF07BD1855CAEB99489B41790667EEBF02D(L_15, L_16, List_1_RemoveAt_m595B6DF07BD1855CAEB99489B41790667EEBF02D_RuntimeMethod_var);
	}

IL_0059:
	{
		// for (var i = contributions.Count - 1; i >= 0; i--)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
	}

IL_005d:
	{
		// for (var i = contributions.Count - 1; i >= 0; i--)
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}

IL_0061:
	{
		// return solid;
		int32_t L_19 = V_0;
		return L_19;
	}
}
// System.Single PaintIn3D.Examples.P3dColor::get_Ratio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dColor_get_Ratio_m849D016637C3F38712F4AE733A121C81188CDFD3 (P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var total = Total;
		int32_t L_0;
		L_0 = P3dColor_get_Total_mC582490CA50C652CFB768D0BB9FA3CA49B786022(__this, NULL);
		V_0 = L_0;
		// if (total > 0)
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		// return Solid / (float)total;
		int32_t L_2;
		L_2 = P3dColor_get_Solid_mA0AC3D7DCEBD131E1CEAA26E83932FB7D8B901AC(__this, NULL);
		int32_t L_3 = V_0;
		return ((float)(((float)L_2)/((float)L_3)));
	}

IL_0016:
	{
		// return 0.0f;
		return (0.0f);
	}
}
// System.Void PaintIn3D.Examples.P3dColor::Contribute(PaintIn3D.Examples.P3dColorCounter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dColor_Contribute_m38859475E793FECF4B72C34038C420572320F193 (P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* __this, P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* ___counter0, int32_t ___solid1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m24AED0BC3D6ACBB4811D869AFB547824F547583E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859* V_0 = NULL;
	{
		// var contribution = default(Contribution);
		V_0 = (Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859*)NULL;
		// if (TryGetContribution(counter, ref contribution) == false)
		P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* L_0 = ___counter0;
		bool L_1;
		L_1 = P3dColor_TryGetContribution_mBA6D486E2530D5A2C6E3E84B8D635EA644FEEB42(__this, L_0, (&V_0), NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		// if (solid <= 0)
		int32_t L_2 = ___solid1;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		// return;
		return;
	}

IL_0012:
	{
		// contribution = new Contribution();
		Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859* L_3 = (Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859*)il2cpp_codegen_object_new(Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Contribution__ctor_mFDF3A443C6EC7656B46C68146951E1625467CC47(L_3, NULL);
		V_0 = L_3;
		// contributions.Add(contribution);
		List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB* L_4 = __this->___contributions_9;
		Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859* L_5 = V_0;
		NullCheck(L_4);
		List_1_Add_m24AED0BC3D6ACBB4811D869AFB547824F547583E_inline(L_4, L_5, List_1_Add_m24AED0BC3D6ACBB4811D869AFB547824F547583E_RuntimeMethod_var);
		// contribution.Counter = counter;
		Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859* L_6 = V_0;
		P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* L_7 = ___counter0;
		NullCheck(L_6);
		L_6->___Counter_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___Counter_0), (void*)L_7);
	}

IL_002b:
	{
		// contribution.Solid = solid;
		Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859* L_8 = V_0;
		int32_t L_9 = ___solid1;
		NullCheck(L_8);
		L_8->___Solid_1 = L_9;
		// }
		return;
	}
}
// System.Boolean PaintIn3D.Examples.P3dColor::TryGetContribution(PaintIn3D.Examples.P3dColorCounter,PaintIn3D.Examples.P3dColor/Contribution&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dColor_TryGetContribution_mBA6D486E2530D5A2C6E3E84B8D635EA644FEEB42 (P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* __this, P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* ___counter0, Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859** ___contribution1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6ACE03F2B723C1C5BDE884B6D4229B6C9F922A63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1094FA3C98391B17EF9FFA8222124EB833B45C19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDF8E9334A6499AE276A37CC149ADABA010CA6A2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (contributions == null)
		List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB* L_0 = __this->___contributions_9;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// contributions = new List<Contribution>();
		List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB* L_1 = (List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB*)il2cpp_codegen_object_new(List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m6ACE03F2B723C1C5BDE884B6D4229B6C9F922A63(L_1, List_1__ctor_m6ACE03F2B723C1C5BDE884B6D4229B6C9F922A63_RuntimeMethod_var);
		__this->___contributions_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___contributions_9), (void*)L_1);
	}

IL_0013:
	{
		// for (var i = contributions.Count - 1; i >= 0; i--)
		List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB* L_2 = __this->___contributions_9;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m1094FA3C98391B17EF9FFA8222124EB833B45C19_inline(L_2, List_1_get_Count_m1094FA3C98391B17EF9FFA8222124EB833B45C19_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		goto IL_0046;
	}

IL_0023:
	{
		// contribution = contributions[i];
		Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859** L_4 = ___contribution1;
		List_1_t1F287153BED8607093F5A95372B29AC9ED2E35DB* L_5 = __this->___contributions_9;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859* L_7;
		L_7 = List_1_get_Item_mDF8E9334A6499AE276A37CC149ADABA010CA6A2F(L_5, L_6, List_1_get_Item_mDF8E9334A6499AE276A37CC149ADABA010CA6A2F_RuntimeMethod_var);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_7);
		// if (contribution.Counter == counter)
		Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859** L_8 = ___contribution1;
		Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859* L_9 = *((Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859**)L_8);
		NullCheck(L_9);
		P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* L_10 = L_9->___Counter_0;
		P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* L_11 = ___counter0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_0042;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0042:
	{
		// for (var i = contributions.Count - 1; i >= 0; i--)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0046:
	{
		// for (var i = contributions.Count - 1; i >= 0; i--)
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Void PaintIn3D.Examples.P3dColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dColor__ctor_m239FF367274489427D0B7F7010F25D09FF705416 (P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dLinkedBehaviour_1__ctor_m040F17E1E5975213DB081BAB69319A0EE575C4A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		P3dLinkedBehaviour_1__ctor_m040F17E1E5975213DB081BAB69319A0EE575C4A8(__this, P3dLinkedBehaviour_1__ctor_m040F17E1E5975213DB081BAB69319A0EE575C4A8_RuntimeMethod_var);
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
// System.Void PaintIn3D.Examples.P3dColor/Contribution::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Contribution__ctor_mFDF3A443C6EC7656B46C68146951E1625467CC47 (Contribution_t0A0F7C60222BBCA94053E6C609C2C3EB338DE859* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void PaintIn3D.Examples.P3dColorCounter::set_Threshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dColorCounter_set_Threshold_m45B184C210E0EDC128D0D437054E3B49F106D3CB (P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Threshold { set { threshold = value; } get { return threshold; } } [Range(0.0f, 1.0f)] [SerializeField] private float threshold = 0.1f;
		float L_0 = ___value0;
		__this->___threshold_23 = L_0;
		// public float Threshold { set { threshold = value; } get { return threshold; } } [Range(0.0f, 1.0f)] [SerializeField] private float threshold = 0.1f;
		return;
	}
}
// System.Single PaintIn3D.Examples.P3dColorCounter::get_Threshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dColorCounter_get_Threshold_m8EF567430C572A9B1134BDCC4D654DE3A3E03951 (P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* __this, const RuntimeMethod* method) 
{
	{
		// public float Threshold { set { threshold = value; } get { return threshold; } } [Range(0.0f, 1.0f)] [SerializeField] private float threshold = 0.1f;
		float L_0 = __this->___threshold_23;
		return L_0;
	}
}
// System.Collections.Generic.List`1<PaintIn3D.Examples.P3dColorCounter/Contribution> PaintIn3D.Examples.P3dColorCounter::get_Contributions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA* P3dColorCounter_get_Contributions_m0D4D73E6F4B319B366FCF6D1BB66140AAD29F88F (P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* __this, const RuntimeMethod* method) 
{
	{
		// public List<Contribution> Contributions { get { return contributions; } } [System.NonSerialized] private List<Contribution> contributions = new List<Contribution>();
		List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA* L_0 = __this->___contributions_24;
		return L_0;
	}
}
// System.Int64 PaintIn3D.Examples.P3dColorCounter::GetTotal(System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dColorCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t P3dColorCounter_GetTotal_mA39C4FAE62ED0B805AAE59918900D5DB702D1CD6 (RuntimeObject* ___counters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t90EDCA196EA9459E6B9BE7F18679EBCAE49FA41D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tB8BAB34C8C07A812A775204B1C3256020D334530_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* V_2 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// var total = 0L; foreach (var counter in counters ?? Instances) { total += counter.total; } return total;
		V_0 = ((int64_t)0);
		// var total = 0L; foreach (var counter in counters ?? Instances) { total += counter.total; } return total;
		RuntimeObject* L_0 = ___counters0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_il2cpp_TypeInfo_var);
		LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3* L_2 = ((P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_StaticFields*)il2cpp_codegen_static_fields_for(P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_il2cpp_TypeInfo_var))->___Instances_21;
		G_B2_0 = ((RuntimeObject*)(L_2));
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<PaintIn3D.Examples.P3dColorCounter>::GetEnumerator() */, IEnumerable_1_t90EDCA196EA9459E6B9BE7F18679EBCAE49FA41D_il2cpp_TypeInfo_var, G_B2_0);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0039:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_0015_1:
			{
				// var total = 0L; foreach (var counter in counters ?? Instances) { total += counter.total; } return total;
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* L_7;
				L_7 = InterfaceFuncInvoker0< P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<PaintIn3D.Examples.P3dColorCounter>::get_Current() */, IEnumerator_1_tB8BAB34C8C07A812A775204B1C3256020D334530_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				// var total = 0L; foreach (var counter in counters ?? Instances) { total += counter.total; } return total;
				int64_t L_8 = V_0;
				P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* L_9 = V_2;
				NullCheck(L_9);
				int32_t L_10 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)L_9)->___total_17;
				V_0 = ((int64_t)il2cpp_codegen_add(L_8, ((int64_t)L_10)));
			}

IL_0026_1:
			{
				// var total = 0L; foreach (var counter in counters ?? Instances) { total += counter.total; } return total;
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// var total = 0L; foreach (var counter in counters ?? Instances) { total += counter.total; } return total;
		int64_t L_13 = V_0;
		return L_13;
	}
}
// System.Int64 PaintIn3D.Examples.P3dColorCounter::GetCount(PaintIn3D.Examples.P3dColor,System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dColorCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t P3dColorCounter_GetCount_mEAC286C6D4964E06AA507160BD069B48C8B16AB5 (P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* ___color0, RuntimeObject* ___counters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t90EDCA196EA9459E6B9BE7F18679EBCAE49FA41D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tB8BAB34C8C07A812A775204B1C3256020D334530_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* V_2 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// var count = 0L; foreach (var counter in counters ?? Instances) { count += counter.Count(color); } return count;
		V_0 = ((int64_t)0);
		// var count = 0L; foreach (var counter in counters ?? Instances) { count += counter.Count(color); } return count;
		RuntimeObject* L_0 = ___counters1;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_il2cpp_TypeInfo_var);
		LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3* L_2 = ((P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_StaticFields*)il2cpp_codegen_static_fields_for(P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_il2cpp_TypeInfo_var))->___Instances_21;
		G_B2_0 = ((RuntimeObject*)(L_2));
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<PaintIn3D.Examples.P3dColorCounter>::GetEnumerator() */, IEnumerable_1_t90EDCA196EA9459E6B9BE7F18679EBCAE49FA41D_il2cpp_TypeInfo_var, G_B2_0);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_003a;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_003a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0027_1;
			}

IL_0015_1:
			{
				// var count = 0L; foreach (var counter in counters ?? Instances) { count += counter.Count(color); } return count;
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* L_7;
				L_7 = InterfaceFuncInvoker0< P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<PaintIn3D.Examples.P3dColorCounter>::get_Current() */, IEnumerator_1_tB8BAB34C8C07A812A775204B1C3256020D334530_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				// var count = 0L; foreach (var counter in counters ?? Instances) { count += counter.Count(color); } return count;
				int64_t L_8 = V_0;
				P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* L_9 = V_2;
				P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* L_10 = ___color0;
				NullCheck(L_9);
				int32_t L_11;
				L_11 = P3dColorCounter_Count_mB9FD7A05DA1B5E3E893E30F9E996B934E2953416(L_9, L_10, NULL);
				V_0 = ((int64_t)il2cpp_codegen_add(L_8, ((int64_t)L_11)));
			}

IL_0027_1:
			{
				// var count = 0L; foreach (var counter in counters ?? Instances) { count += counter.Count(color); } return count;
				RuntimeObject* L_12 = V_1;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// var count = 0L; foreach (var counter in counters ?? Instances) { count += counter.Count(color); } return count;
		int64_t L_14 = V_0;
		return L_14;
	}
}
// System.Single PaintIn3D.Examples.P3dColorCounter::GetRatio(PaintIn3D.Examples.P3dColor,System.Collections.Generic.ICollection`1<PaintIn3D.Examples.P3dColorCounter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dColorCounter_GetRatio_m3F3BE2A760F5C0F9AD932C0B62DCF7EE00350BEB (P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* ___color0, RuntimeObject* ___counters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return P3dHelper.Divide(GetCount(color, counters), GetTotal(counters));
		P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* L_0 = ___color0;
		RuntimeObject* L_1 = ___counters1;
		il2cpp_codegen_runtime_class_init_inline(P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = P3dColorCounter_GetCount_mEAC286C6D4964E06AA507160BD069B48C8B16AB5(L_0, L_1, NULL);
		RuntimeObject* L_3 = ___counters1;
		int64_t L_4;
		L_4 = P3dColorCounter_GetTotal_mA39C4FAE62ED0B805AAE59918900D5DB702D1CD6(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		float L_5;
		L_5 = P3dHelper_Divide_m28D902114AA27F5ABDB388E5F750A121610E1A65(((float)L_2), ((float)L_4), NULL);
		return L_5;
	}
}
// System.Int32 PaintIn3D.Examples.P3dColorCounter::Count(PaintIn3D.Examples.P3dColor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dColorCounter_Count_mB9FD7A05DA1B5E3E893E30F9E996B934E2953416 (P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* __this, P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* ___color0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m95D57BD0EA974806357341F6956D1B52FB6831DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m092580E213DE07B370B5BE79ED8FDB42DCA7454B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4BCC017ACDA5A93A8D4D361E143865E43FBEA79D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m925BDD019B208B30EAB57A2B10E7363B08D60F8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t851FBDBED59037AF58113A5E0FD2D28F34041AAC V_0;
	memset((&V_0), 0, sizeof(V_0));
	Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// foreach (var contribution in contributions)
		List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA* L_0 = __this->___contributions_24;
		NullCheck(L_0);
		Enumerator_t851FBDBED59037AF58113A5E0FD2D28F34041AAC L_1;
		L_1 = List_1_GetEnumerator_m925BDD019B208B30EAB57A2B10E7363B08D60F8A(L_0, List_1_GetEnumerator_m925BDD019B208B30EAB57A2B10E7363B08D60F8A_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m95D57BD0EA974806357341F6956D1B52FB6831DA((&V_0), Enumerator_Dispose_m95D57BD0EA974806357341F6956D1B52FB6831DA_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_000e_1:
			{
				// foreach (var contribution in contributions)
				Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_2;
				L_2 = Enumerator_get_Current_m4BCC017ACDA5A93A8D4D361E143865E43FBEA79D_inline((&V_0), Enumerator_get_Current_m4BCC017ACDA5A93A8D4D361E143865E43FBEA79D_RuntimeMethod_var);
				V_1 = L_2;
				// if (contribution.Color == color)
				Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_3 = V_1;
				NullCheck(L_3);
				P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* L_4 = L_3->___Color_0;
				P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* L_5 = ___color0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_6;
				L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, L_5, NULL);
				if (!L_6)
				{
					goto IL_002d_1;
				}
			}
			{
				// return contribution.Count;
				Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_7 = V_1;
				NullCheck(L_7);
				int32_t L_8 = L_7->___Count_1;
				V_2 = L_8;
				goto IL_0048;
			}

IL_002d_1:
			{
				// foreach (var contribution in contributions)
				bool L_9;
				L_9 = Enumerator_MoveNext_m092580E213DE07B370B5BE79ED8FDB42DCA7454B((&V_0), Enumerator_MoveNext_m092580E213DE07B370B5BE79ED8FDB42DCA7454B_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// return 0;
		return 0;
	}

IL_0048:
	{
		// }
		int32_t L_10 = V_2;
		return L_10;
	}
}
// System.Single PaintIn3D.Examples.P3dColorCounter::Ratio(PaintIn3D.Examples.P3dColor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dColorCounter_Ratio_m9E836834F977670031AD5D31C74FF948451141F5 (P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* __this, P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* ___color0, const RuntimeMethod* method) 
{
	{
		// if (total > 0)
		int32_t L_0 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		// return Count(color) / (float)total;
		P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* L_1 = ___color0;
		int32_t L_2;
		L_2 = P3dColorCounter_Count_mB9FD7A05DA1B5E3E893E30F9E996B934E2953416(__this, L_1, NULL);
		int32_t L_3 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17;
		return ((float)(((float)L_2)/((float)L_3)));
	}

IL_001a:
	{
		// return 0.0f;
		return (0.0f);
	}
}
// System.Void PaintIn3D.Examples.P3dColorCounter::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dColorCounter_OnEnable_m13B8C87E26EC630E35DBCE4CA1E735D6DCE231A1 (P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_AddLast_m5617E0987CE960D429D991AADA76C157DCFFC353_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		P3dPaintableTextureMonitorMask_OnEnable_m76650F2E7B61B2D118C1180F9A507C186EABA6A3(__this, NULL);
		// node = Instances.AddLast(this);
		il2cpp_codegen_runtime_class_init_inline(P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_il2cpp_TypeInfo_var);
		LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3* L_0 = ((P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_StaticFields*)il2cpp_codegen_static_fields_for(P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_il2cpp_TypeInfo_var))->___Instances_21;
		NullCheck(L_0);
		LinkedListNode_1_t150D7EC2BBDC599E0A03AC76F023431B7944B1E6* L_1;
		L_1 = LinkedList_1_AddLast_m5617E0987CE960D429D991AADA76C157DCFFC353(L_0, __this, LinkedList_1_AddLast_m5617E0987CE960D429D991AADA76C157DCFFC353_RuntimeMethod_var);
		__this->___node_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___node_22), (void*)L_1);
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dColorCounter::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dColorCounter_OnDisable_m59886A090B898F3A08B2F423DED1059C13318A9F (P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_Remove_mCCB091CAE0D60E8AB4ABCB477634CD0FA804239B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		P3dPaintableTextureMonitorMask_OnDisable_mCA845C2E965A853D95C020EEA9035E9273D3F3F3(__this, NULL);
		// Instances.Remove(node); node = null;
		il2cpp_codegen_runtime_class_init_inline(P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_il2cpp_TypeInfo_var);
		LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3* L_0 = ((P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_StaticFields*)il2cpp_codegen_static_fields_for(P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_il2cpp_TypeInfo_var))->___Instances_21;
		LinkedListNode_1_t150D7EC2BBDC599E0A03AC76F023431B7944B1E6* L_1 = __this->___node_22;
		NullCheck(L_0);
		LinkedList_1_Remove_mCCB091CAE0D60E8AB4ABCB477634CD0FA804239B(L_0, L_1, LinkedList_1_Remove_mCCB091CAE0D60E8AB4ABCB477634CD0FA804239B_RuntimeMethod_var);
		// Instances.Remove(node); node = null;
		__this->___node_22 = (LinkedListNode_1_t150D7EC2BBDC599E0A03AC76F023431B7944B1E6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___node_22), (void*)(LinkedListNode_1_t150D7EC2BBDC599E0A03AC76F023431B7944B1E6*)NULL);
		// Contribute(0);
		P3dColorCounter_Contribute_m147D3FA7109874CAC321BF8DCFE98FF205868186(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dColorCounter::HandleComplete(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dColorCounter_HandleComplete_m28B31B6B929D450FDA9E0423345CB1980A23956E (P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* __this, int32_t ___boost0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4368DEC3632E4A9599E17B77628DA6A358E57158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dLinkedBehaviour_1_tA79BAA47E81203531E02EB6482C4E9B7C6CFAA53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* V_6 = NULL;
	int32_t V_7 = 0;
	{
		// if (currentPixels.IsCreated == false || maskPixels.IsCreated == false || currentPixels.Length != maskPixels.Length)
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_0 = (&((P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078*)__this)->___currentPixels_13);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D(L_0, NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_2 = (&((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___maskPixels_20);
		bool L_3;
		L_3 = NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081(L_2, NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_4 = (&((P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078*)__this)->___currentPixels_13);
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_4)->___m_Length_1);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_6 = (&((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___maskPixels_20);
		int32_t L_7;
		L_7 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_6)->___m_Length_1);
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0033;
		}
	}

IL_0032:
	{
		// return;
		return;
	}

IL_0033:
	{
		// var threshold32 = (byte)(threshold * 255.0f);
		float L_8 = __this->___threshold_23;
		V_0 = (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)il2cpp_codegen_multiply(L_8, (255.0f))));
		// PrepareContributions();
		P3dColorCounter_PrepareContributions_m9450E855460E5662653D94855021DE8A928E7891(__this, NULL);
		// total = 0;
		((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17 = 0;
		// for (var i = 0; i < currentPixels.Length; i++)
		V_1 = 0;
		goto IL_0142;
	}

IL_0055:
	{
		// if (maskPixels[i] > 127)
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_9 = (&((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___maskPixels_20);
		int32_t L_10 = V_1;
		uint8_t L_11;
		L_11 = IL2CPP_NATIVEARRAY_GET_ITEM(uint8_t, (L_9)->___m_Buffer_0, L_10);
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)127))))
		{
			goto IL_013e;
		}
	}
	{
		// total++;
		int32_t L_12 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17;
		((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		// var currentPixel = currentPixels[i];
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_13 = (&((P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078*)__this)->___currentPixels_13);
		int32_t L_14 = V_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_15;
		L_15 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (L_13)->___m_Buffer_0, L_14);
		V_2 = L_15;
		// var bestIndex    = -1;
		V_3 = (-1);
		// var bestDistance = (int)threshold32;
		uint8_t L_16 = V_0;
		V_4 = L_16;
		// for (var c = 0; c < P3dColor.InstanceCount; c++)
		V_5 = 0;
		goto IL_0115;
	}

IL_0090:
	{
		// var tempColor = contributions[c];
		List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA* L_17 = __this->___contributions_24;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_19;
		L_19 = List_1_get_Item_m4368DEC3632E4A9599E17B77628DA6A358E57158(L_17, L_18, List_1_get_Item_m4368DEC3632E4A9599E17B77628DA6A358E57158_RuntimeMethod_var);
		V_6 = L_19;
		// var distance  = 0;
		V_7 = 0;
		// distance += System.Math.Abs(tempColor.R - currentPixel.r);
		int32_t L_20 = V_7;
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_21 = V_6;
		NullCheck(L_21);
		uint8_t L_22 = L_21->___R_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_23 = V_2;
		uint8_t L_24 = L_23.___r_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_24)));
		V_7 = ((int32_t)il2cpp_codegen_add(L_20, L_25));
		// distance += System.Math.Abs(tempColor.G - currentPixel.g);
		int32_t L_26 = V_7;
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_27 = V_6;
		NullCheck(L_27);
		uint8_t L_28 = L_27->___G_4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_29 = V_2;
		uint8_t L_30 = L_29.___g_2;
		int32_t L_31;
		L_31 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)L_30)));
		V_7 = ((int32_t)il2cpp_codegen_add(L_26, L_31));
		// distance += System.Math.Abs(tempColor.B - currentPixel.b);
		int32_t L_32 = V_7;
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_33 = V_6;
		NullCheck(L_33);
		uint8_t L_34 = L_33->___B_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_35 = V_2;
		uint8_t L_36 = L_35.___b_3;
		int32_t L_37;
		L_37 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)L_36)));
		V_7 = ((int32_t)il2cpp_codegen_add(L_32, L_37));
		// distance += System.Math.Abs(tempColor.A - currentPixel.a);
		int32_t L_38 = V_7;
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_39 = V_6;
		NullCheck(L_39);
		uint8_t L_40 = L_39->___A_6;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_41 = V_2;
		uint8_t L_42 = L_41.___a_4;
		int32_t L_43;
		L_43 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)L_42)));
		V_7 = ((int32_t)il2cpp_codegen_add(L_38, L_43));
		// if (distance <= bestDistance)
		int32_t L_44 = V_7;
		int32_t L_45 = V_4;
		if ((((int32_t)L_44) > ((int32_t)L_45)))
		{
			goto IL_010f;
		}
	}
	{
		// bestIndex    = c;
		int32_t L_46 = V_5;
		V_3 = L_46;
		// bestDistance = distance;
		int32_t L_47 = V_7;
		V_4 = L_47;
	}

IL_010f:
	{
		// for (var c = 0; c < P3dColor.InstanceCount; c++)
		int32_t L_48 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0115:
	{
		// for (var c = 0; c < P3dColor.InstanceCount; c++)
		int32_t L_49 = V_5;
		int32_t L_50 = ((P3dLinkedBehaviour_1_tA79BAA47E81203531E02EB6482C4E9B7C6CFAA53_StaticFields*)il2cpp_codegen_static_fields_for(P3dLinkedBehaviour_1_tA79BAA47E81203531E02EB6482C4E9B7C6CFAA53_il2cpp_TypeInfo_var))->___InstanceCount_5;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_0090;
		}
	}
	{
		// if (bestIndex >= 0)
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) < ((int32_t)0)))
		{
			goto IL_013e;
		}
	}
	{
		// contributions[bestIndex].Count++;
		List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA* L_52 = __this->___contributions_24;
		int32_t L_53 = V_3;
		NullCheck(L_52);
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_54;
		L_54 = List_1_get_Item_m4368DEC3632E4A9599E17B77628DA6A358E57158(L_52, L_53, List_1_get_Item_m4368DEC3632E4A9599E17B77628DA6A358E57158_RuntimeMethod_var);
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_55 = L_54;
		NullCheck(L_55);
		int32_t L_56 = L_55->___Count_1;
		NullCheck(L_55);
		L_55->___Count_1 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_013e:
	{
		// for (var i = 0; i < currentPixels.Length; i++)
		int32_t L_57 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_0142:
	{
		// for (var i = 0; i < currentPixels.Length; i++)
		int32_t L_58 = V_1;
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_59 = (&((P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078*)__this)->___currentPixels_13);
		int32_t L_60;
		L_60 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_59)->___m_Length_1);
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_0055;
		}
	}
	{
		// total *= boost;
		int32_t L_61 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17;
		int32_t L_62 = ___boost0;
		((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17 = ((int32_t)il2cpp_codegen_multiply(L_61, L_62));
		// Contribute(boost);
		int32_t L_63 = ___boost0;
		P3dColorCounter_Contribute_m147D3FA7109874CAC321BF8DCFE98FF205868186(__this, L_63, NULL);
		// InvokeOnUpdated();
		P3dPaintableTextureMonitor_InvokeOnUpdated_m973D9D449BBCF9E77928E5D4C65D69D9CE61D099(__this, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dColorCounter::ClearContributions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dColorCounter_ClearContributions_mA4A564698D9846C064CD1497648CA7B1ED35C09B (P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1208F9A66BD7DED4A7CEA0E2801BD82C7DB13940_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD30F985D04E6229E20D18BAF321F82684852D354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4368DEC3632E4A9599E17B77628DA6A358E57158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mFDEFCB3C5644D98E0199DCE420A6BC612146320A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (var i = contributions.Count - 1; i >= 0; i--)
		List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA* L_0 = __this->___contributions_24;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mD30F985D04E6229E20D18BAF321F82684852D354_inline(L_0, List_1_get_Count_mD30F985D04E6229E20D18BAF321F82684852D354_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_002a;
	}

IL_0010:
	{
		// Contribution.Pool.Push(contributions[i]);
		il2cpp_codegen_runtime_class_init_inline(Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_il2cpp_TypeInfo_var);
		Stack_1_t561497B98B40FBF796C24CE6E484D4571592E83B* L_2 = ((Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_StaticFields*)il2cpp_codegen_static_fields_for(Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_il2cpp_TypeInfo_var))->___Pool_7;
		List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA* L_3 = __this->___contributions_24;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_5;
		L_5 = List_1_get_Item_m4368DEC3632E4A9599E17B77628DA6A358E57158(L_3, L_4, List_1_get_Item_m4368DEC3632E4A9599E17B77628DA6A358E57158_RuntimeMethod_var);
		NullCheck(L_2);
		Stack_1_Push_mFDEFCB3C5644D98E0199DCE420A6BC612146320A(L_2, L_5, Stack_1_Push_mFDEFCB3C5644D98E0199DCE420A6BC612146320A_RuntimeMethod_var);
		// for (var i = contributions.Count - 1; i >= 0; i--)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}

IL_002a:
	{
		// for (var i = contributions.Count - 1; i >= 0; i--)
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// contributions.Clear();
		List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA* L_8 = __this->___contributions_24;
		NullCheck(L_8);
		List_1_Clear_m1208F9A66BD7DED4A7CEA0E2801BD82C7DB13940_inline(L_8, List_1_Clear_m1208F9A66BD7DED4A7CEA0E2801BD82C7DB13940_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dColorCounter::PrepareContributions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dColorCounter_PrepareContributions_m9450E855460E5662653D94855021DE8A928E7891 (P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE69ACAD75069F79230063722F7CF396B587FA82F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dLinkedBehaviour_1_tA79BAA47E81203531E02EB6482C4E9B7C6CFAA53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m2995CFBCEA086B1C5EF111779A909583F2883634_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m57B32B18715A0DE1D649067DB37209E61B748A07_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* V_0 = NULL;
	int32_t V_1 = 0;
	Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* V_2 = NULL;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_3;
	memset((&V_3), 0, sizeof(V_3));
	Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* G_B4_0 = NULL;
	{
		// ClearContributions();
		P3dColorCounter_ClearContributions_mA4A564698D9846C064CD1497648CA7B1ED35C09B(__this, NULL);
		// var color = P3dColor.FirstInstance;
		P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* L_0 = ((P3dLinkedBehaviour_1_tA79BAA47E81203531E02EB6482C4E9B7C6CFAA53_StaticFields*)il2cpp_codegen_static_fields_for(P3dLinkedBehaviour_1_tA79BAA47E81203531E02EB6482C4E9B7C6CFAA53_il2cpp_TypeInfo_var))->___FirstInstance_4;
		V_0 = L_0;
		// for (var i = 0; i < P3dColor.InstanceCount; i++)
		V_1 = 0;
		goto IL_0093;
	}

IL_0013:
	{
		// var contribution = Contribution.Pool.Count > 0 ? Contribution.Pool.Pop() : new Contribution();
		il2cpp_codegen_runtime_class_init_inline(Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_il2cpp_TypeInfo_var);
		Stack_1_t561497B98B40FBF796C24CE6E484D4571592E83B* L_1 = ((Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_StaticFields*)il2cpp_codegen_static_fields_for(Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_il2cpp_TypeInfo_var))->___Pool_7;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Stack_1_get_Count_m57B32B18715A0DE1D649067DB37209E61B748A07_inline(L_1, Stack_1_get_Count_m57B32B18715A0DE1D649067DB37209E61B748A07_RuntimeMethod_var);
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_3 = (Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3*)il2cpp_codegen_object_new(Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Contribution__ctor_m265EBAB5306C6F35528EA4B7714BC8A4E1945A68(L_3, NULL);
		G_B4_0 = L_3;
		goto IL_0031;
	}

IL_0027:
	{
		il2cpp_codegen_runtime_class_init_inline(Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_il2cpp_TypeInfo_var);
		Stack_1_t561497B98B40FBF796C24CE6E484D4571592E83B* L_4 = ((Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_StaticFields*)il2cpp_codegen_static_fields_for(Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_il2cpp_TypeInfo_var))->___Pool_7;
		NullCheck(L_4);
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_5;
		L_5 = Stack_1_Pop_m2995CFBCEA086B1C5EF111779A909583F2883634(L_4, Stack_1_Pop_m2995CFBCEA086B1C5EF111779A909583F2883634_RuntimeMethod_var);
		G_B4_0 = L_5;
	}

IL_0031:
	{
		V_2 = G_B4_0;
		// var color32      = (Color32)color.Color;
		P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* L_6 = V_0;
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = P3dColor_get_Color_mA1B0417A7D2F26C173E12AD7F709923C9A19CA6E_inline(L_6, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_8;
		L_8 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_7, NULL);
		V_3 = L_8;
		// contribution.Color = color;
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_9 = V_2;
		P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* L_10 = V_0;
		NullCheck(L_9);
		L_9->___Color_0 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___Color_0), (void*)L_10);
		// contribution.Count = 0;
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_11 = V_2;
		NullCheck(L_11);
		L_11->___Count_1 = 0;
		// contribution.R     = color32.r;
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_12 = V_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = V_3;
		uint8_t L_14 = L_13.___r_1;
		NullCheck(L_12);
		L_12->___R_3 = L_14;
		// contribution.G     = color32.g;
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_15 = V_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16 = V_3;
		uint8_t L_17 = L_16.___g_2;
		NullCheck(L_15);
		L_15->___G_4 = L_17;
		// contribution.B     = color32.b;
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_18 = V_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_19 = V_3;
		uint8_t L_20 = L_19.___b_3;
		NullCheck(L_18);
		L_18->___B_5 = L_20;
		// contribution.A     = color32.a;
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_21 = V_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_22 = V_3;
		uint8_t L_23 = L_22.___a_4;
		NullCheck(L_21);
		L_21->___A_6 = L_23;
		// contributions.Add(contribution);
		List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA* L_24 = __this->___contributions_24;
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_25 = V_2;
		NullCheck(L_24);
		List_1_Add_mE69ACAD75069F79230063722F7CF396B587FA82F_inline(L_24, L_25, List_1_Add_mE69ACAD75069F79230063722F7CF396B587FA82F_RuntimeMethod_var);
		// color = color.NextInstance;
		P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* L_26 = V_0;
		NullCheck(L_26);
		P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* L_27 = ((P3dLinkedBehaviour_1_tA79BAA47E81203531E02EB6482C4E9B7C6CFAA53*)L_26)->___NextInstance_7;
		V_0 = L_27;
		// for (var i = 0; i < P3dColor.InstanceCount; i++)
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0093:
	{
		// for (var i = 0; i < P3dColor.InstanceCount; i++)
		int32_t L_29 = V_1;
		int32_t L_30 = ((P3dLinkedBehaviour_1_tA79BAA47E81203531E02EB6482C4E9B7C6CFAA53_StaticFields*)il2cpp_codegen_static_fields_for(P3dLinkedBehaviour_1_tA79BAA47E81203531E02EB6482C4E9B7C6CFAA53_il2cpp_TypeInfo_var))->___InstanceCount_5;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0013;
		}
	}
	{
		// total = 0;
		((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17 = 0;
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dColorCounter::Contribute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dColorCounter_Contribute_m147D3FA7109874CAC321BF8DCFE98FF205868186 (P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* __this, int32_t ___scale0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mCF9510FBCAD8C28F64666D97CA5CE55E63385554_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD30F985D04E6229E20D18BAF321F82684852D354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4368DEC3632E4A9599E17B77628DA6A358E57158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mFDEFCB3C5644D98E0199DCE420A6BC612146320A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* V_2 = NULL;
	float G_B3_0 = 0.0f;
	{
		// var totalRecip = total > 0 ? 1.0f / total : 1.0f;
		int32_t L_0 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (1.0f);
		goto IL_001d;
	}

IL_0010:
	{
		int32_t L_1 = ((P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57*)__this)->___total_17;
		G_B3_0 = ((float)((1.0f)/((float)L_1)));
	}

IL_001d:
	{
		V_0 = G_B3_0;
		// for (var i = contributions.Count - 1; i >= 0; i--)
		List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA* L_2 = __this->___contributions_24;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mD30F985D04E6229E20D18BAF321F82684852D354_inline(L_2, List_1_get_Count_mD30F985D04E6229E20D18BAF321F82684852D354_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		goto IL_009c;
	}

IL_002e:
	{
		// var contribution = contributions[i];
		List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA* L_4 = __this->___contributions_24;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_6;
		L_6 = List_1_get_Item_m4368DEC3632E4A9599E17B77628DA6A358E57158(L_4, L_5, List_1_get_Item_m4368DEC3632E4A9599E17B77628DA6A358E57158_RuntimeMethod_var);
		V_2 = L_6;
		// contribution.Count *= scale;
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_7 = V_2;
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9 = L_8->___Count_1;
		int32_t L_10 = ___scale0;
		NullCheck(L_8);
		L_8->___Count_1 = ((int32_t)il2cpp_codegen_multiply(L_9, L_10));
		// contribution.Ratio  = contribution.Count * totalRecip;
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_11 = V_2;
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13 = L_12->___Count_1;
		float L_14 = V_0;
		NullCheck(L_11);
		L_11->___Ratio_2 = ((float)il2cpp_codegen_multiply(((float)L_13), L_14));
		// if (contribution.Color != null)
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_15 = V_2;
		NullCheck(L_15);
		P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* L_16 = L_15->___Color_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_17)
		{
			goto IL_0078;
		}
	}
	{
		// contribution.Color.Contribute(this, contribution.Count);
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_18 = V_2;
		NullCheck(L_18);
		P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* L_19 = L_18->___Color_0;
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_20 = V_2;
		NullCheck(L_20);
		int32_t L_21 = L_20->___Count_1;
		NullCheck(L_19);
		P3dColor_Contribute_m38859475E793FECF4B72C34038C420572320F193(L_19, __this, L_21, NULL);
	}

IL_0078:
	{
		// if (contribution.Count <= 0)
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = L_22->___Count_1;
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_0098;
		}
	}
	{
		// Contribution.Pool.Push(contribution);
		il2cpp_codegen_runtime_class_init_inline(Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_il2cpp_TypeInfo_var);
		Stack_1_t561497B98B40FBF796C24CE6E484D4571592E83B* L_24 = ((Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_StaticFields*)il2cpp_codegen_static_fields_for(Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_il2cpp_TypeInfo_var))->___Pool_7;
		Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* L_25 = V_2;
		NullCheck(L_24);
		Stack_1_Push_mFDEFCB3C5644D98E0199DCE420A6BC612146320A(L_24, L_25, Stack_1_Push_mFDEFCB3C5644D98E0199DCE420A6BC612146320A_RuntimeMethod_var);
		// contributions.RemoveAt(i);
		List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA* L_26 = __this->___contributions_24;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		List_1_RemoveAt_mCF9510FBCAD8C28F64666D97CA5CE55E63385554(L_26, L_27, List_1_RemoveAt_mCF9510FBCAD8C28F64666D97CA5CE55E63385554_RuntimeMethod_var);
	}

IL_0098:
	{
		// for (var i = contributions.Count - 1; i >= 0; i--)
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_28, 1));
	}

IL_009c:
	{
		// for (var i = contributions.Count - 1; i >= 0; i--)
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dColorCounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dColorCounter__ctor_m39393AB65C54B5A673F352CC9D8DAAFDDF1963C2 (P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBF165C67CA84AC2699F3C5229BC7D02124BEC170_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float Threshold { set { threshold = value; } get { return threshold; } } [Range(0.0f, 1.0f)] [SerializeField] private float threshold = 0.1f;
		__this->___threshold_23 = (0.100000001f);
		// public List<Contribution> Contributions { get { return contributions; } } [System.NonSerialized] private List<Contribution> contributions = new List<Contribution>();
		List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA* L_0 = (List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA*)il2cpp_codegen_object_new(List_1_t002661FF5C6B408EC2FE34259F4CF20E13BC1FCA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mBF165C67CA84AC2699F3C5229BC7D02124BEC170(L_0, List_1__ctor_mBF165C67CA84AC2699F3C5229BC7D02124BEC170_RuntimeMethod_var);
		__this->___contributions_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___contributions_24), (void*)L_0);
		P3dPaintableTextureMonitorMask__ctor_m98BD8A6A0B69C149BF9ADB8A8D87F3C7B1DDA4AA(__this, NULL);
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dColorCounter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dColorCounter__cctor_m3123239583F1D9595FE9F8D68ED47828B0AE71F2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_m575C749969EAD92F3047285669A5D2861BE9A10F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static LinkedList<P3dColorCounter> Instances = new LinkedList<P3dColorCounter>(); private LinkedListNode<P3dColorCounter> node;
		LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3* L_0 = (LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3*)il2cpp_codegen_object_new(LinkedList_1_t62323FD8A6B791D9C04DC69724556ADB74F9F4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LinkedList_1__ctor_m575C749969EAD92F3047285669A5D2861BE9A10F(L_0, LinkedList_1__ctor_m575C749969EAD92F3047285669A5D2861BE9A10F_RuntimeMethod_var);
		((P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_StaticFields*)il2cpp_codegen_static_fields_for(P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_il2cpp_TypeInfo_var))->___Instances_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_StaticFields*)il2cpp_codegen_static_fields_for(P3dColorCounter_tCC73F884E63AE1C3EE27E02AEBADEA1F9667BD64_il2cpp_TypeInfo_var))->___Instances_21), (void*)L_0);
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
// System.Void PaintIn3D.Examples.P3dColorCounter/Contribution::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Contribution__ctor_m265EBAB5306C6F35528EA4B7714BC8A4E1945A68 (Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dColorCounter/Contribution::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Contribution__cctor_m40DBD4DED9B5D5709E0B5FF64601BFD63824A009 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_mA052B786CB7E9A6421750103DC69F34096E92EA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t561497B98B40FBF796C24CE6E484D4571592E83B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Stack<Contribution> Pool = new Stack<Contribution>();
		Stack_1_t561497B98B40FBF796C24CE6E484D4571592E83B* L_0 = (Stack_1_t561497B98B40FBF796C24CE6E484D4571592E83B*)il2cpp_codegen_object_new(Stack_1_t561497B98B40FBF796C24CE6E484D4571592E83B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Stack_1__ctor_mA052B786CB7E9A6421750103DC69F34096E92EA9(L_0, Stack_1__ctor_mA052B786CB7E9A6421750103DC69F34096E92EA9_RuntimeMethod_var);
		((Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_StaticFields*)il2cpp_codegen_static_fields_for(Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_il2cpp_TypeInfo_var))->___Pool_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_StaticFields*)il2cpp_codegen_static_fields_for(Contribution_tF2C8021B27180EDBB040FA83D1956620C20C00D3_il2cpp_TypeInfo_var))->___Pool_7), (void*)L_0);
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
// System.Void PaintIn3D.Examples.P3dGraduallyFade::set_PaintableTexture(PaintIn3D.P3dPaintableTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dGraduallyFade_set_PaintableTexture_m6E41BA9762EE5B3B98873A59EE88EA94DA5C256A (P3dGraduallyFade_t2027A523C7CF2CBD737C7E3E10047FDA82317EAB* __this, P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* ___value0, const RuntimeMethod* method) 
{
	{
		// public P3dPaintableTexture PaintableTexture { set { paintableTexture = value; } get { return paintableTexture; } } [SerializeField] private P3dPaintableTexture paintableTexture;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_0 = ___value0;
		__this->___paintableTexture_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___paintableTexture_4), (void*)L_0);
		// public P3dPaintableTexture PaintableTexture { set { paintableTexture = value; } get { return paintableTexture; } } [SerializeField] private P3dPaintableTexture paintableTexture;
		return;
	}
}
// PaintIn3D.P3dPaintableTexture PaintIn3D.Examples.P3dGraduallyFade::get_PaintableTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* P3dGraduallyFade_get_PaintableTexture_mAF0918D521D8C20920F468DB94631E239A55F98D (P3dGraduallyFade_t2027A523C7CF2CBD737C7E3E10047FDA82317EAB* __this, const RuntimeMethod* method) 
{
	{
		// public P3dPaintableTexture PaintableTexture { set { paintableTexture = value; } get { return paintableTexture; } } [SerializeField] private P3dPaintableTexture paintableTexture;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_0 = __this->___paintableTexture_4;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dGraduallyFade::set_MaskTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dGraduallyFade_set_MaskTexture_mB3469488C55483C876230EAF3CA8C95EBFB8F2FF (P3dGraduallyFade_t2027A523C7CF2CBD737C7E3E10047FDA82317EAB* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) 
{
	{
		// public Texture MaskTexture { set { maskTexture = value; } get { return maskTexture; } } [SerializeField] private Texture maskTexture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___value0;
		__this->___maskTexture_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___maskTexture_5), (void*)L_0);
		// public Texture MaskTexture { set { maskTexture = value; } get { return maskTexture; } } [SerializeField] private Texture maskTexture;
		return;
	}
}
// UnityEngine.Texture PaintIn3D.Examples.P3dGraduallyFade::get_MaskTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* P3dGraduallyFade_get_MaskTexture_mE8D59938A2B85B124B1189649A70DA40B31221B0 (P3dGraduallyFade_t2027A523C7CF2CBD737C7E3E10047FDA82317EAB* __this, const RuntimeMethod* method) 
{
	{
		// public Texture MaskTexture { set { maskTexture = value; } get { return maskTexture; } } [SerializeField] private Texture maskTexture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___maskTexture_5;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dGraduallyFade::set_MaskPaintableTexture(PaintIn3D.P3dPaintableTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dGraduallyFade_set_MaskPaintableTexture_mDD624A4CAB6CEEA210C257AB97D215B8B38D4A0A (P3dGraduallyFade_t2027A523C7CF2CBD737C7E3E10047FDA82317EAB* __this, P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* ___value0, const RuntimeMethod* method) 
{
	{
		// public P3dPaintableTexture MaskPaintableTexture { set { maskPaintableTexture = value; } get { return maskPaintableTexture; } } [SerializeField] private P3dPaintableTexture maskPaintableTexture;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_0 = ___value0;
		__this->___maskPaintableTexture_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___maskPaintableTexture_6), (void*)L_0);
		// public P3dPaintableTexture MaskPaintableTexture { set { maskPaintableTexture = value; } get { return maskPaintableTexture; } } [SerializeField] private P3dPaintableTexture maskPaintableTexture;
		return;
	}
}
// PaintIn3D.P3dPaintableTexture PaintIn3D.Examples.P3dGraduallyFade::get_MaskPaintableTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* P3dGraduallyFade_get_MaskPaintableTexture_m54A1561DF1E2786C90164A138DE08197DF9F7B06 (P3dGraduallyFade_t2027A523C7CF2CBD737C7E3E10047FDA82317EAB* __this, const RuntimeMethod* method) 
{
	{
		// public P3dPaintableTexture MaskPaintableTexture { set { maskPaintableTexture = value; } get { return maskPaintableTexture; } } [SerializeField] private P3dPaintableTexture maskPaintableTexture;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_0 = __this->___maskPaintableTexture_6;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dGraduallyFade::set_MaskChannel(PaintIn3D.P3dChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dGraduallyFade_set_MaskChannel_m0B050D5E43B9E91C9034DBEB59D3F98AA750AD2E (P3dGraduallyFade_t2027A523C7CF2CBD737C7E3E10047FDA82317EAB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public P3dChannel MaskChannel { set { maskChannel = value; } get { return maskChannel; } } [SerializeField] private P3dChannel maskChannel;
		int32_t L_0 = ___value0;
		__this->___maskChannel_7 = L_0;
		// public P3dChannel MaskChannel { set { maskChannel = value; } get { return maskChannel; } } [SerializeField] private P3dChannel maskChannel;
		return;
	}
}
// PaintIn3D.P3dChannel PaintIn3D.Examples.P3dGraduallyFade::get_MaskChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dGraduallyFade_get_MaskChannel_m3CCE38888C793D1F5348C1E9FC8429A72E5EAC24 (P3dGraduallyFade_t2027A523C7CF2CBD737C7E3E10047FDA82317EAB* __this, const RuntimeMethod* method) 
{
	{
		// public P3dChannel MaskChannel { set { maskChannel = value; } get { return maskChannel; } } [SerializeField] private P3dChannel maskChannel;
		int32_t L_0 = __this->___maskChannel_7;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dGraduallyFade::set_BlendMode(PaintIn3D.P3dBlendMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dGraduallyFade_set_BlendMode_mC88CAF87A61C770C85C95CC6A959B2638CF2F7A9 (P3dGraduallyFade_t2027A523C7CF2CBD737C7E3E10047FDA82317EAB* __this, P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B ___value0, const RuntimeMethod* method) 
{
	{
		// public P3dBlendMode BlendMode { set { blendMode = value; } get { return blendMode; } } [SerializeField] private P3dBlendMode blendMode = P3dBlendMode.ReplaceOriginal(Vector4.one);
		P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B L_0 = ___value0;
		__this->___blendMode_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___blendMode_8))->___Texture_19), (void*)NULL);
		// public P3dBlendMode BlendMode { set { blendMode = value; } get { return blendMode; } } [SerializeField] private P3dBlendMode blendMode = P3dBlendMode.ReplaceOriginal(Vector4.one);
		return;
	}
}
// PaintIn3D.P3dBlendMode PaintIn3D.Examples.P3dGraduallyFade::get_BlendMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B P3dGraduallyFade_get_BlendMode_m07407449F90A15D5E46476285AB6F68620F45D72 (P3dGraduallyFade_t2027A523C7CF2CBD737C7E3E10047FDA82317EAB* __this, const RuntimeMethod* method) 
{
	{
		// public P3dBlendMode BlendMode { set { blendMode = value; } get { return blendMode; } } [SerializeField] private P3dBlendMode blendMode = P3dBlendMode.ReplaceOriginal(Vector4.one);
		P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B L_0 = __this->___blendMode_8;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dGraduallyFade::set_Texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dGraduallyFade_set_Texture_mB9E04F37266E47B796FECCEFB7457EEF668F1BFE (P3dGraduallyFade_t2027A523C7CF2CBD737C7E3E10047FDA82317EAB* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) 
{
	{
		// public Texture Texture { set { texture = value; } get { return texture; } } [SerializeField] private Texture texture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___value0;
		__this->___texture_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texture_9), (void*)L_0);
		// public Texture Texture { set { texture = value; } get { return texture; } } [SerializeField] private Texture texture;
		return;
	}
}
// UnityEngine.Texture PaintIn3D.Examples.P3dGraduallyFade::get_Texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* P3dGraduallyFade_get_Texture_mE0F55F257549A4770004A06B3FC024CE28A27C65 (P3dGraduallyFade_t2027A523C7CF2CBD737C7E3E10047FDA82317EAB* __this, const RuntimeMethod* method) 
{
	{
		// public Texture Texture { set { texture = value; } get { return texture; } } [SerializeField] private Texture texture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___texture_9;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dGraduallyFade::set_Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dGraduallyFade_set_Color_m1D961466006C4252B28F7DBC3678FCDA288D24A0 (P3dGraduallyFade_t2027A523C7CF2CBD737C7E3E10047FDA82317EAB* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___color_10 = L_0;
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		return;
	}
}
// UnityEngine.Color PaintIn3D.Examples.P3dGraduallyFade::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F P3dGraduallyFade_get_Color_m1AFAB2D680D0CD9F7D720AAC10A17F60141BCEEF (P3dGraduallyFade_t2027A523C7CF2CBD737C7E3E10047FDA82317EAB* __this, const RuntimeMethod* method) 
{
	{
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_10;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dGraduallyFade::set_Threshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dGraduallyFade_set_Threshold_m6DB47D06EF80DF2F47238418CF0256FE51E90868 (P3dGraduallyFade_t2027A523C7CF2CBD737C7E3E10047FDA82317EAB* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Threshold { set { threshold = value; } get { return threshold; } } [Range(0.0f, 1.0f)] [SerializeField] private float threshold = 0.02f;
		float L_0 = ___value0;
		__this->___threshold_11 = L_0;
		// public float Threshold { set { threshold = value; } get { return threshold; } } [Range(0.0f, 1.0f)] [SerializeField] private float threshold = 0.02f;
		return;
	}
}
// System.Single PaintIn3D.Examples.P3dGraduallyFade::get_Threshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dGraduallyFade_get_Threshold_m7DFA49F419A3D6B7D455FB26E93301526463EE16 (P3dGraduallyFade_t2027A523C7CF2CBD737C7E3E10047FDA82317EAB* __this, const RuntimeMethod* method) 
{
	{
		// public float Threshold { set { threshold = value; } get { return threshold; } } [Range(0.0f, 1.0f)] [SerializeField] private float threshold = 0.02f;
		float L_0 = __this->___threshold_11;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dGraduallyFade::set_Speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dGraduallyFade_set_Speed_mAB21915E67A2E491A8535D197099F278DFDCDA7D (P3dGraduallyFade_t2027A523C7CF2CBD737C7E3E10047FDA82317EAB* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Speed { set { speed = value; } get { return speed; } } [SerializeField] private float speed = 1.0f;
		float L_0 = ___value0;
		__this->___speed_12 = L_0;
		// public float Speed { set { speed = value; } get { return speed; } } [SerializeField] private float speed = 1.0f;
		return;
	}
}
// System.Single PaintIn3D.Examples.P3dGraduallyFade::get_Speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dGraduallyFade_get_Speed_mDFC5FC6487A7C98FF1E4FF5217283F2105681450 (P3dGraduallyFade_t2027A523C7CF2CBD737C7E3E10047FDA82317EAB* __this, const RuntimeMethod* method) 
{
	{
		// public float Speed { set { speed = value; } get { return speed; } } [SerializeField] private float speed = 1.0f;
		float L_0 = __this->___speed_12;
		return L_0;
	}
}
// System.Void PaintIn3D.Examples.P3dGraduallyFade::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dGraduallyFade_Update_m8A5AFD9E9C98BAEF9E8FB801DA0CA6C532EFA650 (P3dGraduallyFade_t2027A523C7CF2CBD737C7E3E10047FDA82317EAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D* V_2 = NULL;
	{
		// if (paintableTexture != null && paintableTexture.Activated == true)
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_0 = __this->___paintableTexture_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_013e;
		}
	}
	{
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_2 = __this->___paintableTexture_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = P3dPaintableTexture_get_Activated_m0BAD20D94A97B033796003EF1E0A781173CC205D_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_013e;
		}
	}
	{
		// if (speed > 0.0f)
		float L_4 = __this->___speed_12;
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_0047;
		}
	}
	{
		// counter += speed * Time.deltaTime;
		float L_5 = __this->___counter_13;
		float L_6 = __this->___speed_12;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___counter_13 = ((float)il2cpp_codegen_add(L_5, ((float)il2cpp_codegen_multiply(L_6, L_7))));
	}

IL_0047:
	{
		// if (counter >= threshold)
		float L_8 = __this->___counter_13;
		float L_9 = __this->___threshold_11;
		if ((!(((float)L_8) >= ((float)L_9))))
		{
			goto IL_013e;
		}
	}
	{
		// var step = Mathf.FloorToInt(counter * 255.0f);
		float L_10 = __this->___counter_13;
		int32_t L_11;
		L_11 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)il2cpp_codegen_multiply(L_10, (255.0f))), NULL);
		V_0 = L_11;
		// if (step > 0)
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_013e;
		}
	}
	{
		// var change = step / 255.0f;
		int32_t L_13 = V_0;
		V_1 = ((float)(((float)L_13)/(255.0f)));
		// counter -= change;
		float L_14 = __this->___counter_13;
		float L_15 = V_1;
		__this->___counter_13 = ((float)il2cpp_codegen_subtract(L_14, L_15));
		// P3dCommandFill.Instance.SetState(false, 0);
		il2cpp_codegen_runtime_class_init_inline(P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B_il2cpp_TypeInfo_var);
		P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B* L_16 = ((P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B_il2cpp_TypeInfo_var))->___Instance_15;
		NullCheck(L_16);
		P3dCommand_SetState_m0C81A54F3052088E285F1708825AE29FF6441B5B(L_16, (bool)0, 0, NULL);
		// P3dCommandFill.Instance.SetMaterial(blendMode, texture, color, Mathf.Min(change, 1.0f), Mathf.Min(change, 1.0f));
		P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B* L_17 = ((P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B_il2cpp_TypeInfo_var))->___Instance_15;
		P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B L_18 = __this->___blendMode_8;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_19 = __this->___texture_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = __this->___color_10;
		float L_21 = V_1;
		float L_22;
		L_22 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_21, (1.0f), NULL);
		float L_23 = V_1;
		float L_24;
		L_24 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_23, (1.0f), NULL);
		NullCheck(L_17);
		P3dCommandFill_SetMaterial_m981E45BE77F3F9B94C9B08407F733C2E6EB49FAC(L_17, L_18, L_19, L_20, L_22, L_24, NULL);
		// var command = P3dPaintableManager.Submit(P3dCommandFill.Instance, paintableTexture.Paintable, paintableTexture);
		P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B* L_25 = ((P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B_il2cpp_TypeInfo_var))->___Instance_15;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_26 = __this->___paintableTexture_4;
		NullCheck(L_26);
		P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00* L_27;
		L_27 = P3dPaintableTexture_get_Paintable_m64B0576F293F60E2B8427B8D1390F0D0DA9E8EB7(L_26, NULL);
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_28 = __this->___paintableTexture_4;
		P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D* L_29;
		L_29 = P3dPaintableManager_Submit_m8AA1CBCFFF81BC4CC046875FC8CDEAECC4F87B38(L_25, L_27, L_28, NULL);
		V_2 = L_29;
		// if (maskPaintableTexture != null)
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_30 = __this->___maskPaintableTexture_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_30, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_31)
		{
			goto IL_0113;
		}
	}
	{
		// command.LocalMaskTexture = maskPaintableTexture.Current;
		P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D* L_32 = V_2;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_33 = __this->___maskPaintableTexture_6;
		NullCheck(L_33);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_34;
		L_34 = P3dPaintableTexture_get_Current_m42C0BE96C6A74B703F1A64763F921D15752F5092_inline(L_33, NULL);
		NullCheck(L_32);
		L_32->___LocalMaskTexture_8 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->___LocalMaskTexture_8), (void*)L_34);
		// command.LocalMaskChannel = P3dHelper.IndexToVector((int)maskChannel);
		P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D* L_35 = V_2;
		int32_t L_36 = __this->___maskChannel_7;
		il2cpp_codegen_runtime_class_init_inline(P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_37;
		L_37 = P3dHelper_IndexToVector_m4ADA054981DB1A4CC9E26D5D2A1547DCE7DAB19A(L_36, NULL);
		NullCheck(L_35);
		L_35->___LocalMaskChannel_9 = L_37;
		return;
	}

IL_0113:
	{
		// else if (maskTexture != null)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_38 = __this->___maskTexture_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_38, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_39)
		{
			goto IL_013e;
		}
	}
	{
		// command.LocalMaskTexture = maskTexture;
		P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D* L_40 = V_2;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_41 = __this->___maskTexture_5;
		NullCheck(L_40);
		L_40->___LocalMaskTexture_8 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_40->___LocalMaskTexture_8), (void*)L_41);
		// command.LocalMaskChannel = P3dHelper.IndexToVector((int)maskChannel);
		P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D* L_42 = V_2;
		int32_t L_43 = __this->___maskChannel_7;
		il2cpp_codegen_runtime_class_init_inline(P3dHelper_t2B7BD3121AD86AC34E8F1B8DC9D7B147F3B72C63_il2cpp_TypeInfo_var);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_44;
		L_44 = P3dHelper_IndexToVector_m4ADA054981DB1A4CC9E26D5D2A1547DCE7DAB19A(L_43, NULL);
		NullCheck(L_42);
		L_42->___LocalMaskChannel_9 = L_44;
	}

IL_013e:
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.Examples.P3dGraduallyFade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dGraduallyFade__ctor_mEAC874C18A5FF63AB22F12AEB8C10A579671B022 (P3dGraduallyFade_t2027A523C7CF2CBD737C7E3E10047FDA82317EAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public P3dBlendMode BlendMode { set { blendMode = value; } get { return blendMode; } } [SerializeField] private P3dBlendMode blendMode = P3dBlendMode.ReplaceOriginal(Vector4.one);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = Vector4_get_one_m0AA55064B3C47D9D94E5BC4EE6AEC5B6E4F2D151_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B_il2cpp_TypeInfo_var);
		P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B L_1;
		L_1 = P3dBlendMode_ReplaceOriginal_m585AE6C584D5F90B71F3E2E6FFE01F46B6B10135(L_0, NULL);
		__this->___blendMode_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___blendMode_8))->___Texture_19), (void*)NULL);
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___color_10 = L_2;
		// public float Threshold { set { threshold = value; } get { return threshold; } } [Range(0.0f, 1.0f)] [SerializeField] private float threshold = 0.02f;
		__this->___threshold_11 = (0.0199999996f);
		// public float Speed { set { speed = value; } get { return speed; } } [SerializeField] private float speed = 1.0f;
		__this->___speed_12 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void P3dMaterialCloner_set_Index_m93EE92BC0A9B138A59FBACC624C8B9946E8C8417_inline (P3dMaterialCloner_tBF64157DF290AB5A6EABBAE00D440FC78C639876* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Index { set { index = value; } get { return index; } } [SerializeField] private int index;
		int32_t L_0 = ___value0;
		__this->___index_4 = L_0;
		// public int Index { set { index = value; } get { return index; } } [SerializeField] private int index;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void P3dPaintableTexture_set_Slot_m9B8A8230E8A783BD9E25C84127F6AFA01FBA0518_inline (P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* __this, P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C ___value0, const RuntimeMethod* method) 
{
	{
		// public P3dSlot Slot { set { slot = value; } get { return slot; } } [SerializeField] private P3dSlot slot = new P3dSlot(0, "_MainTex");
		P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C L_0 = ___value0;
		__this->___slot_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___slot_8))->___Name_1), (void*)NULL);
		// public P3dSlot Slot { set { slot = value; } get { return slot; } } [SerializeField] private P3dSlot slot = new P3dSlot(0, "_MainTex");
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___g_1;
		float L_6;
		L_6 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___c0;
		float L_9 = L_8.___b_2;
		float L_10;
		L_10 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___c0;
		float L_13 = L_12.___a_3;
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_13, NULL);
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_3), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_7), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_11), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_15), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t P3dTranslate_get_Space_m1780C48704A8E610FDD83BCAF8F370E8A2204FDD_inline (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, const RuntimeMethod* method) 
{
	{
		// public Space Space { set { space = value; } get { return space; } } [SerializeField] private Space space = Space.Self;
		int32_t L_0 = __this->___space_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float P3dTranslate_get_Multiplier_mCCD94575DB5F66D55A45F8D7CE22241DC693B06C_inline (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, const RuntimeMethod* method) 
{
	{
		// public float Multiplier { set { multiplier = value; } get { return multiplier; } } [SerializeField] private float multiplier = 1.0f;
		float L_0 = __this->___multiplier_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float P3dTranslate_get_Damping_m0D2BC23D04C32987E73B6A2B0F443B5250A8888E_inline (P3dTranslate_t44E90766147CC9BFB6EF8DE48344FDC137207091* __this, const RuntimeMethod* method) 
{
	{
		// public float Damping { set { damping = value; } get { return damping; } } [FSA("dampening")] [SerializeField] private float damping = 10.0f;
		float L_0 = __this->___damping_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t P3dVrTool_get_Node_mFC3537859D75C3E99B3A5D1C33EFA66AC1BCC803_inline (P3dVrTool_tD6CCD2ACCF2D2539655FE8894ECFD73A6E86245D* __this, const RuntimeMethod* method) 
{
	{
		// public XRNode Node { set { node = value; } get { return node; } } [SerializeField] private XRNode node = XRNode.RightHand;
		int32_t L_0 = __this->___node_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t P3dReader_get_DownsampleBoost_mDB506481EC62604A391227A9F55F82ADFAFA23A0_inline (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, const RuntimeMethod* method) 
{
	{
		// return downsampleBoost;
		int32_t L_0 = __this->___downsampleBoost_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool P3dReader_get_Requested_mDCD8CEB59E98149E15F50B8CFBA1DE1C77A13B26_inline (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, const RuntimeMethod* method) 
{
	{
		// return requested;
		bool L_0 = __this->___requested_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool P3dPaintableTexture_get_Activated_m0BAD20D94A97B033796003EF1E0A781173CC205D_inline (P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* __this, const RuntimeMethod* method) 
{
	{
		// return activated;
		bool L_0 = __this->___activated_34;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* P3dPaintableTexture_get_Current_m42C0BE96C6A74B703F1A64763F921D15752F5092_inline (P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* __this, const RuntimeMethod* method) 
{
	{
		// return current;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___current_35;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t P3dPaintableTextureMonitor_get_DownsampleSteps_mC4B3A5AA635EC5AD96504D0A6974E7B927D7EFFB_inline (P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078* __this, const RuntimeMethod* method) 
{
	{
		// public int DownsampleSteps { set { downsampleSteps = value; } get { return downsampleSteps; } } [SerializeField] protected int downsampleSteps = 3;
		int32_t L_0 = __this->___downsampleSteps_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool P3dPaintableTextureMonitor_get_Async_m2CFE64AD61358D521DBD4E08885E52B38E8B582E_inline (P3dPaintableTextureMonitor_t02C2A5CD515C6BF32B77E39B0843FC174CFC3078* __this, const RuntimeMethod* method) 
{
	{
		// public bool Async { set { async = value; } get { return async; } } [SerializeField] private bool async = true;
		bool L_0 = __this->___async_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Division_m9B1B8692D50C864CFA585BDF97FB6FBC18967D90_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		float L_2 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___a0;
		float L_4 = L_3.___y_2;
		float L_5 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___a0;
		float L_7 = L_6.___z_3;
		float L_8 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___a0;
		float L_10 = L_9.___w_4;
		float L_11 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), ((float)(L_10/L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t P3dPaintableTextureMonitorMask_get_Total_mADDA805EFBB74AD8E4E0E362E134D6151A859D43_inline (P3dPaintableTextureMonitorMask_tF45F9F93DC29EEC9935E4E911DA7748E27937A57* __this, const RuntimeMethod* method) 
{
	{
		// public int Total { get { return total; } } [SerializeField] protected int total;
		int32_t L_0 = __this->___total_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F P3dColor_get_Color_mA1B0417A7D2F26C173E12AD7F709923C9A19CA6E_inline (P3dColor_tB354D69EC97EB282EFFD34C2138446D7F57A1682* __this, const RuntimeMethod* method) 
{
	{
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_one_m0AA55064B3C47D9D94E5BC4EE6AEC5B6E4F2D151_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A Enumerator_get_Current_mD0D94B293CBE7F1F394B0682AF603A72FBED7B53_gshared_inline (Enumerator_tE98C59D61609F3870A665CC445013D4CD641CEAD* __this, const RuntimeMethod* method) 
{
	{
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_0 = (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LinkedList_1_get_Count_mBFF1AE23B10EDF501026201C0427AA5820AECD82_gshared_inline (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___count_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mCD39BA1871E5D5BE52D8AA0B27886D9B5B10BBF9_gshared_inline (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
