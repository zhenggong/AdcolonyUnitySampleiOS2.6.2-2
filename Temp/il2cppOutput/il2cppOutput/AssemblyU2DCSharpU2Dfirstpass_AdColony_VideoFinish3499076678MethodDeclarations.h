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

// AdColony/VideoFinishedWithInfoDelegate
struct VideoFinishedWithInfoDelegate_t3499076678;
// System.Object
struct Il2CppObject;
// AdColonyAd
struct AdColonyAd_t3485394976;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AdColonyAd3485394976.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void AdColony/VideoFinishedWithInfoDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void VideoFinishedWithInfoDelegate__ctor_m3159764295 (VideoFinishedWithInfoDelegate_t3499076678 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony/VideoFinishedWithInfoDelegate::Invoke(AdColonyAd)
extern "C"  void VideoFinishedWithInfoDelegate_Invoke_m3576011329 (VideoFinishedWithInfoDelegate_t3499076678 * __this, AdColonyAd_t3485394976 * ___ad_shown0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_VideoFinishedWithInfoDelegate_t3499076678(Il2CppObject* delegate, AdColonyAd_t3485394976 * ___ad_shown0);
// System.IAsyncResult AdColony/VideoFinishedWithInfoDelegate::BeginInvoke(AdColonyAd,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * VideoFinishedWithInfoDelegate_BeginInvoke_m1172431100 (VideoFinishedWithInfoDelegate_t3499076678 * __this, AdColonyAd_t3485394976 * ___ad_shown0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony/VideoFinishedWithInfoDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void VideoFinishedWithInfoDelegate_EndInvoke_m652827351 (VideoFinishedWithInfoDelegate_t3499076678 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
