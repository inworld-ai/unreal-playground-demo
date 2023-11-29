// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "glTFRuntimeEditor/Public/glTFRuntimeEditorDelegates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeglTFRuntimeEditorDelegates() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeAsset_NoRegister();
	GLTFRUNTIMEEDITOR_API UClass* Z_Construct_UClass_UglTFRuntimeEditorDelegates();
	GLTFRUNTIMEEDITOR_API UClass* Z_Construct_UClass_UglTFRuntimeEditorDelegates_NoRegister();
	UPackage* Z_Construct_UPackage__Script_glTFRuntimeEditor();
// End Cross Module References
	DEFINE_FUNCTION(UglTFRuntimeEditorDelegates::execSpawnFromClipboard)
	{
		P_GET_OBJECT(UglTFRuntimeAsset,Z_Param_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnFromClipboard(Z_Param_Asset);
		P_NATIVE_END;
	}
	void UglTFRuntimeEditorDelegates::StaticRegisterNativesUglTFRuntimeEditorDelegates()
	{
		UClass* Class = UglTFRuntimeEditorDelegates::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnFromClipboard", &UglTFRuntimeEditorDelegates::execSpawnFromClipboard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UglTFRuntimeEditorDelegates_SpawnFromClipboard_Statics
	{
		struct glTFRuntimeEditorDelegates_eventSpawnFromClipboard_Parms
		{
			UglTFRuntimeAsset* Asset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeEditorDelegates_SpawnFromClipboard_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeEditorDelegates_eventSpawnFromClipboard_Parms, Asset), Z_Construct_UClass_UglTFRuntimeAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeEditorDelegates_SpawnFromClipboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeEditorDelegates_SpawnFromClipboard_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeEditorDelegates_SpawnFromClipboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/glTFRuntimeEditorDelegates.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeEditorDelegates_SpawnFromClipboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeEditorDelegates, nullptr, "SpawnFromClipboard", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeEditorDelegates_SpawnFromClipboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeEditorDelegates_SpawnFromClipboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeEditorDelegates_SpawnFromClipboard_Statics::glTFRuntimeEditorDelegates_eventSpawnFromClipboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeEditorDelegates_SpawnFromClipboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeEditorDelegates_SpawnFromClipboard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeEditorDelegates_SpawnFromClipboard_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeEditorDelegates_SpawnFromClipboard_Statics::glTFRuntimeEditorDelegates_eventSpawnFromClipboard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeEditorDelegates_SpawnFromClipboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeEditorDelegates_SpawnFromClipboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UglTFRuntimeEditorDelegates);
	UClass* Z_Construct_UClass_UglTFRuntimeEditorDelegates_NoRegister()
	{
		return UglTFRuntimeEditorDelegates::StaticClass();
	}
	struct Z_Construct_UClass_UglTFRuntimeEditorDelegates_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UglTFRuntimeEditorDelegates_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_glTFRuntimeEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeEditorDelegates_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UglTFRuntimeEditorDelegates_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UglTFRuntimeEditorDelegates_SpawnFromClipboard, "SpawnFromClipboard" }, // 895056365
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeEditorDelegates_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFRuntimeEditorDelegates_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "glTFRuntimeEditorDelegates.h" },
		{ "ModuleRelativePath", "Public/glTFRuntimeEditorDelegates.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UglTFRuntimeEditorDelegates_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UglTFRuntimeEditorDelegates>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UglTFRuntimeEditorDelegates_Statics::ClassParams = {
		&UglTFRuntimeEditorDelegates::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeEditorDelegates_Statics::Class_MetaDataParams), Z_Construct_UClass_UglTFRuntimeEditorDelegates_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UglTFRuntimeEditorDelegates()
	{
		if (!Z_Registration_Info_UClass_UglTFRuntimeEditorDelegates.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UglTFRuntimeEditorDelegates.OuterSingleton, Z_Construct_UClass_UglTFRuntimeEditorDelegates_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UglTFRuntimeEditorDelegates.OuterSingleton;
	}
	template<> GLTFRUNTIMEEDITOR_API UClass* StaticClass<UglTFRuntimeEditorDelegates>()
	{
		return UglTFRuntimeEditorDelegates::StaticClass();
	}
	UglTFRuntimeEditorDelegates::UglTFRuntimeEditorDelegates(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UglTFRuntimeEditorDelegates);
	UglTFRuntimeEditorDelegates::~UglTFRuntimeEditorDelegates() {}
	struct Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntimeEditor_Public_glTFRuntimeEditorDelegates_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntimeEditor_Public_glTFRuntimeEditorDelegates_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UglTFRuntimeEditorDelegates, UglTFRuntimeEditorDelegates::StaticClass, TEXT("UglTFRuntimeEditorDelegates"), &Z_Registration_Info_UClass_UglTFRuntimeEditorDelegates, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UglTFRuntimeEditorDelegates), 109560349U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntimeEditor_Public_glTFRuntimeEditorDelegates_h_2909203401(TEXT("/Script/glTFRuntimeEditor"),
		Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntimeEditor_Public_glTFRuntimeEditorDelegates_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntimeEditor_Public_glTFRuntimeEditorDelegates_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
