// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USFX_Galaga_LAB1/NaveEnemigaApoyoReparacion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaApoyoReparacion() {}
// Cross Module References
	USFX_GALAGA_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigaApoyoReparacion_NoRegister();
	USFX_GALAGA_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigaApoyoReparacion();
	USFX_GALAGA_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigaApoyo();
	UPackage* Z_Construct_UPackage__Script_USFX_Galaga_LAB1();
// End Cross Module References
	void ANaveEnemigaApoyoReparacion::StaticRegisterNativesANaveEnemigaApoyoReparacion()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaApoyoReparacion_NoRegister()
	{
		return ANaveEnemigaApoyoReparacion::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaApoyoReparacion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaApoyoReparacion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaApoyo,
		(UObject* (*)())Z_Construct_UPackage__Script_USFX_Galaga_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaApoyoReparacion_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaApoyoReparacion.h" },
		{ "ModuleRelativePath", "NaveEnemigaApoyoReparacion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaApoyoReparacion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaApoyoReparacion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaApoyoReparacion_Statics::ClassParams = {
		&ANaveEnemigaApoyoReparacion::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaApoyoReparacion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaApoyoReparacion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaApoyoReparacion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaApoyoReparacion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaApoyoReparacion, 3716064433);
	template<> USFX_GALAGA_LAB1_API UClass* StaticClass<ANaveEnemigaApoyoReparacion>()
	{
		return ANaveEnemigaApoyoReparacion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaApoyoReparacion(Z_Construct_UClass_ANaveEnemigaApoyoReparacion, &ANaveEnemigaApoyoReparacion::StaticClass, TEXT("/Script/USFX_Galaga_LAB1"), TEXT("ANaveEnemigaApoyoReparacion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaApoyoReparacion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
