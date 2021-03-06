#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Equip_Rifle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Equip_Rifle.Equip_Rifle_C.UserConstructionScript
struct AEquip_Rifle_C_UserConstructionScript_Params
{
};

// Function Equip_Rifle.Equip_Rifle_C.WasEquipped
struct AEquip_Rifle_C_WasEquipped_Params
{
};

// Function Equip_Rifle.Equip_Rifle_C.WasUnEquipped
struct AEquip_Rifle_C_WasUnEquipped_Params
{
};

// Function Equip_Rifle.Equip_Rifle_C.SwitchHUD
struct AEquip_Rifle_C_SwitchHUD_Params
{
	bool                                               ShowHUD;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Equip_Rifle.Equip_Rifle_C.ReceiveBeginPlay
struct AEquip_Rifle_C_ReceiveBeginPlay_Params
{
};

// Function Equip_Rifle.Equip_Rifle_C.PlayReloadEffects
struct AEquip_Rifle_C_PlayReloadEffects_Params
{
};

// Function Equip_Rifle.Equip_Rifle_C.PlayFireEffect
struct AEquip_Rifle_C_PlayFireEffect_Params
{
};

// Function Equip_Rifle.Equip_Rifle_C.ReceiveTick
struct AEquip_Rifle_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Equip_Rifle.Equip_Rifle_C.ExecuteUbergraph_Equip_Rifle
struct AEquip_Rifle_C_ExecuteUbergraph_Equip_Rifle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Equip_Rifle.Equip_Rifle_C.Fire__DelegateSignature
struct AEquip_Rifle_C_Fire__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
