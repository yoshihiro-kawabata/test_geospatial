#include "pch-cpp.hpp"

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

// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>
struct Action_1_t11340E5174173030E076A75316E18A395082F8A5;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>
struct Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t325C602D999E964DB72210E493635E83F8D6CE68;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Comparison`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARAnchor>
struct Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0755A61145E99905AC47DF85416091FB30758B8A;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane>
struct List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct List_1_t6630EC2D13FD2DC6D86447667371501266C9B3E8;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_t3903923EFB501C3A0672A0E60558673B85435D8E;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34;
// System.Predicate`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.XR.ARFoundation.ARAnchor[]
struct ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory[]
struct GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F;
// UnityEngine.XR.ARCore.ARCoreCameraSubsystem
struct ARCoreCameraSubsystem_t037314216B2DA66DC532ABFB17CFD90B38830AD9;
// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41;
// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter
struct ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3;
// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig
struct ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD;
// UnityEngine.XR.ARCore.ARCoreSessionSubsystem
struct ARCoreSessionSubsystem_t7B755C740E5ADE41F6B32317BC5105B96B137349;
// Google.XR.ARCoreExtensions.AREarthManager
struct AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0;
// ARFeatheredPlaneMeshVisualizer
struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor
struct ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571;
// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0;
// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928;
// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer
struct ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// AnchorCreator
struct AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection
struct GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController
struct GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler
struct SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399;
// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent
struct OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c
struct U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass44_0
struct U3CU3Ec__DisplayClass44_0_t4C398E63BD3DC59B6D45D177F95884516A693E93;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EarthState_t4663D22E8AF1302E5F67CCE0DCB96CA24D310AC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FeatureSupported_tC15463343F78E985BF776995FBE804EC3D2991A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocationServiceStatus_tF9F78681F963A53FD6CA4CDC2DDDBD7B4DF517F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingState_t5487241B6888BB15D8448EBBC640835A011DBBC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass44_0_t4C398E63BD3DC59B6D45D177F95884516A693E93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral002FD9BA3AE0E060C2E4E855D3879613062FB95E;
IL2CPP_EXTERN_C String_t* _stringLiteral0642FD4A763B782EEF7CA72009CA8D1E0FFC5D86;
IL2CPP_EXTERN_C String_t* _stringLiteral098533C94B14961259EF414728C4A68C6289E9AE;
IL2CPP_EXTERN_C String_t* _stringLiteral0B33E2273C9AB388C21E973B33AEB2CD77079D68;
IL2CPP_EXTERN_C String_t* _stringLiteral12129C966D1274A2EF853A1668600EE873FA4D2C;
IL2CPP_EXTERN_C String_t* _stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24;
IL2CPP_EXTERN_C String_t* _stringLiteral14E227568A75A99F99D64B36A7F13EF4EBA70B06;
IL2CPP_EXTERN_C String_t* _stringLiteral23E836F9814F83ED24864553FD4B41704BFEFFA8;
IL2CPP_EXTERN_C String_t* _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748;
IL2CPP_EXTERN_C String_t* _stringLiteral242A0070D29873DA9B6E4E1164C9C8B53CE23D19;
IL2CPP_EXTERN_C String_t* _stringLiteral272FD43E889593108C54482F13ABAACDD71C5FFE;
IL2CPP_EXTERN_C String_t* _stringLiteral3187553363A94FA380DF7928E3C910219A40C90A;
IL2CPP_EXTERN_C String_t* _stringLiteral31D77236056880C0D3C936B020E57CFE072FD559;
IL2CPP_EXTERN_C String_t* _stringLiteral3A80DBD535E7AFB2B86F791A732EBEEE4BCF7CDB;
IL2CPP_EXTERN_C String_t* _stringLiteral402969FEF140B759AA2E21468D1A944100BDBBF1;
IL2CPP_EXTERN_C String_t* _stringLiteral4E220F394CF0E90F7FEF038F482846BFBB93ED64;
IL2CPP_EXTERN_C String_t* _stringLiteral659DC561CB989579B2C5DB5BC9116FC03B863958;
IL2CPP_EXTERN_C String_t* _stringLiteral78E274AC89F9BB2B7C9C9C38754AE07662487DED;
IL2CPP_EXTERN_C String_t* _stringLiteral80D85E354963DC5787AAB3990BB9B8D1D718AD91;
IL2CPP_EXTERN_C String_t* _stringLiteral80D87A6B5B660BA3CC373D14B317E3A40FC27CD9;
IL2CPP_EXTERN_C String_t* _stringLiteral84603BEBCE50D165E99F4F1BE49F02FF0B3BC3DB;
IL2CPP_EXTERN_C String_t* _stringLiteral849043193B4849A97BE2F08CFC3CAC883A0F096C;
IL2CPP_EXTERN_C String_t* _stringLiteral8E5080011A7CA3BD4949A61B46ADA7657E8540F9;
IL2CPP_EXTERN_C String_t* _stringLiteral96EF7EFF0F00A2F793F25BE896448C3A1BBA9828;
IL2CPP_EXTERN_C String_t* _stringLiteral970A4D6490D612AAF148057C65320C8178CD0C87;
IL2CPP_EXTERN_C String_t* _stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888;
IL2CPP_EXTERN_C String_t* _stringLiteralA0A24FC541CCC2A139AC9F8BE75113AD3649BFBD;
IL2CPP_EXTERN_C String_t* _stringLiteralA628C3EA1A977D457A54A899CA2F513C35C50B9C;
IL2CPP_EXTERN_C String_t* _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3;
IL2CPP_EXTERN_C String_t* _stringLiteralB3485A54065E6F4E66AFF0546DB80DF7DA4A5284;
IL2CPP_EXTERN_C String_t* _stringLiteralB7CA9DC3E5A221DFCC0483888D319D118E5CEF90;
IL2CPP_EXTERN_C String_t* _stringLiteralBA97DB5D365444C5E6EF88EF63073328B97B1146;
IL2CPP_EXTERN_C String_t* _stringLiteralBC7FFF74C9144CC4E77C56C5F9B4FDBC4516816D;
IL2CPP_EXTERN_C String_t* _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391;
IL2CPP_EXTERN_C String_t* _stringLiteralCDD0E29C4A5251B9843B15E7DBD03F1411828478;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A905249C0409DB8B563D30BAE889395AFBDB30;
IL2CPP_EXTERN_C String_t* _stringLiteralDE0D2C7E866F161F8886976B7C5F3F27F3BB4E7A;
IL2CPP_EXTERN_C String_t* _stringLiteralEC2DBADB2D94879827209856D3681D3473726A46;
IL2CPP_EXTERN_C String_t* _stringLiteralEF7042B13A54AE6D2F33826F9F5FA12143D46847;
IL2CPP_EXTERN_C String_t* _stringLiteralFBA251D8CD4C01D372EB4EAC50A26C0633FA71D7;
IL2CPP_EXTERN_C String_t* _stringLiteralFF4CB593B711998014E24A8BDC4D1A685D2F9E5B;
IL2CPP_EXTERN_C const RuntimeMethod* ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m59121895AD798F3B21AA01FF4E4D8C8743DE369C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m259A9736C139F374D942E6E363CCA53B6ACF1447_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisGeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_m0D4ACD090316BD00BA3B4ED4D3B3F599AF367031_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4264BFAF984BC77BB2EFDAB73261EC95529B47BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAll_mB7D623E596EA032328080946FB84DFF68AF0B347_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m4F13468627DA199AA3C739E074A8E5842DC15273_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m560E0614EE9BCDCCE7F7B73F3525A12EBC33CF2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSaveGeospatialAnchorHistoryU3Eb__45_0_m0C5057FBA4694CFF222C4BC7E9AC4DC834F0727E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass44_0_U3CLoadGeospatialAnchorHistoryU3Eb__0_m44808C972571EDBAF0EC7C32D2BB4056A959BA71_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection
struct GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory> Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection::Collection
	List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* ___Collection_0;
};

// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2  : public RuntimeObject
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

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c
struct U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA  : public RuntimeObject
{
};

struct U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_StaticFields
{
	// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::<>9
	U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA* ___U3CU3E9_0;
	// System.Comparison`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory> Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::<>9__45_0
	Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* ___U3CU3E9__45_0_1;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>
struct Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
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

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC 
{
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs::<plane>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC_marshaled_pinvoke
{
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC_marshaled_com
{
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
struct GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C 
{
	// System.String Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::SerializedTime
	String_t* ___SerializedTime_0;
	// System.Double Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::Latitude
	double ___Latitude_1;
	// System.Double Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::Longitude
	double ___Longitude_2;
	// System.Double Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::Altitude
	double ___Altitude_3;
	// System.Double Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::Heading
	double ___Heading_4;
};
// Native definition for P/Invoke marshalling of Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
struct GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_pinvoke
{
	char* ___SerializedTime_0;
	double ___Latitude_1;
	double ___Longitude_2;
	double ___Altitude_3;
	double ___Heading_4;
};
// Native definition for COM marshalling of Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
struct GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_com
{
	Il2CppChar* ___SerializedTime_0;
	double ___Latitude_1;
	double ___Longitude_2;
	double ___Altitude_3;
	double ___Heading_4;
};

// Google.XR.ARCoreExtensions.GeospatialPose
struct GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C 
{
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Latitude
	double ___Latitude_0;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Longitude
	double ___Longitude_1;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Altitude
	double ___Altitude_2;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Heading
	double ___Heading_3;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::HeadingAccuracy
	double ___HeadingAccuracy_4;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::HorizontalAccuracy
	double ___HorizontalAccuracy_5;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::VerticalAccuracy
	double ___VerticalAccuracy_6;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
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

// System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ____current_3;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass44_0
struct U3CU3Ec__DisplayClass44_0_t4C398E63BD3DC59B6D45D177F95884516A693E93  : public RuntimeObject
{
	// System.DateTime Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass44_0::current
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___current_0;
};

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;
};

struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_StaticFields
{
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___s_Default_0;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t ___m_SessionId_5;
};

struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default_0;
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074  : public MulticastDelegate_t
{
};

// System.Comparison`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654  : public MulticastDelegate_t
{
};

// System.Predicate`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9  : public MulticastDelegate_t
{
};

// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig
struct ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Google.XR.ARCoreExtensions.CloudAnchorMode Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::CloudAnchorMode
	int32_t ___CloudAnchorMode_4;
	// Google.XR.ARCoreExtensions.GeospatialMode Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::GeospatialMode
	int32_t ___GeospatialMode_5;
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t6630EC2D13FD2DC6D86447667371501266C9B3E8* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t3903923EFB501C3A0672A0E60558673B85435D8E* ___s_SubsystemInstances_6;
};

// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARSession Google.XR.ARCoreExtensions.ARCoreExtensions::Session
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___Session_4;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin Google.XR.ARCoreExtensions.ARCoreExtensions::SessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___SessionOrigin_5;
	// UnityEngine.XR.ARFoundation.ARCameraManager Google.XR.ARCoreExtensions.ARCoreExtensions::CameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___CameraManager_6;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig Google.XR.ARCoreExtensions.ARCoreExtensions::ARCoreExtensionsConfig
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___ARCoreExtensionsConfig_7;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter Google.XR.ARCoreExtensions.ARCoreExtensions::CameraConfigFilter
	ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* ___CameraConfigFilter_8;
	// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent Google.XR.ARCoreExtensions.ARCoreExtensions::OnChooseXRCameraConfiguration
	OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* ___OnChooseXRCameraConfiguration_9;
	// System.String Google.XR.ARCoreExtensions.ARCoreExtensions::_currentPermissionRequest
	String_t* ____currentPermissionRequest_12;
	// System.Collections.Generic.HashSet`1<System.String> Google.XR.ARCoreExtensions.ARCoreExtensions::_requiredPermissionNames
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____requiredPermissionNames_13;
	// UnityEngine.XR.ARCore.ARCoreSessionSubsystem Google.XR.ARCoreExtensions.ARCoreExtensions::_arCoreSubsystem
	ARCoreSessionSubsystem_t7B755C740E5ADE41F6B32317BC5105B96B137349* ____arCoreSubsystem_14;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig Google.XR.ARCoreExtensions.ARCoreExtensions::_cachedConfig
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ____cachedConfig_15;
	// UnityEngine.XR.ARCore.ARCoreCameraSubsystem Google.XR.ARCoreExtensions.ARCoreExtensions::_arCoreCameraSubsystem
	ARCoreCameraSubsystem_t037314216B2DA66DC532ABFB17CFD90B38830AD9* ____arCoreCameraSubsystem_16;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter Google.XR.ARCoreExtensions.ARCoreExtensions::_cachedFilter
	ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* ____cachedFilter_17;
};

struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_StaticFields
{
	// UnityEngine.AndroidJavaClass Google.XR.ARCoreExtensions.ARCoreExtensions::_versionInfo
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ____versionInfo_11;
	// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.ARCoreExtensions::<_instance>k__BackingField
	ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ___U3C_instanceU3Ek__BackingField_18;
};

// Google.XR.ARCoreExtensions.AREarthManager
struct AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ARFeatheredPlaneMeshVisualizer
struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ARFeatheredPlaneMeshVisualizer::m_FeatheringWidth
	float ___m_FeatheringWidth_4;
	// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer ARFeatheredPlaneMeshVisualizer::m_PlaneMeshVisualizer
	ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* ___m_PlaneMeshVisualizer_7;
	// UnityEngine.XR.ARFoundation.ARPlane ARFeatheredPlaneMeshVisualizer::m_Plane
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___m_Plane_8;
	// UnityEngine.Material ARFeatheredPlaneMeshVisualizer::m_FeatheredPlaneMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_FeatheredPlaneMaterial_9;
};

struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ARFeatheredPlaneMeshVisualizer::s_FeatheringUVs
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___s_FeatheringUVs_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ARFeatheredPlaneMeshVisualizer::s_Vertices
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___s_Vertices_6;
};

