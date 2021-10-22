// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/SpawnVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnVolume() {}
// Cross Module References
	FIRSTPROJECT_API UClass* Z_Construct_UClass_ASpawnVolume_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_ASpawnVolume();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FirstProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_ACritter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASpawnVolume::execSpawnPawns)
	{
		P_GET_OBJECT(UClass,Z_Param_ToSpawn);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnPawns_Implementation(Z_Param_ToSpawn,Z_Param_Out_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpawnVolume::execGetSpawnPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSpawnPoint();
		P_NATIVE_END;
	}
	static FName NAME_ASpawnVolume_SpawnPawns = FName(TEXT("SpawnPawns"));
	void ASpawnVolume::SpawnPawns(UClass* ToSpawn, FVector const& Location)
	{
		SpawnVolume_eventSpawnPawns_Parms Parms;
		Parms.ToSpawn=ToSpawn;
		Parms.Location=Location;
		ProcessEvent(FindFunctionChecked(NAME_ASpawnVolume_SpawnPawns),&Parms);
	}
	void ASpawnVolume::StaticRegisterNativesASpawnVolume()
	{
		UClass* Class = ASpawnVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSpawnPoint", &ASpawnVolume::execGetSpawnPoint },
			{ "SpawnPawns", &ASpawnVolume::execSpawnPawns },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics
	{
		struct SpawnVolume_eventGetSpawnPoint_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpawnVolume_eventGetSpawnPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnVolume, nullptr, "GetSpawnPoint", nullptr, nullptr, sizeof(SpawnVolume_eventGetSpawnPoint_Parms), Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpawnVolume_SpawnPawns_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASpawnVolume_SpawnPawns_Statics::NewProp_ToSpawn = { "ToSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpawnVolume_eventSpawnPawns_Parms, ToSpawn), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnVolume_SpawnPawns_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpawnVolume_SpawnPawns_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpawnVolume_eventSpawnPawns_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASpawnVolume_SpawnPawns_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_SpawnPawns_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnVolume_SpawnPawns_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnVolume_SpawnPawns_Statics::NewProp_ToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnVolume_SpawnPawns_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnVolume_SpawnPawns_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnVolume_SpawnPawns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnVolume, nullptr, "SpawnPawns", nullptr, nullptr, sizeof(SpawnVolume_eventSpawnPawns_Parms), Z_Construct_UFunction_ASpawnVolume_SpawnPawns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_SpawnPawns_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpawnVolume_SpawnPawns_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_SpawnPawns_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpawnVolume_SpawnPawns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpawnVolume_SpawnPawns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpawnVolume_NoRegister()
	{
		return ASpawnVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PawnToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawningBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawningBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpawnVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint, "GetSpawnPoint" }, // 1368547374
		{ &Z_Construct_UFunction_ASpawnVolume_SpawnPawns, "SpawnPawns" }, // 3431713357
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnVolume_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnVolume.h" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnVolume_Statics::NewProp_PawnToSpawn_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnVolume_Statics::NewProp_PawnToSpawn = { "PawnToSpawn", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnVolume, PawnToSpawn), Z_Construct_UClass_ACritter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpawnVolume_Statics::NewProp_PawnToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnVolume_Statics::NewProp_PawnToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnVolume_Statics::NewProp_SpawningBox_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** ?????? ?????\xcf\xb4? ???? ?\xda\xbd? */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
		{ "ToolTip", "?????? ?????\xcf\xb4? ???? ?\xda\xbd?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnVolume_Statics::NewProp_SpawningBox = { "SpawningBox", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnVolume, SpawningBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawnVolume_Statics::NewProp_SpawningBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnVolume_Statics::NewProp_SpawningBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnVolume_Statics::NewProp_PawnToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnVolume_Statics::NewProp_SpawningBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawnVolume_Statics::ClassParams = {
		&ASpawnVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpawnVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawnVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawnVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawnVolume, 1708473768);
	template<> FIRSTPROJECT_API UClass* StaticClass<ASpawnVolume>()
	{
		return ASpawnVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnVolume(Z_Construct_UClass_ASpawnVolume, &ASpawnVolume::StaticClass, TEXT("/Script/FirstProject"), TEXT("ASpawnVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
