// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChefCaptain/ChefCaptainGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChefCaptainGameMode() {}
// Cross Module References
	CHEFCAPTAIN_API UClass* Z_Construct_UClass_AChefCaptainGameMode_NoRegister();
	CHEFCAPTAIN_API UClass* Z_Construct_UClass_AChefCaptainGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ChefCaptain();
// End Cross Module References
	void AChefCaptainGameMode::StaticRegisterNativesAChefCaptainGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChefCaptainGameMode);
	UClass* Z_Construct_UClass_AChefCaptainGameMode_NoRegister()
	{
		return AChefCaptainGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AChefCaptainGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChefCaptainGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ChefCaptain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChefCaptainGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ChefCaptainGameMode.h" },
		{ "ModuleRelativePath", "ChefCaptainGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChefCaptainGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChefCaptainGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChefCaptainGameMode_Statics::ClassParams = {
		&AChefCaptainGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AChefCaptainGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChefCaptainGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChefCaptainGameMode()
	{
		if (!Z_Registration_Info_UClass_AChefCaptainGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChefCaptainGameMode.OuterSingleton, Z_Construct_UClass_AChefCaptainGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChefCaptainGameMode.OuterSingleton;
	}
	template<> CHEFCAPTAIN_API UClass* StaticClass<AChefCaptainGameMode>()
	{
		return AChefCaptainGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChefCaptainGameMode);
	struct Z_CompiledInDeferFile_FID_ChefCaptain_Source_ChefCaptain_ChefCaptainGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChefCaptain_Source_ChefCaptain_ChefCaptainGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChefCaptainGameMode, AChefCaptainGameMode::StaticClass, TEXT("AChefCaptainGameMode"), &Z_Registration_Info_UClass_AChefCaptainGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChefCaptainGameMode), 549720733U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChefCaptain_Source_ChefCaptain_ChefCaptainGameMode_h_798673922(TEXT("/Script/ChefCaptain"),
		Z_CompiledInDeferFile_FID_ChefCaptain_Source_ChefCaptain_ChefCaptainGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ChefCaptain_Source_ChefCaptain_ChefCaptainGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
