#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Tutorial_SpaceElevator_Mail_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Tutorial_SpaceElevator_Mail.Tutorial_SpaceElevator_Mail_C
// 0x0028 (0x0288 - 0x0260)
class UTutorial_SpaceElevator_Mail_C : public UFGMessageBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	class URichTextBlock*                              RichTextBlock_1;                                          // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       mText;                                                    // 0x0270(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Tutorial_SpaceElevator_Mail.Tutorial_SpaceElevator_Mail_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_Tutorial_SpaceElevator_Mail(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
