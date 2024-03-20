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
struct FVector;
struct FHitResult;
#ifdef USFX_GALAGA_LAB1_USFX_Galaga_LAB1Projectile_generated_h
#error "USFX_Galaga_LAB1Projectile.generated.h already included, missing '#pragma once' in USFX_Galaga_LAB1Projectile.h"
#endif
#define USFX_GALAGA_LAB1_USFX_Galaga_LAB1Projectile_generated_h

#define USFX_GALAGA_LAB1_Source_USFX_Galaga_LAB1_USFX_Galaga_LAB1Projectile_h_15_SPARSE_DATA
#define USFX_GALAGA_LAB1_Source_USFX_Galaga_LAB1_USFX_Galaga_LAB1Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define USFX_GALAGA_LAB1_Source_USFX_Galaga_LAB1_USFX_Galaga_LAB1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define USFX_GALAGA_LAB1_Source_USFX_Galaga_LAB1_USFX_Galaga_LAB1Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUSFX_Galaga_LAB1Projectile(); \
	friend struct Z_Construct_UClass_AUSFX_Galaga_LAB1Projectile_Statics; \
public: \
	DECLARE_CLASS(AUSFX_Galaga_LAB1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/USFX_Galaga_LAB1"), NO_API) \
	DECLARE_SERIALIZER(AUSFX_Galaga_LAB1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define USFX_GALAGA_LAB1_Source_USFX_Galaga_LAB1_USFX_Galaga_LAB1Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAUSFX_Galaga_LAB1Projectile(); \
	friend struct Z_Construct_UClass_AUSFX_Galaga_LAB1Projectile_Statics; \
public: \
	DECLARE_CLASS(AUSFX_Galaga_LAB1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/USFX_Galaga_LAB1"), NO_API) \
	DECLARE_SERIALIZER(AUSFX_Galaga_LAB1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define USFX_GALAGA_LAB1_Source_USFX_Galaga_LAB1_USFX_Galaga_LAB1Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUSFX_Galaga_LAB1Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUSFX_Galaga_LAB1Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUSFX_Galaga_LAB1Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUSFX_Galaga_LAB1Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUSFX_Galaga_LAB1Projectile(AUSFX_Galaga_LAB1Projectile&&); \
	NO_API AUSFX_Galaga_LAB1Projectile(const AUSFX_Galaga_LAB1Projectile&); \
public:


#define USFX_GALAGA_LAB1_Source_USFX_Galaga_LAB1_USFX_Galaga_LAB1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUSFX_Galaga_LAB1Projectile(AUSFX_Galaga_LAB1Projectile&&); \
	NO_API AUSFX_Galaga_LAB1Projectile(const AUSFX_Galaga_LAB1Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUSFX_Galaga_LAB1Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUSFX_Galaga_LAB1Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUSFX_Galaga_LAB1Projectile)


#define USFX_GALAGA_LAB1_Source_USFX_Galaga_LAB1_USFX_Galaga_LAB1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AUSFX_Galaga_LAB1Projectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AUSFX_Galaga_LAB1Projectile, ProjectileMovement); }


#define USFX_GALAGA_LAB1_Source_USFX_Galaga_LAB1_USFX_Galaga_LAB1Projectile_h_12_PROLOG
#define USFX_GALAGA_LAB1_Source_USFX_Galaga_LAB1_USFX_Galaga_LAB1Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	USFX_GALAGA_LAB1_Source_USFX_Galaga_LAB1_USFX_Galaga_LAB1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	USFX_GALAGA_LAB1_Source_USFX_Galaga_LAB1_USFX_Galaga_LAB1Projectile_h_15_SPARSE_DATA \
	USFX_GALAGA_LAB1_Source_USFX_Galaga_LAB1_USFX_Galaga_LAB1Projectile_h_15_RPC_WRAPPERS \
	USFX_GALAGA_LAB1_Source_USFX_Galaga_LAB1_USFX_Galaga_LAB1Projectile_h_15_INCLASS \
	USFX_GALAGA_LAB1_Source_USFX_Galaga_LAB1_USFX_Galaga_LAB1Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define USFX_GALAGA_LAB1_Source_USFX_Galaga_LAB1_USFX_Galaga_LAB1Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	USFX_GALAGA_LAB1_Source_USFX_Galaga_LAB1_USFX_Galaga_LAB1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	USFX_GALAGA_LAB1_Source_USFX_Galaga_LAB1_USFX_Galaga_LAB1Projectile_h_15_SPARSE_DATA \
	USFX_GALAGA_LAB1_Source_USFX_Galaga_LAB1_USFX_Galaga_LAB1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	USFX_GALAGA_LAB1_Source_USFX_Galaga_LAB1_USFX_Galaga_LAB1Projectile_h_15_INCLASS_NO_PURE_DECLS \
	USFX_GALAGA_LAB1_Source_USFX_Galaga_LAB1_USFX_Galaga_LAB1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> USFX_GALAGA_LAB1_API UClass* StaticClass<class AUSFX_Galaga_LAB1Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID USFX_GALAGA_LAB1_Source_USFX_Galaga_LAB1_USFX_Galaga_LAB1Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
