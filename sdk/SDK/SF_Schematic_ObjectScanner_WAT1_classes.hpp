#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Schematic_ObjectScanner_WAT1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Schematic_ObjectScanner_WAT1.Schematic_ObjectScanner_WAT1_C
// 0x0000 (0x0140 - 0x0140)
class USchematic_ObjectScanner_WAT1_C : public UFGSchematic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Schematic_ObjectScanner_WAT1.Schematic_ObjectScanner_WAT1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
