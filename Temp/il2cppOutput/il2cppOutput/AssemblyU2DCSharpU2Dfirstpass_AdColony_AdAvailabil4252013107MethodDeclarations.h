﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// AdColony/AdAvailabilityChangeDelegate
struct AdAvailabilityChangeDelegate_t4252013107;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void AdColony/AdAvailabilityChangeDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void AdAvailabilityChangeDelegate__ctor_m3553782768 (AdAvailabilityChangeDelegate_t4252013107 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony/AdAvailabilityChangeDelegate::Invoke(System.Boolean,System.String)
extern "C"  void AdAvailabilityChangeDelegate_Invoke_m2304357053 (AdAvailabilityChangeDelegate_t4252013107 * __this, bool ___available0, String_t* ___zone_id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AdAvailabilityChangeDelegate_t4252013107(Il2CppObject* delegate, bool ___available0, String_t* ___zone_id1);
// System.IAsyncResult AdColony/AdAvailabilityChangeDelegate::BeginInvoke(System.Boolean,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AdAvailabilityChangeDelegate_BeginInvoke_m3821921066 (AdAvailabilityChangeDelegate_t4252013107 * __this, bool ___available0, String_t* ___zone_id1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony/AdAvailabilityChangeDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void AdAvailabilityChangeDelegate_EndInvoke_m3667482112 (AdAvailabilityChangeDelegate_t4252013107 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
