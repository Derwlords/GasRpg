// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef GASRPG_GASAttribute_generated_h
#error "GASAttribute.generated.h already included, missing '#pragma once' in GASAttribute.h"
#endif
#define GASRPG_GASAttribute_generated_h

#define GasRPG_Source_GasRPG_GAS_GASAttribute_h_20_SPARSE_DATA
#define GasRPG_Source_GasRPG_GAS_GASAttribute_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_AttackPower); \
	DECLARE_FUNCTION(execOnRep_Stamina); \
	DECLARE_FUNCTION(execOnRep_Health);


#define GasRPG_Source_GasRPG_GAS_GASAttribute_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_AttackPower); \
	DECLARE_FUNCTION(execOnRep_Stamina); \
	DECLARE_FUNCTION(execOnRep_Health);


#define GasRPG_Source_GasRPG_GAS_GASAttribute_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGASAttribute(); \
	friend struct Z_Construct_UClass_UGASAttribute_Statics; \
public: \
	DECLARE_CLASS(UGASAttribute, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GasRPG"), NO_API) \
	DECLARE_SERIALIZER(UGASAttribute) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		Stamina, \
		AttackPower, \
		NETFIELD_REP_END=AttackPower	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UGASAttribute) \
public:


#define GasRPG_Source_GasRPG_GAS_GASAttribute_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUGASAttribute(); \
	friend struct Z_Construct_UClass_UGASAttribute_Statics; \
public: \
	DECLARE_CLASS(UGASAttribute, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GasRPG"), NO_API) \
	DECLARE_SERIALIZER(UGASAttribute) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		Stamina, \
		AttackPower, \
		NETFIELD_REP_END=AttackPower	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UGASAttribute) \
public:


#define GasRPG_Source_GasRPG_GAS_GASAttribute_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGASAttribute(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGASAttribute) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGASAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGASAttribute); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGASAttribute(UGASAttribute&&); \
	NO_API UGASAttribute(const UGASAttribute&); \
public:


#define GasRPG_Source_GasRPG_GAS_GASAttribute_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGASAttribute(UGASAttribute&&); \
	NO_API UGASAttribute(const UGASAttribute&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGASAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGASAttribute); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGASAttribute)


#define GasRPG_Source_GasRPG_GAS_GASAttribute_h_20_PRIVATE_PROPERTY_OFFSET
#define GasRPG_Source_GasRPG_GAS_GASAttribute_h_17_PROLOG
#define GasRPG_Source_GasRPG_GAS_GASAttribute_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GasRPG_Source_GasRPG_GAS_GASAttribute_h_20_PRIVATE_PROPERTY_OFFSET \
	GasRPG_Source_GasRPG_GAS_GASAttribute_h_20_SPARSE_DATA \
	GasRPG_Source_GasRPG_GAS_GASAttribute_h_20_RPC_WRAPPERS \
	GasRPG_Source_GasRPG_GAS_GASAttribute_h_20_INCLASS \
	GasRPG_Source_GasRPG_GAS_GASAttribute_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GasRPG_Source_GasRPG_GAS_GASAttribute_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GasRPG_Source_GasRPG_GAS_GASAttribute_h_20_PRIVATE_PROPERTY_OFFSET \
	GasRPG_Source_GasRPG_GAS_GASAttribute_h_20_SPARSE_DATA \
	GasRPG_Source_GasRPG_GAS_GASAttribute_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	GasRPG_Source_GasRPG_GAS_GASAttribute_h_20_INCLASS_NO_PURE_DECLS \
	GasRPG_Source_GasRPG_GAS_GASAttribute_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASRPG_API UClass* StaticClass<class UGASAttribute>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GasRPG_Source_GasRPG_GAS_GASAttribute_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
