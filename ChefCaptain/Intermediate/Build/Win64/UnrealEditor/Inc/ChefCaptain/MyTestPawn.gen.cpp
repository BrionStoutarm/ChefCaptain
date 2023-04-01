// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChefCaptain/MyTestPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestPawn() {}
// Cross Module References
	CHEFCAPTAIN_API UClass* Z_Construct_UClass_AMyTestPawn_NoRegister();
	CHEFCAPTAIN_API UClass* Z_Construct_UClass_AMyTestPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ChefCaptain();
// End Cross Module References
	void AMyTestPawn::StaticRegisterNativesAMyTestPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyTestPawn);
	UClass* Z_Construct_UClass_AMyTestPawn_NoRegister()
	{
		return AMyTestPawn::StaticClass();
	}
	struct Z_Construct_UClass_AMyTestPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTestPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ChefCaptain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyTestPawn.h" },
		{ "ModuleRelativePath", "MyTestPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTestPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTestPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTestPawn_Statics::ClassParams = {
		&AMyTestPawn::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyTestPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyTestPawn()
	{
		if (!Z_Registration_Info_UClass_AMyTestPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTestPawn.OuterSingleton, Z_Construct_UClass_AMyTestPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyTestPawn.OuterSingleton;
	}
	template<> CHEFCAPTAIN_API UClass* StaticClass<AMyTestPawn>()
	{
		return AMyTestPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTestPawn);
	struct Z_CompiledInDeferFile_FID_ChefCaptain_Source_ChefCaptain_MyTestPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChefCaptain_Source_ChefCaptain_MyTestPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyTestPawn, AMyTestPawn::StaticClass, TEXT("AMyTestPawn"), &Z_Registration_Info_UClass_AMyTestPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTestPawn), 3609315544U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChefCaptain_Source_ChefCaptain_MyTestPawn_h_185977702(TEXT("/Script/ChefCaptain"),
		Z_CompiledInDeferFile_FID_ChefCaptain_Source_ChefCaptain_MyTestPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ChefCaptain_Source_ChefCaptain_MyTestPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
