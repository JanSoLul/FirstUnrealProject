// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPROJECT_Trap_generated_h
#error "Trap.generated.h already included, missing '#pragma once' in Trap.h"
#endif
#define FIRSTPROJECT_Trap_generated_h

#define FirstProject_Source_FirstProject_Trap_h_15_SPARSE_DATA
#define FirstProject_Source_FirstProject_Trap_h_15_RPC_WRAPPERS
#define FirstProject_Source_FirstProject_Trap_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FirstProject_Source_FirstProject_Trap_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrap(); \
	friend struct Z_Construct_UClass_ATrap_Statics; \
public: \
	DECLARE_CLASS(ATrap, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(ATrap)


#define FirstProject_Source_FirstProject_Trap_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATrap(); \
	friend struct Z_Construct_UClass_ATrap_Statics; \
public: \
	DECLARE_CLASS(ATrap, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(ATrap)


#define FirstProject_Source_FirstProject_Trap_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATrap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATrap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrap(ATrap&&); \
	NO_API ATrap(const ATrap&); \
public:


#define FirstProject_Source_FirstProject_Trap_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrap(ATrap&&); \
	NO_API ATrap(const ATrap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATrap)


#define FirstProject_Source_FirstProject_Trap_h_15_PRIVATE_PROPERTY_OFFSET
#define FirstProject_Source_FirstProject_Trap_h_12_PROLOG
#define FirstProject_Source_FirstProject_Trap_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstProject_Source_FirstProject_Trap_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstProject_Source_FirstProject_Trap_h_15_SPARSE_DATA \
	FirstProject_Source_FirstProject_Trap_h_15_RPC_WRAPPERS \
	FirstProject_Source_FirstProject_Trap_h_15_INCLASS \
	FirstProject_Source_FirstProject_Trap_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstProject_Source_FirstProject_Trap_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstProject_Source_FirstProject_Trap_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstProject_Source_FirstProject_Trap_h_15_SPARSE_DATA \
	FirstProject_Source_FirstProject_Trap_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstProject_Source_FirstProject_Trap_h_15_INCLASS_NO_PURE_DECLS \
	FirstProject_Source_FirstProject_Trap_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPROJECT_API UClass* StaticClass<class ATrap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstProject_Source_FirstProject_Trap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
