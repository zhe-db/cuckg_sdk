#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Item_Attach_Weapon_Stock_AR_Composite_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Item_Attach_Weapon_Stock_AR_Composite.Item_Attach_Weapon_Stock_AR_Composite_C
// 0x0000 (0x0488 - 0x0488)
class UItem_Attach_Weapon_Stock_AR_Composite_C : public UAttachableItem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x2627ba35);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
