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

#include "AssemblyU2DCSharp_GUITextureButton4056278738.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChangeSceneButton
struct  ChangeSceneButton_t257898734  : public GUITextureButton_t4056278738
{
public:
	// System.String ChangeSceneButton::sceneToChangeTo
	String_t* ___sceneToChangeTo_9;

public:
	inline static int32_t get_offset_of_sceneToChangeTo_9() { return static_cast<int32_t>(offsetof(ChangeSceneButton_t257898734, ___sceneToChangeTo_9)); }
	inline String_t* get_sceneToChangeTo_9() const { return ___sceneToChangeTo_9; }
	inline String_t** get_address_of_sceneToChangeTo_9() { return &___sceneToChangeTo_9; }
	inline void set_sceneToChangeTo_9(String_t* value)
	{
		___sceneToChangeTo_9 = value;
		Il2CppCodeGenWriteBarrier(&___sceneToChangeTo_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
