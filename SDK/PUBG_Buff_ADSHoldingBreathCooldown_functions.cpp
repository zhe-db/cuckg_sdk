// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_ADSHoldingBreathCooldown_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABuff_ADSHoldingBreathCooldown_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(85080);

	ABuff_ADSHoldingBreathCooldown_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.StopBuffBlueprint
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bCanceled                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ADSHoldingBreathCooldown_C::StopBuffBlueprint(bool* bCanceled)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(85082);

	ABuff_ADSHoldingBreathCooldown_C_StopBuffBlueprint_Params params;
	params.bCanceled = bCanceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.StartBuffBlueprint
// (Event, Public, BlueprintEvent)

void ABuff_ADSHoldingBreathCooldown_C::StartBuffBlueprint()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(85083);

	ABuff_ADSHoldingBreathCooldown_C_StartBuffBlueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.TickBuff
// (Event, Public, BlueprintEvent)

void ABuff_ADSHoldingBreathCooldown_C::TickBuff()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(85084);

	ABuff_ADSHoldingBreathCooldown_C_TickBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ADSHoldingBreathCooldown_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(85086);

	ABuff_ADSHoldingBreathCooldown_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.ExecuteUbergraph_Buff_ADSHoldingBreathCooldown
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ADSHoldingBreathCooldown_C::ExecuteUbergraph_Buff_ADSHoldingBreathCooldown(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(85100);

	ABuff_ADSHoldingBreathCooldown_C_ExecuteUbergraph_Buff_ADSHoldingBreathCooldown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
