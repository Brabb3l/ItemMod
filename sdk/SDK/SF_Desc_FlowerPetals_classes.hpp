#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Desc_FlowerPetals_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Desc_FlowerPetals.Desc_FlowerPetals_C
// 0x0000 (0x0128 - 0x0128)
class UDesc_FlowerPetals_C : public UFGItemDescriptorBiomass
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Desc_FlowerPetals.Desc_FlowerPetals_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
