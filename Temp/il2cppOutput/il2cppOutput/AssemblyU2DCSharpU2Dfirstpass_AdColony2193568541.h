#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AdColony
struct AdColony_t2193568541;
// System.String
struct String_t;
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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AdColony
struct  AdColony_t2193568541  : public MonoBehaviour_t3012272455
{
public:

public:
};

struct AdColony_t2193568541_StaticFields
{
public:
	// AdColony AdColony::instance
	AdColony_t2193568541 * ___instance_2;
	// System.String AdColony::version
	String_t* ___version_3;
	// AdColony/VideoStartedDelegate AdColony::OnVideoStarted
	VideoStartedDelegate_t3572130635 * ___OnVideoStarted_4;
	// AdColony/VideoFinishedDelegate AdColony::OnVideoFinished
	VideoFinishedDelegate_t4136485522 * ___OnVideoFinished_5;
	// AdColony/VideoFinishedWithInfoDelegate AdColony::OnVideoFinishedWithInfo
	VideoFinishedWithInfoDelegate_t3499076678 * ___OnVideoFinishedWithInfo_6;
	// AdColony/V4VCResultDelegate AdColony::OnV4VCResult
	V4VCResultDelegate_t497930093 * ___OnV4VCResult_7;
	// AdColony/AdAvailabilityChangeDelegate AdColony::OnAdAvailabilityChange
	AdAvailabilityChangeDelegate_t4252013107 * ___OnAdAvailabilityChange_8;
	// System.Boolean AdColony::configured
	bool ___configured_9;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(AdColony_t2193568541_StaticFields, ___instance_2)); }
	inline AdColony_t2193568541 * get_instance_2() const { return ___instance_2; }
	inline AdColony_t2193568541 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(AdColony_t2193568541 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(AdColony_t2193568541_StaticFields, ___version_3)); }
	inline String_t* get_version_3() const { return ___version_3; }
	inline String_t** get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(String_t* value)
	{
		___version_3 = value;
		Il2CppCodeGenWriteBarrier(&___version_3, value);
	}

	inline static int32_t get_offset_of_OnVideoStarted_4() { return static_cast<int32_t>(offsetof(AdColony_t2193568541_StaticFields, ___OnVideoStarted_4)); }
	inline VideoStartedDelegate_t3572130635 * get_OnVideoStarted_4() const { return ___OnVideoStarted_4; }
	inline VideoStartedDelegate_t3572130635 ** get_address_of_OnVideoStarted_4() { return &___OnVideoStarted_4; }
	inline void set_OnVideoStarted_4(VideoStartedDelegate_t3572130635 * value)
	{
		___OnVideoStarted_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnVideoStarted_4, value);
	}

	inline static int32_t get_offset_of_OnVideoFinished_5() { return static_cast<int32_t>(offsetof(AdColony_t2193568541_StaticFields, ___OnVideoFinished_5)); }
	inline VideoFinishedDelegate_t4136485522 * get_OnVideoFinished_5() const { return ___OnVideoFinished_5; }
	inline VideoFinishedDelegate_t4136485522 ** get_address_of_OnVideoFinished_5() { return &___OnVideoFinished_5; }
	inline void set_OnVideoFinished_5(VideoFinishedDelegate_t4136485522 * value)
	{
		___OnVideoFinished_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnVideoFinished_5, value);
	}

	inline static int32_t get_offset_of_OnVideoFinishedWithInfo_6() { return static_cast<int32_t>(offsetof(AdColony_t2193568541_StaticFields, ___OnVideoFinishedWithInfo_6)); }
	inline VideoFinishedWithInfoDelegate_t3499076678 * get_OnVideoFinishedWithInfo_6() const { return ___OnVideoFinishedWithInfo_6; }
	inline VideoFinishedWithInfoDelegate_t3499076678 ** get_address_of_OnVideoFinishedWithInfo_6() { return &___OnVideoFinishedWithInfo_6; }
	inline void set_OnVideoFinishedWithInfo_6(VideoFinishedWithInfoDelegate_t3499076678 * value)
	{
		___OnVideoFinishedWithInfo_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnVideoFinishedWithInfo_6, value);
	}

	inline static int32_t get_offset_of_OnV4VCResult_7() { return static_cast<int32_t>(offsetof(AdColony_t2193568541_StaticFields, ___OnV4VCResult_7)); }
	inline V4VCResultDelegate_t497930093 * get_OnV4VCResult_7() const { return ___OnV4VCResult_7; }
	inline V4VCResultDelegate_t497930093 ** get_address_of_OnV4VCResult_7() { return &___OnV4VCResult_7; }
	inline void set_OnV4VCResult_7(V4VCResultDelegate_t497930093 * value)
	{
		___OnV4VCResult_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnV4VCResult_7, value);
	}

	inline static int32_t get_offset_of_OnAdAvailabilityChange_8() { return static_cast<int32_t>(offsetof(AdColony_t2193568541_StaticFields, ___OnAdAvailabilityChange_8)); }
	inline AdAvailabilityChangeDelegate_t4252013107 * get_OnAdAvailabilityChange_8() const { return ___OnAdAvailabilityChange_8; }
	inline AdAvailabilityChangeDelegate_t4252013107 ** get_address_of_OnAdAvailabilityChange_8() { return &___OnAdAvailabilityChange_8; }
	inline void set_OnAdAvailabilityChange_8(AdAvailabilityChangeDelegate_t4252013107 * value)
	{
		___OnAdAvailabilityChange_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdAvailabilityChange_8, value);
	}

	inline static int32_t get_offset_of_configured_9() { return static_cast<int32_t>(offsetof(AdColony_t2193568541_StaticFields, ___configured_9)); }
	inline bool get_configured_9() const { return ___configured_9; }
	inline bool* get_address_of_configured_9() { return &___configured_9; }
	inline void set_configured_9(bool value)
	{
		___configured_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
