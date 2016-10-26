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
// UnityEngine.GUITexture
struct GUITexture_t63494093;
// UnityEngine.Texture
struct Texture_t1769722184;

#include "AssemblyU2DCSharp_GUITextureButton4056278738.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayVideoZoneButton
struct  PlayVideoZoneButton_t479215333  : public GUITextureButton_t4056278738
{
public:
	// System.String PlayVideoZoneButton::zoneId
	String_t* ___zoneId_9;
	// UnityEngine.GUITexture PlayVideoZoneButton::videoZoneStateTexture
	GUITexture_t63494093 * ___videoZoneStateTexture_10;
	// UnityEngine.Texture PlayVideoZoneButton::readyTexture
	Texture_t1769722184 * ___readyTexture_11;
	// UnityEngine.Texture PlayVideoZoneButton::notReadyTexture
	Texture_t1769722184 * ___notReadyTexture_12;
	// System.String PlayVideoZoneButton::zoneIdKey
	String_t* ___zoneIdKey_13;

public:
	inline static int32_t get_offset_of_zoneId_9() { return static_cast<int32_t>(offsetof(PlayVideoZoneButton_t479215333, ___zoneId_9)); }
	inline String_t* get_zoneId_9() const { return ___zoneId_9; }
	inline String_t** get_address_of_zoneId_9() { return &___zoneId_9; }
	inline void set_zoneId_9(String_t* value)
	{
		___zoneId_9 = value;
		Il2CppCodeGenWriteBarrier(&___zoneId_9, value);
	}

	inline static int32_t get_offset_of_videoZoneStateTexture_10() { return static_cast<int32_t>(offsetof(PlayVideoZoneButton_t479215333, ___videoZoneStateTexture_10)); }
	inline GUITexture_t63494093 * get_videoZoneStateTexture_10() const { return ___videoZoneStateTexture_10; }
	inline GUITexture_t63494093 ** get_address_of_videoZoneStateTexture_10() { return &___videoZoneStateTexture_10; }
	inline void set_videoZoneStateTexture_10(GUITexture_t63494093 * value)
	{
		___videoZoneStateTexture_10 = value;
		Il2CppCodeGenWriteBarrier(&___videoZoneStateTexture_10, value);
	}

	inline static int32_t get_offset_of_readyTexture_11() { return static_cast<int32_t>(offsetof(PlayVideoZoneButton_t479215333, ___readyTexture_11)); }
	inline Texture_t1769722184 * get_readyTexture_11() const { return ___readyTexture_11; }
	inline Texture_t1769722184 ** get_address_of_readyTexture_11() { return &___readyTexture_11; }
	inline void set_readyTexture_11(Texture_t1769722184 * value)
	{
		___readyTexture_11 = value;
		Il2CppCodeGenWriteBarrier(&___readyTexture_11, value);
	}

	inline static int32_t get_offset_of_notReadyTexture_12() { return static_cast<int32_t>(offsetof(PlayVideoZoneButton_t479215333, ___notReadyTexture_12)); }
	inline Texture_t1769722184 * get_notReadyTexture_12() const { return ___notReadyTexture_12; }
	inline Texture_t1769722184 ** get_address_of_notReadyTexture_12() { return &___notReadyTexture_12; }
	inline void set_notReadyTexture_12(Texture_t1769722184 * value)
	{
		___notReadyTexture_12 = value;
		Il2CppCodeGenWriteBarrier(&___notReadyTexture_12, value);
	}

	inline static int32_t get_offset_of_zoneIdKey_13() { return static_cast<int32_t>(offsetof(PlayVideoZoneButton_t479215333, ___zoneIdKey_13)); }
	inline String_t* get_zoneIdKey_13() const { return ___zoneIdKey_13; }
	inline String_t** get_address_of_zoneIdKey_13() { return &___zoneIdKey_13; }
	inline void set_zoneIdKey_13(String_t* value)
	{
		___zoneIdKey_13 = value;
		Il2CppCodeGenWriteBarrier(&___zoneIdKey_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
