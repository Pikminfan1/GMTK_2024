// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMTK_2024/TP_ThirdPerson/TP_ThirdPersonGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_ThirdPersonGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GMTK_2024_API UClass* Z_Construct_UClass_ATP_ThirdPersonGameMode();
GMTK_2024_API UClass* Z_Construct_UClass_ATP_ThirdPersonGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GMTK_2024();
// End Cross Module References

// Begin Class ATP_ThirdPersonGameMode
void ATP_ThirdPersonGameMode::StaticRegisterNativesATP_ThirdPersonGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATP_ThirdPersonGameMode);
UClass* Z_Construct_UClass_ATP_ThirdPersonGameMode_NoRegister()
{
	return ATP_ThirdPersonGameMode::StaticClass();
}
struct Z_Construct_UClass_ATP_ThirdPersonGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TP_ThirdPerson/TP_ThirdPersonGameMode.h" },
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_ThirdPersonGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATP_ThirdPersonGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GMTK_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP_ThirdPersonGameMode_Statics::ClassParams = {
	&ATP_ThirdPersonGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP_ThirdPersonGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATP_ThirdPersonGameMode()
{
	if (!Z_Registration_Info_UClass_ATP_ThirdPersonGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP_ThirdPersonGameMode.OuterSingleton, Z_Construct_UClass_ATP_ThirdPersonGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATP_ThirdPersonGameMode.OuterSingleton;
}
template<> GMTK_2024_API UClass* StaticClass<ATP_ThirdPersonGameMode>()
{
	return ATP_ThirdPersonGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_ThirdPersonGameMode);
ATP_ThirdPersonGameMode::~ATP_ThirdPersonGameMode() {}
// End Class ATP_ThirdPersonGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Ryan_Active_Projects_Unreal_Projects_GMTK_2024_GMTK_2024_Source_GMTK_2024_TP_ThirdPerson_TP_ThirdPersonGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATP_ThirdPersonGameMode, ATP_ThirdPersonGameMode::StaticClass, TEXT("ATP_ThirdPersonGameMode"), &Z_Registration_Info_UClass_ATP_ThirdPersonGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP_ThirdPersonGameMode), 4007474643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ryan_Active_Projects_Unreal_Projects_GMTK_2024_GMTK_2024_Source_GMTK_2024_TP_ThirdPerson_TP_ThirdPersonGameMode_h_345743525(TEXT("/Script/GMTK_2024"),
	Z_CompiledInDeferFile_FID_Users_Ryan_Active_Projects_Unreal_Projects_GMTK_2024_GMTK_2024_Source_GMTK_2024_TP_ThirdPerson_TP_ThirdPersonGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ryan_Active_Projects_Unreal_Projects_GMTK_2024_GMTK_2024_Source_GMTK_2024_TP_ThirdPerson_TP_ThirdPersonGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
