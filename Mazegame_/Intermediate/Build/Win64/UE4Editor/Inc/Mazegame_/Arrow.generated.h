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
#ifdef MAZEGAME__Arrow_generated_h
#error "Arrow.generated.h already included, missing '#pragma once' in Arrow.h"
#endif
#define MAZEGAME__Arrow_generated_h

#define Mazegame__Source_Mazegame__Arrow_h_12_SPARSE_DATA
#define Mazegame__Source_Mazegame__Arrow_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentOverlap);


#define Mazegame__Source_Mazegame__Arrow_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentOverlap);


#define Mazegame__Source_Mazegame__Arrow_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArrow(); \
	friend struct Z_Construct_UClass_AArrow_Statics; \
public: \
	DECLARE_CLASS(AArrow, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mazegame_"), NO_API) \
	DECLARE_SERIALIZER(AArrow)


#define Mazegame__Source_Mazegame__Arrow_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAArrow(); \
	friend struct Z_Construct_UClass_AArrow_Statics; \
public: \
	DECLARE_CLASS(AArrow, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mazegame_"), NO_API) \
	DECLARE_SERIALIZER(AArrow)


#define Mazegame__Source_Mazegame__Arrow_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArrow(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArrow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArrow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArrow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArrow(AArrow&&); \
	NO_API AArrow(const AArrow&); \
public:


#define Mazegame__Source_Mazegame__Arrow_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArrow(AArrow&&); \
	NO_API AArrow(const AArrow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArrow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArrow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArrow)


#define Mazegame__Source_Mazegame__Arrow_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AArrow, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__collisionSphere() { return STRUCT_OFFSET(AArrow, collisionSphere); } \
	FORCEINLINE static uint32 __PPO__arrow() { return STRUCT_OFFSET(AArrow, arrow); }


#define Mazegame__Source_Mazegame__Arrow_h_9_PROLOG
#define Mazegame__Source_Mazegame__Arrow_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mazegame__Source_Mazegame__Arrow_h_12_PRIVATE_PROPERTY_OFFSET \
	Mazegame__Source_Mazegame__Arrow_h_12_SPARSE_DATA \
	Mazegame__Source_Mazegame__Arrow_h_12_RPC_WRAPPERS \
	Mazegame__Source_Mazegame__Arrow_h_12_INCLASS \
	Mazegame__Source_Mazegame__Arrow_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mazegame__Source_Mazegame__Arrow_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mazegame__Source_Mazegame__Arrow_h_12_PRIVATE_PROPERTY_OFFSET \
	Mazegame__Source_Mazegame__Arrow_h_12_SPARSE_DATA \
	Mazegame__Source_Mazegame__Arrow_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Mazegame__Source_Mazegame__Arrow_h_12_INCLASS_NO_PURE_DECLS \
	Mazegame__Source_Mazegame__Arrow_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAZEGAME__API UClass* StaticClass<class AArrow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mazegame__Source_Mazegame__Arrow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
