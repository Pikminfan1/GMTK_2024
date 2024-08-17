// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMTK_2024/GMTK_2024GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMTK_2024GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GMTK_2024_API UClass* Z_Construct_UClass_AGMTK_2024GameMode();
GMTK_2024_API UClass* Z_Construct_UClass_AGMTK_2024GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GMTK_2024();
// End Cross Module References

// Begin Class AGMTK_2024GameMode
void AGMTK_2024GameMode::StaticRegisterNativesAGMTK_2024GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGMTK_2024GameMode);
UClass* Z_Construct_UClass_AGMTK_2024GameMode_NoRegister()
{
	return AGMTK_2024GameMode::StaticClass();
}
struct Z_Construct_UClass_AGMTK_2024GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GMTK_2024GameMode.h" },
		{ "ModuleRelativePath", "GMTK_2024GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMTK_2024GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGMTK_2024GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GMTK_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGMTK_2024GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGMTK_2024GameMode_Statics::ClassParams = {
	&AGMTK_2024GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMTK_2024GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGMTK_2024GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGMTK_2024GameMode()
{
	if (!Z_Registration_Info_UClass_AGMTK_2024GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGMTK_2024GameMode.OuterSingleton, Z_Construct_UClass_AGMTK_2024GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGMTK_2024GameMode.OuterSingleton;
}
template<> GMTK_2024_API UClass* StaticClass<AGMTK_2024GameMode>()
{
	return AGMTK_2024GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGMTK_2024GameMode);
AGMTK_2024GameMode::~AGMTK_2024GameMode() {}
// End Class AGMTK_2024GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_GMTK_2024_Source_GMTK_2024_GMTK_2024GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGMTK_2024GameMode, AGMTK_2024GameMode::StaticClass, TEXT("AGMTK_2024GameMode"), &Z_Registration_Info_UClass_AGMTK_2024GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGMTK_2024GameMode), 2660551077U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GMTK_2024_Source_GMTK_2024_GMTK_2024GameMode_h_860882618(TEXT("/Script/GMTK_2024"),
	Z_CompiledInDeferFile_FID_GMTK_2024_Source_GMTK_2024_GMTK_2024GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GMTK_2024_Source_GMTK_2024_GMTK_2024GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
