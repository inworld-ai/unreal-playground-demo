// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "glTFRuntime/Public/glTFRuntimeAssetActor.h"
#include "glTFRuntime/Public/glTFRuntimeParser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeglTFRuntimeAssetActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GLTFRUNTIME_API UClass* Z_Construct_UClass_AglTFRuntimeAssetActor();
	GLTFRUNTIME_API UClass* Z_Construct_UClass_AglTFRuntimeAssetActor_NoRegister();
	GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeAnimationCurve_NoRegister();
	GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeAsset_NoRegister();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeLightConfig();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeNode();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeSkeletalAnimationConfig();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeStaticMeshConfig();
	UPackage* Z_Construct_UPackage__Script_glTFRuntime();
// End Cross Module References
	DEFINE_FUNCTION(AglTFRuntimeAssetActor::execSetCurveAnimationByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CurveAnimationName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurveAnimationByName(Z_Param_CurveAnimationName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AglTFRuntimeAssetActor::execReceiveOnSkeletalMeshComponentCreated)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
		P_GET_STRUCT_REF(FglTFRuntimeNode,Z_Param_Out_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveOnSkeletalMeshComponentCreated_Implementation(Z_Param_SkeletalMeshComponent,Z_Param_Out_Node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AglTFRuntimeAssetActor::execReceiveOnStaticMeshComponentCreated)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_GET_STRUCT_REF(FglTFRuntimeNode,Z_Param_Out_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveOnStaticMeshComponentCreated_Implementation(Z_Param_StaticMeshComponent,Z_Param_Out_Node);
		P_NATIVE_END;
	}
	struct glTFRuntimeAssetActor_eventReceiveOnSkeletalMeshComponentCreated_Parms
	{
		USkeletalMeshComponent* SkeletalMeshComponent;
		FglTFRuntimeNode Node;
	};
	struct glTFRuntimeAssetActor_eventReceiveOnStaticMeshComponentCreated_Parms
	{
		UStaticMeshComponent* StaticMeshComponent;
		FglTFRuntimeNode Node;
	};
	static FName NAME_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated = FName(TEXT("ReceiveOnSkeletalMeshComponentCreated"));
	void AglTFRuntimeAssetActor::ReceiveOnSkeletalMeshComponentCreated(USkeletalMeshComponent* SkeletalMeshComponent, FglTFRuntimeNode const& Node)
	{
		glTFRuntimeAssetActor_eventReceiveOnSkeletalMeshComponentCreated_Parms Parms;
		Parms.SkeletalMeshComponent=SkeletalMeshComponent;
		Parms.Node=Node;
		ProcessEvent(FindFunctionChecked(NAME_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated),&Parms);
	}
	static FName NAME_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated = FName(TEXT("ReceiveOnStaticMeshComponentCreated"));
	void AglTFRuntimeAssetActor::ReceiveOnStaticMeshComponentCreated(UStaticMeshComponent* StaticMeshComponent, FglTFRuntimeNode const& Node)
	{
		glTFRuntimeAssetActor_eventReceiveOnStaticMeshComponentCreated_Parms Parms;
		Parms.StaticMeshComponent=StaticMeshComponent;
		Parms.Node=Node;
		ProcessEvent(FindFunctionChecked(NAME_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated),&Parms);
	}
	void AglTFRuntimeAssetActor::StaticRegisterNativesAglTFRuntimeAssetActor()
	{
		UClass* Class = AglTFRuntimeAssetActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveOnSkeletalMeshComponentCreated", &AglTFRuntimeAssetActor::execReceiveOnSkeletalMeshComponentCreated },
			{ "ReceiveOnStaticMeshComponentCreated", &AglTFRuntimeAssetActor::execReceiveOnStaticMeshComponentCreated },
			{ "SetCurveAnimationByName", &AglTFRuntimeAssetActor::execSetCurveAnimationByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAssetActor_eventReceiveOnSkeletalMeshComponentCreated_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated_Statics::NewProp_SkeletalMeshComponent_MetaData), Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated_Statics::NewProp_SkeletalMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAssetActor_eventReceiveOnSkeletalMeshComponentCreated_Parms, Node), Z_Construct_UScriptStruct_FglTFRuntimeNode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated_Statics::NewProp_Node_MetaData), Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated_Statics::NewProp_Node_MetaData) }; // 1883869803
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated_Statics::NewProp_SkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated_Statics::NewProp_Node,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "DisplayName", "On SkeletalMeshComponent Created" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AglTFRuntimeAssetActor, nullptr, "ReceiveOnSkeletalMeshComponentCreated", nullptr, nullptr, Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated_Statics::PropPointers), sizeof(glTFRuntimeAssetActor_eventReceiveOnSkeletalMeshComponentCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated_Statics::PropPointers) < 2048);
	static_assert(sizeof(glTFRuntimeAssetActor_eventReceiveOnSkeletalMeshComponentCreated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAssetActor_eventReceiveOnStaticMeshComponentCreated_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::NewProp_StaticMeshComponent_MetaData), Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::NewProp_StaticMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAssetActor_eventReceiveOnStaticMeshComponentCreated_Parms, Node), Z_Construct_UScriptStruct_FglTFRuntimeNode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::NewProp_Node_MetaData), Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::NewProp_Node_MetaData) }; // 1883869803
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::NewProp_Node,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "DisplayName", "On StaticMeshComponent Created" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AglTFRuntimeAssetActor, nullptr, "ReceiveOnStaticMeshComponentCreated", nullptr, nullptr, Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::PropPointers), sizeof(glTFRuntimeAssetActor_eventReceiveOnStaticMeshComponentCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::PropPointers) < 2048);
	static_assert(sizeof(glTFRuntimeAssetActor_eventReceiveOnStaticMeshComponentCreated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AglTFRuntimeAssetActor_SetCurveAnimationByName_Statics
	{
		struct glTFRuntimeAssetActor_eventSetCurveAnimationByName_Parms
		{
			FString CurveAnimationName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveAnimationName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurveAnimationName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AglTFRuntimeAssetActor_SetCurveAnimationByName_Statics::NewProp_CurveAnimationName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AglTFRuntimeAssetActor_SetCurveAnimationByName_Statics::NewProp_CurveAnimationName = { "CurveAnimationName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAssetActor_eventSetCurveAnimationByName_Parms, CurveAnimationName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeAssetActor_SetCurveAnimationByName_Statics::NewProp_CurveAnimationName_MetaData), Z_Construct_UFunction_AglTFRuntimeAssetActor_SetCurveAnimationByName_Statics::NewProp_CurveAnimationName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AglTFRuntimeAssetActor_SetCurveAnimationByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AglTFRuntimeAssetActor_SetCurveAnimationByName_Statics::NewProp_CurveAnimationName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AglTFRuntimeAssetActor_SetCurveAnimationByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AglTFRuntimeAssetActor_SetCurveAnimationByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AglTFRuntimeAssetActor, nullptr, "SetCurveAnimationByName", nullptr, nullptr, Z_Construct_UFunction_AglTFRuntimeAssetActor_SetCurveAnimationByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeAssetActor_SetCurveAnimationByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AglTFRuntimeAssetActor_SetCurveAnimationByName_Statics::glTFRuntimeAssetActor_eventSetCurveAnimationByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeAssetActor_SetCurveAnimationByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AglTFRuntimeAssetActor_SetCurveAnimationByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeAssetActor_SetCurveAnimationByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AglTFRuntimeAssetActor_SetCurveAnimationByName_Statics::glTFRuntimeAssetActor_eventSetCurveAnimationByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AglTFRuntimeAssetActor_SetCurveAnimationByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AglTFRuntimeAssetActor_SetCurveAnimationByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AglTFRuntimeAssetActor);
	UClass* Z_Construct_UClass_AglTFRuntimeAssetActor_NoRegister()
	{
		return AglTFRuntimeAssetActor::StaticClass();
	}
	struct Z_Construct_UClass_AglTFRuntimeAssetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DiscoveredCurveAnimationsNames_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiscoveredCurveAnimationsNames_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_DiscoveredCurveAnimationsNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalAnimationConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalAnimationConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveBasedAnimations_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveBasedAnimations_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveBasedAnimations_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CurveBasedAnimations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowNodeAnimations_MetaData[];
#endif
		static void NewProp_bAllowNodeAnimations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowNodeAnimations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStaticMeshesAsSkeletal_MetaData[];
#endif
		static void NewProp_bStaticMeshesAsSkeletal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStaticMeshesAsSkeletal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSkeletalAnimations_MetaData[];
#endif
		static void NewProp_bAllowSkeletalAnimations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSkeletalAnimations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPoseAnimations_MetaData[];
#endif
		static void NewProp_bAllowPoseAnimations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPoseAnimations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCameras_MetaData[];
#endif
		static void NewProp_bAllowCameras_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCameras;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowLights_MetaData[];
#endif
		static void NewProp_bAllowLights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowLights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceSkinnedMeshToRoot_MetaData[];
#endif
		static void NewProp_bForceSkinnedMeshToRoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceSkinnedMeshToRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootNodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RootNodeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetRoot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_glTFRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnSkeletalMeshComponentCreated, "ReceiveOnSkeletalMeshComponentCreated" }, // 971231480
		{ &Z_Construct_UFunction_AglTFRuntimeAssetActor_ReceiveOnStaticMeshComponentCreated, "ReceiveOnStaticMeshComponentCreated" }, // 2250354385
		{ &Z_Construct_UFunction_AglTFRuntimeAssetActor_SetCurveAnimationByName, "SetCurveAnimationByName" }, // 471821860
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "glTFRuntimeAssetActor.h" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_DiscoveredCurveAnimationsNames_ElementProp = { "DiscoveredCurveAnimationsNames", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_DiscoveredCurveAnimationsNames_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_DiscoveredCurveAnimationsNames = { "DiscoveredCurveAnimationsNames", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AglTFRuntimeAssetActor, DiscoveredCurveAnimationsNames), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_DiscoveredCurveAnimationsNames_MetaData), Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_DiscoveredCurveAnimationsNames_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_Asset_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AglTFRuntimeAssetActor, Asset), Z_Construct_UClass_UglTFRuntimeAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_Asset_MetaData), Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_Asset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_StaticMeshConfig_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_StaticMeshConfig = { "StaticMeshConfig", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AglTFRuntimeAssetActor, StaticMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeStaticMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_StaticMeshConfig_MetaData), Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_StaticMeshConfig_MetaData) }; // 2209239704
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_SkeletalMeshConfig_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_SkeletalMeshConfig = { "SkeletalMeshConfig", nullptr, (EPropertyFlags)0x0011008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AglTFRuntimeAssetActor, SkeletalMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_SkeletalMeshConfig_MetaData), Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_SkeletalMeshConfig_MetaData) }; // 2280782800
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_SkeletalAnimationConfig_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_SkeletalAnimationConfig = { "SkeletalAnimationConfig", nullptr, (EPropertyFlags)0x0011008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AglTFRuntimeAssetActor, SkeletalAnimationConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalAnimationConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_SkeletalAnimationConfig_MetaData), Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_SkeletalAnimationConfig_MetaData) }; // 1563843514
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_LightConfig_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_LightConfig = { "LightConfig", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AglTFRuntimeAssetActor, LightConfig), Z_Construct_UScriptStruct_FglTFRuntimeLightConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_LightConfig_MetaData), Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_LightConfig_MetaData) }; // 2645290052
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_CurveBasedAnimations_ValueProp = { "CurveBasedAnimations", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UglTFRuntimeAnimationCurve_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_CurveBasedAnimations_Key_KeyProp = { "CurveBasedAnimations_Key", nullptr, (EPropertyFlags)0x0000000000080001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_CurveBasedAnimations_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_CurveBasedAnimations = { "CurveBasedAnimations", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AglTFRuntimeAssetActor, CurveBasedAnimations), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_CurveBasedAnimations_MetaData), Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_CurveBasedAnimations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowNodeAnimations_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActor.h" },
	};
