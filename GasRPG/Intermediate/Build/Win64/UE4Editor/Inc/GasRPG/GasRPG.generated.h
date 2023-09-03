// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASRPG_GasRPG_generated_h
#error "GasRPG.generated.h already included, missing '#pragma once' in GasRPG.h"
#endif
#define GASRPG_GasRPG_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GasRPG_Source_GasRPG_GasRPG_h


#define FOREACH_ENUM_EGASABILITYINPUTID(op) \
	op(EGASAbilityInputID::None) \
	op(EGASAbilityInputID::Confirm) \
	op(EGASAbilityInputID::Cancel) \
	op(EGASAbilityInputID::Punch) 

enum class EGASAbilityInputID : uint8;
template<> GASRPG_API UEnum* StaticEnum<EGASAbilityInputID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
