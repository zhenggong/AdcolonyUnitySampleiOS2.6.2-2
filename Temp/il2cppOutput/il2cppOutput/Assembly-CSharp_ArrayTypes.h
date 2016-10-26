#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// ADCVideoZone
struct ADCVideoZone_t922429991;

#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_ADCVideoZone922429991.h"

#pragma once
// ADCVideoZone[]
struct ADCVideoZoneU5BU5D_t1738521950  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) ADCVideoZone_t922429991 * m_Items[1];

public:
	inline ADCVideoZone_t922429991 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ADCVideoZone_t922429991 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ADCVideoZone_t922429991 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
