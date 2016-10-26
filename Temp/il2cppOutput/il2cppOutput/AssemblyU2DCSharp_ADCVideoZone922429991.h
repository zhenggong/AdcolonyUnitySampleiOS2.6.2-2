#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_ADCVideoZoneType2476982785.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ADCVideoZone
struct  ADCVideoZone_t922429991  : public Il2CppObject
{
public:
	// System.String ADCVideoZone::zoneId
	String_t* ___zoneId_0;
	// ADCVideoZoneType ADCVideoZone::zoneType
	int32_t ___zoneType_1;

public:
	inline static int32_t get_offset_of_zoneId_0() { return static_cast<int32_t>(offsetof(ADCVideoZone_t922429991, ___zoneId_0)); }
	inline String_t* get_zoneId_0() const { return ___zoneId_0; }
	inline String_t** get_address_of_zoneId_0() { return &___zoneId_0; }
	inline void set_zoneId_0(String_t* value)
	{
		___zoneId_0 = value;
		Il2CppCodeGenWriteBarrier(&___zoneId_0, value);
	}

	inline static int32_t get_offset_of_zoneType_1() { return static_cast<int32_t>(offsetof(ADCVideoZone_t922429991, ___zoneType_1)); }
	inline int32_t get_zoneType_1() const { return ___zoneType_1; }
	inline int32_t* get_address_of_zoneType_1() { return &___zoneType_1; }
	inline void set_zoneType_1(int32_t value)
	{
		___zoneType_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
