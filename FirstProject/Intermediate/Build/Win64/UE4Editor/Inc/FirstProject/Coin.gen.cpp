// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/Coin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoin() {}
// Cross Module References
	FIRSTPROJECT_API UClass* Z_Construct_UClass_ACoin_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_ACoin();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AItem();
	UPackage* Z_Construct_UPackage__Script_FirstProject();
// End Cross Module References
	void ACoin::StaticRegisterNativesACoin()
	{
	}
	UClass* Z_Construct_UClass_ACoin_NoRegister()
	{
		return ACoin::StaticClass();
	}
	struct Z_Construct_UClass_ACoin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoin_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Coin.h" },
		{ "ModuleRelativePath", "Coin.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACoin_Statics::ClassParams = {
		&ACoin::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACoin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACoin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACoin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACoin, 1548895569);
	template<> FIRSTPROJECT_API UClass* StaticClass<ACoin>()
	{
		return ACoin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACoin(Z_Construct_UClass_ACoin, &ACoin::StaticClass, TEXT("/Script/FirstProject"), TEXT("ACoin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
