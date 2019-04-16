#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_Beacon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Beacon.Widget_Beacon_C.SetBeaconColor
struct UWidget_Beacon_C_SetBeaconColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Widget_Beacon.Widget_Beacon_C.SetBeaconText
struct UWidget_Beacon_C_SetBeaconText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_Beacon.Widget_Beacon_C.SetBeaconTexture
struct UWidget_Beacon_C_SetBeaconTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_Beacon.Widget_Beacon_C.Construct
struct UWidget_Beacon_C_Construct_Params
{
};

// Function Widget_Beacon.Widget_Beacon_C.BndEvt__mColorButton_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature
struct UWidget_Beacon_C_BndEvt__mColorButton_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_Beacon.Widget_Beacon_C.OnColorPicked
struct UWidget_Beacon_C_OnColorPicked_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Widget_Beacon.Widget_Beacon_C.BndEvt__Widget_Window_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
struct UWidget_Beacon_C_BndEvt__Widget_Window_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
{
};

// Function Widget_Beacon.Widget_Beacon_C.OnPickup
struct UWidget_Beacon_C_OnPickup_Params
{
};

// Function Widget_Beacon.Widget_Beacon_C.BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature
struct UWidget_Beacon_C_BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_Beacon.Widget_Beacon_C.BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_3_OnTextComitted__DelegateSignature
struct UWidget_Beacon_C_BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_3_OnTextComitted__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_Beacon.Widget_Beacon_C.ExecuteUbergraph_Widget_Beacon
struct UWidget_Beacon_C_ExecuteUbergraph_Widget_Beacon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
