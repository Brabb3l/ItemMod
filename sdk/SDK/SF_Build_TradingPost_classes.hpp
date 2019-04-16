#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_TradingPost_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_TradingPost.Build_TradingPost_C
// 0x00F8 (0x07E8 - 0x06F0)
class ABuild_TradingPost_C : public AFGBuildableTradingPost
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06F0(0x0008) (Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight;                                                // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      MainMesh_Skl;                                             // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGFactoryLegsComponent*                     FGFactoryLegs;                                            // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_LadderComponent_C*                       BP_LadderComponent1;                                      // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        PlayerStart3;                                             // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        PlayerStart2;                                             // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        PlayerStart1;                                             // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        PlayerStart0;                                             // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MainMesh;                                                 // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Clearance;                                                // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       mWorkBenchOccupied;                                       // 0x0750(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       mWorkBenchFree;                                           // 0x0768(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UStaticMesh*>                         meshes;                                                   // 0x0780(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                mShipUpgradeLevel;                                        // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0794(0x0004) MISSED OFFSET
	struct FText                                       mStorageText;                                             // 0x0798(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       mMamFreeText;                                             // 0x07B0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       mMamOccupiedText;                                         // 0x07C8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFGCharacterPlayer*                          mLastTradingPostUser;                                     // 0x07E0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_TradingPost.Build_TradingPost_C");
		return ptr;
	}


	ECompassRepresentationType GetActorCompassRepresentationType();
	bool RemoveAsRepresentation();
	struct FRotator GetRealActorRotation();
	struct FVector GetRealActorLocation();
	struct FLinearColor GetActorCompassColor();
	bool GetActorShouldShowInComapss();
	bool GetActorShouldShowOnMap();
	bool AddAsRepresentation();
	struct FText GetActorCompassText();
	class UTexture2D* GetActorCompassTexture();
	bool IsActorStatic();
	void UpdateTradingPostVisibility();
	void UpdateMainMesh();
	void UserConstructionScript();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void OnTradingPostUpgraded(int* Level);
	void ExecuteUbergraph_Build_TradingPost(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
