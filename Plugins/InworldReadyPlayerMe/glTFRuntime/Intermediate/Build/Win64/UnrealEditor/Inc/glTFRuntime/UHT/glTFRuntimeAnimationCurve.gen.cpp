// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "glTFRuntime/Public/glTFRuntimeAnimationCurve.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeglTFRuntimeAnimationCurve() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UCurveBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeAnimationCurve();
	GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeAnimationCurve_NoRegister();
	UPackage* Z_Construct_UPackage__Script_glTFRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UglTFRuntimeAnimationCurve::execGetTransformValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTransformValue(Z_Param_InTime);
		P_NATIVE_END;
	}
	void UglTFRuntimeAnimationCurve::StaticRegisterNativesUglTFRuntimeAnimationCurve()
	{
		UClass* Class = UglTFRuntimeAnimationCurve::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTransformValue", &UglTFRuntimeAnimationCurve::execGetTransformValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics
	{
		struct glTFRuntimeAnimationCurve_eventGetTransformValue_Parms
		{
			float InTime;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAnimationCurve_eventGetTransformValue_Parms, InTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAnimationCurve_eventGetTransformValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime|Curves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Evaluate this float curve at the specified time */" },
#endif
		{ "ModuleRelativePath", "Public/glTFRuntimeAnimationCurve.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evaluate this float curve at the specified time" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAnimationCurve, nullptr, "GetTransformValue", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::glTFRuntimeAnimationCurve_eventGetTransformValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::glTFRuntimeAnimationCurve_eventGetTransformValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UglTFRuntimeAnimationCurve);
	UClass* Z_Construct_UClass_UglTFRuntimeAnimationCurve_NoRegister()
	{
		return UglTFRuntimeAnimationCurve::StaticClass();
	}
	struct Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationCurves_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationCurves_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleCurves_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_glTFCurveAnimationName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_glTFCurveAnimationName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_glTFCurveAnimationIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_glTFCurveAnimationIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_glTFCurveAnimationDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_glTFCurveAnimationDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_glTFRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue, "GetTransformValue" }, // 1000890844
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "glTFRuntimeAnimationCurve.h" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAnimationCurve.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_LocationCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/glTFRuntimeAnimationCurve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_LocationCurves = { "LocationCurves", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(LocationCurves, UglTFRuntimeAnimationCurve), STRUCT_OFFSET(UglTFRuntimeAnimationCurve, LocationCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_LocationCurves_MetaData), Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_LocationCurves_MetaData) }; // 4189057203
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_RotationCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/glTFRuntimeAnimationCurve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_RotationCurves = { "RotationCurves", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(RotationCurves, UglTFRuntimeAnimationCurve), STRUCT_OFFSET(UglTFRuntimeAnimationCurve, RotationCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_RotationCurves_MetaData), Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_RotationCurves_MetaData) }; // 4189057203
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_ScaleCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/glTFRuntimeAnimationCurve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_ScaleCurves = { "ScaleCurves", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(ScaleCurves, UglTFRuntimeAnimationCurve), STRUCT_OFFSET(UglTFRuntimeAnimationCurve, ScaleCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_ScaleCurves_MetaData), Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_ScaleCurves_MetaData) }; // 4189057203
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_glTFCurveAnimationName_MetaData[] = {
		{ "Category", "glTFRuntime|Curves" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAnimationCurve.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_glTFCurveAnimationName = { "glTFCurveAnimationName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UglTFRuntimeAnimationCurve, glTFCurveAnimationName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_glTFCurveAnimationName_MetaData), Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_glTFCurveAnimationName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_glTFCurveAnimationIndex_MetaData[] = {
		{ "Category", "glTFRuntime|Curves" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAnimationCurve.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_glTFCurveAnimationIndex = { "glTFCurveAnimationIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UglTFRuntimeAnimationCurve, glTFCurveAnimationIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_glTFCurveAnimationIndex_MetaData), Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_glTFCurveAnimationIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_glTFCurveAnimationDuration_MetaData[] = {
		{ "Category", "glTFRuntime|Curves" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAnimationCurve.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_glTFCurveAnimationDuration = { "glTFCurveAnimationDuration", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UglTFRuntimeAnimationCurve, glTFCurveAnimationDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_glTFCurveAnimationDuration_MetaData), Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_glTFCurveAnimationDuration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_LocationCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_RotationCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_ScaleCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_glTFCurveAnimationName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_glTFCurveAnimationIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_glTFCurveAnimationDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UglTFRuntimeAnimationCurve>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::ClassParams = {
		&UglTFRuntimeAnimationCurve::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::Class_MetaDataParams), Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UglTFRuntimeAnimationCurve()
	{
		if (!Z_Registration_Info_UClass_UglTFRuntimeAnimationCurve.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UglTFRuntimeAnimationCurve.OuterSingleton, Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UglTFRuntimeAnimationCurve.OuterSingleton;
	}
	template<> GLTFRUNTIME_API UClass* StaticClass<UglTFRuntimeAnimationCurve>()
	{
		return UglTFRuntimeAnimationCurve::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UglTFRuntimeAnimationCurve);
	UglTFRuntimeAnimationCurve::~UglTFRuntimeAnimationCurve() {}
	struct Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAnimationCurve_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAnimationCurve_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UglTFRuntimeAnimationCurve, UglTFRuntimeAnimationCurve::StaticClass, TEXT("UglTFRuntimeAnimationCurve"), &Z_Registration_Info_UClass_UglTFRuntimeAnimationCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UglTFRuntimeAnimationCurve), 3111372673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAnimationCurve_h_4229711978(TEXT("/Script/glTFRuntime"),
		Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAnimationCurve_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAnimationCurve_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
