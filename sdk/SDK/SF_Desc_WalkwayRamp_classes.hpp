#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Desc_WalkwayRamp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Desc_WalkwayRamp.Desc_WalkwayRamp_C
// 0x0000 (0x0150 - 0x0150)
class UDesc_WalkwayRamp_C : public UFGBuildingDescriptor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Desc_WalkwayRamp.Desc_WalkwayRamp_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif