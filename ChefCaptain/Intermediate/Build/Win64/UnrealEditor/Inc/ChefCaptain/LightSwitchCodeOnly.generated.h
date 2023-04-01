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
#ifdef CHEFCAPTAIN_LightSwitchCodeOnly_generated_h
#error "LightSwitchCodeOnly.generated.h already included, missing '#pragma once' in LightSwitchCodeOnly.h"
#endif
#define CHEFCAPTAIN_LightSwitchCodeOnly_generated_h

#define FID_ChefCaptain_Source_ChefCaptain_LightSwitchCodeOnly_h_12_SPARSE_DATA
#define FID_ChefCaptain_Source_ChefCaptain_LightSwitchCodeOnly_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleLight); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_ChefCaptain_Source_ChefCaptain_LightSwitchCodeOnly_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleLight); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_ChefCaptain_Source_ChefCaptain_LightSwitchCodeOnly_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightSwitchCodeOnly(); \
	friend struct Z_Construct_UClass_ALightSwitchCodeOnly_Statics; \
public: \
	DECLARE_CLASS(ALightSwitchCodeOnly, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChefCaptain"), NO_API) \
	DECLARE_SERIALIZER(ALightSwitchCodeOnly)


#define FID_ChefCaptain_Source_ChefCaptain_LightSwitchCodeOnly_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALightSwitchCodeOnly(); \
	friend struct Z_Construct_UClass_ALightSwitchCodeOnly_Statics; \
public: \
	DECLARE_CLASS(ALightSwitchCodeOnly, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChefCaptain"), NO_API) \
	DECLARE_SERIALIZER(ALightSwitchCodeOnly)


#define FID_ChefCaptain_Source_ChefCaptain_LightSwitchCodeOnly_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightSwitchCodeOnly(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightSwitchCodeOnly) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwitchCodeOnly); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwitchCodeOnly); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSwitchCodeOnly(ALightSwitchCodeOnly&&); \
	NO_API ALightSwitchCodeOnly(const ALightSwitchCodeOnly&); \
public:


#define FID_ChefCaptain_Source_ChefCaptain_LightSwitchCodeOnly_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSwitchCodeOnly(ALightSwitchCodeOnly&&); \
	NO_API ALightSwitchCodeOnly(const ALightSwitchCodeOnly&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwitchCodeOnly); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwitchCodeOnly); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALightSwitchCodeOnly)


#define FID_ChefCaptain_Source_ChefCaptain_LightSwitchCodeOnly_h_9_PROLOG
#define FID_ChefCaptain_Source_ChefCaptain_LightSwitchCodeOnly_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ChefCaptain_Source_ChefCaptain_LightSwitchCodeOnly_h_12_SPARSE_DATA \
	FID_ChefCaptain_Source_ChefCaptain_LightSwitchCodeOnly_h_12_RPC_WRAPPERS \
	FID_ChefCaptain_Source_ChefCaptain_LightSwitchCodeOnly_h_12_INCLASS \
	FID_ChefCaptain_Source_ChefCaptain_LightSwitchCodeOnly_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ChefCaptain_Source_ChefCaptain_LightSwitchCodeOnly_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ChefCaptain_Source_ChefCaptain_LightSwitchCodeOnly_h_12_SPARSE_DATA \
	FID_ChefCaptain_Source_ChefCaptain_LightSwitchCodeOnly_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ChefCaptain_Source_ChefCaptain_LightSwitchCodeOnly_h_12_INCLASS_NO_PURE_DECLS \
	FID_ChefCaptain_Source_ChefCaptain_LightSwitchCodeOnly_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHEFCAPTAIN_API UClass* StaticClass<class ALightSwitchCodeOnly>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ChefCaptain_Source_ChefCaptain_LightSwitchCodeOnly_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
