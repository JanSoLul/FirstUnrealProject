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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATrap_Statics::ClassParams = {
		&ATrap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(ATrap, 643340556);
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
