// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChefCaptain/MapGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapGenerator() {}
// Cross Module References
	CHEFCAPTAIN_API UClass* Z_Construct_UClass_UMapGenerator_NoRegister();
	CHEFCAPTAIN_API UClass* Z_Construct_UClass_UMapGenerator();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ChefCaptain();
// End Cross Module References
	void UMapGenerator::StaticRegisterNativesUMapGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapGenerator);
	UClass* Z_Construct_UClass_UMapGenerator_NoRegister()
	{
		return UMapGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UMapGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ChefCaptain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MapGenerator.h" },
		{ "ModuleRelativePath", "MapGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapGenerator_Statics::ClassParams = {
		&UMapGenerator::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMapGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapGenerator()
	{
		if (!Z_Registration_Info_UClass_UMapGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapGenerator.OuterSingleton, Z_Construct_UClass_UMapGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMapGenerator.OuterSingleton;
	}
	template<> CHEFCAPTAIN_API UClass* StaticClass<UMapGenerator>()
	{
		return UMapGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapGenerator);
	struct Z_CompiledInDeferFile_FID_ChefCaptain_Source_ChefCaptain_MapGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChefCaptain_Source_ChefCaptain_MapGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMapGenerator, UMapGenerator::StaticClass, TEXT("UMapGenerator"), &Z_Registration_Info_UClass_UMapGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapGenerator), 1186881187U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChefCaptain_Source_ChefCaptain_MapGenerator_h_733987674(TEXT("/Script/ChefCaptain"),
		Z_CompiledInDeferFile_FID_ChefCaptain_Source_ChefCaptain_MapGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ChefCaptain_Source_ChefCaptain_MapGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
