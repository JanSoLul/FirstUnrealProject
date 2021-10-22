// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FIRSTPROJECT_TriggerPlate_generated_h
#error "TriggerPlate.generated.h already included, missing '#pragma once' in TriggerPlate.h"
#endif
#define FIRSTPROJECT_TriggerPlate_generated_h

#define FirstProject_Source_FirstProject_TriggerPlate_h_12_SPARSE_DATA
#define FirstProject_Source_FirstProject_TriggerPlate_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdatePlateLocation); \
	DECLARE_FUNCTION(execUpdateDoorLocation); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FirstProject_Source_FirstProject_TriggerPlate_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdatePlateLocation); \
	DECLARE_FUNCTION(execUpdateDoorLocation); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FirstProject_Source_FirstProject_TriggerPlate_h_12_EVENT_PARMS
#define FirstProject_Source_FirstProject_TriggerPlate_h_12_CALLBACK_WRAPPERS
#define FirstProject_Source_FirstProject_TriggerPlate_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerPlate(); \
	friend struct Z_Construct_UClass_ATriggerPlate_Statics; \
public: \
	DECLARE_CLASS(ATriggerPlate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(ATriggerPlate)


#define FirstProject_Source_FirstProject_TriggerPlate_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATriggerPlate(); \
	friend struct Z_Construct_UClass_ATriggerPlate_Statics; \
public: \
	DECLARE_CLASS(ATriggerPlate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(ATriggerPlate)


#define FirstProject_Source_FirstProject_TriggerPlate_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggerPlate(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerPlate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerPlate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerPlate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerPlate(ATriggerPlate&&); \
	NO_API ATriggerPlate(const ATriggerPlate&); \
public:


#define FirstProject_Source_FirstProject_TriggerPlate_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerPlate(ATriggerPlate&&); \
	NO_API ATriggerPlate(const ATriggerPlate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerPlate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerPlate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATriggerPlate)


#define FirstProject_Source_FirstProject_TriggerPlate_h_12_PRIVATE_PROPERTY_OFFSET
#define FirstProject_Source_FirstProject_TriggerPlate_h_9_PROLOG \
	FirstProject_Source_FirstProject_TriggerPlate_h_12_EVENT_PARMS


#define FirstProject_Source_FirstProject_TriggerPlate_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstProject_Source_FirstProject_TriggerPlate_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstProject_Source_FirstProject_TriggerPlate_h_12_SPARSE_DATA \
	FirstProject_Source_FirstProject_TriggerPlate_h_12_RPC_WRAPPERS \
	FirstProject_Source_FirstProject_TriggerPlate_h_12_CALLBACK_WRAPPERS \
	FirstProject_Source_FirstProject_TriggerPlate_h_12_INCLASS \
	FirstProject_Source_FirstProject_TriggerPlate_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstProject_Source_FirstProject_TriggerPlate_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstProject_Source_FirstProject_TriggerPlate_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstProject_Source_FirstProject_TriggerPlate_h_12_SPARSE_DATA \
	FirstProject_Source_FirstProject_TriggerPlate_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstProject_Source_FirstProject_TriggerPlate_h_12_CALLBACK_WRAPPERS \
	FirstProject_Source_FirstProject_TriggerPlate_h_12_INCLASS_NO_PURE_DECLS \
	FirstProject_Source_FirstProject_TriggerPlate_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPROJECT_API UClass* StaticClass<class ATriggerPlate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstProject_Source_FirstProject_TriggerPlate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
