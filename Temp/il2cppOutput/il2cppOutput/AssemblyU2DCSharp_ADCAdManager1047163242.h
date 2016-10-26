#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ADCAdManager
struct ADCAdManager_t1047163242;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,ADCVideoZone>
struct Dictionary_2_t2560127895;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ADCAdManager
struct  ADCAdManager_t1047163242  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 ADCAdManager::onVideoFinishedCounter
	int32_t ___onVideoFinishedCounter_3;
	// System.Int32 ADCAdManager::onVideoFinishedWithInfoCounter
	int32_t ___onVideoFinishedWithInfoCounter_4;
	// System.Int32 ADCAdManager::onV4VCResultCounter
	int32_t ___onV4VCResultCounter_5;
	// System.Int32 ADCAdManager::onAdAvailabilityChangeCounter
	int32_t ___onAdAvailabilityChangeCounter_6;
	// System.Int32 ADCAdManager::regularCurrency
	int32_t ___regularCurrency_7;
	// System.String ADCAdManager::version
	String_t* ___version_8;
	// System.String ADCAdManager::appId
	String_t* ___appId_9;
	// System.Collections.Generic.Dictionary`2<System.String,ADCVideoZone> ADCAdManager::videoZones
	Dictionary_2_t2560127895 * ___videoZones_10;

public:
	inline static int32_t get_offset_of_onVideoFinishedCounter_3() { return static_cast<int32_t>(offsetof(ADCAdManager_t1047163242, ___onVideoFinishedCounter_3)); }
	inline int32_t get_onVideoFinishedCounter_3() const { return ___onVideoFinishedCounter_3; }
	inline int32_t* get_address_of_onVideoFinishedCounter_3() { return &___onVideoFinishedCounter_3; }
	inline void set_onVideoFinishedCounter_3(int32_t value)
	{
		___onVideoFinishedCounter_3 = value;
	}

	inline static int32_t get_offset_of_onVideoFinishedWithInfoCounter_4() { return static_cast<int32_t>(offsetof(ADCAdManager_t1047163242, ___onVideoFinishedWithInfoCounter_4)); }
	inline int32_t get_onVideoFinishedWithInfoCounter_4() const { return ___onVideoFinishedWithInfoCounter_4; }
	inline int32_t* get_address_of_onVideoFinishedWithInfoCounter_4() { return &___onVideoFinishedWithInfoCounter_4; }
	inline void set_onVideoFinishedWithInfoCounter_4(int32_t value)
	{
		___onVideoFinishedWithInfoCounter_4 = value;
	}

	inline static int32_t get_offset_of_onV4VCResultCounter_5() { return static_cast<int32_t>(offsetof(ADCAdManager_t1047163242, ___onV4VCResultCounter_5)); }
	inline int32_t get_onV4VCResultCounter_5() const { return ___onV4VCResultCounter_5; }
	inline int32_t* get_address_of_onV4VCResultCounter_5() { return &___onV4VCResultCounter_5; }
	inline void set_onV4VCResultCounter_5(int32_t value)
	{
		___onV4VCResultCounter_5 = value;
	}

	inline static int32_t get_offset_of_onAdAvailabilityChangeCounter_6() { return static_cast<int32_t>(offsetof(ADCAdManager_t1047163242, ___onAdAvailabilityChangeCounter_6)); }
	inline int32_t get_onAdAvailabilityChangeCounter_6() const { return ___onAdAvailabilityChangeCounter_6; }
	inline int32_t* get_address_of_onAdAvailabilityChangeCounter_6() { return &___onAdAvailabilityChangeCounter_6; }
	inline void set_onAdAvailabilityChangeCounter_6(int32_t value)
	{
		___onAdAvailabilityChangeCounter_6 = value;
	}

	inline static int32_t get_offset_of_regularCurrency_7() { return static_cast<int32_t>(offsetof(ADCAdManager_t1047163242, ___regularCurrency_7)); }
	inline int32_t get_regularCurrency_7() const { return ___regularCurrency_7; }
	inline int32_t* get_address_of_regularCurrency_7() { return &___regularCurrency_7; }
	inline void set_regularCurrency_7(int32_t value)
	{
		___regularCurrency_7 = value;
	}

	inline static int32_t get_offset_of_version_8() { return static_cast<int32_t>(offsetof(ADCAdManager_t1047163242, ___version_8)); }
	inline String_t* get_version_8() const { return ___version_8; }
	inline String_t** get_address_of_version_8() { return &___version_8; }
	inline void set_version_8(String_t* value)
	{
		___version_8 = value;
		Il2CppCodeGenWriteBarrier(&___version_8, value);
	}

	inline static int32_t get_offset_of_appId_9() { return static_cast<int32_t>(offsetof(ADCAdManager_t1047163242, ___appId_9)); }
	inline String_t* get_appId_9() const { return ___appId_9; }
	inline String_t** get_address_of_appId_9() { return &___appId_9; }
	inline void set_appId_9(String_t* value)
	{
		___appId_9 = value;
		Il2CppCodeGenWriteBarrier(&___appId_9, value);
	}

	inline static int32_t get_offset_of_videoZones_10() { return static_cast<int32_t>(offsetof(ADCAdManager_t1047163242, ___videoZones_10)); }
	inline Dictionary_2_t2560127895 * get_videoZones_10() const { return ___videoZones_10; }
	inline Dictionary_2_t2560127895 ** get_address_of_videoZones_10() { return &___videoZones_10; }
	inline void set_videoZones_10(Dictionary_2_t2560127895 * value)
	{
		___videoZones_10 = value;
		Il2CppCodeGenWriteBarrier(&___videoZones_10, value);
	}
};

struct ADCAdManager_t1047163242_StaticFields
{
public:
	// ADCAdManager ADCAdManager::_instance
	ADCAdManager_t1047163242 * ____instance_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ADCAdManager::<>f__switch$map0
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map0_11;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(ADCAdManager_t1047163242_StaticFields, ____instance_2)); }
	inline ADCAdManager_t1047163242 * get__instance_2() const { return ____instance_2; }
	inline ADCAdManager_t1047163242 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(ADCAdManager_t1047163242 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_11() { return static_cast<int32_t>(offsetof(ADCAdManager_t1047163242_StaticFields, ___U3CU3Ef__switchU24map0_11)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map0_11() const { return ___U3CU3Ef__switchU24map0_11; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map0_11() { return &___U3CU3Ef__switchU24map0_11; }
	inline void set_U3CU3Ef__switchU24map0_11(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map0_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
