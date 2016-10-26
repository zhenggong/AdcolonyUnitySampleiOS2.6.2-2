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

// AdColony/VideoStartedDelegate
struct VideoStartedDelegate_t3572130635;
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

// System.Void AdColony/VideoStartedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void VideoStartedDelegate__ctor_m4000313096 (VideoStartedDelegate_t3572130635 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony/VideoStartedDelegate::Invoke()
extern "C"  void VideoStartedDelegate_Invoke_m254891362 (VideoStartedDelegate_t3572130635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_VideoStartedDelegate_t3572130635(Il2CppObject* delegate);
// System.IAsyncResult AdColony/VideoStartedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * VideoStartedDelegate_BeginInvoke_m2990074089 (VideoStartedDelegate_t3572130635 * __this, AsyncCallback_t1363551830 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony/VideoStartedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void VideoStartedDelegate_EndInvoke_m1139025176 (VideoStartedDelegate_t3572130635 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
