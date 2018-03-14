// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TN_AudioTestActor_V2_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.PrintDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DistanceInMeters               (Parm, ZeroConstructor, IsPlainOldData)

void ATN_AudioTestActor_V2_C::PrintDistance(float DistanceInMeters)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(105404);

	ATN_AudioTestActor_V2_C_PrintDistance_Params params;
	params.DistanceInMeters = DistanceInMeters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.PlayAudioRetrigger
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATN_AudioTestActor_V2_C::PlayAudioRetrigger()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(105400);

	ATN_AudioTestActor_V2_C_PlayAudioRetrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.Retrigger
// (Public, BlueprintCallable, BlueprintEvent)

void ATN_AudioTestActor_V2_C::Retrigger()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(105399);

	ATN_AudioTestActor_V2_C_Retrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.PrintText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InText                         (Parm, ZeroConstructor)

void ATN_AudioTestActor_V2_C::PrintText(const struct FString& InText)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(105396);

	ATN_AudioTestActor_V2_C_PrintText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.SetSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Group                          (Parm, ZeroConstructor)
// struct FString                 Param                          (Parm, ZeroConstructor)

void ATN_AudioTestActor_V2_C::SetSwitch(const struct FString& Group, const struct FString& Param)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(105390);

	ATN_AudioTestActor_V2_C_SetSwitch_Params params;
	params.Group = Group;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.SetNextSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForward                       (Parm, ZeroConstructor, IsPlainOldData)

void ATN_AudioTestActor_V2_C::SetNextSound(bool bForward)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(105378);

	ATN_AudioTestActor_V2_C_SetNextSound_Params params;
	params.bForward = bForward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.Destroy
// (Public, BlueprintCallable, BlueprintEvent)

void ATN_AudioTestActor_V2_C::Destroy()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(105377);

	ATN_AudioTestActor_V2_C_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.PlayAudio
// (Public, BlueprintCallable, BlueprintEvent)

void ATN_AudioTestActor_V2_C::PlayAudio()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(105371);

	ATN_AudioTestActor_V2_C_PlayAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerPawn_v2_C*        Parent                         (Parm, ZeroConstructor, IsPlainOldData)

void ATN_AudioTestActor_V2_C::Initialize(class APlayerPawn_v2_C* Parent)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(105367);

	ATN_AudioTestActor_V2_C_Initialize_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATN_AudioTestActor_V2_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(105366);

	ATN_AudioTestActor_V2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATN_AudioTestActor_V2_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(105364);

	ATN_AudioTestActor_V2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.ExecuteUbergraph_TN_AudioTestActor_V2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATN_AudioTestActor_V2_C::ExecuteUbergraph_TN_AudioTestActor_V2(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(105355);

	ATN_AudioTestActor_V2_C_ExecuteUbergraph_TN_AudioTestActor_V2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
