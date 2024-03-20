// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USFX_Galaga_LAB1/NaveEnemigaApoyo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaApoyo() {}
// Cross Module References
	USFX_GALAGA_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigaApoyo_NoRegister();
	USFX_GALAGA_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigaApoyo();
	USFX_GALAGA_LAB1_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_USFX_Galaga_LAB1();
// End Cross Module References
	void ANaveEnemigaApoyo::StaticRegisterNativesANaveEnemigaApoyo()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaApoyo_NoRegister()
	{
		return ANaveEnemigaApoyo::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaApoyo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaApoyo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_USFX_Galaga_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaApoyo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaApoyo.h" },
		{ "ModuleRelativePath", "NaveEnemigaApoyo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaApoyo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaApoyo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaApoyo_Statics::ClassParams = {
		&ANaveEnemigaApoyo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaApoyo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaApoyo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaApoyo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaApoyo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaApoyo, 2192060447);
	template<> USFX_GALAGA_LAB1_API UClass* StaticClass<ANaveEnemigaApoyo>()
	{
		return ANaveEnemigaApoyo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaApoyo(Z_Construct_UClass_ANaveEnemigaApoyo, &ANaveEnemigaApoyo::StaticClass, TEXT("/Script/USFX_Galaga_LAB1"), TEXT("ANaveEnemigaApoyo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaApoyo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
