#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIText
struct GUIText_t2614635829;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CounterText
struct  CounterText_t4107622697  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GUIText CounterText::counterText
	GUIText_t2614635829 * ___counterText_2;
	// System.String CounterText::counterName
	String_t* ___counterName_3;

public:
	inline static int32_t get_offset_of_counterText_2() { return static_cast<int32_t>(offsetof(CounterText_t4107622697, ___counterText_2)); }
	inline GUIText_t2614635829 * get_counterText_2() const { return ___counterText_2; }
	inline GUIText_t2614635829 ** get_address_of_counterText_2() { return &___counterText_2; }
	inline void set_counterText_2(GUIText_t2614635829 * value)
	{
		___counterText_2 = value;
		Il2CppCodeGenWriteBarrier(&___counterText_2, value);
	}

	inline static int32_t get_offset_of_counterName_3() { return static_cast<int32_t>(offsetof(CounterText_t4107622697, ___counterName_3)); }
	inline String_t* get_counterName_3() const { return ___counterName_3; }
	inline String_t** get_address_of_counterName_3() { return &___counterName_3; }
	inline void set_counterName_3(String_t* value)
	{
		___counterName_3 = value;
		Il2CppCodeGenWriteBarrier(&___counterName_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
