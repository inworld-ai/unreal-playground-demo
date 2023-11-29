// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InworldRPMEditor/Public/InworldRPMEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInworldRPMEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	INWORLDAIINTEGRATION_API UClass* Z_Construct_UClass_UInworldCharacterComponent_NoRegister();
	INWORLDAIINTEGRATION_API UClass* Z_Construct_UClass_UInworldCharacterPlayback_NoRegister();
	INWORLDRPMEDITOR_API UClass* Z_Construct_UClass_UInworldRPMEditorSettings();
	INWORLDRPMEDITOR_API UClass* Z_Construct_UClass_UInworldRPMEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InworldRPMEditor();
// End Cross Module References
	void UInworldRPMEditorSettings::StaticRegisterNativesUInworldRPMEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInworldRPMEditorSettings);
	UClass* Z_Construct_UClass_UInworldRPMEditorSettings_NoRegister()
	{
		return UInworldRPMEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UInworldRPMEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RPMAnimBP_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RPMAnimBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RPMSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RPMSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InworldCharacterComponent_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InworldCharacterComponent;
		static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterPlaybacks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPlaybacks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CharacterPlaybacks;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OtherCharacterComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherCharacterComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OtherCharacterComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInworldRPMEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InworldRPMEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInworldRPMEditorSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInworldRPMEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InworldRPMEditorSettings.h" },
		{ "ModuleRelativePath", "Public/InworldRPMEditorSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_RPMAnimBP_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/InworldRPMEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_RPMAnimBP = { "RPMAnimBP", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInworldRPMEditorSettings, RPMAnimBP), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_RPMAnimBP_MetaData), Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_RPMAnimBP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_RPMSkeleton_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/InworldRPMEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_RPMSkeleton = { "RPMSkeleton", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInworldRPMEditorSettings, RPMSkeleton), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_RPMSkeleton_MetaData), Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_RPMSkeleton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_InworldCharacterComponent_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/InworldRPMEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_InworldCharacterComponent = { "InworldCharacterComponent", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInworldRPMEditorSettings, InworldCharacterComponent), Z_Construct_UClass_UClass, Z_Construct_UClass_UInworldCharacterComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_InworldCharacterComponent_MetaData), Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_InworldCharacterComponent_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_CharacterPlaybacks_Inner = { "CharacterPlaybacks", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UInworldCharacterPlayback_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_CharacterPlaybacks_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/InworldRPMEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_CharacterPlaybacks = { "CharacterPlaybacks", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInworldRPMEditorSettings, CharacterPlaybacks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_CharacterPlaybacks_MetaData), Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_CharacterPlaybacks_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_OtherCharacterComponents_Inner = { "OtherCharacterComponents", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_OtherCharacterComponents_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/InworldRPMEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_OtherCharacterComponents = { "OtherCharacterComponents", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInworldRPMEditorSettings, OtherCharacterComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_OtherCharacterComponents_MetaData), Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_OtherCharacterComponents_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInworldRPMEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_RPMAnimBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_RPMSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_InworldCharacterComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_CharacterPlaybacks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_CharacterPlaybacks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_OtherCharacterComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInworldRPMEditorSettings_Statics::NewProp_OtherCharacterComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInworldRPMEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInworldRPMEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInworldRPMEditorSettings_Statics::ClassParams = {
		&UInworldRPMEditorSettings::StaticClass,
		"InworldAI",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInworldRPMEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInworldRPMEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInworldRPMEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UInworldRPMEditorSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInworldRPMEditorSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInworldRPMEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UInworldRPMEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInworldRPMEditorSettings.OuterSingleton, Z_Construct_UClass_UInworldRPMEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInworldRPMEditorSettings.OuterSingleton;
	}
	template<> INWORLDRPMEDITOR_API UClass* StaticClass<UInworldRPMEditorSettings>()
	{
		return UInworldRPMEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInworldRPMEditorSettings);
	UInworldRPMEditorSettings::~UInworldRPMEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_InworldRPM_Source_InworldRPMEditor_Public_InworldRPMEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_InworldRPM_Source_InworldRPMEditor_Public_InworldRPMEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInworldRPMEditorSettings, UInworldRPMEditorSettings::StaticClass, TEXT("UInworldRPMEditorSettings"), &Z_Registration_Info_UClass_UInworldRPMEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInworldRPMEditorSettings), 3904326157U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_InworldRPM_Source_InworldRPMEditor_Public_InworldRPMEditorSettings_h_647879621(TEXT("/Script/InworldRPMEditor"),
		Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_InworldRPM_Source_InworldRPMEditor_Public_InworldRPMEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_InworldRPM_Source_InworldRPMEditor_Public_InworldRPMEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
