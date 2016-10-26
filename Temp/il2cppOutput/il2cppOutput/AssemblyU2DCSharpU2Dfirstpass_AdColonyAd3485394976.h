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
#include "AssemblyU2DCSharpU2Dfirstpass_IAPEngagementType3754018929.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AdColonyAd
struct  AdColonyAd_t3485394976  : public Il2CppObject
{
public:
	// System.Boolean AdColonyAd::shown
	bool ___shown_0;
	// System.Boolean AdColonyAd::iapEnabled
	bool ___iapEnabled_1;
	// System.String AdColonyAd::productID
	String_t* ___productID_2;
	// IAPEngagementType AdColonyAd::iapEngagementType
	int32_t ___iapEngagementType_3;

public:
	inline static int32_t get_offset_of_shown_0() { return static_cast<int32_t>(offsetof(AdColonyAd_t3485394976, ___shown_0)); }
	inline bool get_shown_0() const { return ___shown_0; }
	inline bool* get_address_of_shown_0() { return &___shown_0; }
	inline void set_shown_0(bool value)
	{
		___shown_0 = value;
	}

	inline static int32_t get_offset_of_iapEnabled_1() { return static_cast<int32_t>(offsetof(AdColonyAd_t3485394976, ___iapEnabled_1)); }
	inline bool get_iapEnabled_1() const { return ___iapEnabled_1; }
	inline bool* get_address_of_iapEnabled_1() { return &___iapEnabled_1; }
	inline void set_iapEnabled_1(bool value)
	{
		___iapEnabled_1 = value;
	}

	inline static int32_t get_offset_of_productID_2() { return static_cast<int32_t>(offsetof(AdColonyAd_t3485394976, ___productID_2)); }
	inline String_t* get_productID_2() const { return ___productID_2; }
	inline String_t** get_address_of_productID_2() { return &___productID_2; }
	inline void set_productID_2(String_t* value)
	{
		___productID_2 = value;
		Il2CppCodeGenWriteBarrier(&___productID_2, value);
	}

	inline static int32_t get_offset_of_iapEngagementType_3() { return static_cast<int32_t>(offsetof(AdColonyAd_t3485394976, ___iapEngagementType_3)); }
	inline int32_t get_iapEngagementType_3() const { return ___iapEngagementType_3; }
	inline int32_t* get_address_of_iapEngagementType_3() { return &___iapEngagementType_3; }
	inline void set_iapEngagementType_3(int32_t value)
	{
		___iapEngagementType_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
