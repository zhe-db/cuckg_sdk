#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Item_Body_Panda_02_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Item_Body_Panda_02.Item_Body_Panda_02_C
// 0x0000 (0x0278 - 0x0278)
class UItem_Body_Panda_02_C : public UEquipableItem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x11cebaa5);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
