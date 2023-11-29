// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "glTFRuntime/Public/glTFAnimCurveCompressionCodec.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeglTFAnimCurveCompressionCodec() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFAnimCurveCompressionCodec();
	GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFAnimCurveCompressionCodec_NoRegister();
	UPackage* Z_Construct_UPackage__Script_glTFRuntime();
// End Cross Module References
	void UglTFAnimCurveCompressionCodec::StaticRegisterNativesUglTFAnimCurveCompressionCodec()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UglTFAnimCurveCompressionCodec);
	UClass* Z_Construct_UClass_UglTFAnimCurveCompressionCodec_NoRegister()
	{
		return UglTFAnimCurveCompressionCodec::StaticClass();
	}
	struct Z_Construct_UClass_UglTFAnimCurveCompressionCodec_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UglTFAnimCurveCompressionCodec_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCurveCompressionCodec,
		(UObject* (*)())Z_Construct_UPackage__Script_glTFRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFAnimCurveCompressionCodec_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFAnimCurveCompressionCodec_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "glTFAnimCurveCompressionCodec.h" },
		{ "ModuleRelativePath", "Public/glTFAnimCurveCompressionCodec.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFAnimCurveCompressionCodec_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/glTFAnimCurveCompressionCodec.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UglTFAnimCurveCompressionCodec_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UglTFAnimCurveCompressionCodec, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFAnimCurveCompressionCodec_Statics::NewProp_AnimSequence_MetaData), Z_Construct_UClass_UglTFAnimCurveCompressionCodec_Statics::NewProp_AnimSequence_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UglTFAnimCurveCompressionCodec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFAnimCurveCompressionCodec_Statics::NewProp_AnimSequence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UglTFAnimCurveCompressionCodec_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UglTFAnimCurveCompressionCodec>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UglTFAnimCurveCompressionCodec_Statics::ClassParams = {
		&UglTFAnimCurveCompressionCodec::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UglTFAnimCurveCompressionCodec_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UglTFAnimCurveCompressionCodec_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFAnimCurveCompressionCodec_Statics::Class_MetaDataParams), Z_Construct_UClass_UglTFAnimCurveCompressionCodec_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFAnimCurveCompressionCodec_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UglTFAnimCurveCompressionCodec()
	{
		if (!Z_Registration_Info_UClass_UglTFAnimCurveCompressionCodec.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UglTFAnimCurveCompressionCodec.OuterSingleton, Z_Construct_UClass_UglTFAnimCurveCompressionCodec_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UglTFAnimCurveCompressionCodec.OuterSingleton;
	}
	template<> GLTFRUNTIME_API UClass* StaticClass<UglTFAnimCurveCompressionCodec>()
	{
		return UglTFAnimCurveCompressionCodec::StaticClass();
	}
	UglTFAnimCurveCompressionCodec::UglTFAnimCurveCompressionCodec(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UglTFAnimCurveCompressionCodec);
	UglTFAnimCurveCompressionCodec::~UglTFAnimCurveCompressionCodec() {}
	struct Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntime_Public_glTFAnimCurveCompressionCodec_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntime_Public_glTFAnimCurveCompressionCodec_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UglTFAnimCurveCompressionCodec, UglTFAnimCurveCompressionCodec::StaticClass, TEXT("UglTFAnimCurveCompressionCodec"), &Z_Registration_Info_UClass_UglTFAnimCurveCompressionCodec, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UglTFAnimCurveCompressionCodec), 1292018763U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntime_Public_glTFAnimCurveCompressionCodec_h_2741489244(TEXT("/Script/glTFRuntime"),
		Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntime_Public_glTFAnimCurveCompressionCodec_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntime_Public_glTFAnimCurveCompressionCodec_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
