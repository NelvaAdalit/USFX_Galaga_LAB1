// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USFX_Galaga_LAB1/NaveEnemigaTransporteMuniciones.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaTransporteMuniciones() {}
// Cross Module References
	USFX_GALAGA_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigaTransporteMuniciones_NoRegister();
	USFX_GALAGA_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigaTransporteMuniciones();
	USFX_GALAGA_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigaTransporte();
	UPackage* Z_Construct_UPackage__Script_USFX_Galaga_LAB1();
// End Cross Module References
	void ANaveEnemigaTransporteMuniciones::StaticRegisterNativesANaveEnemigaTransporteMuniciones()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaTransporteMuniciones_NoRegister()
	{
		return ANaveEnemigaTransporteMuniciones::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaTransporteMuniciones_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaTransporteMuniciones_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaTransporte,
		(UObject* (*)())Z_Construct_UPackage__Script_USFX_Galaga_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaTransporteMuniciones_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaTransporteMuniciones.h" },
		{ "ModuleRelativePath", "NaveEnemigaTransporteMuniciones.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaTransporteMuniciones_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaTransporteMuniciones>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaTransporteMuniciones_Statics::ClassParams = {
		&ANaveEnemigaTransporteMuniciones::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaTransporteMuniciones_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaTransporteMuniciones_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaTransporteMuniciones()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaTransporteMuniciones_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaTransporteMuniciones, 1539204827);
	template<> USFX_GALAGA_LAB1_API UClass* StaticClass<ANaveEnemigaTransporteMuniciones>()
	{
		return ANaveEnemigaTransporteMuniciones::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaTransporteMuniciones(Z_Construct_UClass_ANaveEnemigaTransporteMuniciones, &ANaveEnemigaTransporteMuniciones::StaticClass, TEXT("/Script/USFX_Galaga_LAB1"), TEXT("ANaveEnemigaTransporteMuniciones"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaTransporteMuniciones);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
