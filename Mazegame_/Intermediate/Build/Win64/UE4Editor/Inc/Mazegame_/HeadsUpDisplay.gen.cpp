// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mazegame_/HeadsUpDisplay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeadsUpDisplay() {}
// Cross Module References
	MAZEGAME__API UClass* Z_Construct_UClass_UHeadsUpDisplay_NoRegister();
	MAZEGAME__API UClass* Z_Construct_UClass_UHeadsUpDisplay();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Mazegame_();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UHeadsUpDisplay::StaticRegisterNativesUHeadsUpDisplay()
	{
	}
	UClass* Z_Construct_UClass_UHeadsUpDisplay_NoRegister()
	{
		return UHeadsUpDisplay::StaticClass();
	}
	struct Z_Construct_UClass_UHeadsUpDisplay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeadsUpDisplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Mazegame_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadsUpDisplay_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HeadsUpDisplay.h" },
		{ "ModuleRelativePath", "HeadsUpDisplay.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_HealthBox_MetaData[] = {
		{ "Bindwidget", "" },
		{ "Category", "HeadsUpDisplay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HeadsUpDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_HealthBox = { "HealthBox", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeadsUpDisplay, HealthBox), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_HealthBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_HealthBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeadsUpDisplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_HealthBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeadsUpDisplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeadsUpDisplay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeadsUpDisplay_Statics::ClassParams = {
		&UHeadsUpDisplay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeadsUpDisplay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeadsUpDisplay_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeadsUpDisplay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadsUpDisplay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeadsUpDisplay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeadsUpDisplay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeadsUpDisplay, 950825697);
	template<> MAZEGAME__API UClass* StaticClass<UHeadsUpDisplay>()
	{
		return UHeadsUpDisplay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeadsUpDisplay(Z_Construct_UClass_UHeadsUpDisplay, &UHeadsUpDisplay::StaticClass, TEXT("/Script/Mazegame_"), TEXT("UHeadsUpDisplay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeadsUpDisplay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
