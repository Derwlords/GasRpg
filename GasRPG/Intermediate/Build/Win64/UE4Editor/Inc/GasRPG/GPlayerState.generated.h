// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASRPG_GPlayerState_generated_h
#error "GPlayerState.generated.h already included, missing '#pragma once' in GPlayerState.h"
#endif
#define GASRPG_GPlayerState_generated_h

#define GasRPG_Source_GasRPG_Player_GPlayerState_h_15_SPARSE_DATA
#define GasRPG_Source_GasRPG_Player_GPlayerState_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execAddScore); \
	DECLARE_FUNCTION(execAddGold); \
	DECLARE_FUNCTION(execAddKills); \
	DECLARE_FUNCTION(execGetPlayerScore); \
	DECLARE_FUNCTION(execGetPlayerNumKills); \
	DECLARE_FUNCTION(execGetPlayerGold);


#define GasRPG_Source_GasRPG_Player_GPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execAddScore); \
	DECLARE_FUNCTION(execAddGold); \
	DECLARE_FUNCTION(execAddKills); \
	DECLARE_FUNCTION(execGetPlayerScore); \
	DECLARE_FUNCTION(execGetPlayerNumKills); \
	DECLARE_FUNCTION(execGetPlayerGold);


#define GasRPG_Source_GasRPG_Player_GPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGPlayerState(); \
	friend struct Z_Construct_UClass_AGPlayerState_Statics; \
public: \
	DECLARE_CLASS(AGPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GasRPG"), NO_API) \
	DECLARE_SERIALIZER(AGPlayerState)


#define GasRPG_Source_GasRPG_Player_GPlayerState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGPlayerState(); \
	friend struct Z_Construct_UClass_AGPlayerState_Statics; \
public: \
	DECLARE_CLASS(AGPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GasRPG"), NO_API) \
	DECLARE_SERIALIZER(AGPlayerState)


#define GasRPG_Source_GasRPG_Player_GPlayerState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGPlayerState(AGPlayerState&&); \
	NO_API AGPlayerState(const AGPlayerState&); \
public:


#define GasRPG_Source_GasRPG_Player_GPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGPlayerState(AGPlayerState&&); \
	NO_API AGPlayerState(const AGPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGPlayerState)


#define GasRPG_Source_GasRPG_Player_GPlayerState_h_15_PRIVATE_PROPERTY_OFFSET
#define GasRPG_Source_GasRPG_Player_GPlayerState_h_12_PROLOG
#define GasRPG_Source_GasRPG_Player_GPlayerState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GasRPG_Source_GasRPG_Player_GPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	GasRPG_Source_GasRPG_Player_GPlayerState_h_15_SPARSE_DATA \
	GasRPG_Source_GasRPG_Player_GPlayerState_h_15_RPC_WRAPPERS \
	GasRPG_Source_GasRPG_Player_GPlayerState_h_15_INCLASS \
	GasRPG_Source_GasRPG_Player_GPlayerState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GasRPG_Source_GasRPG_Player_GPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GasRPG_Source_GasRPG_Player_GPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	GasRPG_Source_GasRPG_Player_GPlayerState_h_15_SPARSE_DATA \
	GasRPG_Source_GasRPG_Player_GPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GasRPG_Source_GasRPG_Player_GPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	GasRPG_Source_GasRPG_Player_GPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASRPG_API UClass* StaticClass<class AGPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GasRPG_Source_GasRPG_Player_GPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
