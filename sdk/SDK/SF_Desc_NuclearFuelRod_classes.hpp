#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Desc_NuclearFuelRod_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Desc_NuclearFuelRod.Desc_NuclearFuelRod_C
// 0x0000 (0x0130 - 0x0130)
class UDesc_NuclearFuelRod_C : public UFGItemDescriptorNuclearFuel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Desc_NuclearFuelRod.Desc_NuclearFuelRod_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
