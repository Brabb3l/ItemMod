#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_AmbientSetting_MazeCanyons_Wildlife_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AmbientSetting_MazeCanyons_Wildlife.AmbientSetting_MazeCanyons_Wildlife_C
// 0x0000 (0x0050 - 0x0050)
class UAmbientSetting_MazeCanyons_Wildlife_C : public UFGAmbientSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AmbientSetting_MazeCanyons_Wildlife.AmbientSetting_MazeCanyons_Wildlife_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
