// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/TriggerPlate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerPlate() {}
// Cross Module References
	FIRSTPROJECT_API UClass* Z_Construct_UClass_ATriggerPlate_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_ATriggerPlate();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FirstProject();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ATriggerPlate::execUpdatePlateLocation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePlateLocation(Z_Param_Z);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATriggerPlate::execUpdateDoorLocation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDoorLocation(Z_Param_Z);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATriggerPlate::execOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATriggerPlate::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	static FName NAME_ATriggerPlate_LowerDoor = FName(TEXT("LowerDoor"));
	void ATriggerPlate::LowerDoor()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATriggerPlate_LowerDoor),NULL);
	}
	static FName NAME_ATriggerPlate_LowerPlate = FName(TEXT("LowerPlate"));
	void ATriggerPlate::LowerPlate()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATriggerPlate_LowerPlate),NULL);
	}
	static FName NAME_ATriggerPlate_UpperDoor = FName(TEXT("UpperDoor"));
	void ATriggerPlate::UpperDoor()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATriggerPlate_UpperDoor),NULL);
	}
	static FName NAME_ATriggerPlate_UpperPlate = FName(TEXT("UpperPlate"));
	void ATriggerPlate::UpperPlate()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATriggerPlate_UpperPlate),NULL);
	}
	void ATriggerPlate::StaticRegisterNativesATriggerPlate()
	{
		UClass* Class = ATriggerPlate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ATriggerPlate::execOnOverlapBegin },
			{ "OnOverlapEnd", &ATriggerPlate::execOnOverlapEnd },
			{ "UpdateDoorLocation", &ATriggerPlate::execUpdateDoorLocation },
			{ "UpdatePlateLocation", &ATriggerPlate::execUpdatePlateLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATriggerPlate_LowerDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerPlate_LowerDoor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trigger Plate" },
		{ "ModuleRelativePath", "TriggerPlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerPlate_LowerDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerPlate, nullptr, "LowerDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerPlate_LowerDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerPlate_LowerDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerPlate_LowerDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerPlate_LowerDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerPlate_LowerPlate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerPlate_LowerPlate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trigger Plate" },
		{ "ModuleRelativePath", "TriggerPlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerPlate_LowerPlate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerPlate, nullptr, "LowerPlate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerPlate_LowerPlate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerPlate_LowerPlate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerPlate_LowerPlate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerPlate_LowerPlate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics
	{
		struct TriggerPlate_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerPlate_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerPlate_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerPlate_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerPlate_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TriggerPlate_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerPlate_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerPlate_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TriggerPlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerPlate, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(TriggerPlate_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics
	{
		struct TriggerPlate_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerPlate_eventOnOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerPlate_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerPlate_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerPlate_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TriggerPlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerPlate, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(TriggerPlate_eventOnOverlapEnd_Parms), Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerPlate_UpdateDoorLocation_Statics
	{
		struct TriggerPlate_eventUpdateDoorLocation_Parms
		{
			float Z;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATriggerPlate_UpdateDoorLocation_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerPlate_eventUpdateDoorLocation_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerPlate_UpdateDoorLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerPlate_UpdateDoorLocation_Statics::NewProp_Z,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerPlate_UpdateDoorLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trigger Plate" },
		{ "ModuleRelativePath", "TriggerPlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerPlate_UpdateDoorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerPlate, nullptr, "UpdateDoorLocation", nullptr, nullptr, sizeof(TriggerPlate_eventUpdateDoorLocation_Parms), Z_Construct_UFunction_ATriggerPlate_UpdateDoorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerPlate_UpdateDoorLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerPlate_UpdateDoorLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerPlate_UpdateDoorLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerPlate_UpdateDoorLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerPlate_UpdateDoorLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerPlate_UpdatePlateLocation_Statics
	{
		struct TriggerPlate_eventUpdatePlateLocation_Parms
		{
			float Z;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATriggerPlate_UpdatePlateLocation_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerPlate_eventUpdatePlateLocation_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerPlate_UpdatePlateLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerPlate_UpdatePlateLocation_Statics::NewProp_Z,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerPlate_UpdatePlateLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trigger Plate" },
		{ "ModuleRelativePath", "TriggerPlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerPlate_UpdatePlateLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerPlate, nullptr, "UpdatePlateLocation", nullptr, nullptr, sizeof(TriggerPlate_eventUpdatePlateLocation_Parms), Z_Construct_UFunction_ATriggerPlate_UpdatePlateLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerPlate_UpdatePlateLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerPlate_UpdatePlateLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerPlate_UpdatePlateLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerPlate_UpdatePlateLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerPlate_UpdatePlateLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerPlate_UpperDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerPlate_UpperDoor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trigger Plate" },
		{ "ModuleRelativePath", "TriggerPlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerPlate_UpperDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerPlate, nullptr, "UpperDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerPlate_UpperDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerPlate_UpperDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerPlate_UpperDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerPlate_UpperDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerPlate_UpperPlate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerPlate_UpperPlate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trigger Plate" },
		{ "ModuleRelativePath", "TriggerPlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerPlate_UpperPlate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerPlate, nullptr, "UpperPlate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerPlate_UpperPlate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerPlate_UpperPlate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerPlate_UpperPlate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerPlate_UpperPlate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATriggerPlate_NoRegister()
	{
		return ATriggerPlate::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerPlate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerPlate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerPlate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialDoorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialDoorLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialPlateLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialPlateLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwitchTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerPlate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATriggerPlate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATriggerPlate_LowerDoor, "LowerDoor" }, // 3525303247
		{ &Z_Construct_UFunction_ATriggerPlate_LowerPlate, "LowerPlate" }, // 308416977
		{ &Z_Construct_UFunction_ATriggerPlate_OnOverlapBegin, "OnOverlapBegin" }, // 2229134865
		{ &Z_Construct_UFunction_ATriggerPlate_OnOverlapEnd, "OnOverlapEnd" }, // 3824299108
		{ &Z_Construct_UFunction_ATriggerPlate_UpdateDoorLocation, "UpdateDoorLocation" }, // 1508446825
		{ &Z_Construct_UFunction_ATriggerPlate_UpdatePlateLocation, "UpdatePlateLocation" }, // 3398419642
		{ &Z_Construct_UFunction_ATriggerPlate_UpperDoor, "UpperDoor" }, // 1939153584
		{ &Z_Construct_UFunction_ATriggerPlate_UpperPlate, "UpperPlate" }, // 4278543595
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerPlate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TriggerPlate.h" },
		{ "ModuleRelativePath", "TriggerPlate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerPlate_Statics::NewProp_TriggerBox_MetaData[] = {
		{ "Category", "Trigger Plate" },
		{ "Comment", "/** Trigger ???? */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TriggerPlate.h" },
		{ "ToolTip", "Trigger ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerPlate_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerPlate, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerPlate_Statics::NewProp_TriggerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerPlate_Statics::NewProp_TriggerBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerPlate_Statics::NewProp_TriggerPlate_MetaData[] = {
		{ "Category", "Trigger Plate" },
		{ "Comment", "/** \xc4\xb3???\xcd\xb0? ?????? Trigger ?\xdb\xb5? */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TriggerPlate.h" },
		{ "ToolTip", "\xc4\xb3???\xcd\xb0? ?????? Trigger ?\xdb\xb5?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerPlate_Statics::NewProp_TriggerPlate = { "TriggerPlate", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerPlate, TriggerPlate), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerPlate_Statics::NewProp_TriggerPlate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerPlate_Statics::NewProp_TriggerPlate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerPlate_Statics::NewProp_Door_MetaData[] = {
		{ "Category", "Trigger Plate" },
		{ "Comment", "/** ???? trigger?? ?\xdf\xb5? ?\xc7\xb8? ?????? ?? */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TriggerPlate.h" },
		{ "ToolTip", "???? trigger?? ?\xdf\xb5? ?\xc7\xb8? ?????? ??" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerPlate_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerPlate, Door), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerPlate_Statics::NewProp_Door_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerPlate_Statics::NewProp_Door_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerPlate_Statics::NewProp_InitialDoorLocation_MetaData[] = {
		{ "Category", "Trigger Plate" },
		{ "ModuleRelativePath", "TriggerPlate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATriggerPlate_Statics::NewProp_InitialDoorLocation = { "InitialDoorLocation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerPlate, InitialDoorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATriggerPlate_Statics::NewProp_InitialDoorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerPlate_Statics::NewProp_InitialDoorLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerPlate_Statics::NewProp_InitialPlateLocation_MetaData[] = {
		{ "Category", "Trigger Plate" },
		{ "ModuleRelativePath", "TriggerPlate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATriggerPlate_Statics::NewProp_InitialPlateLocation = { "InitialPlateLocation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerPlate, InitialPlateLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATriggerPlate_Statics::NewProp_InitialPlateLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerPlate_Statics::NewProp_InitialPlateLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerPlate_Statics::NewProp_SwitchTime_MetaData[] = {
		{ "Category", "Trigger Plate" },
		{ "ModuleRelativePath", "TriggerPlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATriggerPlate_Statics::NewProp_SwitchTime = { "SwitchTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerPlate, SwitchTime), METADATA_PARAMS(Z_Construct_UClass_ATriggerPlate_Statics::NewProp_SwitchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerPlate_Statics::NewProp_SwitchTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriggerPlate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerPlate_Statics::NewProp_TriggerBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerPlate_Statics::NewProp_TriggerPlate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerPlate_Statics::NewProp_Door,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerPlate_Statics::NewProp_InitialDoorLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerPlate_Statics::NewProp_InitialPlateLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerPlate_Statics::NewProp_SwitchTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerPlate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerPlate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATriggerPlate_Statics::ClassParams = {
		&ATriggerPlate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATriggerPlate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerPlate_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerPlate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerPlate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerPlate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATriggerPlate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATriggerPlate, 1904221838);
	template<> FIRSTPROJECT_API UClass* StaticClass<ATriggerPlate>()
	{
		return ATriggerPlate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATriggerPlate(Z_Construct_UClass_ATriggerPlate, &ATriggerPlate::StaticClass, TEXT("/Script/FirstProject"), TEXT("ATriggerPlate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerPlate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
