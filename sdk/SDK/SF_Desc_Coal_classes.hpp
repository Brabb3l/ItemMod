#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Desc_Coal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Desc_Coal.Desc_Coal_C
// 0x0000 (0x0190 - 0x0190)
class UDesc_Coal_C : public UFGResourceDescriptor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Desc_Coal.Desc_Coal_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
