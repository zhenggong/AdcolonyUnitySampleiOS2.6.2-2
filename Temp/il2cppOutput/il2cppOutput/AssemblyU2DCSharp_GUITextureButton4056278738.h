#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUITexture
struct GUITexture_t63494093;
// UnityEngine.Texture
struct Texture_t1769722184;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUITextureButton
struct  GUITextureButton_t4056278738  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GUITexture GUITextureButton::buttonGUITexture
	GUITexture_t63494093 * ___buttonGUITexture_2;
	// UnityEngine.Texture GUITextureButton::downTexture
	Texture_t1769722184 * ___downTexture_3;
	// UnityEngine.Texture GUITextureButton::hoverTexture
	Texture_t1769722184 * ___hoverTexture_4;
	// UnityEngine.Texture GUITextureButton::upTexture
	Texture_t1769722184 * ___upTexture_5;
	// System.Boolean GUITextureButton::isPressed
	bool ___isPressed_6;
	// System.Boolean GUITextureButton::dontAllowHover
	bool ___dontAllowHover_7;
	// System.Boolean GUITextureButton::isHovering
	bool ___isHovering_8;

public:
	inline static int32_t get_offset_of_buttonGUITexture_2() { return static_cast<int32_t>(offsetof(GUITextureButton_t4056278738, ___buttonGUITexture_2)); }
	inline GUITexture_t63494093 * get_buttonGUITexture_2() const { return ___buttonGUITexture_2; }
	inline GUITexture_t63494093 ** get_address_of_buttonGUITexture_2() { return &___buttonGUITexture_2; }
	inline void set_buttonGUITexture_2(GUITexture_t63494093 * value)
	{
		___buttonGUITexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___buttonGUITexture_2, value);
	}

	inline static int32_t get_offset_of_downTexture_3() { return static_cast<int32_t>(offsetof(GUITextureButton_t4056278738, ___downTexture_3)); }
	inline Texture_t1769722184 * get_downTexture_3() const { return ___downTexture_3; }
	inline Texture_t1769722184 ** get_address_of_downTexture_3() { return &___downTexture_3; }
	inline void set_downTexture_3(Texture_t1769722184 * value)
	{
		___downTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___downTexture_3, value);
	}

	inline static int32_t get_offset_of_hoverTexture_4() { return static_cast<int32_t>(offsetof(GUITextureButton_t4056278738, ___hoverTexture_4)); }
	inline Texture_t1769722184 * get_hoverTexture_4() const { return ___hoverTexture_4; }
	inline Texture_t1769722184 ** get_address_of_hoverTexture_4() { return &___hoverTexture_4; }
	inline void set_hoverTexture_4(Texture_t1769722184 * value)
	{
		___hoverTexture_4 = value;
		Il2CppCodeGenWriteBarrier(&___hoverTexture_4, value);
	}

	inline static int32_t get_offset_of_upTexture_5() { return static_cast<int32_t>(offsetof(GUITextureButton_t4056278738, ___upTexture_5)); }
	inline Texture_t1769722184 * get_upTexture_5() const { return ___upTexture_5; }
	inline Texture_t1769722184 ** get_address_of_upTexture_5() { return &___upTexture_5; }
	inline void set_upTexture_5(Texture_t1769722184 * value)
	{
		___upTexture_5 = value;
		Il2CppCodeGenWriteBarrier(&___upTexture_5, value);
	}

	inline static int32_t get_offset_of_isPressed_6() { return static_cast<int32_t>(offsetof(GUITextureButton_t4056278738, ___isPressed_6)); }
	inline bool get_isPressed_6() const { return ___isPressed_6; }
	inline bool* get_address_of_isPressed_6() { return &___isPressed_6; }
	inline void set_isPressed_6(bool value)
	{
		___isPressed_6 = value;
	}

	inline static int32_t get_offset_of_dontAllowHover_7() { return static_cast<int32_t>(offsetof(GUITextureButton_t4056278738, ___dontAllowHover_7)); }
	inline bool get_dontAllowHover_7() const { return ___dontAllowHover_7; }
	inline bool* get_address_of_dontAllowHover_7() { return &___dontAllowHover_7; }
	inline void set_dontAllowHover_7(bool value)
	{
		___dontAllowHover_7 = value;
	}

	inline static int32_t get_offset_of_isHovering_8() { return static_cast<int32_t>(offsetof(GUITextureButton_t4056278738, ___isHovering_8)); }
	inline bool get_isHovering_8() const { return ___isHovering_8; }
	inline bool* get_address_of_isHovering_8() { return &___isHovering_8; }
	inline void set_isHovering_8(bool value)
	{
		___isHovering_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
