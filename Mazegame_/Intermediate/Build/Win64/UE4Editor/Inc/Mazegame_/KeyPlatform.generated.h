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
#ifdef MAZEGAME__KeyPlatform_generated_h
#error "KeyPlatform.generated.h already included, missing '#pragma once' in KeyPlatform.h"
#endif
#define MAZEGAME__KeyPlatform_generated_h

#define Mazegame__Source_Mazegame__KeyPlatform_h_12_SPARSE_DATA
#define Mazegame__Source_Mazegame__KeyPlatform_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentOverlap);


#define Mazegame__Source_Mazegame__KeyPlatform_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentOverlap);


#define Mazegame__Source_Mazegame__KeyPlatform_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKeyPlatform(); \
	friend struct Z_Construct_UClass_AKeyPlatform_Statics; \
public: \
	DECLARE_CLASS(AKeyPlatform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mazegame_"), NO_API) \
	DECLARE_SERIALIZER(AKeyPlatform)


#define Mazegame__Source_Mazegame__KeyPlatform_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAKeyPlatform(); \
	friend struct Z_Construct_UClass_AKeyPlatform_Statics; \
public: \
	DECLARE_CLASS(AKeyPlatform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mazegame_"), NO_API) \
	DECLARE_SERIALIZER(AKeyPlatform)


#define Mazegame__Source_Mazegame__KeyPlatform_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKeyPlatform(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKeyPlatform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKeyPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKeyPlatform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKeyPlatform(AKeyPlatform&&); \
	NO_API AKeyPlatform(const AKeyPlatform&); \
public:


#define Mazegame__Source_Mazegame__KeyPlatform_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKeyPlatform(AKeyPlatform&&); \
	NO_API AKeyPlatform(const AKeyPlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKeyPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKeyPlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKeyPlatform)


#define Mazegame__Source_Mazegame__KeyPlatform_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__platformMesh() { return STRUCT_OFFSET(AKeyPlatform, platformMesh); } \
	FORCEINLINE static uint32 __PPO__TriggerVolume() { return STRUCT_OFFSET(AKeyPlatform, TriggerVolume); } \
	FORCEINLINE static uint32 __PPO__keyMesh() { return STRUCT_OFFSET(AKeyPlatform, keyMesh); }


#define Mazegame__Source_Mazegame__KeyPlatform_h_9_PROLOG
#define Mazegame__Source_Mazegame__KeyPlatform_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mazegame__Source_Mazegame__KeyPlatform_h_12_PRIVATE_PROPERTY_OFFSET \
	Mazegame__Source_Mazegame__KeyPlatform_h_12_SPARSE_DATA \
	Mazegame__Source_Mazegame__KeyPlatform_h_12_RPC_WRAPPERS \
	Mazegame__Source_Mazegame__KeyPlatform_h_12_INCLASS \
	Mazegame__Source_Mazegame__KeyPlatform_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mazegame__Source_Mazegame__KeyPlatform_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mazegame__Source_Mazegame__KeyPlatform_h_12_PRIVATE_PROPERTY_OFFSET \
	Mazegame__Source_Mazegame__KeyPlatform_h_12_SPARSE_DATA \
	Mazegame__Source_Mazegame__KeyPlatform_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Mazegame__Source_Mazegame__KeyPlatform_h_12_INCLASS_NO_PURE_DECLS \
	Mazegame__Source_Mazegame__KeyPlatform_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAZEGAME__API UClass* StaticClass<class AKeyPlatform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mazegame__Source_Mazegame__KeyPlatform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
