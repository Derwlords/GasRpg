// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASRPG_GasPlayer_generated_h
#error "GasPlayer.generated.h already included, missing '#pragma once' in GasPlayer.h"
#endif
#define GASRPG_GasPlayer_generated_h

#define GasRPG_Source_GasRPG_Characters_GasPlayer_h_15_SPARSE_DATA
#define GasRPG_Source_GasRPG_Characters_GasPlayer_h_15_RPC_WRAPPERS
#define GasRPG_Source_GasRPG_Characters_GasPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define GasRPG_Source_GasRPG_Characters_GasPlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGasPlayer(); \
	friend struct Z_Construct_UClass_AGasPlayer_Statics; \
public: \
	DECLARE_CLASS(AGasPlayer, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GasRPG"), NO_API) \
	DECLARE_SERIALIZER(AGasPlayer)


#define GasRPG_Source_GasRPG_Characters_GasPlayer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGasPlayer(); \
	friend struct Z_Construct_UClass_AGasPlayer_Statics; \
public: \
	DECLARE_CLASS(AGasPlayer, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GasRPG"), NO_API) \
	DECLARE_SERIALIZER(AGasPlayer)


#define GasRPG_Source_GasRPG_Characters_GasPlayer_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGasPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGasPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGasPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGasPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGasPlayer(AGasPlayer&&); \
	NO_API AGasPlayer(const AGasPlayer&); \
public:


#define GasRPG_Source_GasRPG_Characters_GasPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGasPlayer(AGasPlayer&&); \
	NO_API AGasPlayer(const AGasPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGasPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGasPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGasPlayer)


#define GasRPG_Source_GasRPG_Characters_GasPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AGasPlayer, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AGasPlayer, Camera); } \
	FORCEINLINE static uint32 __PPO__LookUpRate() { return STRUCT_OFFSET(AGasPlayer, LookUpRate); } \
	FORCEINLINE static uint32 __PPO__TurnRate() { return STRUCT_OFFSET(AGasPlayer, TurnRate); } \
	FORCEINLINE static uint32 __PPO__SprintSpeed() { return STRUCT_OFFSET(AGasPlayer, SprintSpeed); } \
	FORCEINLINE static uint32 __PPO__BaseWalkSpeed() { return STRUCT_OFFSET(AGasPlayer, BaseWalkSpeed); } \
	FORCEINLINE static uint32 __PPO__SprintActive() { return STRUCT_OFFSET(AGasPlayer, SprintActive); }


#define GasRPG_Source_GasRPG_Characters_GasPlayer_h_12_PROLOG
#define GasRPG_Source_GasRPG_Characters_GasPlayer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GasRPG_Source_GasRPG_Characters_GasPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	GasRPG_Source_GasRPG_Characters_GasPlayer_h_15_SPARSE_DATA \
	GasRPG_Source_GasRPG_Characters_GasPlayer_h_15_RPC_WRAPPERS \
	GasRPG_Source_GasRPG_Characters_GasPlayer_h_15_INCLASS \
	GasRPG_Source_GasRPG_Characters_GasPlayer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GasRPG_Source_GasRPG_Characters_GasPlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GasRPG_Source_GasRPG_Characters_GasPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	GasRPG_Source_GasRPG_Characters_GasPlayer_h_15_SPARSE_DATA \
	GasRPG_Source_GasRPG_Characters_GasPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GasRPG_Source_GasRPG_Characters_GasPlayer_h_15_INCLASS_NO_PURE_DECLS \
	GasRPG_Source_GasRPG_Characters_GasPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASRPG_API UClass* StaticClass<class AGasPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GasRPG_Source_GasRPG_Characters_GasPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
