// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mazegame_/Mazegame_GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazegame_GameModeBase() {}
// Cross Module References
	MAZEGAME__API UClass* Z_Construct_UClass_AMazegame_GameModeBase_NoRegister();
	MAZEGAME__API UClass* Z_Construct_UClass_AMazegame_GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Mazegame_();
// End Cross Module References
	void AMazegame_GameModeBase::StaticRegisterNativesAMazegame_GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMazegame_GameModeBase_NoRegister()
	{
		return AMazegame_GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMazegame_GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMazegame_GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Mazegame_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazegame_GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Mazegame_GameModeBase.h" },
		{ "ModuleRelativePath", "Mazegame_GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMazegame_GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMazegame_GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMazegame_GameModeBase_Statics::ClassParams = {
		&AMazegame_GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMazegame_GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMazegame_GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMazegame_GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMazegame_GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMazegame_GameModeBase, 2280458690);
	template<> MAZEGAME__API UClass* StaticClass<AMazegame_GameModeBase>()
	{
		return AMazegame_GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMazegame_GameModeBase(Z_Construct_UClass_AMazegame_GameModeBase, &AMazegame_GameModeBase::StaticClass, TEXT("/Script/Mazegame_"), TEXT("AMazegame_GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMazegame_GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
