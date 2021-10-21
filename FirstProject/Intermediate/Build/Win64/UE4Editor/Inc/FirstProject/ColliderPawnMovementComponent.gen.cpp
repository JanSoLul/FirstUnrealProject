// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/ColliderPawnMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColliderPawnMovementComponent() {}
// Cross Module References
	FIRSTPROJECT_API UClass* Z_Construct_UClass_UColliderPawnMovementComponent_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_UColliderPawnMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	UPackage* Z_Construct_UPackage__Script_FirstProject();
// End Cross Module References
	void UColliderPawnMovementComponent::StaticRegisterNativesUColliderPawnMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UColliderPawnMovementComponent_NoRegister()
	{
		return UColliderPawnMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UColliderPawnMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UColliderPawnMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColliderPawnMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ColliderPawnMovementComponent.h" },
		{ "ModuleRelativePath", "ColliderPawnMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UColliderPawnMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UColliderPawnMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UColliderPawnMovementComponent_Statics::ClassParams = {
		&UColliderPawnMovementComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UColliderPawnMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UColliderPawnMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UColliderPawnMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UColliderPawnMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UColliderPawnMovementComponent, 327039479);
	template<> FIRSTPROJECT_API UClass* StaticClass<UColliderPawnMovementComponent>()
	{
		return UColliderPawnMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UColliderPawnMovementComponent(Z_Construct_UClass_UColliderPawnMovementComponent, &UColliderPawnMovementComponent::StaticClass, TEXT("/Script/FirstProject"), TEXT("UColliderPawnMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UColliderPawnMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
