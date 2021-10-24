// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/Trap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrap() {}
// Cross Module References
	FIRSTPROJECT_API UClass* Z_Construct_UClass_ATrap_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_ATrap();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AItem();
	UPackage* Z_Construct_UPackage__Script_FirstProject();
// End Cross Module References
	void ATrap::StaticRegisterNativesATrap()
	{
	}
	UClass* Z_Construct_UClass_ATrap_NoRegister()
	{
		return ATrap::StaticClass();
	}
	struct Z_Construct_UClass_ATrap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrap_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Trap.h" },
		{ "ModuleRelativePath", "Trap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrap_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "/** ???? ?\xc7\xb0? ?????? */" },
		{ "ModuleRelativePath", "Trap.h" },
		{ "ToolTip", "???? ?\xc7\xb0? ??????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrap_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrap, Damage), METADATA_PARAMS(Z_Construct_UClass_ATrap_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrap_Statics::NewProp_Damage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrap_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATrap_Statics::ClassParams = {
		&ATrap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATrap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATrap_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATrap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATrap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATrap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATrap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATrap, 66713059);
	template<> FIRSTPROJECT_API UClass* StaticClass<ATrap>()
	{
		return ATrap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATrap(Z_Construct_UClass_ATrap, &ATrap::StaticClass, TEXT("/Script/FirstProject"), TEXT("ATrap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