#endif
	void Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowNodeAnimations_SetBit(void* Obj)
	{
		((AglTFRuntimeAssetActor*)Obj)->bAllowNodeAnimations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowNodeAnimations = { "bAllowNodeAnimations", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AglTFRuntimeAssetActor), &Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowNodeAnimations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowNodeAnimations_MetaData), Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowNodeAnimations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bStaticMeshesAsSkeletal_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActor.h" },
	};
#endif
	void Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bStaticMeshesAsSkeletal_SetBit(void* Obj)
	{
		((AglTFRuntimeAssetActor*)Obj)->bStaticMeshesAsSkeletal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bStaticMeshesAsSkeletal = { "bStaticMeshesAsSkeletal", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AglTFRuntimeAssetActor), &Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bStaticMeshesAsSkeletal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bStaticMeshesAsSkeletal_MetaData), Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bStaticMeshesAsSkeletal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowSkeletalAnimations_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActor.h" },
	};
#endif
	void Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowSkeletalAnimations_SetBit(void* Obj)
	{
		((AglTFRuntimeAssetActor*)Obj)->bAllowSkeletalAnimations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowSkeletalAnimations = { "bAllowSkeletalAnimations", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AglTFRuntimeAssetActor), &Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowSkeletalAnimations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowSkeletalAnimations_MetaData), Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowSkeletalAnimations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowPoseAnimations_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActor.h" },
	};
