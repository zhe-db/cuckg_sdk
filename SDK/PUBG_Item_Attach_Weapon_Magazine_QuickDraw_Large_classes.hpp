#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Item_Attach_Weapon_Magazine_QuickDraw_Large_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Item_Attach_Weapon_Magazine_QuickDraw_Large.Item_Attach_Weapon_Magazine_QuickDraw_Large_C
// 0x0000 (0x0488 - 0x0488)
class UItem_Attach_Weapon_Magazine_QuickDraw_Large_C : public UAttachableItem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x0024a0d1);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
