// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_WheeledVehicle6W_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WheeledVehicle6W.BP_WheeledVehicle6W_C.UserConstructionScript
// ()

void ABP_WheeledVehicle6W_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle6W.BP_WheeledVehicle6W_C.UserConstructionScript");

	ABP_WheeledVehicle6W_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
