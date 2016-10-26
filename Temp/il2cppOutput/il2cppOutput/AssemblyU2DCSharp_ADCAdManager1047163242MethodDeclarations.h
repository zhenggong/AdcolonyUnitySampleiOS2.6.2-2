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

// ADCAdManager
struct ADCAdManager_t1047163242;
// System.String
struct String_t;
// AdColonyAd
struct AdColonyAd_t3485394976;
// AdColony/VideoStartedDelegate
struct VideoStartedDelegate_t3572130635;
// AdColony/VideoFinishedDelegate
struct VideoFinishedDelegate_t4136485522;
// AdColony/VideoFinishedWithInfoDelegate
struct VideoFinishedWithInfoDelegate_t3499076678;
// AdColony/V4VCResultDelegate
struct V4VCResultDelegate_t497930093;
// AdColony/AdAvailabilityChangeDelegate
struct AdAvailabilityChangeDelegate_t4252013107;
// ADCVideoZone
struct ADCVideoZone_t922429991;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Collections.Generic.Dictionary`2<System.String,ADCVideoZone>
struct Dictionary_2_t2560127895;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AdColonyAd3485394976.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AdColony_VideoStarte3572130635.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AdColony_VideoFinish4136485522.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AdColony_VideoFinish3499076678.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AdColony_V4VCResultDe497930093.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AdColony_AdAvailabil4252013107.h"
#include "AssemblyU2DCSharp_ADCVideoZoneType2476982785.h"

// System.Void ADCAdManager::.ctor()
extern "C"  void ADCAdManager__ctor_m1911912561 (ADCAdManager_t1047163242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ADCAdManager ADCAdManager::get_Instance()
extern "C"  ADCAdManager_t1047163242 * ADCAdManager_get_Instance_m1286007844 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ADCAdManager::GetCounter(System.String)
extern "C"  int32_t ADCAdManager_GetCounter_m2966112347 (ADCAdManager_t1047163242 * __this, String_t* ___counterName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::Awake()
extern "C"  void ADCAdManager_Awake_m2149517780 (ADCAdManager_t1047163242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::Start()
extern "C"  void ADCAdManager_Start_m859050353 (ADCAdManager_t1047163242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::Update()
extern "C"  void ADCAdManager_Update_m866609340 (ADCAdManager_t1047163242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::Pause()
extern "C"  void ADCAdManager_Pause_m1966038533 (ADCAdManager_t1047163242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::Resume()
extern "C"  void ADCAdManager_Resume_m3503206176 (ADCAdManager_t1047163242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::ConfigureADCPlugin()
extern "C"  void ADCAdManager_ConfigureADCPlugin_m2434220960 (ADCAdManager_t1047163242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::ConfigureZones()
extern "C"  void ADCAdManager_ConfigureZones_m2152599284 (ADCAdManager_t1047163242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::OnVideoStarted()
extern "C"  void ADCAdManager_OnVideoStarted_m3887308280 (ADCAdManager_t1047163242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::OnVideoFinished(System.Boolean)
extern "C"  void ADCAdManager_OnVideoFinished_m1882835380 (ADCAdManager_t1047163242 * __this, bool ___adWasShown0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::OnVideoFinishedWithInfo(AdColonyAd)
extern "C"  void ADCAdManager_OnVideoFinishedWithInfo_m3856541329 (ADCAdManager_t1047163242 * __this, AdColonyAd_t3485394976 * ___ad0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::OnV4VCResult(System.Boolean,System.String,System.Int32)
extern "C"  void ADCAdManager_OnV4VCResult_m2393939882 (ADCAdManager_t1047163242 * __this, bool ___success0, String_t* ___name1, int32_t ___amount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::OnAdAvailabilityChange(System.Boolean,System.String)
extern "C"  void ADCAdManager_OnAdAvailabilityChange_m1067690835 (ADCAdManager_t1047163242 * __this, bool ___avail0, String_t* ___zoneId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::AddOnVideoStartedMethod(AdColony/VideoStartedDelegate)
extern "C"  void ADCAdManager_AddOnVideoStartedMethod_m1601744191 (Il2CppObject * __this /* static, unused */, VideoStartedDelegate_t3572130635 * ___onVideoStarted0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::RemoveOnVideoStartedMethod(AdColony/VideoStartedDelegate)
extern "C"  void ADCAdManager_RemoveOnVideoStartedMethod_m688986072 (Il2CppObject * __this /* static, unused */, VideoStartedDelegate_t3572130635 * ___onVideoStarted0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::AddOnVideoFinishedMethod(AdColony/VideoFinishedDelegate)
extern "C"  void ADCAdManager_AddOnVideoFinishedMethod_m332478945 (Il2CppObject * __this /* static, unused */, VideoFinishedDelegate_t4136485522 * ___onVideoFinished0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::RemoveOnVideoFinishedMethod(AdColony/VideoFinishedDelegate)
extern "C"  void ADCAdManager_RemoveOnVideoFinishedMethod_m3640222266 (Il2CppObject * __this /* static, unused */, VideoFinishedDelegate_t4136485522 * ___onVideoFinished0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::AddOnVideoFinishedWithInfoMethod(AdColony/VideoFinishedWithInfoDelegate)
extern "C"  void ADCAdManager_AddOnVideoFinishedWithInfoMethod_m3169512801 (Il2CppObject * __this /* static, unused */, VideoFinishedWithInfoDelegate_t3499076678 * ___onVideoFinishedWithInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::RemoveOnVideoFinishedWithInfoMethod(AdColony/VideoFinishedWithInfoDelegate)
extern "C"  void ADCAdManager_RemoveOnVideoFinishedWithInfoMethod_m3352380346 (Il2CppObject * __this /* static, unused */, VideoFinishedWithInfoDelegate_t3499076678 * ___onVideoFinishedWithInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::AddOnV4VCResultMethod(AdColony/V4VCResultDelegate)
extern "C"  void ADCAdManager_AddOnV4VCResultMethod_m2238934203 (Il2CppObject * __this /* static, unused */, V4VCResultDelegate_t497930093 * ___onV4VCResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::RemoveOnV4VCResultMethod(AdColony/V4VCResultDelegate)
extern "C"  void ADCAdManager_RemoveOnV4VCResultMethod_m882052052 (Il2CppObject * __this /* static, unused */, V4VCResultDelegate_t497930093 * ___onV4VCResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::AddOnAdAvailabilityChangeMethod(AdColony/AdAvailabilityChangeDelegate)
extern "C"  void ADCAdManager_AddOnAdAvailabilityChangeMethod_m1871764079 (Il2CppObject * __this /* static, unused */, AdAvailabilityChangeDelegate_t4252013107 * ___onAdAvailabilityChange0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::RemoveOnAdAvailabilityChangeMethod(AdColony/AdAvailabilityChangeDelegate)
extern "C"  void ADCAdManager_RemoveOnAdAvailabilityChangeMethod_m2493182728 (Il2CppObject * __this /* static, unused */, AdAvailabilityChangeDelegate_t4252013107 * ___onAdAvailabilityChange0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::AddToCurrency(System.Int32)
extern "C"  void ADCAdManager_AddToCurrency_m3715574477 (Il2CppObject * __this /* static, unused */, int32_t ___amountToAddToCurrency0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ADCAdManager::GetRegularCurrencyAmount()
extern "C"  int32_t ADCAdManager_GetRegularCurrencyAmount_m753791696 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::ResetADCAdManagerZones()
extern "C"  void ADCAdManager_ResetADCAdManagerZones_m3379231809 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::AddZoneToManager(System.String,System.String,ADCVideoZoneType)
extern "C"  void ADCAdManager_AddZoneToManager_m593608287 (Il2CppObject * __this /* static, unused */, String_t* ___zoneKey0, String_t* ___zoneId1, int32_t ___videoZoneType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ADCVideoZone ADCAdManager::GetVideoZoneObjectByKey(System.String)
extern "C"  ADCVideoZone_t922429991 * ADCAdManager_GetVideoZoneObjectByKey_m1231487633 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ADCAdManager::GetZoneIdByKey(System.String)
extern "C"  String_t* ADCAdManager_GetZoneIdByKey_m1861942433 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ADCAdManager::ContainsZoneKey(System.String)
extern "C"  bool ADCAdManager_ContainsZoneKey_m2168295827 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::RemoveZoneFromManager(System.String)
extern "C"  void ADCAdManager_RemoveZoneFromManager_m3105828160 (Il2CppObject * __this /* static, unused */, String_t* ___zoneKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ADCAdManager::GetVideoZoneIdsAsStringArray()
extern "C"  StringU5BU5D_t2956870243* ADCAdManager_GetVideoZoneIdsAsStringArray_m1082085187 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,ADCVideoZone> ADCAdManager::GetVideoZonesDictionary()
extern "C"  Dictionary_2_t2560127895 * ADCAdManager_GetVideoZonesDictionary_m989761034 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ADCAdManager::ShowVideoAdByZoneKey(System.String,System.Boolean,System.Boolean)
extern "C"  void ADCAdManager_ShowVideoAdByZoneKey_m10439092 (Il2CppObject * __this /* static, unused */, String_t* ___zoneIdKey0, bool ___offerV4VCBeforePlay1, bool ___showPopUpAfter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