// Google.XR.ARCoreExtensions.ARGeospatialAnchor
struct ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.IntPtr Google.XR.ARCoreExtensions.ARGeospatialAnchor::_anchorHandle
	intptr_t ____anchorHandle_4;
	// UnityEngine.Pose Google.XR.ARCoreExtensions.ARGeospatialAnchor::_pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____pose_5;
};

// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer
struct ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Mesh UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::<mesh>k__BackingField
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CmeshU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_TrackingStateVisibilityThreshold
	int32_t ___m_TrackingStateVisibilityThreshold_5;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_HideSubsumed
	bool ___m_HideSubsumed_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_InitialLineWidthMultiplier
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_InitialLineWidthMultiplier_7;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_Plane
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___m_Plane_8;
};

// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ContentOffsetGameObject_7;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// AnchorCreator
struct AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject AnchorCreator::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_4;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor> AnchorCreator::m_AnchorPoints
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___m_AnchorPoints_6;
	// UnityEngine.XR.ARFoundation.ARRaycastManager AnchorCreator::m_RaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___m_RaycastManager_7;
	// UnityEngine.XR.ARFoundation.ARAnchorManager AnchorCreator::m_AnchorManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___m_AnchorManager_8;
	// UnityEngine.XR.ARFoundation.ARPlaneManager AnchorCreator::m_PlaneManager
	ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* ___m_PlaneManager_9;
};

struct AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> AnchorCreator::s_Hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___s_Hits_5;
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController
struct GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___SessionOrigin_4;
	// UnityEngine.XR.ARFoundation.ARSession Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::Session
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___Session_5;
	// UnityEngine.XR.ARFoundation.ARAnchorManager Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::AnchorManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___AnchorManager_6;
	// Google.XR.ARCoreExtensions.AREarthManager Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::EarthManager
	AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* ___EarthManager_7;
	// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ARCoreExtensions
	ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ___ARCoreExtensions_8;
	// UnityEngine.GameObject Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::GeospatialPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GeospatialPrefab_9;
	// UnityEngine.GameObject Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::PrivacyPromptCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PrivacyPromptCanvas_10;
	// UnityEngine.GameObject Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ARViewCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ARViewCanvas_11;
	// UnityEngine.UI.Button Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ClearAllButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___ClearAllButton_12;
	// UnityEngine.UI.Button Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SetAnchorButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___SetAnchorButton_13;
	// UnityEngine.GameObject Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::InfoPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___InfoPanel_14;
	// UnityEngine.UI.Text Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::InfoText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___InfoText_15;
	// UnityEngine.UI.Text Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SnackBarText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___SnackBarText_16;
	// UnityEngine.UI.Text Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::DebugText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___DebugText_17;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_isInARView
	bool ____isInARView_29;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_isReturning
	bool ____isReturning_30;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_isLocalizing
	bool ____isLocalizing_31;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_enablingGeospatial
	bool ____enablingGeospatial_32;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_shouldResolvingHistory
	bool ____shouldResolvingHistory_33;
	// System.Single Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_localizationPassedTime
	float ____localizationPassedTime_34;
	// System.Single Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_configurePrepareTime
	float ____configurePrepareTime_35;
	// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_historyCollection
	GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* ____historyCollection_36;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_anchorObjects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____anchorObjects_37;
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler
struct SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rect Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::_screenSafeArea
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ____screenSafeArea_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6  : public SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103  : public SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409  : public SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014  : public SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_VSyncCount
	int32_t ___m_VSyncCount_11;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_TargetFrameRate
	int32_t ___m_TargetFrameRate_12;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_WasFrameRateSet
	bool ___m_WasFrameRateSet_13;
};

struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields
{
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t325C602D999E964DB72210E493635E83F8D6CE68* ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_14;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_15;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_16;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06  : public ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B
{
};

// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E  : public ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARAnchorManager::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_14;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs> UnityEngine.XR.ARFoundation.ARAnchorManager::anchorsChanged
	Action_1_t11340E5174173030E076A75316E18A395082F8A5* ___anchorsChanged_15;
};

// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0  : public ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341
{
	// System.Single UnityEngine.XR.ARFoundation.ARPlane::m_VertexChangedThreshold
	float ___m_VertexChangedThreshold_7;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlane::boundaryChanged
	Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___boundaryChanged_8;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlane::<subsumedBy>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CsubsumedByU3Ek__BackingField_9;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_Boundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_Boundary_10;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_OldBoundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_OldBoundary_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlane::m_HasBoundaryChanged
	bool ___m_HasBoundaryChanged_12;
};

// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928  : public ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARPlaneManager::m_PlanePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PlanePrefab_14;
	// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARFoundation.ARPlaneManager::m_DetectionMode
	int32_t ___m_DetectionMode_15;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlaneManager::planesChanged
	Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560* ___planesChanged_16;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44  : public ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0755A61145E99905AC47DF85416091FB30758B8A* ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906* ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t50405350B03FC84D28784364F500CB08B82435B5* ___m_Raycasters_19;
};

struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_StaticFields
{
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0* ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36* ___s_NativeRaycastHits_16;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory[]
struct GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244  : public RuntimeArray
{
	ALIGN_FIELD (8) GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C m_Items[1];

	inline GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___SerializedTime_0), (void*)NULL);
	}
	inline GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___SerializedTime_0), (void*)NULL);
	}
};


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1_gshared (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83_gshared (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_gshared_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_gshared_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_gshared_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6 List_1_GetEnumerator_m4264BFAF984BC77BB2EFDAB73261EC95529B47BF_gshared (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m59121895AD798F3B21AA01FF4E4D8C8743DE369C_gshared (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_gshared_inline (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m259A9736C139F374D942E6E363CCA53B6ACF1447_gshared (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m6906BC0330B02272E5E11B26C6C18A3A8CC271A7_gshared (Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::RemoveAll(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_mB7D623E596EA032328080946FB84DFF68AF0B347_gshared (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9* ___match0, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_m4F653C6CE2CE5AE4F2EBB6FF39AFD589ED84244F_gshared (Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m560E0614EE9BCDCCE7F7B73F3525A12EBC33CF2E_gshared (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* ___comparison0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m4F13468627DA199AA3C739E074A8E5842DC15273_gshared (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;

// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::GetEnumerator()
inline Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502 (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::Dispose()
inline void Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3 (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::get_Current()
inline ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_inline (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054* __this, const RuntimeMethod* method)
{
	return ((  ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* (*) (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::MoveNext()
inline bool Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::Clear()
inline void List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_inline (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARAnchorManager>()
inline ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneManager>()
inline ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::.ctor()
inline void List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4 (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared)(__this, ___index0, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARRaycastHit::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARRaycastHit_get_trackableId_m4E510F2C326AFF23086203E4241C8F9B293616C3 (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneManager::GetPlane(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ARPlaneManager_GetPlane_m49FC33F6BC0DCFE67C4FC5F5CEE99CC8A7036FAE (ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___trackableId0, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARAnchor UnityEngine.XR.ARFoundation.ARAnchorManager::AttachAnchor(UnityEngine.XR.ARFoundation.ARPlane,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ARAnchorManager_AttachAnchor_m8FA6B772401F90B38A06F43B8EA1B02EA82FFA75 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* __this, ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___plane0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::Add(T)
inline void List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_inline (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer>()
inline ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlane>()
inline ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1 (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARPlane::add_boundaryChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlane_add_boundaryChanged_m6A9CA2ADF4742C004EF7BCFD48A7C820320616AA (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARPlane::remove_boundaryChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlane_remove_boundaryChanged_m6F71EEF2CD3C71AF069C5FE6CD993906BD8A9A10 (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::get_mesh()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline (ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* __this, const RuntimeMethod* method) ;
// System.Void ARFeatheredPlaneMeshVisualizer::GenerateBoundaryUVs(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
inline int32_t List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.Mesh::GetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetVertices_m5BF8777074E383AD8C4B9974D27E4AB52963D92E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___vertices0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single ARFeatheredPlaneMeshVisualizer::get_featheringWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_mFEE20B5977AA358DAFA31CF621BBC4B0247789B2 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___channel0, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___uvs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::UploadMeshData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_UploadMeshData_mE4C94F263DAA8CAC1641FE137E1CE7D3F09396EB (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, bool ___markNoLongerReadable0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.String System.DateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::.ctor(System.DateTime,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistory__ctor_m11B5D19C7052A20A372B2D78E05D2EF997EA0F5B (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___time0, double ___latitude1, double ___longitude2, double ___altitude3, double ___heading4, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::.ctor(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistory__ctor_mC5B6E43C79DCB7BB244DBE4D791EB0F596B74703 (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, double ___latitude0, double ___longitude1, double ___altitude2, double ___heading3, const RuntimeMethod* method) ;
// System.DateTime System.Convert::ToDateTime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Convert_ToDateTime_mB46B1ABD4F03D21115949353F0133B722B7E972E (String_t* ___value0, const RuntimeMethod* method) ;
// System.DateTime Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::get_CreatedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GeospatialAnchorHistory_ToString_mEF75221D34F044801DB11C95F4113DD9EFA87CF9 (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor()
inline void List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83 (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, const RuntimeMethod*))List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB (const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SwitchToARView(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_SwitchToARView_mFB94E97C62D009E13324C261E04900D34D47410E (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, bool ___enable0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Clear()
inline void List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, const RuntimeMethod*))List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SaveGeospatialAnchorHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_SaveGeospatialAnchorHistory_m518EB2F8DC525CDD2BE2A9E7D6AAF46D987569F1 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.GeospatialPose Google.XR.ARCoreExtensions.AREarthManager::get_CameraGeospatialPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) ;
// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::PlaceGeospatialAnchor(Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeospatialController_PlaceGeospatialAnchor_mC972B012727FD2360DE63E4E0C9AE2DBB535B6AA (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___history0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Add(T)
inline void List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C, const RuntimeMethod*))List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::get_Count()
inline int32_t List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, const RuntimeMethod*))List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Screen::set_autorotateToLandscapeLeft(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToLandscapeLeft_m0A5C4DACABE595591D931337C8B4724E6D45CFA5 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_autorotateToLandscapeRight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToLandscapeRight_mF798181165A504BF4A14DBECBDA796D601930C18 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_autorotateToPortraitUpsideDown(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToPortraitUpsideDown_m4F307AAC11D730BD9C6B33A7D0F5D911BE367AC3 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_orientation(UnityEngine.ScreenOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_orientation_m6BA37EE8CEBFFFCEFFF38FB9EC22757072C93D7F (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F (String_t* ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_mD757482E7E84FD089E874DD0778A5200D12C14E0 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::LoadGeospatialAnchorHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_LoadGeospatialAnchorHistory_m78B8DEB20F80FE681FA18AC34EFBB190DE330605 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::UpdateDebugInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_UpdateDebugInfo_m4DD7408BE036B30EE50B0F2CB2D5ED7B24B314A1 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::LifecycleUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_LifecycleUpdate_m9DF865831BF6070D17D792ABD8948E03B692AC9C (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline (const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.FeatureSupported Google.XR.ARCoreExtensions.AREarthManager::IsGeospatialModeSupported(Google.XR.ARCoreExtensions.GeospatialMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_IsGeospatialModeSupported_m95784655267321A2E74719CB725D58F368AA278F (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, int32_t ___mode0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ReturnWithReason(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_ReturnWithReason_m94789CA6304ABFD05634B43C370B2399383312EF (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, String_t* ___reason0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.EarthState Google.XR.ARCoreExtensions.AREarthManager::get_EarthState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_get_EarthState_m00405B03AE94D0CFB2E90596C028A35250517D38 (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.AREarthManager::get_EarthTrackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ResolveHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_ResolveHistory_mF4A2FFB2FC64B439305A9B081795341F5F4A7359 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0 (const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75 (double* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::AddAnchor(UnityEngine.XR.ARFoundation.ARAnchorManager,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ARAnchorManagerExtensions_AddAnchor_m9AB188663991BAE77AF6579D1F1E0EEAC1E14174 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager0, double ___latitude1, double ___longitude2, double ___altitude3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation4, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::GetEnumerator()
inline Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6 List_1_GetEnumerator_m4264BFAF984BC77BB2EFDAB73261EC95529B47BF (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6 (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, const RuntimeMethod*))List_1_GetEnumerator_m4264BFAF984BC77BB2EFDAB73261EC95529B47BF_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Dispose()
inline void Enumerator_Dispose_m59121895AD798F3B21AA01FF4E4D8C8743DE369C (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6*, const RuntimeMethod*))Enumerator_Dispose_m59121895AD798F3B21AA01FF4E4D8C8743DE369C_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::get_Current()
inline GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_inline (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6* __this, const RuntimeMethod* method)
{
	return ((  GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C (*) (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6*, const RuntimeMethod*))Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::MoveNext()
inline bool Enumerator_MoveNext_m259A9736C139F374D942E6E363CCA53B6ACF1447 (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6*, const RuntimeMethod*))Enumerator_MoveNext_m259A9736C139F374D942E6E363CCA53B6ACF1447_gshared)(__this, method);
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass44_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_0__ctor_m206123D7ACA17B565E304B013F7E6B41977239F6 (U3CU3Ec__DisplayClass44_0_t4C398E63BD3DC59B6D45D177F95884516A693E93* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92 (String_t* ___key0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection>(System.String)
inline GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* JsonUtility_FromJson_TisGeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_m0D4ACD090316BD00BA3B4ED4D3B3F599AF367031 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
// System.Void System.Predicate`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m6906BC0330B02272E5E11B26C6C18A3A8CC271A7 (Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m6906BC0330B02272E5E11B26C6C18A3A8CC271A7_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::RemoveAll(System.Predicate`1<T>)
inline int32_t List_1_RemoveAll_mB7D623E596EA032328080946FB84DFF68AF0B347 (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9* ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9*, const RuntimeMethod*))List_1_RemoveAll_mB7D623E596EA032328080946FB84DFF68AF0B347_gshared)(__this, ___match0, method);
}
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistoryCollection__ctor_mF8B2CC65BEF02F8F5AD9A6745E9DA6B05D7D06FA (GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* __this, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m4F653C6CE2CE5AE4F2EBB6FF39AFD589ED84244F (Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m4F653C6CE2CE5AE4F2EBB6FF39AFD589ED84244F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Sort(System.Comparison`1<T>)
inline void List_1_Sort_m560E0614EE9BCDCCE7F7B73F3525A12EBC33CF2E (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654*, const RuntimeMethod*))List_1_Sort_m560E0614EE9BCDCCE7F7B73F3525A12EBC33CF2E_gshared)(__this, ___comparison0, method);
}
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m4F13468627DA199AA3C739E074A8E5842DC15273 (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m4F13468627DA199AA3C739E074A8E5842DC15273_gshared)(__this, ___index0, ___count1, method);
}
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_m82D427509929D2F21494141B9BE5D3E3CE96A22A (int32_t ___value0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// UnityEngine.LocationService UnityEngine.Input::get_location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D (const RuntimeMethod* method) ;
// UnityEngine.LocationServiceStatus UnityEngine.LocationService::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.TimeSpan System.DateTime::Subtract(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_Subtract_m4064A98F489219E9C414DF5C03EE041351B4502A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Days()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Days_m1317F48F8D9849E161D1CDBEB5CA08344EAAC107 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF5556B9529937F2A00DE74AC878F7F351A95CADC (U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::CompareTo(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_CompareTo_m4A3000CD4FF15EA7CA2E9C5C95A9D07F3AA8D35D (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Screen::get_safeArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Screen_get_safeArea_m4FFA2CF15868DE7146265B14A4A95FC0561FE5AF (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::op_Inequality(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Inequality_m4698BE8DFFC2C4F79B03116FC33FE1BE823A8945 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lhs0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rhs1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::MatchRectTransformToSafeArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAreaScaler_MatchRectTransformToSafeArea_m04E6A9A1444C10EDDC3392285A1C5BE523BE8F64 (SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// UnityEngine.GameObject AnchorCreator::get_AnchorPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnchorCreator_get_AnchorPrefab_mBBAF7805E9D9F8D79408EE642D153BC76306B25A (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	{
		// get => m_AnchorPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_AnchorPrefab_4;
		return L_0;
	}
}
// System.Void AnchorCreator::set_AnchorPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_set_AnchorPrefab_m53CC9CC3022C713826B44536B48B462C8A1FACFF (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_AnchorPrefab = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_AnchorPrefab_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorPrefab_4), (void*)L_0);
		return;
	}
}
// System.Void AnchorCreator::RemoveAllAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_RemoveAllAnchors_m6BA302DD9EECA47969FD3F6E5397441DCB09ED21 (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* V_1 = NULL;
	{
		// foreach (var anchor in m_AnchorPoints)
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_0 = __this->___m_AnchorPoints_6;
		NullCheck(L_0);
		Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 L_1;
		L_1 = List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502(L_0, List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3((&V_0), Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0021_1;
			}

IL_0010_1:
			{
				// foreach (var anchor in m_AnchorPoints)
				ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_2;
				L_2 = Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_inline((&V_0), Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var);
				V_1 = L_2;
				// Destroy(anchor);
				ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_3 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
			}

IL_0021_1:
			{
				// foreach (var anchor in m_AnchorPoints)
				bool L_4;
				L_4 = Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F((&V_0), Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_0010_1;
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
		// m_AnchorPoints.Clear();
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_5 = __this->___m_AnchorPoints_6;
		NullCheck(L_5);
		List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_inline(L_5, List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AnchorCreator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_Awake_m8820A3F157354D7EDED7B2D7CE2BFA42844F1F8E (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RaycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->___m_RaycastManager_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RaycastManager_7), (void*)L_0);
		// m_AnchorManager = GetComponent<ARAnchorManager>();
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_1;
		L_1 = Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907(__this, Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var);
		__this->___m_AnchorManager_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorManager_8), (void*)L_1);
		// m_PlaneManager = GetComponent<ARPlaneManager>();
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_2;
		L_2 = Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF(__this, Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var);
		__this->___m_PlaneManager_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneManager_9), (void*)L_2);
		// m_AnchorPoints = new List<ARAnchor>();
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_3 = (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*)il2cpp_codegen_object_new(List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4(L_3, List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var);
		__this->___m_AnchorPoints_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorPoints_6), (void*)L_3);
		// }
		return;
	}
}
// System.Void AnchorCreator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_Update_mA0A8BCCBAB0AE50DB087524E6273D11F1D6456D0 (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral849043193B4849A97BE2F08CFC3CAC883A0F096C);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_4;
	memset((&V_4), 0, sizeof(V_4));
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* V_6 = NULL;
	ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* V_7 = NULL;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	{
		// if (Input.touchCount == 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return;
		goto IL_00d9;
	}

IL_0012:
	{
		// var touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_2;
		// if (touch.phase != TouchPhase.Began)
		int32_t L_3;
		L_3 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		V_2 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// return;
		goto IL_00d9;
	}

IL_002c:
	{
		// if (m_RaycastManager.Raycast(touch.position, s_Hits, TrackableType.PlaneWithinPolygon))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_5 = __this->___m_RaycastManager_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_7 = ((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_5);
		bool L_8;
		L_8 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_5, L_6, L_7, 1, NULL);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_00d9;
		}
	}
	{
		// var hitPose = s_Hits[0].pose;
		il2cpp_codegen_runtime_class_init_inline(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_10 = ((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_10);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_11;
		L_11 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_10, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_8 = L_11;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12;
		L_12 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_8), NULL);
		V_4 = L_12;
		// var hitTrackableId = s_Hits[0].trackableId;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_13 = ((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_13);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_14;
		L_14 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_13, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_8 = L_14;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_15;
		L_15 = ARRaycastHit_get_trackableId_m4E510F2C326AFF23086203E4241C8F9B293616C3((&V_8), NULL);
		V_5 = L_15;
		// var hitPlane = m_PlaneManager.GetPlane(hitTrackableId);
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_16 = __this->___m_PlaneManager_9;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_17 = V_5;
		NullCheck(L_16);
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_18;
		L_18 = ARPlaneManager_GetPlane_m49FC33F6BC0DCFE67C4FC5F5CEE99CC8A7036FAE(L_16, L_17, NULL);
		V_6 = L_18;
		// var anchor = m_AnchorManager.AttachAnchor(hitPlane, hitPose);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_19 = __this->___m_AnchorManager_8;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_20 = V_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_21 = V_4;
		NullCheck(L_19);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_22;
		L_22 = ARAnchorManager_AttachAnchor_m8FA6B772401F90B38A06F43B8EA1B02EA82FFA75(L_19, L_20, L_21, NULL);
		V_7 = L_22;
		// Instantiate(m_AnchorPrefab, anchor.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___m_AnchorPrefab_4;
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_24 = V_7;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_23, L_25, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		// if (anchor == null)
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_27 = V_7;
		bool L_28;
		L_28 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_9 = L_28;
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_00c8;
		}
	}
	{
		// Debug.Log("Error creating anchor.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral849043193B4849A97BE2F08CFC3CAC883A0F096C, NULL);
		goto IL_00d8;
	}

IL_00c8:
	{
		// m_AnchorPoints.Add(anchor);
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_30 = __this->___m_AnchorPoints_6;
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_31 = V_7;
		NullCheck(L_30);
		List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_inline(L_30, L_31, List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var);
	}

IL_00d8:
	{
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void AnchorCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator__ctor_m702B01425680D7FD1C9272A423AAF8A913E5476E (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void AnchorCreator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator__cctor_mF5AE519F086E52A01EA091115062D84D9F094F34 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5), (void*)L_0);
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
// System.Single ARFeatheredPlaneMeshVisualizer::get_featheringWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return m_FeatheringWidth; }
		float L_0 = __this->___m_FeatheringWidth_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_FeatheringWidth; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::set_featheringWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_set_featheringWidth_mD616A09A3B426EA5DE1FA37334DD194E43EEC110 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_FeatheringWidth = value; }
		float L_0 = ___value0;
		__this->___m_FeatheringWidth_4 = L_0;
		// set { m_FeatheringWidth = value; }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_Awake_mC5DB0414A2514BF4851266C25141C903F0AC57BA (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PlaneMeshVisualizer = GetComponent<ARPlaneMeshVisualizer>();
		ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* L_0;
		L_0 = Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01(__this, Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var);
		__this->___m_PlaneMeshVisualizer_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneMeshVisualizer_7), (void*)L_0);
		// m_FeatheredPlaneMaterial = GetComponent<MeshRenderer>().material;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		__this->___m_FeatheredPlaneMaterial_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FeatheredPlaneMaterial_9), (void*)L_2);
		// m_Plane = GetComponent<ARPlane>();
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_3;
		L_3 = Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F(__this, Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var);
		__this->___m_Plane_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Plane_8), (void*)L_3);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_OnEnable_m8781C85CFED871C8A81A5B88DB1031856E0FC9F0 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Plane.boundaryChanged += ARPlane_boundaryUpdated;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = __this->___m_Plane_8;
		Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* L_1 = (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*)il2cpp_codegen_object_new(Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1(L_1, __this, (intptr_t)((void*)ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARPlane_add_boundaryChanged_m6A9CA2ADF4742C004EF7BCFD48A7C820320616AA(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_OnDisable_m2343B05B1A8F14BAD4DD516C584281B66FE6A4E8 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Plane.boundaryChanged -= ARPlane_boundaryUpdated;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = __this->___m_Plane_8;
		Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* L_1 = (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*)il2cpp_codegen_object_new(Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1(L_1, __this, (intptr_t)((void*)ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARPlane_remove_boundaryChanged_m6F71EEF2CD3C71AF069C5FE6CD993906BD8A9A10(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::ARPlane_boundaryUpdated(UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC ___eventArgs0, const RuntimeMethod* method) 
{
	{
		// GenerateBoundaryUVs(m_PlaneMeshVisualizer.mesh);
		ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* L_0 = __this->___m_PlaneMeshVisualizer_7;
		NullCheck(L_0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1;
		L_1 = ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline(L_0, NULL);
		ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::GenerateBoundaryUVs(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	bool V_4 = false;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	bool V_8 = false;
	bool V_9 = false;
	{
		// int vertexCount = mesh.vertexCount;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___mesh0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(L_0, NULL);
		V_0 = L_1;
		// s_FeatheringUVs.Clear();
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_2);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_2, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		// if (s_FeatheringUVs.Capacity < vertexCount) { s_FeatheringUVs.Capacity = vertexCount; }
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6(L_3, List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var);
		int32_t L_5 = V_0;
		V_4 = (bool)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		// if (s_FeatheringUVs.Capacity < vertexCount) { s_FeatheringUVs.Capacity = vertexCount; }
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_7 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE(L_7, L_8, List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var);
	}

IL_0034:
	{
		// mesh.GetVertices(s_Vertices);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9 = ___mesh0;
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_10 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		NullCheck(L_9);
		Mesh_GetVertices_m5BF8777074E383AD8C4B9974D27E4AB52963D92E(L_9, L_10, NULL);
		// Vector3 centerInPlaneSpace = s_Vertices[s_Vertices.Count - 1];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_12 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_12, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_11, ((int32_t)il2cpp_codegen_subtract(L_13, 1)), List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		V_1 = L_14;
		// Vector3 uv = new Vector3(0, 0, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), (0.0f), (0.0f), (0.0f), NULL);
		// float shortestUVMapping = float.MaxValue;
		V_3 = ((std::numeric_limits<float>::max)());
		// for (int i = 0; i < vertexCount - 1; i++)
		V_5 = 0;
		goto IL_00d1;
	}

IL_0078:
	{
		// float vertexDist = Vector3.Distance(s_Vertices[i], centerInPlaneSpace);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_15 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_15, L_16, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		float L_19;
		L_19 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_17, L_18, NULL);
		V_6 = L_19;
		// float uvMapping = vertexDist / Mathf.Max(vertexDist - featheringWidth, 0.001f);
		float L_20 = V_6;
		float L_21 = V_6;
		float L_22;
		L_22 = ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D(__this, NULL);
		float L_23;
		L_23 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_subtract(L_21, L_22)), (0.00100000005f), NULL);
		V_7 = ((float)(L_20/L_23));
		// uv.x = uvMapping;
		float L_24 = V_7;
		(&V_2)->___x_2 = L_24;
		// if (shortestUVMapping > uvMapping) { shortestUVMapping = uvMapping; }
		float L_25 = V_3;
		float L_26 = V_7;
		V_8 = (bool)((((float)L_25) > ((float)L_26))? 1 : 0);
		bool L_27 = V_8;
		if (!L_27)
		{
			goto IL_00be;
		}
	}
	{
		// if (shortestUVMapping > uvMapping) { shortestUVMapping = uvMapping; }
		float L_28 = V_7;
		V_3 = L_28;
	}

IL_00be:
	{
		// s_FeatheringUVs.Add(uv);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_29 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_2;
		NullCheck(L_29);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_29, L_30, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < vertexCount - 1; i++)
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00d1:
	{
		// for (int i = 0; i < vertexCount - 1; i++)
		int32_t L_32 = V_5;
		int32_t L_33 = V_0;
		V_9 = (bool)((((int32_t)L_32) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_33, 1))))? 1 : 0);
		bool L_34 = V_9;
		if (L_34)
		{
			goto IL_0078;
		}
	}
	{
		// m_FeatheredPlaneMaterial.SetFloat("_ShortestUVMapping", shortestUVMapping);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___m_FeatheredPlaneMaterial_9;
		float L_36 = V_3;
		NullCheck(L_35);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_35, _stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24, L_36, NULL);
		// uv.Set(0, 0, 0);
		Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline((&V_2), (0.0f), (0.0f), (0.0f), NULL);
		// s_FeatheringUVs.Add(uv);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_37 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_2;
		NullCheck(L_37);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_37, L_38, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// mesh.SetUVs(1, s_FeatheringUVs);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_39 = ___mesh0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_40 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_39);
		Mesh_SetUVs_mFEE20B5977AA358DAFA31CF621BBC4B0247789B2(L_39, 1, L_40, NULL);
		// mesh.UploadMeshData(false);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_41 = ___mesh0;
		NullCheck(L_41);
		Mesh_UploadMeshData_mE4C94F263DAA8CAC1641FE137E1CE7D3F09396EB(L_41, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer__ctor_m9A77651BCAE58AA0B994FFF6C6B63B1CFF2729F6 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	{
		// float m_FeatheringWidth = 0.2f;
		__this->___m_FeatheringWidth_4 = (0.200000003f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer__cctor_mF4BA6DDB611A3FD966C8B9494AE6B3EB8647CEAD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<Vector3> s_FeatheringUVs = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5), (void*)L_0);
		// static List<Vector3> s_Vertices = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_1, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6), (void*)L_1);
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
// Conversion methods for marshalling of: Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_pinvoke(const GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C& unmarshaled, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_pinvoke& marshaled)
{
	marshaled.___SerializedTime_0 = il2cpp_codegen_marshal_string(unmarshaled.___SerializedTime_0);
	marshaled.___Latitude_1 = unmarshaled.___Latitude_1;
	marshaled.___Longitude_2 = unmarshaled.___Longitude_2;
	marshaled.___Altitude_3 = unmarshaled.___Altitude_3;
	marshaled.___Heading_4 = unmarshaled.___Heading_4;
}
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_pinvoke_back(const GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_pinvoke& marshaled, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C& unmarshaled)
{
	unmarshaled.___SerializedTime_0 = il2cpp_codegen_marshal_string_result(marshaled.___SerializedTime_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___SerializedTime_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___SerializedTime_0));
	double unmarshaledLatitude_temp_1 = 0.0;
	unmarshaledLatitude_temp_1 = marshaled.___Latitude_1;
	unmarshaled.___Latitude_1 = unmarshaledLatitude_temp_1;
	double unmarshaledLongitude_temp_2 = 0.0;
	unmarshaledLongitude_temp_2 = marshaled.___Longitude_2;
	unmarshaled.___Longitude_2 = unmarshaledLongitude_temp_2;
	double unmarshaledAltitude_temp_3 = 0.0;
	unmarshaledAltitude_temp_3 = marshaled.___Altitude_3;
	unmarshaled.___Altitude_3 = unmarshaledAltitude_temp_3;
	double unmarshaledHeading_temp_4 = 0.0;
	unmarshaledHeading_temp_4 = marshaled.___Heading_4;
	unmarshaled.___Heading_4 = unmarshaledHeading_temp_4;
}
// Conversion method for clean up from marshalling of: Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_pinvoke_cleanup(GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___SerializedTime_0);
	marshaled.___SerializedTime_0 = NULL;
}
// Conversion methods for marshalling of: Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_com(const GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C& unmarshaled, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_com& marshaled)
{
	marshaled.___SerializedTime_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___SerializedTime_0);
	marshaled.___Latitude_1 = unmarshaled.___Latitude_1;
	marshaled.___Longitude_2 = unmarshaled.___Longitude_2;
	marshaled.___Altitude_3 = unmarshaled.___Altitude_3;
	marshaled.___Heading_4 = unmarshaled.___Heading_4;
}
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_com_back(const GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_com& marshaled, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C& unmarshaled)
{
	unmarshaled.___SerializedTime_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___SerializedTime_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___SerializedTime_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___SerializedTime_0));
	double unmarshaledLatitude_temp_1 = 0.0;
	unmarshaledLatitude_temp_1 = marshaled.___Latitude_1;
	unmarshaled.___Latitude_1 = unmarshaledLatitude_temp_1;
	double unmarshaledLongitude_temp_2 = 0.0;
	unmarshaledLongitude_temp_2 = marshaled.___Longitude_2;
	unmarshaled.___Longitude_2 = unmarshaledLongitude_temp_2;
	double unmarshaledAltitude_temp_3 = 0.0;
	unmarshaledAltitude_temp_3 = marshaled.___Altitude_3;
	unmarshaled.___Altitude_3 = unmarshaledAltitude_temp_3;
	double unmarshaledHeading_temp_4 = 0.0;
	unmarshaledHeading_temp_4 = marshaled.___Heading_4;
	unmarshaled.___Heading_4 = unmarshaledHeading_temp_4;
}
// Conversion method for clean up from marshalling of: Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_com_cleanup(GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___SerializedTime_0);
	marshaled.___SerializedTime_0 = NULL;
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::.ctor(System.DateTime,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistory__ctor_m11B5D19C7052A20A372B2D78E05D2EF997EA0F5B (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___time0, double ___latitude1, double ___longitude2, double ___altitude3, double ___heading4, const RuntimeMethod* method) 
{
	{
		// SerializedTime = time.ToString();
		String_t* L_0;
		L_0 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A((&___time0), NULL);
		__this->___SerializedTime_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SerializedTime_0), (void*)L_0);
		// Latitude = latitude;
		double L_1 = ___latitude1;
		__this->___Latitude_1 = L_1;
		// Longitude = longitude;
		double L_2 = ___longitude2;
		__this->___Longitude_2 = L_2;
		// Altitude = altitude;
		double L_3 = ___altitude3;
		__this->___Altitude_3 = L_3;
		// Heading = heading;
		double L_4 = ___heading4;
		__this->___Heading_4 = L_4;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GeospatialAnchorHistory__ctor_m11B5D19C7052A20A372B2D78E05D2EF997EA0F5B_AdjustorThunk (RuntimeObject* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___time0, double ___latitude1, double ___longitude2, double ___altitude3, double ___heading4, const RuntimeMethod* method)
{
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C*>(__this + _offset);
	GeospatialAnchorHistory__ctor_m11B5D19C7052A20A372B2D78E05D2EF997EA0F5B(_thisAdjusted, ___time0, ___latitude1, ___longitude2, ___altitude3, ___heading4, method);
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::.ctor(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistory__ctor_mC5B6E43C79DCB7BB244DBE4D791EB0F596B74703 (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, double ___latitude0, double ___longitude1, double ___altitude2, double ___heading3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this(DateTime.Now, latitude, longitude, altitude, heading)
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		double L_1 = ___latitude0;
		double L_2 = ___longitude1;
		double L_3 = ___altitude2;
		double L_4 = ___heading3;
		GeospatialAnchorHistory__ctor_m11B5D19C7052A20A372B2D78E05D2EF997EA0F5B(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GeospatialAnchorHistory__ctor_mC5B6E43C79DCB7BB244DBE4D791EB0F596B74703_AdjustorThunk (RuntimeObject* __this, double ___latitude0, double ___longitude1, double ___altitude2, double ___heading3, const RuntimeMethod* method)
{
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C*>(__this + _offset);
	GeospatialAnchorHistory__ctor_mC5B6E43C79DCB7BB244DBE4D791EB0F596B74703(_thisAdjusted, ___latitude0, ___longitude1, ___altitude2, ___heading3, method);
}
// System.DateTime Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::get_CreatedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DateTime CreatedTime => Convert.ToDateTime(SerializedTime);
		String_t* L_0 = __this->___SerializedTime_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = Convert_ToDateTime_mB46B1ABD4F03D21115949353F0133B722B7E972E(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C*>(__this + _offset);
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D _returnValue;
	_returnValue = GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A(_thisAdjusted, method);
	return _returnValue;
}
// System.String Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GeospatialAnchorHistory_ToString_mEF75221D34F044801DB11C95F4113DD9EFA87CF9 (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return JsonUtility.ToJson(this);
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_0 = (*(GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C*)__this);
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_1 = L_0;
		RuntimeObject* L_2 = Box(GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_2, NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		String_t* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* GeospatialAnchorHistory_ToString_mEF75221D34F044801DB11C95F4113DD9EFA87CF9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = GeospatialAnchorHistory_ToString_mEF75221D34F044801DB11C95F4113DD9EFA87CF9(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistoryCollection__ctor_mF8B2CC65BEF02F8F5AD9A6745E9DA6B05D7D06FA (GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GeospatialAnchorHistory> Collection = new List<GeospatialAnchorHistory>();
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_0 = (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*)il2cpp_codegen_object_new(List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83(L_0, List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83_RuntimeMethod_var);
		__this->___Collection_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Collection_0), (void*)L_0);
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
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnGetStartedClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnGetStartedClicked_mB6C4C94AC37A8E6D9893E59949F2A4AC1B69CCF2 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDD0E29C4A5251B9843B15E7DBD03F1411828478);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt(_hasDisplayedPrivacyPromptKey, 1);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralCDD0E29C4A5251B9843B15E7DBD03F1411828478, 1, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB(NULL);
		// SwitchToARView(true);
		GeospatialController_SwitchToARView_mFB94E97C62D009E13324C261E04900D34D47410E(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnLearnMoreClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnLearnMoreClicked_m30E869F7D9259B137402B70B9ECCE93CDD0996E1 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF7042B13A54AE6D2F33826F9F5FA12143D46847);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.OpenURL(
		//     "https://developers.google.com/ar/data-privacy");
		Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564(_stringLiteralEF7042B13A54AE6D2F33826F9F5FA12143D46847, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnClearAllClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnClearAllClicked_m6B7370DE319DE3D74783693764E3D9D408C5D90C (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral402969FEF140B759AA2E21468D1A944100BDBBF1);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// foreach (var anchor in _anchorObjects)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->____anchorObjects_37;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0021_1;
			}

IL_0010_1:
			{
				// foreach (var anchor in _anchorObjects)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_1 = L_2;
				// Destroy(anchor);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
			}

IL_0021_1:
			{
				// foreach (var anchor in _anchorObjects)
				bool L_4;
				L_4 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_0010_1;
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
		// _anchorObjects.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->____anchorObjects_37;
		NullCheck(L_5);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_5, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// _historyCollection.Collection.Clear();
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_6 = __this->____historyCollection_36;
		NullCheck(L_6);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_7 = L_6->___Collection_0;
		NullCheck(L_7);
		List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_inline(L_7, List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_RuntimeMethod_var);
		// SnackBarText.text = "Anchor(s) cleared!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___SnackBarText_16;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, _stringLiteral402969FEF140B759AA2E21468D1A944100BDBBF1);
		// ClearAllButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___ClearAllButton_12;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// SaveGeospatialAnchorHistory();
		GeospatialController_SaveGeospatialAnchorHistory_m518EB2F8DC525CDD2BE2A9E7D6AAF46D987569F1(__this, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnSetAnchorClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnSetAnchorClicked_m8470510D1E0D3E09FA8A9CE037B816533158843D (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E227568A75A99F99D64B36A7F13EF4EBA70B06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78E274AC89F9BB2B7C9C9C38754AE07662487DED);
		s_Il2CppMethodInitialized = true;
	}
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// var pose = EarthManager.CameraGeospatialPose;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_0 = __this->___EarthManager_7;
		NullCheck(L_0);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_1;
		L_1 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_0, NULL);
		V_0 = L_1;
		// GeospatialAnchorHistory history = new GeospatialAnchorHistory(
		//     pose.Latitude, pose.Longitude, pose.Altitude, pose.Heading);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_2 = V_0;
		double L_3 = L_2.___Latitude_0;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_4 = V_0;
		double L_5 = L_4.___Longitude_1;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_6 = V_0;
		double L_7 = L_6.___Altitude_2;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_8 = V_0;
		double L_9 = L_8.___Heading_3;
		GeospatialAnchorHistory__ctor_mC5B6E43C79DCB7BB244DBE4D791EB0F596B74703((&V_1), L_3, L_5, L_7, L_9, NULL);
		// if (PlaceGeospatialAnchor(history))
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_10 = V_1;
		bool L_11;
		L_11 = GeospatialController_PlaceGeospatialAnchor_mC972B012727FD2360DE63E4E0C9AE2DBB535B6AA(__this, L_10, NULL);
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0073;
		}
	}
	{
		// _historyCollection.Collection.Add(history);
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_13 = __this->____historyCollection_36;
		NullCheck(L_13);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_14 = L_13->___Collection_0;
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_15 = V_1;
		NullCheck(L_14);
		List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_inline(L_14, L_15, List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_RuntimeMethod_var);
		// SnackBarText.text = $"{_anchorObjects.Count} Anchor(s) Set!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___SnackBarText_16;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_17 = __this->____anchorObjects_37;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_17, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21;
		L_21 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral78E274AC89F9BB2B7C9C9C38754AE07662487DED, L_20, NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_21);
		goto IL_0086;
	}

IL_0073:
	{
		// SnackBarText.text = "Failed to set an anchor!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22 = __this->___SnackBarText_16;
		NullCheck(L_22);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, _stringLiteral14E227568A75A99F99D64B36A7F13EF4EBA70B06);
	}

IL_0086:
	{
		// ClearAllButton.gameObject.SetActive(_historyCollection.Collection.Count > 0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_23 = __this->___ClearAllButton_12;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_25 = __this->____historyCollection_36;
		NullCheck(L_25);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_26 = L_25->___Collection_0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_inline(L_26, List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)((((int32_t)L_27) > ((int32_t)0))? 1 : 0), NULL);
		// SaveGeospatialAnchorHistory();
		GeospatialController_SaveGeospatialAnchorHistory_m518EB2F8DC525CDD2BE2A9E7D6AAF46D987569F1(__this, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_Awake_mCA86E4AF23D51CFD648FE92B0A03D51B9BA0DC62 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral002FD9BA3AE0E060C2E4E855D3879613062FB95E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84603BEBCE50D165E99F4F1BE49F02FF0B3BC3DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC2DBADB2D94879827209856D3681D3473726A46);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// Screen.autorotateToLandscapeLeft = false;
		Screen_set_autorotateToLandscapeLeft_m0A5C4DACABE595591D931337C8B4724E6D45CFA5((bool)0, NULL);
		// Screen.autorotateToLandscapeRight = false;
		Screen_set_autorotateToLandscapeRight_mF798181165A504BF4A14DBECBDA796D601930C18((bool)0, NULL);
		// Screen.autorotateToPortraitUpsideDown = false;
		Screen_set_autorotateToPortraitUpsideDown_m4F307AAC11D730BD9C6B33A7D0F5D911BE367AC3((bool)0, NULL);
		// Screen.orientation = ScreenOrientation.Portrait;
		Screen_set_orientation_m6BA37EE8CEBFFFCEFFF38FB9EC22757072C93D7F(1, NULL);
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325(((int32_t)60), NULL);
		// if (SessionOrigin == null)
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0 = __this->___SessionOrigin_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		// Debug.LogError("Cannot find ARSessionOrigin.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral002FD9BA3AE0E060C2E4E855D3879613062FB95E, NULL);
	}

IL_0042:
	{
		// if (Session == null)
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_3 = __this->___Session_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		// Debug.LogError("Cannot find ARSession.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral84603BEBCE50D165E99F4F1BE49F02FF0B3BC3DB, NULL);
	}

IL_005f:
	{
		// if (ARCoreExtensions == null)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_6 = __this->___ARCoreExtensions_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// Debug.LogError("Cannot find ARCoreExtensions.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralEC2DBADB2D94879827209856D3681D3473726A46, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnEnable_mEB3602FCCA7C89B722AFD4159D144A8DEEA618B9 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral098533C94B14961259EF414728C4A68C6289E9AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDD0E29C4A5251B9843B15E7DBD03F1411828478);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_1 = NULL;
	{
		// SwitchToARView(PlayerPrefs.HasKey(_hasDisplayedPrivacyPromptKey));
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteralCDD0E29C4A5251B9843B15E7DBD03F1411828478, NULL);
		GeospatialController_SwitchToARView_mFB94E97C62D009E13324C261E04900D34D47410E(__this, L_0, NULL);
		// _isReturning = false;
		__this->____isReturning_30 = (bool)0;
		// _enablingGeospatial = false;
		__this->____enablingGeospatial_32 = (bool)0;
		// InfoPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___InfoPanel_14;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// SetAnchorButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___SetAnchorButton_13;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// ClearAllButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___ClearAllButton_12;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// DebugText.gameObject.SetActive(Debug.isDebugBuild && EarthManager != null);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___DebugText_17;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Debug_get_isDebugBuild_mD757482E7E84FD089E874DD0778A5200D12C14E0(NULL);
		G_B1_0 = L_7;
		if (!L_8)
		{
			G_B2_0 = L_7;
			goto IL_0071;
		}
	}
	{
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_9 = __this->___EarthManager_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_0072;
	}

IL_0071:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0072:
	{
		NullCheck(G_B3_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B3_1, (bool)G_B3_0, NULL);
		// _localizationPassedTime = 0f;
		__this->____localizationPassedTime_34 = (0.0f);
		// _isLocalizing = true;
		__this->____isLocalizing_31 = (bool)1;
		// SnackBarText.text = _localizingMessage;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___SnackBarText_16;
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, _stringLiteral098533C94B14961259EF414728C4A68C6289E9AE);
		// LoadGeospatialAnchorHistory();
		GeospatialController_LoadGeospatialAnchorHistory_m78B8DEB20F80FE681FA18AC34EFBB190DE330605(__this, NULL);
		// _shouldResolvingHistory = _historyCollection.Collection.Count > 0;
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_12 = __this->____historyCollection_36;
		NullCheck(L_12);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_13 = L_12->___Collection_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_inline(L_13, List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		__this->____shouldResolvingHistory_33 = (bool)((((int32_t)L_14) > ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnDisable_m4494298A36B1BF602BC9839471386CC264FE50D1 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// foreach (var anchor in _anchorObjects)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->____anchorObjects_37;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0021_1;
			}

IL_0010_1:
			{
				// foreach (var anchor in _anchorObjects)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_1 = L_2;
				// Destroy(anchor);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
			}

IL_0021_1:
			{
				// foreach (var anchor in _anchorObjects)
				bool L_4;
				L_4 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_0010_1;
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
		// _anchorObjects.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->____anchorObjects_37;
		NullCheck(L_5);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_5, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// SaveGeospatialAnchorHistory();
		GeospatialController_SaveGeospatialAnchorHistory_m518EB2F8DC525CDD2BE2A9E7D6AAF46D987569F1(__this, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_Update_m12FBC3C41C8B9B1060B6C586F36B51FA8315191E (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarthState_t4663D22E8AF1302E5F67CCE0DCB96CA24D310AC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B33E2273C9AB388C21E973B33AEB2CD77079D68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12129C966D1274A2EF853A1668600EE873FA4D2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral242A0070D29873DA9B6E4E1164C9C8B53CE23D19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970A4D6490D612AAF148057C65320C8178CD0C87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0A24FC541CCC2A139AC9F8BE75113AD3649BFBD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA628C3EA1A977D457A54A899CA2F513C35C50B9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3485A54065E6F4E66AFF0546DB80DF7DA4A5284);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA97DB5D365444C5E6EF88EF63073328B97B1146);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE0D2C7E866F161F8886976B7C5F3F27F3BB4E7A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	String_t* V_14 = NULL;
	bool V_15 = false;
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_19;
	memset((&V_19), 0, sizeof(V_19));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_20 = NULL;
	bool V_21 = false;
	bool V_22 = false;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_23;
	memset((&V_23), 0, sizeof(V_23));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_24 = NULL;
	bool V_25 = false;
	int32_t G_B7_0 = 0;
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C G_B28_0;
	memset((&G_B28_0), 0, sizeof(G_B28_0));
	int32_t G_B33_0 = 0;
	{
		// if (!_isInARView)
		bool L_0 = __this->____isInARView_29;
		V_5 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_5;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		goto IL_0476;
	}

IL_0016:
	{
		// UpdateDebugInfo();
		GeospatialController_UpdateDebugInfo_m4DD7408BE036B30EE50B0F2CB2D5ED7B24B314A1(__this, NULL);
		// LifecycleUpdate();
		GeospatialController_LifecycleUpdate_m9DF865831BF6070D17D792ABD8948E03B692AC9C(__this, NULL);
		// if (_isReturning)
		bool L_2 = __this->____isReturning_30;
		V_6 = L_2;
		bool L_3 = V_6;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// return;
		goto IL_0476;
	}

IL_0036:
	{
		// if (ARSession.state != ARSessionState.SessionInitializing &&
		//     ARSession.state != ARSessionState.SessionTracking)
		int32_t L_4;
		L_4 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		if ((((int32_t)L_4) == ((int32_t)6)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_5;
		L_5 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		G_B7_0 = ((((int32_t)((((int32_t)L_5) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B7_0 = 0;
	}

IL_004c:
	{
		V_7 = (bool)G_B7_0;
		bool L_6 = V_7;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		// return;
		goto IL_0476;
	}

IL_0058:
	{
		// var featureSupport = EarthManager.IsGeospatialModeSupported(GeospatialMode.Enabled);
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_7 = __this->___EarthManager_7;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = AREarthManager_IsGeospatialModeSupported_m95784655267321A2E74719CB725D58F368AA278F(L_7, 2, NULL);
		V_0 = L_8;
		// switch (featureSupport)
		int32_t L_9 = V_0;
		V_9 = L_9;
		int32_t L_10 = V_9;
		V_8 = L_10;
		int32_t L_11 = V_8;
		switch (L_11)
		{
			case 0:
			{
				goto IL_0097;
			}
			case 1:
			{
				goto IL_0081;
			}
			case 2:
			{
				goto IL_0086;
			}
		}
	}
	{
		goto IL_00e6;
	}

IL_0081:
	{
		// return;
		goto IL_0476;
	}

IL_0086:
	{
		// ReturnWithReason("Geospatial API is not supported by this devices.");
		GeospatialController_ReturnWithReason_m94789CA6304ABFD05634B43C370B2399383312EF(__this, _stringLiteralDE0D2C7E866F161F8886976B7C5F3F27F3BB4E7A, NULL);
		// return;
		goto IL_0476;
	}

IL_0097:
	{
		// if (ARCoreExtensions.ARCoreExtensionsConfig.GeospatialMode ==
		//     GeospatialMode.Disabled)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_12 = __this->___ARCoreExtensions_8;
		NullCheck(L_12);
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_13 = L_12->___ARCoreExtensionsConfig_7;
		NullCheck(L_13);
		int32_t L_14 = L_13->___GeospatialMode_5;
		V_10 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_10;
		if (!L_15)
		{
			goto IL_00e4;
		}
	}
	{
		// Debug.Log("Geospatial sample switched to GeospatialMode.Enabled.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralA0A24FC541CCC2A139AC9F8BE75113AD3649BFBD, NULL);
		// ARCoreExtensions.ARCoreExtensionsConfig.GeospatialMode =
		//     GeospatialMode.Enabled;
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_16 = __this->___ARCoreExtensions_8;
		NullCheck(L_16);
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_17 = L_16->___ARCoreExtensionsConfig_7;
		NullCheck(L_17);
		L_17->___GeospatialMode_5 = 2;
		// _configurePrepareTime = 3.0f;
		__this->____configurePrepareTime_35 = (3.0f);
		// _enablingGeospatial = true;
		__this->____enablingGeospatial_32 = (bool)1;
		// return;
		goto IL_0476;
	}

IL_00e4:
	{
		// break;
		goto IL_00e6;
	}

IL_00e6:
	{
		// if (_enablingGeospatial)
		bool L_18 = __this->____enablingGeospatial_32;
		V_11 = L_18;
		bool L_19 = V_11;
		if (!L_19)
		{
			goto IL_012a;
		}
	}
	{
		// _configurePrepareTime -= Time.deltaTime;
		float L_20 = __this->____configurePrepareTime_35;
		float L_21;
		L_21 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____configurePrepareTime_35 = ((float)il2cpp_codegen_subtract(L_20, L_21));
		// if (_configurePrepareTime < 0)
		float L_22 = __this->____configurePrepareTime_35;
		V_12 = (bool)((((float)L_22) < ((float)(0.0f)))? 1 : 0);
		bool L_23 = V_12;
		if (!L_23)
		{
			goto IL_0123;
		}
	}
	{
		// _enablingGeospatial = false;
		__this->____enablingGeospatial_32 = (bool)0;
		goto IL_0129;
	}

IL_0123:
	{
		// return;
		goto IL_0476;
	}

IL_0129:
	{
	}

IL_012a:
	{
		// var earthState = EarthManager.EarthState;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_24 = __this->___EarthManager_7;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = AREarthManager_get_EarthState_m00405B03AE94D0CFB2E90596C028A35250517D38(L_24, NULL);
		V_1 = L_25;
		// if (earthState == EarthState.ErrorInternal)
		int32_t L_26 = V_1;
		V_13 = (bool)((((int32_t)L_26) == ((int32_t)(-1)))? 1 : 0);
		bool L_27 = V_13;
		if (!L_27)
		{
			goto IL_0175;
		}
	}
	{
		// string internalErrorMessage =
		//     "Geospatial sample encountered an EarthState error: " + earthState;
		Il2CppFakeBox<int32_t> L_28(EarthState_t4663D22E8AF1302E5F67CCE0DCB96CA24D310AC6_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_29;
		L_29 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_28), NULL);
		String_t* L_30;
		L_30 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral12129C966D1274A2EF853A1668600EE873FA4D2C, L_29, NULL);
		V_14 = L_30;
		// Debug.LogWarning(internalErrorMessage);
		String_t* L_31 = V_14;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_31, NULL);
		// SnackBarText.text = internalErrorMessage;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_32 = __this->___SnackBarText_16;
		String_t* L_33 = V_14;
		NullCheck(L_32);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_32, L_33);
		// return;
		goto IL_0476;
	}

IL_0175:
	{
		// else if (earthState != EarthState.Enabled)
		int32_t L_34 = V_1;
		V_15 = (bool)((!(((uint32_t)L_34) <= ((uint32_t)0)))? 1 : 0);
		bool L_35 = V_15;
		if (!L_35)
		{
			goto IL_01a3;
		}
	}
	{
		// ReturnWithReason(
		//     "Geospatial sample encountered an EarthState error: " + earthState);
		Il2CppFakeBox<int32_t> L_36(EarthState_t4663D22E8AF1302E5F67CCE0DCB96CA24D310AC6_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_37;
		L_37 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_36), NULL);
		String_t* L_38;
		L_38 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral12129C966D1274A2EF853A1668600EE873FA4D2C, L_37, NULL);
		GeospatialController_ReturnWithReason_m94789CA6304ABFD05634B43C370B2399383312EF(__this, L_38, NULL);
		// return;
		goto IL_0476;
	}

IL_01a3:
	{
		// bool isSessionReady = ARSession.state == ARSessionState.SessionTracking;
		int32_t L_39;
		L_39 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		V_2 = (bool)((((int32_t)L_39) == ((int32_t)7))? 1 : 0);
		// var earthTrackingState = EarthManager.EarthTrackingState;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_40 = __this->___EarthManager_7;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A(L_40, NULL);
		V_3 = L_41;
		// var pose = earthTrackingState == TrackingState.Tracking ?
		//     EarthManager.CameraGeospatialPose : new GeospatialPose();
		int32_t L_42 = V_3;
		if ((((int32_t)L_42) == ((int32_t)2)))
		{
			goto IL_01c8;
		}
	}
	{
		il2cpp_codegen_initobj((&V_16), sizeof(GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C));
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_43 = V_16;
		G_B28_0 = L_43;
		goto IL_01d3;
	}

IL_01c8:
	{
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_44 = __this->___EarthManager_7;
		NullCheck(L_44);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_45;
		L_45 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_44, NULL);
		G_B28_0 = L_45;
	}

IL_01d3:
	{
		V_4 = G_B28_0;
		// if (!isSessionReady || earthTrackingState != TrackingState.Tracking ||
		//     pose.HeadingAccuracy > _headingAccuracyThreshold ||
		//     pose.HorizontalAccuracy > _horizontalAccuracyThreshold)
		bool L_46 = V_2;
		if (!L_46)
		{
			goto IL_0202;
		}
	}
	{
		int32_t L_47 = V_3;
		if ((!(((uint32_t)L_47) == ((uint32_t)2))))
		{
			goto IL_0202;
		}
	}
	{
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_48 = V_4;
		double L_49 = L_48.___HeadingAccuracy_4;
		if ((((double)L_49) > ((double)(25.0))))
		{
			goto IL_0202;
		}
	}
	{
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_50 = V_4;
		double L_51 = L_50.___HorizontalAccuracy_5;
		G_B33_0 = ((((double)L_51) > ((double)(20.0)))? 1 : 0);
		goto IL_0203;
	}

IL_0202:
	{
		G_B33_0 = 1;
	}

IL_0203:
	{
		V_17 = (bool)G_B33_0;
		bool L_52 = V_17;
		if (!L_52)
		{
			goto IL_02eb;
		}
	}
	{
		// if (!_isLocalizing)
		bool L_53 = __this->____isLocalizing_31;
		V_18 = (bool)((((int32_t)L_53) == ((int32_t)0))? 1 : 0);
		bool L_54 = V_18;
		if (!L_54)
		{
			goto IL_0292;
		}
	}
	{
		// _isLocalizing = true;
		__this->____isLocalizing_31 = (bool)1;
		// _localizationPassedTime = 0f;
		__this->____localizationPassedTime_34 = (0.0f);
		// SetAnchorButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_55 = __this->___SetAnchorButton_13;
		NullCheck(L_55);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56;
		L_56 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_55, NULL);
		NullCheck(L_56);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_56, (bool)0, NULL);
		// ClearAllButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_57 = __this->___ClearAllButton_12;
		NullCheck(L_57);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58;
		L_58 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_57, NULL);
		NullCheck(L_58);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_58, (bool)0, NULL);
		// foreach (var go in _anchorObjects)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_59 = __this->____anchorObjects_37;
		NullCheck(L_59);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_60;
		L_60 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_59, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_19 = L_60;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0282:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_19), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0277_1;
			}

IL_0263_1:
			{
				// foreach (var go in _anchorObjects)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61;
				L_61 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_19), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_20 = L_61;
				// go.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = V_20;
				NullCheck(L_62);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_62, (bool)0, NULL);
			}

IL_0277_1:
			{
				// foreach (var go in _anchorObjects)
				bool L_63;
				L_63 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_19), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_63)
				{
					goto IL_0263_1;
				}
			}
			{
				goto IL_0291;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0291:
	{
	}

IL_0292:
	{
		// if (_localizationPassedTime > _timeoutSeconds)
		float L_64 = __this->____localizationPassedTime_34;
		V_21 = (bool)((((float)L_64) > ((float)(180.0f)))? 1 : 0);
		bool L_65 = V_21;
		if (!L_65)
		{
			goto IL_02c0;
		}
	}
	{
		// Debug.LogError("Geospatial sample localization passed timeout.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral0B33E2273C9AB388C21E973B33AEB2CD77079D68, NULL);
		// ReturnWithReason(_localizationFailureMessage);
		GeospatialController_ReturnWithReason_m94789CA6304ABFD05634B43C370B2399383312EF(__this, _stringLiteral970A4D6490D612AAF148057C65320C8178CD0C87, NULL);
		goto IL_02e5;
	}

IL_02c0:
	{
		// _localizationPassedTime += Time.deltaTime;
		float L_66 = __this->____localizationPassedTime_34;
		float L_67;
		L_67 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____localizationPassedTime_34 = ((float)il2cpp_codegen_add(L_66, L_67));
		// SnackBarText.text = _localizationInstructionMessage;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_68 = __this->___SnackBarText_16;
		NullCheck(L_68);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_68, _stringLiteralB3485A54065E6F4E66AFF0546DB80DF7DA4A5284);
	}

IL_02e5:
	{
		goto IL_0395;
	}

IL_02eb:
	{
		// else if (_isLocalizing)
		bool L_69 = __this->____isLocalizing_31;
		V_22 = L_69;
		bool L_70 = V_22;
		if (!L_70)
		{
			goto IL_0395;
		}
	}
	{
		// _isLocalizing = false;
		__this->____isLocalizing_31 = (bool)0;
		// _localizationPassedTime = 0f;
		__this->____localizationPassedTime_34 = (0.0f);
		// SetAnchorButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_71 = __this->___SetAnchorButton_13;
		NullCheck(L_71);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72;
		L_72 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_71, NULL);
		NullCheck(L_72);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_72, (bool)1, NULL);
		// ClearAllButton.gameObject.SetActive(_anchorObjects.Count > 0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_73 = __this->___ClearAllButton_12;
		NullCheck(L_73);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74;
		L_74 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_73, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_75 = __this->____anchorObjects_37;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_75, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_74);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_74, (bool)((((int32_t)L_76) > ((int32_t)0))? 1 : 0), NULL);
		// SnackBarText.text = _localizationSuccessMessage;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_77 = __this->___SnackBarText_16;
		NullCheck(L_77);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_77, _stringLiteral242A0070D29873DA9B6E4E1164C9C8B53CE23D19);
		// foreach (var go in _anchorObjects)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_78 = __this->____anchorObjects_37;
		NullCheck(L_78);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_79;
		L_79 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_78, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_23 = L_79;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_037e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_23), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0373_1;
			}

IL_035f_1:
			{
				// foreach (var go in _anchorObjects)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80;
				L_80 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_23), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_24 = L_80;
				// go.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = V_24;
				NullCheck(L_81);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_81, (bool)1, NULL);
			}

IL_0373_1:
			{
				// foreach (var go in _anchorObjects)
				bool L_82;
				L_82 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_23), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_82)
				{
					goto IL_035f_1;
				}
			}
			{
				goto IL_038d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_038d:
	{
		// ResolveHistory();
		GeospatialController_ResolveHistory_mF4A2FFB2FC64B439305A9B081795341F5F4A7359(__this, NULL);
	}

IL_0395:
	{
		// InfoPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_83 = __this->___InfoPanel_14;
		NullCheck(L_83);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_83, (bool)1, NULL);
		// if (earthTrackingState == TrackingState.Tracking)
		int32_t L_84 = V_3;
		V_25 = (bool)((((int32_t)L_84) == ((int32_t)2))? 1 : 0);
		bool L_85 = V_25;
		if (!L_85)
		{
			goto IL_0463;
		}
	}
	{
		// InfoText.text = string.Format(
		// "Latitude/Longitude: {1}?, {2}?{0}" +
		// "Horizontal Accuracy: {3}m{0}" +
		// "Altitude: {4}m{0}" +
		// "Vertical Accuracy: {5}m{0}" +
		// "Heading: {6}?{0}" +
		// "Heading Accuracy: {7}?",
		// Environment.NewLine,
		// pose.Latitude.ToString("F6"),
		// pose.Longitude.ToString("F6"),
		// pose.HorizontalAccuracy.ToString("F6"),
		// pose.Altitude.ToString("F2"),
		// pose.VerticalAccuracy.ToString("F2"),
		// pose.Heading.ToString("F1"),
		// pose.HeadingAccuracy.ToString("F1"));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_86 = __this->___InfoText_15;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_87 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_88 = L_87;
		String_t* L_89;
		L_89 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_88);
		ArrayElementTypeCheck (L_88, L_89);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_89);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_90 = L_88;
		double* L_91 = (&(&V_4)->___Latitude_0);
		String_t* L_92;
		L_92 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_91, _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3, NULL);
		NullCheck(L_90);
		ArrayElementTypeCheck (L_90, L_92);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_92);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_93 = L_90;
		double* L_94 = (&(&V_4)->___Longitude_1);
		String_t* L_95;
		L_95 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_94, _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3, NULL);
		NullCheck(L_93);
		ArrayElementTypeCheck (L_93, L_95);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_95);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_96 = L_93;
		double* L_97 = (&(&V_4)->___HorizontalAccuracy_5);
		String_t* L_98;
		L_98 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_97, _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3, NULL);
		NullCheck(L_96);
		ArrayElementTypeCheck (L_96, L_98);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_98);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_99 = L_96;
		double* L_100 = (&(&V_4)->___Altitude_2);
		String_t* L_101;
		L_101 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_100, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		NullCheck(L_99);
		ArrayElementTypeCheck (L_99, L_101);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_101);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_102 = L_99;
		double* L_103 = (&(&V_4)->___VerticalAccuracy_6);
		String_t* L_104;
		L_104 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_103, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		NullCheck(L_102);
		ArrayElementTypeCheck (L_102, L_104);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_104);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_105 = L_102;
		double* L_106 = (&(&V_4)->___Heading_3);
		String_t* L_107;
		L_107 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_106, _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, NULL);
		NullCheck(L_105);
		ArrayElementTypeCheck (L_105, L_107);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_107);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_108 = L_105;
		double* L_109 = (&(&V_4)->___HeadingAccuracy_4);
		String_t* L_110;
		L_110 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_109, _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, NULL);
		NullCheck(L_108);
		ArrayElementTypeCheck (L_108, L_110);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_110);
		String_t* L_111;
		L_111 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteralA628C3EA1A977D457A54A899CA2F513C35C50B9C, L_108, NULL);
		NullCheck(L_86);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_86, L_111);
		goto IL_0476;
	}

IL_0463:
	{
		// InfoText.text = "GEOSPATIAL POSE: not tracking";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_112 = __this->___InfoText_15;
		NullCheck(L_112);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_112, _stringLiteralBA97DB5D365444C5E6EF88EF63073328B97B1146);
	}

IL_0476:
	{
		// }
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::PlaceGeospatialAnchor(Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeospatialController_PlaceGeospatialAnchor_mC972B012727FD2360DE63E4E0C9AE2DBB535B6AA (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___history0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* V_1 = NULL;
	bool V_2 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	bool V_4 = false;
	{
		// Quaternion quaternion =
		//     Quaternion.AngleAxis(180f - (float)history.Heading, Vector3.up);
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_0 = ___history0;
		double L_1 = L_0.___Heading_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(((float)il2cpp_codegen_subtract((180.0f), ((float)L_1))), L_2, NULL);
		V_0 = L_3;
		// var anchor = AnchorManager.AddAnchor(
		//     history.Latitude, history.Longitude, history.Altitude, quaternion);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_4 = __this->___AnchorManager_6;
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_5 = ___history0;
		double L_6 = L_5.___Latitude_1;
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_7 = ___history0;
		double L_8 = L_7.___Longitude_2;
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_9 = ___history0;
		double L_10 = L_9.___Altitude_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_12;
		L_12 = ARAnchorManagerExtensions_AddAnchor_m9AB188663991BAE77AF6579D1F1E0EEAC1E14174(L_4, L_6, L_8, L_10, L_11, NULL);
		V_1 = L_12;
		// if (anchor != null)
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_14;
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		// GameObject anchorGO = Instantiate(GeospatialPrefab, anchor.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___GeospatialPrefab_9;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_17 = V_1;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_16, L_18, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_3 = L_19;
		// _anchorObjects.Add(anchorGO);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_20 = __this->____anchorObjects_37;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_3;
		NullCheck(L_20);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_20, L_21, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// return true;
		V_4 = (bool)1;
		goto IL_006d;
	}

IL_0068:
	{
		// return false;
		V_4 = (bool)0;
		goto IL_006d;
	}

IL_006d:
	{
		// }
		bool L_22 = V_4;
		return L_22;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ResolveHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_ResolveHistory_mF4A2FFB2FC64B439305A9B081795341F5F4A7359 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m59121895AD798F3B21AA01FF4E4D8C8743DE369C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m259A9736C139F374D942E6E363CCA53B6ACF1447_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4264BFAF984BC77BB2EFDAB73261EC95529B47BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3187553363A94FA380DF7928E3C910219A40C90A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!_shouldResolvingHistory)
		bool L_0 = __this->____shouldResolvingHistory_33;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		goto IL_00a5;
	}

IL_0014:
	{
		// _shouldResolvingHistory = false;
		__this->____shouldResolvingHistory_33 = (bool)0;
		// foreach (var history in _historyCollection.Collection)
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_2 = __this->____historyCollection_36;
		NullCheck(L_2);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_3 = L_2->___Collection_0;
		NullCheck(L_3);
		Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6 L_4;
		L_4 = List_1_GetEnumerator_m4264BFAF984BC77BB2EFDAB73261EC95529B47BF(L_3, List_1_GetEnumerator_m4264BFAF984BC77BB2EFDAB73261EC95529B47BF_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m59121895AD798F3B21AA01FF4E4D8C8743DE369C((&V_1), Enumerator_Dispose_m59121895AD798F3B21AA01FF4E4D8C8743DE369C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0041_1;
			}

IL_002f_1:
			{
				// foreach (var history in _historyCollection.Collection)
				GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_5;
				L_5 = Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_inline((&V_1), Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_RuntimeMethod_var);
				V_2 = L_5;
				// PlaceGeospatialAnchor(history);
				GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_6 = V_2;
				bool L_7;
				L_7 = GeospatialController_PlaceGeospatialAnchor_mC972B012727FD2360DE63E4E0C9AE2DBB535B6AA(__this, L_6, NULL);
			}

IL_0041_1:
			{
				// foreach (var history in _historyCollection.Collection)
				bool L_8;
				L_8 = Enumerator_MoveNext_m259A9736C139F374D942E6E363CCA53B6ACF1447((&V_1), Enumerator_MoveNext_m259A9736C139F374D942E6E363CCA53B6ACF1447_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_002f_1;
				}
			}
			{
				goto IL_005b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		// ClearAllButton.gameObject.SetActive(_historyCollection.Collection.Count > 0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___ClearAllButton_12;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_11 = __this->____historyCollection_36;
		NullCheck(L_11);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_12 = L_11->___Collection_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_inline(L_12, List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)((((int32_t)L_13) > ((int32_t)0))? 1 : 0), NULL);
		// SnackBarText.text = string.Format("{0} anchor(s) set from history.",
		//     _anchorObjects.Count);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___SnackBarText_16;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_15 = __this->____anchorObjects_37;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_15, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19;
		L_19 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral3187553363A94FA380DF7928E3C910219A40C90A, L_18, NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_19);
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::LoadGeospatialAnchorHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_LoadGeospatialAnchorHistory_m78B8DEB20F80FE681FA18AC34EFBB190DE330605 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisGeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_m0D4ACD090316BD00BA3B4ED4D3B3F599AF367031_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAll_mB7D623E596EA032328080946FB84DFF68AF0B347_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass44_0_U3CLoadGeospatialAnchorHistoryU3Eb__0_m44808C972571EDBAF0EC7C32D2BB4056A959BA71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass44_0_t4C398E63BD3DC59B6D45D177F95884516A693E93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	U3CU3Ec__DisplayClass44_0_t4C398E63BD3DC59B6D45D177F95884516A693E93* V_1 = NULL;
	{
		// if (PlayerPrefs.HasKey(_persistentGeospatialAnchorsStorageKey))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0072;
		}
	}
	{
		U3CU3Ec__DisplayClass44_0_t4C398E63BD3DC59B6D45D177F95884516A693E93* L_2 = (U3CU3Ec__DisplayClass44_0_t4C398E63BD3DC59B6D45D177F95884516A693E93*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass44_0_t4C398E63BD3DC59B6D45D177F95884516A693E93_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		U3CU3Ec__DisplayClass44_0__ctor_m206123D7ACA17B565E304B013F7E6B41977239F6(L_2, NULL);
		V_1 = L_2;
		// _historyCollection = JsonUtility.FromJson<GeospatialAnchorHistoryCollection>(
		//     PlayerPrefs.GetString(_persistentGeospatialAnchorsStorageKey));
		String_t* L_3;
		L_3 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888, NULL);
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_4;
		L_4 = JsonUtility_FromJson_TisGeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_m0D4ACD090316BD00BA3B4ED4D3B3F599AF367031(L_3, JsonUtility_FromJson_TisGeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_m0D4ACD090316BD00BA3B4ED4D3B3F599AF367031_RuntimeMethod_var);
		__this->____historyCollection_36 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____historyCollection_36), (void*)L_4);
		// DateTime current = DateTime.Now;
		U3CU3Ec__DisplayClass44_0_t4C398E63BD3DC59B6D45D177F95884516A693E93* L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6;
		L_6 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		NullCheck(L_5);
		L_5->___current_0 = L_6;
		// _historyCollection.Collection.RemoveAll(
		//     data => current.Subtract(data.CreatedTime).Days > 0);
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_7 = __this->____historyCollection_36;
		NullCheck(L_7);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_8 = L_7->___Collection_0;
		U3CU3Ec__DisplayClass44_0_t4C398E63BD3DC59B6D45D177F95884516A693E93* L_9 = V_1;
		Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9* L_10 = (Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9*)il2cpp_codegen_object_new(Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Predicate_1__ctor_m6906BC0330B02272E5E11B26C6C18A3A8CC271A7(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass44_0_U3CLoadGeospatialAnchorHistoryU3Eb__0_m44808C972571EDBAF0EC7C32D2BB4056A959BA71_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		int32_t L_11;
		L_11 = List_1_RemoveAll_mB7D623E596EA032328080946FB84DFF68AF0B347(L_8, L_10, List_1_RemoveAll_mB7D623E596EA032328080946FB84DFF68AF0B347_RuntimeMethod_var);
		// PlayerPrefs.SetString(_persistentGeospatialAnchorsStorageKey,
		//     JsonUtility.ToJson(_historyCollection));
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_12 = __this->____historyCollection_36;
		String_t* L_13;
		L_13 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_12, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888, L_13, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB(NULL);
		goto IL_007f;
	}

IL_0072:
	{
		// _historyCollection = new GeospatialAnchorHistoryCollection();
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_14 = (GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD*)il2cpp_codegen_object_new(GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		GeospatialAnchorHistoryCollection__ctor_mF8B2CC65BEF02F8F5AD9A6745E9DA6B05D7D06FA(L_14, NULL);
		__this->____historyCollection_36 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____historyCollection_36), (void*)L_14);
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SaveGeospatialAnchorHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_SaveGeospatialAnchorHistory_m518EB2F8DC525CDD2BE2A9E7D6AAF46D987569F1 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m4F13468627DA199AA3C739E074A8E5842DC15273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m560E0614EE9BCDCCE7F7B73F3525A12EBC33CF2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSaveGeospatialAnchorHistoryU3Eb__45_0_m0C5057FBA4694CFF222C4BC7E9AC4DC834F0727E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* G_B2_0 = NULL;
	List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* G_B2_1 = NULL;
	Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* G_B1_0 = NULL;
	List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* G_B1_1 = NULL;
	{
		// _historyCollection.Collection.Sort((left, right) =>
		//     right.CreatedTime.CompareTo(left.CreatedTime));
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_0 = __this->____historyCollection_36;
		NullCheck(L_0);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_1 = L_0->___Collection_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var);
		Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* L_2 = ((U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var))->___U3CU3E9__45_0_1;
		Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var);
		U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA* L_4 = ((U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* L_5 = (Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654*)il2cpp_codegen_object_new(Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Comparison_1__ctor_m4F653C6CE2CE5AE4F2EBB6FF39AFD589ED84244F(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CSaveGeospatialAnchorHistoryU3Eb__45_0_m0C5057FBA4694CFF222C4BC7E9AC4DC834F0727E_RuntimeMethod_var), NULL);
		Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* L_6 = L_5;
		((U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var))->___U3CU3E9__45_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var))->___U3CU3E9__45_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002b:
	{
		NullCheck(G_B2_1);
		List_1_Sort_m560E0614EE9BCDCCE7F7B73F3525A12EBC33CF2E(G_B2_1, G_B2_0, List_1_Sort_m560E0614EE9BCDCCE7F7B73F3525A12EBC33CF2E_RuntimeMethod_var);
		// if (_historyCollection.Collection.Count > _storageLimit)
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_7 = __this->____historyCollection_36;
		NullCheck(L_7);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_8 = L_7->___Collection_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_inline(L_8, List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_9) > ((int32_t)5))? 1 : 0);
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_006e;
		}
	}
	{
		// _historyCollection.Collection.RemoveRange(
		//     _storageLimit, _historyCollection.Collection.Count - _storageLimit);
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_11 = __this->____historyCollection_36;
		NullCheck(L_11);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_12 = L_11->___Collection_0;
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_13 = __this->____historyCollection_36;
		NullCheck(L_13);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_14 = L_13->___Collection_0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_inline(L_14, List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		NullCheck(L_12);
		List_1_RemoveRange_m4F13468627DA199AA3C739E074A8E5842DC15273(L_12, 5, ((int32_t)il2cpp_codegen_subtract(L_15, 5)), List_1_RemoveRange_m4F13468627DA199AA3C739E074A8E5842DC15273_RuntimeMethod_var);
	}

IL_006e:
	{
		// PlayerPrefs.SetString(
		//     _persistentGeospatialAnchorsStorageKey, JsonUtility.ToJson(_historyCollection));
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_16 = __this->____historyCollection_36;
		String_t* L_17;
		L_17 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_16, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888, L_17, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB(NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SwitchToARView(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_SwitchToARView_mFB94E97C62D009E13324C261E04900D34D47410E (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, bool ___enable0, const RuntimeMethod* method) 
{
	{
		// _isInARView = enable;
		bool L_0 = ___enable0;
		__this->____isInARView_29 = L_0;
		// SessionOrigin.gameObject.SetActive(enable);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_1 = __this->___SessionOrigin_4;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		bool L_3 = ___enable0;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, L_3, NULL);
		// Session.gameObject.SetActive(enable);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_4 = __this->___Session_5;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		bool L_6 = ___enable0;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, L_6, NULL);
		// ARCoreExtensions.gameObject.SetActive(enable);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7 = __this->___ARCoreExtensions_8;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		bool L_9 = ___enable0;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, L_9, NULL);
		// ARViewCanvas.SetActive(enable);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___ARViewCanvas_11;
		bool L_11 = ___enable0;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, L_11, NULL);
		// PrivacyPromptCanvas.SetActive(!enable);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___PrivacyPromptCanvas_10;
		bool L_13 = ___enable0;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::LifecycleUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_LifecycleUpdate_m9DF865831BF6070D17D792ABD8948E03B692AC9C (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E220F394CF0E90F7FEF038F482846BFBB93ED64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80D85E354963DC5787AAB3990BB9B8D1D718AD91);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B11_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (Input.GetKeyUp(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)27), NULL);
		V_2 = L_0;
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
	}

IL_0014:
	{
		// if (_isReturning)
		bool L_2 = __this->____isReturning_30;
		V_3 = L_2;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return;
		goto IL_00d9;
	}

IL_0024:
	{
		// var sleepTimeout = SleepTimeout.NeverSleep;
		V_0 = (-1);
		// if (ARSession.state != ARSessionState.SessionTracking)
		int32_t L_4;
		L_4 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		// sleepTimeout = SleepTimeout.SystemSetting;
		V_0 = ((int32_t)-2);
	}

IL_003c:
	{
		// Screen.sleepTimeout = sleepTimeout;
		int32_t L_6 = V_0;
		Screen_set_sleepTimeout_m82D427509929D2F21494141B9BE5D3E3CE96A22A(L_6, NULL);
		// string returningReason = string.Empty;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_7;
		// if (ARSession.state != ARSessionState.CheckingAvailability &&
		//     ARSession.state != ARSessionState.Ready &&
		//     ARSession.state != ARSessionState.SessionInitializing &&
		//     ARSession.state != ARSessionState.SessionTracking)
		int32_t L_8;
		L_8 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_9;
		L_9 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		if ((((int32_t)L_9) == ((int32_t)5)))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_10;
		L_10 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		if ((((int32_t)L_10) == ((int32_t)6)))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_11;
		L_11 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		G_B11_0 = ((((int32_t)((((int32_t)L_11) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B11_0 = 0;
	}

IL_006f:
	{
		V_5 = (bool)G_B11_0;
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		// returningReason = string.Format(
		//     "Geospatial sample encountered an ARSession error state {0}.\n" +
		//     "Please start the app again.",
		//     ARSession.state);
		int32_t L_13;
		L_13 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16;
		L_16 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral4E220F394CF0E90F7FEF038F482846BFBB93ED64, L_15, NULL);
		V_1 = L_16;
		goto IL_00d1;
	}

IL_008e:
	{
		// else if (SessionOrigin == null || Session == null || ARCoreExtensions == null)
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_17 = __this->___SessionOrigin_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_18)
		{
			goto IL_00b8;
		}
	}
	{
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_19 = __this->___Session_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_20)
		{
			goto IL_00b8;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_21 = __this->___ARCoreExtensions_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B17_0 = ((int32_t)(L_22));
		goto IL_00b9;
	}

IL_00b8:
	{
		G_B17_0 = 1;
	}

IL_00b9:
	{
		V_6 = (bool)G_B17_0;
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00d1;
		}
	}
	{
		// returningReason = string.Format(
		//     "Geospatial sample failed with missing AR Components.");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24;
		L_24 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		String_t* L_25;
		L_25 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral80D85E354963DC5787AAB3990BB9B8D1D718AD91, L_24, NULL);
		V_1 = L_25;
	}

IL_00d1:
	{
		// ReturnWithReason(returningReason);
		String_t* L_26 = V_1;
		GeospatialController_ReturnWithReason_m94789CA6304ABFD05634B43C370B2399383312EF(__this, L_26, NULL);
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ReturnWithReason(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_ReturnWithReason_m94789CA6304ABFD05634B43C370B2399383312EF (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, String_t* ___reason0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23E836F9814F83ED24864553FD4B41704BFEFFA8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (string.IsNullOrEmpty(reason))
		String_t* L_0 = ___reason0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		goto IL_006b;
	}

IL_000e:
	{
		// SetAnchorButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___SetAnchorButton_13;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// ClearAllButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___ClearAllButton_12;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// InfoPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___InfoPanel_14;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// Debug.LogError(reason);
		String_t* L_8 = ___reason0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_8, NULL);
		// SnackBarText.text = reason;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___SnackBarText_16;
		String_t* L_10 = ___reason0;
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_10);
		// _isReturning = true;
		__this->____isReturning_30 = (bool)1;
		// Invoke(nameof(QuitApplication), _errorDisplaySeconds);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral23E836F9814F83ED24864553FD4B41704BFEFFA8, (3.0f), NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::QuitApplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_QuitApplication_m374C0568E0D871CB80991D28B9DAC2F2086B7B0A (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::UpdateDebugInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_UpdateDebugInfo_m4DD7408BE036B30EE50B0F2CB2D5ED7B24B314A1 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarthState_t4663D22E8AF1302E5F67CCE0DCB96CA24D310AC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureSupported_tC15463343F78E985BF776995FBE804EC3D2991A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationServiceStatus_tF9F78681F963A53FD6CA4CDC2DDDBD7B4DF517F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingState_t5487241B6888BB15D8448EBBC640835A011DBBC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0642FD4A763B782EEF7CA72009CA8D1E0FFC5D86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral272FD43E889593108C54482F13ABAACDD71C5FFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D77236056880C0D3C936B020E57CFE072FD559);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A80DBD535E7AFB2B86F791A732EBEEE4BCF7CDB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral659DC561CB989579B2C5DB5BC9116FC03B863958);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80D87A6B5B660BA3CC373D14B317E3A40FC27CD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E5080011A7CA3BD4949A61B46ADA7657E8540F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96EF7EFF0F00A2F793F25BE896448C3A1BBA9828);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7CA9DC3E5A221DFCC0483888D319D118E5CEF90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC7FFF74C9144CC4E77C56C5F9B4FDBC4516816D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A905249C0409DB8B563D30BAE889395AFBDB30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBA251D8CD4C01D372EB4EAC50A26C0633FA71D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF4CB593B711998014E24A8BDC4D1A685D2F9E5B);
		s_Il2CppMethodInitialized = true;
	}
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	{
		// if (!Debug.isDebugBuild || EarthManager == null)
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Debug_get_isDebugBuild_mD757482E7E84FD089E874DD0778A5200D12C14E0(NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_1 = __this->___EarthManager_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// return;
		goto IL_01c7;
	}

IL_0021:
	{
		// var pose = EarthManager.EarthState == EarthState.Enabled &&
		//     EarthManager.EarthTrackingState == TrackingState.Tracking ?
		//     EarthManager.CameraGeospatialPose : new GeospatialPose();
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_4 = __this->___EarthManager_7;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = AREarthManager_get_EarthState_m00405B03AE94D0CFB2E90596C028A35250517D38(L_4, NULL);
		if (L_5)
		{
			goto IL_003c;
		}
	}
	{
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_6 = __this->___EarthManager_7;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A(L_6, NULL);
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_0047;
		}
	}

IL_003c:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C));
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_8 = V_3;
		G_B9_0 = L_8;
		goto IL_0052;
	}

IL_0047:
	{
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_9 = __this->___EarthManager_7;
		NullCheck(L_9);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_10;
		L_10 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_9, NULL);
		G_B9_0 = L_10;
	}

IL_0052:
	{
		V_0 = G_B9_0;
		// var supported = EarthManager.IsGeospatialModeSupported(GeospatialMode.Enabled);
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_11 = __this->___EarthManager_7;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = AREarthManager_IsGeospatialModeSupported_m95784655267321A2E74719CB725D58F368AA278F(L_11, 2, NULL);
		V_1 = L_12;
		// DebugText.text =
		//     $"IsReturning: {_isReturning}\n" +
		//     $"IsLocalizing: {_isLocalizing}\n" +
		//     $"SessionState: {ARSession.state}\n" +
		//     $"LocationServiceStatus: {Input.location.status}\n" +
		//     $"FeatureSupported: {supported}\n" +
		//     $"EarthState: {EarthManager.EarthState}\n" +
		//     $"EarthTrackingState: {EarthManager.EarthTrackingState}\n" +
		//     $"  LAT/LNG: {pose.Latitude:F6}, {pose.Longitude:F6}\n" +
		//     $"  HorizontalAcc: {pose.HorizontalAccuracy:F6}\n" +
		//     $"  ALT: {pose.Altitude:F2}\n" +
		//     $"  VerticalAcc: {pose.VerticalAccuracy:F2}\n" +
		//     $"  Heading: {pose.Heading:F2}\n" +
		//     $"  HeadingAcc: {pose.HeadingAccuracy:F2}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___DebugText_17;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		bool L_16 = __this->____isReturning_30;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19;
		L_19 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral80D87A6B5B660BA3CC373D14B317E3A40FC27CD9, L_18, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_19);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_15;
		bool L_21 = __this->____isLocalizing_31;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24;
		L_24 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral659DC561CB989579B2C5DB5BC9116FC03B863958, L_23, NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_24);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_20;
		int32_t L_26;
		L_26 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7_il2cpp_TypeInfo_var, &L_27);
		String_t* L_29;
		L_29 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralB7CA9DC3E5A221DFCC0483888D319D118E5CEF90, L_28, NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_29);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_29);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_25;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_31;
		L_31 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_31);
		int32_t L_32;
		L_32 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_31, NULL);
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(LocationServiceStatus_tF9F78681F963A53FD6CA4CDC2DDDBD7B4DF517F7_il2cpp_TypeInfo_var, &L_33);
		String_t* L_35;
		L_35 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral3A80DBD535E7AFB2B86F791A732EBEEE4BCF7CDB, L_34, NULL);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_35);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_35);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_30;
		int32_t L_37 = V_1;
		int32_t L_38 = L_37;
		RuntimeObject* L_39 = Box(FeatureSupported_tC15463343F78E985BF776995FBE804EC3D2991A0_il2cpp_TypeInfo_var, &L_38);
		String_t* L_40;
		L_40 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralD7A905249C0409DB8B563D30BAE889395AFBDB30, L_39, NULL);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_40);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_40);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_36;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_42 = __this->___EarthManager_7;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = AREarthManager_get_EarthState_m00405B03AE94D0CFB2E90596C028A35250517D38(L_42, NULL);
		int32_t L_44 = L_43;
		RuntimeObject* L_45 = Box(EarthState_t4663D22E8AF1302E5F67CCE0DCB96CA24D310AC6_il2cpp_TypeInfo_var, &L_44);
		String_t* L_46;
		L_46 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralFF4CB593B711998014E24A8BDC4D1A685D2F9E5B, L_45, NULL);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_46);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_46);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = L_41;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_48 = __this->___EarthManager_7;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A(L_48, NULL);
		int32_t L_50 = L_49;
		RuntimeObject* L_51 = Box(TrackingState_t5487241B6888BB15D8448EBBC640835A011DBBC2_il2cpp_TypeInfo_var, &L_50);
		String_t* L_52;
		L_52 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral96EF7EFF0F00A2F793F25BE896448C3A1BBA9828, L_51, NULL);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_52);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_52);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = L_47;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_54 = V_0;
		double L_55 = L_54.___Latitude_0;
		double L_56 = L_55;
		RuntimeObject* L_57 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_56);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_58 = V_0;
		double L_59 = L_58.___Longitude_1;
		double L_60 = L_59;
		RuntimeObject* L_61 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_60);
		String_t* L_62;
		L_62 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralFBA251D8CD4C01D372EB4EAC50A26C0633FA71D7, L_57, L_61, NULL);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_62);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = L_53;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_64 = V_0;
		double L_65 = L_64.___HorizontalAccuracy_5;
		double L_66 = L_65;
		RuntimeObject* L_67 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_66);
		String_t* L_68;
		L_68 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral31D77236056880C0D3C936B020E57CFE072FD559, L_67, NULL);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_68);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_68);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_69 = L_63;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_70 = V_0;
		double L_71 = L_70.___Altitude_2;
		double L_72 = L_71;
		RuntimeObject* L_73 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_72);
		String_t* L_74;
		L_74 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral8E5080011A7CA3BD4949A61B46ADA7657E8540F9, L_73, NULL);
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_74);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_74);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_75 = L_69;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_76 = V_0;
		double L_77 = L_76.___VerticalAccuracy_6;
		double L_78 = L_77;
		RuntimeObject* L_79 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_78);
		String_t* L_80;
		L_80 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral272FD43E889593108C54482F13ABAACDD71C5FFE, L_79, NULL);
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_80);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_80);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_81 = L_75;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_82 = V_0;
		double L_83 = L_82.___Heading_3;
		double L_84 = L_83;
		RuntimeObject* L_85 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_84);
		String_t* L_86;
		L_86 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral0642FD4A763B782EEF7CA72009CA8D1E0FFC5D86, L_85, NULL);
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, L_86);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_86);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_87 = L_81;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_88 = V_0;
		double L_89 = L_88.___HeadingAccuracy_4;
		double L_90 = L_89;
		RuntimeObject* L_91 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_90);
		String_t* L_92;
		L_92 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralBC7FFF74C9144CC4E77C56C5F9B4FDBC4516816D, L_91, NULL);
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, L_92);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)L_92);
		String_t* L_93;
		L_93 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_87, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_93);
	}

IL_01c7:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController__ctor_m94BF4BBFAAEC1C97890C4E06BF04404FBE6D8FEC (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool _isInARView = false;
		__this->____isInARView_29 = (bool)0;
		// private bool _isReturning = false;
		__this->____isReturning_30 = (bool)0;
		// private bool _isLocalizing = false;
		__this->____isLocalizing_31 = (bool)0;
		// private bool _enablingGeospatial = false;
		__this->____enablingGeospatial_32 = (bool)0;
		// private bool _shouldResolvingHistory = false;
		__this->____shouldResolvingHistory_33 = (bool)0;
		// private float _localizationPassedTime = 0f;
		__this->____localizationPassedTime_34 = (0.0f);
		// private float _configurePrepareTime = 3f;
		__this->____configurePrepareTime_35 = (3.0f);
		// private GeospatialAnchorHistoryCollection _historyCollection = null;
		__this->____historyCollection_36 = (GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____historyCollection_36), (void*)(GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD*)NULL);
		// private List<GameObject> _anchorObjects = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->____anchorObjects_37 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____anchorObjects_37), (void*)L_0);
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
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass44_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_0__ctor_m206123D7ACA17B565E304B013F7E6B41977239F6 (U3CU3Ec__DisplayClass44_0_t4C398E63BD3DC59B6D45D177F95884516A693E93* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass44_0::<LoadGeospatialAnchorHistory>b__0(Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass44_0_U3CLoadGeospatialAnchorHistoryU3Eb__0_m44808C972571EDBAF0EC7C32D2BB4056A959BA71 (U3CU3Ec__DisplayClass44_0_t4C398E63BD3DC59B6D45D177F95884516A693E93* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___data0, const RuntimeMethod* method) 
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// data => current.Subtract(data.CreatedTime).Days > 0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_0 = (&__this->___current_0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A((&___data0), NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_Subtract_m4064A98F489219E9C414DF5C03EE041351B4502A(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = TimeSpan_get_Days_m1317F48F8D9849E161D1CDBEB5CA08344EAAC107((&V_0), NULL);
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
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
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8DCBA89CBECD49EA53B575BB1A8F5A18BA0BF3DB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA* L_0 = (U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA*)il2cpp_codegen_object_new(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mF5556B9529937F2A00DE74AC878F7F351A95CADC(L_0, NULL);
		((U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF5556B9529937F2A00DE74AC878F7F351A95CADC (U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::<SaveGeospatialAnchorHistory>b__45_0(Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory,Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CSaveGeospatialAnchorHistoryU3Eb__45_0_m0C5057FBA4694CFF222C4BC7E9AC4DC834F0727E (U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___left0, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___right1, const RuntimeMethod* method) 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// right.CreatedTime.CompareTo(left.CreatedTime));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A((&___right1), NULL);
		V_0 = L_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A((&___left0), NULL);
		int32_t L_2;
		L_2 = DateTime_CompareTo_m4A3000CD4FF15EA7CA2E9C5C95A9D07F3AA8D35D((&V_0), L_1, NULL);
		return L_2;
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
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAreaScaler_Update_m4C02B57A221CB119573B865749FAEFB0E75F569A (SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// safeArea = Screen.safeArea;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		L_0 = Screen_get_safeArea_m4FFA2CF15868DE7146265B14A4A95FC0561FE5AF(NULL);
		V_0 = L_0;
		// if (_screenSafeArea != safeArea)
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1 = __this->____screenSafeArea_4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = V_0;
		bool L_3;
		L_3 = Rect_op_Inequality_m4698BE8DFFC2C4F79B03116FC33FE1BE823A8945(L_1, L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// _screenSafeArea = safeArea;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5 = V_0;
		__this->____screenSafeArea_4 = L_5;
		// MatchRectTransformToSafeArea();
		SafeAreaScaler_MatchRectTransformToSafeArea_m04E6A9A1444C10EDDC3392285A1C5BE523BE8F64(__this, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::MatchRectTransformToSafeArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAreaScaler_MatchRectTransformToSafeArea_m04E6A9A1444C10EDDC3392285A1C5BE523BE8F64 (SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// RectTransform rectTransform = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		V_0 = L_0;
		// Vector2 offsetMin = new Vector2(_screenSafeArea.xMin,
		//     Screen.height - _screenSafeArea.yMax);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_1 = (&__this->____screenSafeArea_4);
		float L_2;
		L_2 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D(L_1, NULL);
		int32_t L_3;
		L_3 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_4 = (&__this->____screenSafeArea_4);
		float L_5;
		L_5 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E(L_4, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_2, ((float)il2cpp_codegen_subtract(((float)L_3), L_5)), NULL);
		// Vector2 offsetMax = new Vector2(
		//     _screenSafeArea.xMax - Screen.width,
		//     -_screenSafeArea.yMin);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_6 = (&__this->____screenSafeArea_4);
		float L_7;
		L_7 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F(L_6, NULL);
		int32_t L_8;
		L_8 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_9 = (&__this->____screenSafeArea_4);
		float L_10;
		L_10 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F(L_9, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), ((float)il2cpp_codegen_subtract(L_7, ((float)L_8))), ((-L_10)), NULL);
		// rectTransform.offsetMin = offsetMin;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_1;
		NullCheck(L_11);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_11, L_12, NULL);
		// rectTransform.offsetMax = offsetMax;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_2;
		NullCheck(L_13);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAreaScaler__ctor_m61ED2F6F927714C4ED11AA2AEE2A0B9EA79B484B (SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8* __this, const RuntimeMethod* method) 
{
	{
		// private Rect _screenSafeArea = new Rect(0, 0, 0, 0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->____screenSafeArea_4 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline (ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* __this, const RuntimeMethod* method) 
{
	{
		// public Mesh mesh { get; private set; }
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___U3CmeshU3Ek__BackingField_4;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___newX0;
		__this->___x_2 = L_0;
		float L_1 = ___newY1;
		__this->___y_3 = L_1;
		float L_2 = ___newZ2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => s_State;
		int32_t L_0 = ((ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var))->___s_State_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
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
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
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
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_gshared_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method) 
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
		GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* L_3 = (GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_gshared_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___item0, const RuntimeMethod* method) 
{
	GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* L_1 = (GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* L_6 = V_0;
		int32_t L_7 = V_1;
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C)L_8);
		return;
	}

IL_0034:
	{
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_9 = ___item0;
		((  void (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_gshared_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_gshared_inline (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6* __this, const RuntimeMethod* method) 
{
	{
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_0 = (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
