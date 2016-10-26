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
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurrencyTextManager
struct  CurrencyTextManager_t3430949071  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GUIText CurrencyTextManager::currencyText
	GUIText_t2614635829 * ___currencyText_2;
	// UnityEngine.GameObject CurrencyTextManager::currencyButton
	GameObject_t4012695102 * ___currencyButton_3;

public:
	inline static int32_t get_offset_of_currencyText_2() { return static_cast<int32_t>(offsetof(CurrencyTextManager_t3430949071, ___currencyText_2)); }
	inline GUIText_t2614635829 * get_currencyText_2() const { return ___currencyText_2; }
	inline GUIText_t2614635829 ** get_address_of_currencyText_2() { return &___currencyText_2; }
	inline void set_currencyText_2(GUIText_t2614635829 * value)
	{
		___currencyText_2 = value;
		Il2CppCodeGenWriteBarrier(&___currencyText_2, value);
	}

	inline static int32_t get_offset_of_currencyButton_3() { return static_cast<int32_t>(offsetof(CurrencyTextManager_t3430949071, ___currencyButton_3)); }
	inline GameObject_t4012695102 * get_currencyButton_3() const { return ___currencyButton_3; }
	inline GameObject_t4012695102 ** get_address_of_currencyButton_3() { return &___currencyButton_3; }
	inline void set_currencyButton_3(GameObject_t4012695102 * value)
	{
		___currencyButton_3 = value;
		Il2CppCodeGenWriteBarrier(&___currencyButton_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
