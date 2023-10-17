// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASRPG_BaseObject_generated_h
#error "BaseObject.generated.h already included, missing '#pragma once' in BaseObject.h"
#endif
#define GASRPG_BaseObject_generated_h

#define GasRPG_Source_GasRPG_Selectable_Objects_BaseObject_h_12_SPARSE_DATA
#define GasRPG_Source_GasRPG_Selectable_Objects_BaseObject_h_12_RPC_WRAPPERS
#define GasRPG_Source_GasRPG_Selectable_Objects_BaseObject_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GasRPG_Source_GasRPG_Selectable_Objects_BaseObject_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseObject(); \
	friend struct Z_Construct_UClass_ABaseObject_Statics; \
public: \
	DECLARE_CLASS(ABaseObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GasRPG"), NO_API) \
	DECLARE_SERIALIZER(ABaseObject)


#define GasRPG_Source_GasRPG_Selectable_Objects_BaseObject_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABaseObject(); \
	friend struct Z_Construct_UClass_ABaseObject_Statics; \
public: \
	DECLARE_CLASS(ABaseObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GasRPG"), NO_API) \
	DECLARE_SERIALIZER(ABaseObject)


#define GasRPG_Source_GasRPG_Selectable_Objects_BaseObject_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseObject(ABaseObject&&); \
	NO_API ABaseObject(const ABaseObject&); \
public:


#define GasRPG_Source_GasRPG_Selectable_Objects_BaseObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseObject(ABaseObject&&); \
	NO_API ABaseObject(const ABaseObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseObject)


#define GasRPG_Source_GasRPG_Selectable_Objects_BaseObject_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ABaseObject, Mesh); }


#define GasRPG_Source_GasRPG_Selectable_Objects_BaseObject_h_9_PROLOG
#define GasRPG_Source_GasRPG_Selectable_Objects_BaseObject_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GasRPG_Source_GasRPG_Selectable_Objects_BaseObject_h_12_PRIVATE_PROPERTY_OFFSET \
	GasRPG_Source_GasRPG_Selectable_Objects_BaseObject_h_12_SPARSE_DATA \
	GasRPG_Source_GasRPG_Selectable_Objects_BaseObject_h_12_RPC_WRAPPERS \
	GasRPG_Source_GasRPG_Selectable_Objects_BaseObject_h_12_INCLASS \
	GasRPG_Source_GasRPG_Selectable_Objects_BaseObject_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GasRPG_Source_GasRPG_Selectable_Objects_BaseObject_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GasRPG_Source_GasRPG_Selectable_Objects_BaseObject_h_12_PRIVATE_PROPERTY_OFFSET \
	GasRPG_Source_GasRPG_Selectable_Objects_BaseObject_h_12_SPARSE_DATA \
	GasRPG_Source_GasRPG_Selectable_Objects_BaseObject_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GasRPG_Source_GasRPG_Selectable_Objects_BaseObject_h_12_INCLASS_NO_PURE_DECLS \
	GasRPG_Source_GasRPG_Selectable_Objects_BaseObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASRPG_API UClass* StaticClass<class ABaseObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GasRPG_Source_GasRPG_Selectable_Objects_BaseObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
