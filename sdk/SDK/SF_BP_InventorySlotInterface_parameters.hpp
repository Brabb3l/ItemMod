#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_InventorySlotInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_InventorySlotInterface.BP_InventorySlotInterface_C.SubscribeToParentWindow
struct UBP_InventorySlotInterface_C_SubscribeToParentWindow_Params
{
	class UWidget_Window_C*                            ParentWindow;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
