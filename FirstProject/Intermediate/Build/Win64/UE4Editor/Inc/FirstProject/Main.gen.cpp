// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/Main.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMain() {}
// Cross Module References
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AMain_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AMain();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FirstProject();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AMain::StaticRegisterNativesAMain()
	{
	}
	UClass* Z_Construct_UClass_AMain_NoRegister()
	{
		return AMain::StaticClass();
	}
	struct Z_Construct_UClass_AMain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coins_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Coins;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Main.h" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera Boom -> Player ?\xda\xbf? \xc4\xab?\xde\xb6??? ??\xc4\xa1??\xc5\xb2??. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Main.h" },
		{ "ToolTip", "Camera Boom -> Player ?\xda\xbf? \xc4\xab?\xde\xb6??? ??\xc4\xa1??\xc5\xb2??." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera Boom?? ???????? Camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Main.h" },
		{ "ToolTip", "Camera Boom?? ???????? Camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Camera?? ?\xe2\xba\xbb \xc8\xb8?? ?\xd3\xb5? */" },
		{ "ModuleRelativePath", "Main.h" },
		{ "ToolTip", "Camera?? ?\xe2\xba\xbb \xc8\xb8?? ?\xd3\xb5?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "Comment", "/**\n\x09/* Player Stats\n\x09*/" },
		{ "ModuleRelativePath", "Main.h" },
		{ "ToolTip", "Player Stats" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, Health), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, MaxStamina), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_MaxStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_MaxStamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_Stamina_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, Stamina), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_Stamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_Stamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_Coins_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_Coins = { "Coins", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, Coins), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_Coins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_Coins_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_MaxStamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_Stamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_Coins,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMain>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMain_Statics::ClassParams = {
		&AMain::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMain_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMain_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMain, 1936870206);
	template<> FIRSTPROJECT_API UClass* StaticClass<AMain>()
	{
		return AMain::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMain(Z_Construct_UClass_AMain, &AMain::StaticClass, TEXT("/Script/FirstProject"), TEXT("AMain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
