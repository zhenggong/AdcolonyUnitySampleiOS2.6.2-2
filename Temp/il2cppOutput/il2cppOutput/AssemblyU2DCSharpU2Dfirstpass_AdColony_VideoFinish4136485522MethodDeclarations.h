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

// AdColony/VideoFinishedDelegate
struct VideoFinishedDelegate_t4136485522;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void AdColony/VideoFinishedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void VideoFinishedDelegate__ctor_m2493738899 (VideoFinishedDelegate_t4136485522 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony/VideoFinishedDelegate::Invoke(System.Boolean)
extern "C"  void VideoFinishedDelegate_Invoke_m897429604 (VideoFinishedDelegate_t4136485522 * __this, bool ___ad_shown0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_VideoFinishedDelegate_t4136485522(Il2CppObject* delegate, bool ___ad_shown0);
// System.IAsyncResult AdColony/VideoFinishedDelegate::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * VideoFinishedDelegate_BeginInvoke_m4199458449 (VideoFinishedDelegate_t4136485522 * __this, bool ___ad_shown0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony/VideoFinishedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void VideoFinishedDelegate_EndInvoke_m359375651 (VideoFinishedDelegate_t4136485522 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
