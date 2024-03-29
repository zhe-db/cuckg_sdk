#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SelfPutHelperWidget_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SelfPutHelperWidget.SelfPutHelperWidget_C
// 0x0049 (0x0289 - 0x0240)
class USelfPutHelperWidget_C : public UUserWidget
{
public:
	TScriptInterface<class USlotInterface>             SlotInterface;                                            // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        EnableSelfPutIndexList;                                   // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SelectSelfPutIndex;                                       // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSelfPutMode;                                           // 0x0274(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0275(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnNotifySelfPut;                                          // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	EWeaponAttachmentSlotID                            AttachmentSlotID;                                         // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x2307f121);
		return ptr;
	}


	void SwapFromWeapon();
	void SwapFormEquipment();
	void SwapFormVicnityOrInventory();
	void IsSelfPutMode(bool* bIsSelfPutMode);
	void GetFocusData(int* Index, TArray<int>* EnableWeaponIndex, EWeaponAttachmentSlotID* AttachmentSlotID);
	void NextWeapon();
	void PrevWeapon();
	void Put();
	void Stop();
	void StartSelfPutItem(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& Container, bool* bResult, int* StartWeaponIndex);
	void OnNotifySelfPut__DelegateSignature(bool bStart);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
