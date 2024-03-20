// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USFX_Galaga_LAB1/NaveEnemigaEspiaCamuflaje.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaEspiaCamuflaje() {}
// Cross Module References
	USFX_GALAGA_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigaEspiaCamuflaje_NoRegister();
	USFX_GALAGA_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigaEspiaCamuflaje();
	USFX_GALAGA_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigaEspia();
	UPackage* Z_Construct_UPackage__Script_USFX_Galaga_LAB1();
// End Cross Module References
	void ANaveEnemigaEspiaCamuflaje::StaticRegisterNativesANaveEnemigaEspiaCamuflaje()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaEspiaCamuflaje_NoRegister()
	{
		return ANaveEnemigaEspiaCamuflaje::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaEspiaCamuflaje_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaEspiaCamuflaje_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaEspia,
		(UObject* (*)())Z_Construct_UPackage__Script_USFX_Galaga_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaEspiaCamuflaje_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaEspiaCamuflaje.h" },
		{ "ModuleRelativePath", "NaveEnemigaEspiaCamuflaje.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaEspiaCamuflaje_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaEspiaCamuflaje>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaEspiaCamuflaje_Statics::ClassParams = {
		&ANaveEnemigaEspiaCamuflaje::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaEspiaCamuflaje_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaEspiaCamuflaje_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaEspiaCamuflaje()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaEspiaCamuflaje_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaEspiaCamuflaje, 817929751);
	template<> USFX_GALAGA_LAB1_API UClass* StaticClass<ANaveEnemigaEspiaCamuflaje>()
	{
		return ANaveEnemigaEspiaCamuflaje::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaEspiaCamuflaje(Z_Construct_UClass_ANaveEnemigaEspiaCamuflaje, &ANaveEnemigaEspiaCamuflaje::StaticClass, TEXT("/Script/USFX_Galaga_LAB1"), TEXT("ANaveEnemigaEspiaCamuflaje"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaEspiaCamuflaje);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
