#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_ProductionIndicatorInstanced_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProductionIndicatorInstanced.BP_ProductionIndicatorInstanced_C
// 0x0000 (0x0610 - 0x0610)
class UBP_ProductionIndicatorInstanced_C : public UFGProductionIndicatorInstanceComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProductionIndicatorInstanced.BP_ProductionIndicatorInstanced_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
