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
#ifdef MAZEGAME__GoalPlatform_generated_h
#error "GoalPlatform.generated.h already included, missing '#pragma once' in GoalPlatform.h"
#endif
#define MAZEGAME__GoalPlatform_generated_h

#define Mazegame__Source_Mazegame__GoalPlatform_h_12_SPARSE_DATA
#define Mazegame__Source_Mazegame__GoalPlatform_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentOverlap);


#define Mazegame__Source_Mazegame__GoalPlatform_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentOverlap);


#define Mazegame__Source_Mazegame__GoalPlatform_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoalPlatform(); \
	friend struct Z_Construct_UClass_AGoalPlatform_Statics; \
public: \
	DECLARE_CLASS(AGoalPlatform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mazegame_"), NO_API) \
	DECLARE_SERIALIZER(AGoalPlatform)


#define Mazegame__Source_Mazegame__GoalPlatform_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGoalPlatform(); \
	friend struct Z_Construct_UClass_AGoalPlatform_Statics; \
public: \
	DECLARE_CLASS(AGoalPlatform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mazegame_"), NO_API) \
	DECLARE_SERIALIZER(AGoalPlatform)


#define Mazegame__Source_Mazegame__GoalPlatform_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGoalPlatform(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGoalPlatform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoalPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoalPlatform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoalPlatform(AGoalPlatform&&); \
	NO_API AGoalPlatform(const AGoalPlatform&); \
public:


#define Mazegame__Source_Mazegame__GoalPlatform_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoalPlatform(AGoalPlatform&&); \
	NO_API AGoalPlatform(const AGoalPlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoalPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoalPlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoalPlatform)


#define Mazegame__Source_Mazegame__GoalPlatform_h_12_PRIVATE_PROPERTY_OFFSET
#define Mazegame__Source_Mazegame__GoalPlatform_h_9_PROLOG
#define Mazegame__Source_Mazegame__GoalPlatform_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mazegame__Source_Mazegame__GoalPlatform_h_12_PRIVATE_PROPERTY_OFFSET \
	Mazegame__Source_Mazegame__GoalPlatform_h_12_SPARSE_DATA \
	Mazegame__Source_Mazegame__GoalPlatform_h_12_RPC_WRAPPERS \
	Mazegame__Source_Mazegame__GoalPlatform_h_12_INCLASS \
	Mazegame__Source_Mazegame__GoalPlatform_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mazegame__Source_Mazegame__GoalPlatform_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mazegame__Source_Mazegame__GoalPlatform_h_12_PRIVATE_PROPERTY_OFFSET \
	Mazegame__Source_Mazegame__GoalPlatform_h_12_SPARSE_DATA \
	Mazegame__Source_Mazegame__GoalPlatform_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Mazegame__Source_Mazegame__GoalPlatform_h_12_INCLASS_NO_PURE_DECLS \
	Mazegame__Source_Mazegame__GoalPlatform_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAZEGAME__API UClass* StaticClass<class AGoalPlatform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mazegame__Source_Mazegame__GoalPlatform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
