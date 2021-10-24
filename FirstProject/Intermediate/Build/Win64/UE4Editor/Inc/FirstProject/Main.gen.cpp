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
	FIRSTPROJECT_API UEnum* Z_Construct_UEnum_FirstProject_EStaminaStatus();
	UPackage* Z_Construct_UPackage__Script_FirstProject();
	FIRSTPROJECT_API UEnum* Z_Construct_UEnum_FirstProject_EMovementStatus();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AMain_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AMain();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	static UEnum* EStaminaStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirstProject_EStaminaStatus, Z_Construct_UPackage__Script_FirstProject(), TEXT("EStaminaStatus"));
		}
		return Singleton;
	}
	template<> FIRSTPROJECT_API UEnum* StaticEnum<EStaminaStatus>()
	{
		return EStaminaStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStaminaStatus(EStaminaStatus_StaticEnum, TEXT("/Script/FirstProject"), TEXT("EStaminaStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirstProject_EStaminaStatus_Hash() { return 2391752890U; }
	UEnum* Z_Construct_UEnum_FirstProject_EStaminaStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirstProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStaminaStatus"), 0, Get_Z_Construct_UEnum_FirstProject_EStaminaStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStaminaStatus::ESS_Normal", (int64)EStaminaStatus::ESS_Normal },
				{ "EStaminaStatus::ESS_Exhuasted", (int64)EStaminaStatus::ESS_Exhuasted },
				{ "EStaminaStatus::ESS_MAX", (int64)EStaminaStatus::ESS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ESS_Exhuasted.DisplayName", "Exhuasted" },
				{ "ESS_Exhuasted.Name", "EStaminaStatus::ESS_Exhuasted" },
				{ "ESS_MAX.DisplayName", "DefaultMax" },
				{ "ESS_MAX.Name", "EStaminaStatus::ESS_MAX" },
				{ "ESS_Normal.DisplayName", "Normal" },
				{ "ESS_Normal.Name", "EStaminaStatus::ESS_Normal" },
				{ "ModuleRelativePath", "Main.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirstProject,
				nullptr,
				"EStaminaStatus",
				"EStaminaStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMovementStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirstProject_EMovementStatus, Z_Construct_UPackage__Script_FirstProject(), TEXT("EMovementStatus"));
		}
		return Singleton;
	}
	template<> FIRSTPROJECT_API UEnum* StaticEnum<EMovementStatus>()
	{
		return EMovementStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovementStatus(EMovementStatus_StaticEnum, TEXT("/Script/FirstProject"), TEXT("EMovementStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirstProject_EMovementStatus_Hash() { return 1992753061U; }
	UEnum* Z_Construct_UEnum_FirstProject_EMovementStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirstProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovementStatus"), 0, Get_Z_Construct_UEnum_FirstProject_EMovementStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovementStatus::EMS_Normal", (int64)EMovementStatus::EMS_Normal },
				{ "EMovementStatus::EMS_Sprinting", (int64)EMovementStatus::EMS_Sprinting },
				{ "EMovementStatus::EMS_MAX", (int64)EMovementStatus::EMS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EMS_MAX.DisplayName", "DefaultMax" },
				{ "EMS_MAX.Name", "EMovementStatus::EMS_MAX" },
				{ "EMS_Normal.DisplayName", "Normal" },
				{ "EMS_Normal.Name", "EMovementStatus::EMS_Normal" },
				{ "EMS_Sprinting.DisplayName", "Sprinting" },
				{ "EMS_Sprinting.Name", "EMovementStatus::EMS_Sprinting" },
				{ "ModuleRelativePath", "Main.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirstProject,
				nullptr,
				"EMovementStatus",
				"EMovementStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
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
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StaminaStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StaminaStatus;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunningSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunningSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaDrainRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaminaDrainRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSprintStamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSprintStamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaRecoveryRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaminaRecoveryRate;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMain_Statics::NewProp_MovementStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_MovementStatus_MetaData[] = {
		{ "Category", "Enums" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_MovementStatus = { "MovementStatus", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, MovementStatus), Z_Construct_UEnum_FirstProject_EMovementStatus, METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_MovementStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_MovementStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMain_Statics::NewProp_StaminaStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_StaminaStatus_MetaData[] = {
		{ "Category", "Enums" },
		{ "ModuleRelativePath", "Main.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_StaminaStatus = { "StaminaStatus", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, StaminaStatus), Z_Construct_UEnum_FirstProject_EStaminaStatus, METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_StaminaStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_StaminaStatus_MetaData)) };
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_RunningSpeed_MetaData[] = {
		{ "Category", "Running" },
		{ "Comment", "/** ?\xcf\xb9? ?\xde\xb8??? ???\xc7\xb5? */" },
		{ "ModuleRelativePath", "Main.h" },
		{ "ToolTip", "?\xcf\xb9? ?\xde\xb8??? ???\xc7\xb5?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_RunningSpeed = { "RunningSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, RunningSpeed), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_RunningSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_RunningSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_SprintingSpeed_MetaData[] = {
		{ "Category", "Running" },
		{ "Comment", "/** ???? ???? ???\xc7\xb5? */" },
		{ "ModuleRelativePath", "Main.h" },
		{ "ToolTip", "???? ???? ???\xc7\xb5?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_SprintingSpeed = { "SprintingSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, SprintingSpeed), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_SprintingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_SprintingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_StaminaDrainRate_MetaData[] = {
		{ "Category", "Running" },
		{ "Comment", "/** ???? ?????? ?? ?\xd2\xb8??\xc7\xb4? Stamina */" },
		{ "ModuleRelativePath", "Main.h" },
		{ "ToolTip", "???? ?????? ?? ?\xd2\xb8??\xc7\xb4? Stamina" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_StaminaDrainRate = { "StaminaDrainRate", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, StaminaDrainRate), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_StaminaDrainRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_StaminaDrainRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_MinSprintStamina_MetaData[] = {
		{ "Category", "Running" },
		{ "Comment", "/** ???? ?????\xcf\xb1? ???? ?\xca\xbf??? ?\xd6\xbc? Stamina */" },
		{ "ModuleRelativePath", "Main.h" },
		{ "ToolTip", "???? ?????\xcf\xb1? ???? ?\xca\xbf??? ?\xd6\xbc? Stamina" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_MinSprintStamina = { "MinSprintStamina", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, MinSprintStamina), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_MinSprintStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_MinSprintStamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_Statics::NewProp_StaminaRecoveryRate_MetaData[] = {
		{ "Category", "Running" },
		{ "Comment", "/** ?\xc3\xb0??? ?\xda\xb5????? \xc8\xb8???\xc7\xb4? Stamina */" },
		{ "ModuleRelativePath", "Main.h" },
		{ "ToolTip", "?\xc3\xb0??? ?\xda\xb5????? \xc8\xb8???\xc7\xb4? Stamina" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_Statics::NewProp_StaminaRecoveryRate = { "StaminaRecoveryRate", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain, StaminaRecoveryRate), METADATA_PARAMS(Z_Construct_UClass_AMain_Statics::NewProp_StaminaRecoveryRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Statics::NewProp_StaminaRecoveryRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_MovementStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_MovementStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_StaminaStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_StaminaStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_MaxStamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_Stamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_Coins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_RunningSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_SprintingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_StaminaDrainRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_MinSprintStamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Statics::NewProp_StaminaRecoveryRate,
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
	IMPLEMENT_CLASS(AMain, 2248522199);
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
