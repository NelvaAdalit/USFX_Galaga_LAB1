// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USFX_Galaga_LAB1/USFX_Galaga_LAB1GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSFX_Galaga_LAB1GameMode() {}
// Cross Module References
	USFX_GALAGA_LAB1_API UClass* Z_Construct_UClass_AUSFX_Galaga_LAB1GameMode_NoRegister();
	USFX_GALAGA_LAB1_API UClass* Z_Construct_UClass_AUSFX_Galaga_LAB1GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_USFX_Galaga_LAB1();
// End Cross Module References
	void AUSFX_Galaga_LAB1GameMode::StaticRegisterNativesAUSFX_Galaga_LAB1GameMode()
	{
	}
	UClass* Z_Construct_UClass_AUSFX_Galaga_LAB1GameMode_NoRegister()
	{
		return AUSFX_Galaga_LAB1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUSFX_Galaga_LAB1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUSFX_Galaga_LAB1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_USFX_Galaga_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUSFX_Galaga_LAB1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "USFX_Galaga_LAB1GameMode.h" },
		{ "ModuleRelativePath", "USFX_Galaga_LAB1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUSFX_Galaga_LAB1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUSFX_Galaga_LAB1GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUSFX_Galaga_LAB1GameMode_Statics::ClassParams = {
		&AUSFX_Galaga_LAB1GameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUSFX_Galaga_LAB1GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUSFX_Galaga_LAB1GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUSFX_Galaga_LAB1GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUSFX_Galaga_LAB1GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUSFX_Galaga_LAB1GameMode, 2543521598);
	template<> USFX_GALAGA_LAB1_API UClass* StaticClass<AUSFX_Galaga_LAB1GameMode>()
	{
		return AUSFX_Galaga_LAB1GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUSFX_Galaga_LAB1GameMode(Z_Construct_UClass_AUSFX_Galaga_LAB1GameMode, &AUSFX_Galaga_LAB1GameMode::StaticClass, TEXT("/Script/USFX_Galaga_LAB1"), TEXT("AUSFX_Galaga_LAB1GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUSFX_Galaga_LAB1GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
