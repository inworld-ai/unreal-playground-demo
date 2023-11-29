// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InworldRPMEditor/Public/InworldRPMEditorApi.h"
#include "InworldAIClient/Public/InworldStudioTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInworldRPMEditorApi() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeAsset_NoRegister();
	INWORLDAICLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FInworldStudioUserCharacterData();
	INWORLDRPMEDITOR_API UClass* Z_Construct_UClass_UInworldRPMEditorApi();
	INWORLDRPMEDITOR_API UClass* Z_Construct_UClass_UInworldRPMEditorApi_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InworldRPMEditor();
// End Cross Module References
	DEFINE_FUNCTION(UInworldRPMEditorApi::execCanCreateReadyPlayerMeActor)
	{
		P_GET_STRUCT_REF(FInworldStudioUserCharacterData,Z_Param_Out_CharacterData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanCreateReadyPlayerMeActor(Z_Param_Out_CharacterData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInworldRPMEditorApi::execCreateReadyPlayerMeActor)
	{
		P_GET_STRUCT_REF(FInworldStudioUserCharacterData,Z_Param_Out_CharacterData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateReadyPlayerMeActor(Z_Param_Out_CharacterData);
		P_NATIVE_END;
	}
	void UInworldRPMEditorApi::StaticRegisterNativesUInworldRPMEditorApi()
	{
		UClass* Class = UInworldRPMEditorApi::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanCreateReadyPlayerMeActor", &UInworldRPMEditorApi::execCanCreateReadyPlayerMeActor },
			{ "CreateReadyPlayerMeActor", &UInworldRPMEditorApi::execCreateReadyPlayerMeActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor_Statics
	{
		struct InworldRPMEditorApi_eventCanCreateReadyPlayerMeActor_Parms
		{
			FInworldStudioUserCharacterData CharacterData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor_Statics::NewProp_CharacterData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InworldRPMEditorApi_eventCanCreateReadyPlayerMeActor_Parms, CharacterData), Z_Construct_UScriptStruct_FInworldStudioUserCharacterData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor_Statics::NewProp_CharacterData_MetaData), Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor_Statics::NewProp_CharacterData_MetaData) }; // 2805991027
	void Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InworldRPMEditorApi_eventCanCreateReadyPlayerMeActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InworldRPMEditorApi_eventCanCreateReadyPlayerMeActor_Parms), &Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor_Statics::NewProp_CharacterData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "InworldAI" },
		{ "ModuleRelativePath", "Public/InworldRPMEditorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInworldRPMEditorApi, nullptr, "CanCreateReadyPlayerMeActor", nullptr, nullptr, Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor_Statics::InworldRPMEditorApi_eventCanCreateReadyPlayerMeActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor_Statics::InworldRPMEditorApi_eventCanCreateReadyPlayerMeActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInworldRPMEditorApi_CreateReadyPlayerMeActor_Statics
	{
		struct InworldRPMEditorApi_eventCreateReadyPlayerMeActor_Parms
		{
			FInworldStudioUserCharacterData CharacterData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInworldRPMEditorApi_CreateReadyPlayerMeActor_Statics::NewProp_CharacterData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInworldRPMEditorApi_CreateReadyPlayerMeActor_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InworldRPMEditorApi_eventCreateReadyPlayerMeActor_Parms, CharacterData), Z_Construct_UScriptStruct_FInworldStudioUserCharacterData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInworldRPMEditorApi_CreateReadyPlayerMeActor_Statics::NewProp_CharacterData_MetaData), Z_Construct_UFunction_UInworldRPMEditorApi_CreateReadyPlayerMeActor_Statics::NewProp_CharacterData_MetaData) }; // 2805991027
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInworldRPMEditorApi_CreateReadyPlayerMeActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInworldRPMEditorApi_CreateReadyPlayerMeActor_Statics::NewProp_CharacterData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInworldRPMEditorApi_CreateReadyPlayerMeActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "InworldAI" },
		{ "ModuleRelativePath", "Public/InworldRPMEditorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInworldRPMEditorApi_CreateReadyPlayerMeActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInworldRPMEditorApi, nullptr, "CreateReadyPlayerMeActor", nullptr, nullptr, Z_Construct_UFunction_UInworldRPMEditorApi_CreateReadyPlayerMeActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInworldRPMEditorApi_CreateReadyPlayerMeActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInworldRPMEditorApi_CreateReadyPlayerMeActor_Statics::InworldRPMEditorApi_eventCreateReadyPlayerMeActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInworldRPMEditorApi_CreateReadyPlayerMeActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInworldRPMEditorApi_CreateReadyPlayerMeActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInworldRPMEditorApi_CreateReadyPlayerMeActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInworldRPMEditorApi_CreateReadyPlayerMeActor_Statics::InworldRPMEditorApi_eventCreateReadyPlayerMeActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInworldRPMEditorApi_CreateReadyPlayerMeActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInworldRPMEditorApi_CreateReadyPlayerMeActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInworldRPMEditorApi);
	UClass* Z_Construct_UClass_UInworldRPMEditorApi_NoRegister()
	{
		return UInworldRPMEditorApi::StaticClass();
	}
	struct Z_Construct_UClass_UInworldRPMEditorApi_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_glTFRuntimeAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_glTFRuntimeAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeActorBP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeActorBP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInworldRPMEditorApi_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_InworldRPMEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInworldRPMEditorApi_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInworldRPMEditorApi_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInworldRPMEditorApi_CanCreateReadyPlayerMeActor, "CanCreateReadyPlayerMeActor" }, // 3313816275
		{ &Z_Construct_UFunction_UInworldRPMEditorApi_CreateReadyPlayerMeActor, "CreateReadyPlayerMeActor" }, // 1589550115
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInworldRPMEditorApi_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInworldRPMEditorApi_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InworldRPMEditorApi.h" },
		{ "ModuleRelativePath", "Public/InworldRPMEditorApi.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInworldRPMEditorApi_Statics::NewProp_glTFRuntimeAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/InworldRPMEditorApi.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInworldRPMEditorApi_Statics::NewProp_glTFRuntimeAsset = { "glTFRuntimeAsset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInworldRPMEditorApi, glTFRuntimeAsset), Z_Construct_UClass_UglTFRuntimeAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInworldRPMEditorApi_Statics::NewProp_glTFRuntimeAsset_MetaData), Z_Construct_UClass_UInworldRPMEditorApi_Statics::NewProp_glTFRuntimeAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInworldRPMEditorApi_Statics::NewProp_RuntimeSkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/InworldRPMEditorApi.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInworldRPMEditorApi_Statics::NewProp_RuntimeSkeletalMesh = { "RuntimeSkeletalMesh", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInworldRPMEditorApi, RuntimeSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInworldRPMEditorApi_Statics::NewProp_RuntimeSkeletalMesh_MetaData), Z_Construct_UClass_UInworldRPMEditorApi_Statics::NewProp_RuntimeSkeletalMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInworldRPMEditorApi_Statics::NewProp_RuntimeActorBP_MetaData[] = {
		{ "ModuleRelativePath", "Public/InworldRPMEditorApi.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInworldRPMEditorApi_Statics::NewProp_RuntimeActorBP = { "RuntimeActorBP", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInworldRPMEditorApi, RuntimeActorBP), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInworldRPMEditorApi_Statics::NewProp_RuntimeActorBP_MetaData), Z_Construct_UClass_UInworldRPMEditorApi_Statics::NewProp_RuntimeActorBP_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInworldRPMEditorApi_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInworldRPMEditorApi_Statics::NewProp_glTFRuntimeAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInworldRPMEditorApi_Statics::NewProp_RuntimeSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInworldRPMEditorApi_Statics::NewProp_RuntimeActorBP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInworldRPMEditorApi_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInworldRPMEditorApi>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInworldRPMEditorApi_Statics::ClassParams = {
		&UInworldRPMEditorApi::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInworldRPMEditorApi_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInworldRPMEditorApi_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInworldRPMEditorApi_Statics::Class_MetaDataParams), Z_Construct_UClass_UInworldRPMEditorApi_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInworldRPMEditorApi_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInworldRPMEditorApi()
	{
		if (!Z_Registration_Info_UClass_UInworldRPMEditorApi.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInworldRPMEditorApi.OuterSingleton, Z_Construct_UClass_UInworldRPMEditorApi_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInworldRPMEditorApi.OuterSingleton;
	}
	template<> INWORLDRPMEDITOR_API UClass* StaticClass<UInworldRPMEditorApi>()
	{
		return UInworldRPMEditorApi::StaticClass();
	}
	UInworldRPMEditorApi::UInworldRPMEditorApi() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInworldRPMEditorApi);
	UInworldRPMEditorApi::~UInworldRPMEditorApi() {}
	struct Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_InworldRPM_Source_InworldRPMEditor_Public_InworldRPMEditorApi_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_InworldRPM_Source_InworldRPMEditor_Public_InworldRPMEditorApi_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInworldRPMEditorApi, UInworldRPMEditorApi::StaticClass, TEXT("UInworldRPMEditorApi"), &Z_Registration_Info_UClass_UInworldRPMEditorApi, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInworldRPMEditorApi), 1253587571U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_InworldRPM_Source_InworldRPMEditor_Public_InworldRPMEditorApi_h_334223965(TEXT("/Script/InworldRPMEditor"),
		Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_InworldRPM_Source_InworldRPMEditor_Public_InworldRPMEditorApi_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_InworldRPM_Source_InworldRPMEditor_Public_InworldRPMEditorApi_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
