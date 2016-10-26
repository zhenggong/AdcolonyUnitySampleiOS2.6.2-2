#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// AdColony
struct AdColony_t2193568541;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void AdColony::.ctor()
extern "C"  void AdColony__ctor_m1985091282 (AdColony_t2193568541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony::.cctor()
extern "C"  void AdColony__cctor_m926191387 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony::ensureInstance()
extern "C"  void AdColony_ensureInstance_m1227828485 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony::Awake()
extern "C"  void AdColony_Awake_m2222696501 (AdColony_t2193568541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony::OnAdColonyVideoStarted(System.String)
extern "C"  void AdColony_OnAdColonyVideoStarted_m2835150446 (AdColony_t2193568541 * __this, String_t* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony::OnAdColonyVideoFinished(System.String)
extern "C"  void AdColony_OnAdColonyVideoFinished_m3415234881 (AdColony_t2193568541 * __this, String_t* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony::OnAdColonyV4VCResult(System.String)
extern "C"  void AdColony_OnAdColonyV4VCResult_m506671308 (AdColony_t2193568541 * __this, String_t* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony::OnAdColonyAdAvailabilityChange(System.String)
extern "C"  void AdColony_OnAdColonyAdAvailabilityChange_m3853438854 (AdColony_t2193568541 * __this, String_t* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony::Configure(System.String,System.String,System.String[])
extern "C"  void AdColony_Configure_m1808808066 (Il2CppObject * __this /* static, unused */, String_t* ___app_version0, String_t* ___app_id1, StringU5BU5D_t2956870243* ___zone_ids2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony::SetCustomID(System.String)
extern "C"  void AdColony_SetCustomID_m3825639364 (Il2CppObject * __this /* static, unused */, String_t* ___custom_id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AdColony::GetCustomID()
extern "C"  String_t* AdColony_GetCustomID_m2329415535 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony::IOSConfigure(System.String,System.String,System.Int32,System.String[])
extern "C"  void AdColony_IOSConfigure_m3366442366 (Il2CppObject * __this /* static, unused */, String_t* ___app_version0, String_t* ___app_id1, int32_t ___zone_id_count2, StringU5BU5D_t2956870243* ___zone_ids3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AdColony::IsVideoAvailable(System.String)
extern "C"  bool AdColony_IsVideoAvailable_m799697948 (Il2CppObject * __this /* static, unused */, String_t* ___zone_id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AdColony::IsV4VCAvailable(System.String)
extern "C"  bool AdColony_IsV4VCAvailable_m347680410 (Il2CppObject * __this /* static, unused */, String_t* ___zone_id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AdColony::GetOpenUDID()
extern "C"  String_t* AdColony_GetOpenUDID_m4271740503 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AdColony::GetDeviceID()
extern "C"  String_t* AdColony_GetDeviceID_m397322196 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AdColony::GetODIN1()
extern "C"  String_t* AdColony_GetODIN1_m3440513846 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AdColony::GetV4VCAmount(System.String)
extern "C"  int32_t AdColony_GetV4VCAmount_m675047055 (Il2CppObject * __this /* static, unused */, String_t* ___zone_id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AdColony::GetV4VCName(System.String)
extern "C"  String_t* AdColony_GetV4VCName_m3771998249 (Il2CppObject * __this /* static, unused */, String_t* ___zone_id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AdColony::ShowVideoAd(System.String)
extern "C"  bool AdColony_ShowVideoAd_m892937613 (Il2CppObject * __this /* static, unused */, String_t* ___zone_id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AdColony::ShowV4VC(System.Boolean,System.String)
extern "C"  bool AdColony_ShowV4VC_m296204297 (Il2CppObject * __this /* static, unused */, bool ___popup_result0, String_t* ___zone_id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony::OfferV4VC(System.Boolean,System.String)
extern "C"  void AdColony_OfferV4VC_m138697162 (Il2CppObject * __this /* static, unused */, bool ___popup_result0, String_t* ___zone_id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AdColony::StatusForZone(System.String)
extern "C"  String_t* AdColony_StatusForZone_m2497086162 (Il2CppObject * __this /* static, unused */, String_t* ___zone_id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony::NotifyIAPComplete(System.String,System.String,System.String,System.Double,System.Int32)
extern "C"  void AdColony_NotifyIAPComplete_m2392024633 (Il2CppObject * __this /* static, unused */, String_t* ___product_id0, String_t* ___trans_id1, String_t* ___currency_code2, double ___price3, int32_t ___quantity4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony::SetOption(System.String,System.Boolean)
extern "C"  void AdColony_SetOption_m761833954 (Il2CppObject * __this /* static, unused */, String_t* ___option0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
