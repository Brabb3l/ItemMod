#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Equip_Beacon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Equip_Beacon.Equip_Beacon_C
// 0x0018 (0x03C0 - 0x03A8)
class AEquip_Beacon_C : public AFGConsumableEquipment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Bacon_skl;                                                // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Equip_Beacon.Equip_Beacon_C");
		return ptr;
	}


	void SpawnBeacon();
	void UserConstructionScript();
	void WasEquipped();
	void WasUnEquipped();
	void ExecuteUbergraph_Equip_Beacon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
