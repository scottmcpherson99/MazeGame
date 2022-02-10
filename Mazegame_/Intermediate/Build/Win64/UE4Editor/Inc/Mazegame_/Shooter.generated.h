// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAZEGAME__Shooter_generated_h
#error "Shooter.generated.h already included, missing '#pragma once' in Shooter.h"
#endif
#define MAZEGAME__Shooter_generated_h

#define Mazegame__Source_Mazegame__Shooter_h_13_SPARSE_DATA
#define Mazegame__Source_Mazegame__Shooter_h_13_RPC_WRAPPERS
#define Mazegame__Source_Mazegame__Shooter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Mazegame__Source_Mazegame__Shooter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooter(); \
	friend struct Z_Construct_UClass_AShooter_Statics; \
public: \
	DECLARE_CLASS(AShooter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mazegame_"), NO_API) \
	DECLARE_SERIALIZER(AShooter)


#define Mazegame__Source_Mazegame__Shooter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAShooter(); \
	friend struct Z_Construct_UClass_AShooter_Statics; \
public: \
	DECLARE_CLASS(AShooter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mazegame_"), NO_API) \
	DECLARE_SERIALIZER(AShooter)


#define Mazegame__Source_Mazegame__Shooter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooter(AShooter&&); \
	NO_API AShooter(const AShooter&); \
public:


#define Mazegame__Source_Mazegame__Shooter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooter(AShooter&&); \
	NO_API AShooter(const AShooter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooter)


#define Mazegame__Source_Mazegame__Shooter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__shooterMesh() { return STRUCT_OFFSET(AShooter, shooterMesh); } \
	FORCEINLINE static uint32 __PPO__ArrowSpawn() { return STRUCT_OFFSET(AShooter, ArrowSpawn); } \
	FORCEINLINE static uint32 __PPO__resetDoOnce() { return STRUCT_OFFSET(AShooter, resetDoOnce); } \
	FORCEINLINE static uint32 __PPO__shootArrowTimer() { return STRUCT_OFFSET(AShooter, shootArrowTimer); }


#define Mazegame__Source_Mazegame__Shooter_h_10_PROLOG
#define Mazegame__Source_Mazegame__Shooter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mazegame__Source_Mazegame__Shooter_h_13_PRIVATE_PROPERTY_OFFSET \
	Mazegame__Source_Mazegame__Shooter_h_13_SPARSE_DATA \
	Mazegame__Source_Mazegame__Shooter_h_13_RPC_WRAPPERS \
	Mazegame__Source_Mazegame__Shooter_h_13_INCLASS \
	Mazegame__Source_Mazegame__Shooter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mazegame__Source_Mazegame__Shooter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mazegame__Source_Mazegame__Shooter_h_13_PRIVATE_PROPERTY_OFFSET \
	Mazegame__Source_Mazegame__Shooter_h_13_SPARSE_DATA \
	Mazegame__Source_Mazegame__Shooter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Mazegame__Source_Mazegame__Shooter_h_13_INCLASS_NO_PURE_DECLS \
	Mazegame__Source_Mazegame__Shooter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAZEGAME__API UClass* StaticClass<class AShooter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mazegame__Source_Mazegame__Shooter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
