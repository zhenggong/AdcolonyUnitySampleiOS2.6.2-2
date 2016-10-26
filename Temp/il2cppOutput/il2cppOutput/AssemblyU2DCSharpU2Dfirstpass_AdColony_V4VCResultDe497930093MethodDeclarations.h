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

// AdColony/V4VCResultDelegate
struct V4VCResultDelegate_t497930093;
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

// System.Void AdColony/V4VCResultDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void V4VCResultDelegate__ctor_m3427547562 (V4VCResultDelegate_t497930093 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony/V4VCResultDelegate::Invoke(System.Boolean,System.String,System.Int32)
extern "C"  void V4VCResultDelegate_Invoke_m2925939776 (V4VCResultDelegate_t497930093 * __this, bool ___success0, String_t* ___name1, int32_t ___amount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_V4VCResultDelegate_t497930093(Il2CppObject* delegate, bool ___success0, String_t* ___name1, int32_t ___amount2);
// System.IAsyncResult AdColony/V4VCResultDelegate::BeginInvoke(System.Boolean,System.String,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * V4VCResultDelegate_BeginInvoke_m3778334473 (V4VCResultDelegate_t497930093 * __this, bool ___success0, String_t* ___name1, int32_t ___amount2, AsyncCallback_t1363551830 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdColony/V4VCResultDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void V4VCResultDelegate_EndInvoke_m2286096570 (V4VCResultDelegate_t497930093 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
