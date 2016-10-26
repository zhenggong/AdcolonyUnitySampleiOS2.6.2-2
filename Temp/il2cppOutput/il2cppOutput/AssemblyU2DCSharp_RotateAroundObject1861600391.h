#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RotateAroundObject
struct  RotateAroundObject_t1861600391  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject RotateAroundObject::gameObjectToRotateAround
	GameObject_t4012695102 * ___gameObjectToRotateAround_2;
	// UnityEngine.Vector3 RotateAroundObject::rotationVector
	Vector3_t3525329789  ___rotationVector_3;
	// System.Single RotateAroundObject::rotateSpeed
	float ___rotateSpeed_4;

public:
	inline static int32_t get_offset_of_gameObjectToRotateAround_2() { return static_cast<int32_t>(offsetof(RotateAroundObject_t1861600391, ___gameObjectToRotateAround_2)); }
	inline GameObject_t4012695102 * get_gameObjectToRotateAround_2() const { return ___gameObjectToRotateAround_2; }
	inline GameObject_t4012695102 ** get_address_of_gameObjectToRotateAround_2() { return &___gameObjectToRotateAround_2; }
	inline void set_gameObjectToRotateAround_2(GameObject_t4012695102 * value)
	{
		___gameObjectToRotateAround_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameObjectToRotateAround_2, value);
	}

	inline static int32_t get_offset_of_rotationVector_3() { return static_cast<int32_t>(offsetof(RotateAroundObject_t1861600391, ___rotationVector_3)); }
	inline Vector3_t3525329789  get_rotationVector_3() const { return ___rotationVector_3; }
	inline Vector3_t3525329789 * get_address_of_rotationVector_3() { return &___rotationVector_3; }
	inline void set_rotationVector_3(Vector3_t3525329789  value)
	{
		___rotationVector_3 = value;
	}

	inline static int32_t get_offset_of_rotateSpeed_4() { return static_cast<int32_t>(offsetof(RotateAroundObject_t1861600391, ___rotateSpeed_4)); }
	inline float get_rotateSpeed_4() const { return ___rotateSpeed_4; }
	inline float* get_address_of_rotateSpeed_4() { return &___rotateSpeed_4; }
	inline void set_rotateSpeed_4(float value)
	{
		___rotateSpeed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