#endif
	void Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowPoseAnimations_SetBit(void* Obj)
	{
		((AglTFRuntimeAssetActor*)Obj)->bAllowPoseAnimations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowPoseAnimations = { "bAllowPoseAnimations", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AglTFRuntimeAssetActor), &Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowPoseAnimations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowPoseAnimations_MetaData), Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowPoseAnimations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowCameras_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActor.h" },
	};
#endif
	void Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowCameras_SetBit(void* Obj)
	{
		((AglTFRuntimeAssetActor*)Obj)->bAllowCameras = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowCameras = { "bAllowCameras", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AglTFRuntimeAssetActor), &Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowCameras_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowCameras_MetaData), Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowCameras_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowLights_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActor.h" },
	};
#endif
	void Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowLights_SetBit(void* Obj)
	{
		((AglTFRuntimeAssetActor*)Obj)->bAllowLights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowLights = { "bAllowLights", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AglTFRuntimeAssetActor), &Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowLights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowLights_MetaData), Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowLights_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bForceSkinnedMeshToRoot_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActor.h" },
	};
#endif
	void Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bForceSkinnedMeshToRoot_SetBit(void* Obj)
	{
		((AglTFRuntimeAssetActor*)Obj)->bForceSkinnedMeshToRoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bForceSkinnedMeshToRoot = { "bForceSkinnedMeshToRoot", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AglTFRuntimeAssetActor), &Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bForceSkinnedMeshToRoot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bForceSkinnedMeshToRoot_MetaData), Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bForceSkinnedMeshToRoot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_RootNodeIndex_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_RootNodeIndex = { "RootNodeIndex", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AglTFRuntimeAssetActor, RootNodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_RootNodeIndex_MetaData), Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_RootNodeIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_AssetRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "glTFRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_AssetRoot = { "AssetRoot", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AglTFRuntimeAssetActor, AssetRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_AssetRoot_MetaData), Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_AssetRoot_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_DiscoveredCurveAnimationsNames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_DiscoveredCurveAnimationsNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_StaticMeshConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_SkeletalMeshConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_SkeletalAnimationConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_LightConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_CurveBasedAnimations_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_CurveBasedAnimations_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_CurveBasedAnimations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowNodeAnimations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bStaticMeshesAsSkeletal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowSkeletalAnimations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowPoseAnimations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowCameras,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bAllowLights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_bForceSkinnedMeshToRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_RootNodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::NewProp_AssetRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AglTFRuntimeAssetActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::ClassParams = {
		&AglTFRuntimeAssetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AglTFRuntimeAssetActor()
	{
		if (!Z_Registration_Info_UClass_AglTFRuntimeAssetActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AglTFRuntimeAssetActor.OuterSingleton, Z_Construct_UClass_AglTFRuntimeAssetActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AglTFRuntimeAssetActor.OuterSingleton;
	}
	template<> GLTFRUNTIME_API UClass* StaticClass<AglTFRuntimeAssetActor>()
	{
		return AglTFRuntimeAssetActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AglTFRuntimeAssetActor);
	AglTFRuntimeAssetActor::~AglTFRuntimeAssetActor() {}
	struct Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AglTFRuntimeAssetActor, AglTFRuntimeAssetActor::StaticClass, TEXT("AglTFRuntimeAssetActor"), &Z_Registration_Info_UClass_AglTFRuntimeAssetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AglTFRuntimeAssetActor), 2970251550U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_3373478165(TEXT("/Script/glTFRuntime"),
		Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
