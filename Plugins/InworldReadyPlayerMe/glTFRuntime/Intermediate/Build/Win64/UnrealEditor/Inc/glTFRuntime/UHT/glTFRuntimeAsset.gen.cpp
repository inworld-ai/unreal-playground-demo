// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "glTFRuntime/Public/glTFRuntimeAsset.h"
#include "glTFRuntime/Public/glTFRuntimeParser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeglTFRuntimeAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeAnimationCurve_NoRegister();
	GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeAsset();
	GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeAsset_NoRegister();
	GLTFRUNTIME_API UEnum* Z_Construct_UEnum_glTFRuntime_EglTFRuntimeMaterialType();
	GLTFRUNTIME_API UFunction* Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeError__DelegateSignature();
	GLTFRUNTIME_API UFunction* Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeOnSkeletalMeshCreated__DelegateSignature();
	GLTFRUNTIME_API UFunction* Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeOnStaticMeshCreated__DelegateSignature();
	GLTFRUNTIME_API UFunction* Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeSkeletalMeshAsync__DelegateSignature();
	GLTFRUNTIME_API UFunction* Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeStaticMeshAsync__DelegateSignature();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeAudioEmitter();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeImagesConfig();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeLightConfig();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeMaterialsConfig();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeMeshLOD();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeNode();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimePathItem();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeProceduralMeshConfig();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeScene();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeSkeletalAnimationConfig();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeSkeletonConfig();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeStaticMeshConfig();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_glTFRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UglTFRuntimeAsset::execCreateSkeletalAnimationFromPath)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_TARRAY_REF(FglTFRuntimePathItem,Z_Param_Out_BonesPath);
		P_GET_TARRAY_REF(FglTFRuntimePathItem,Z_Param_Out_MorphTargetsPath);
		P_GET_STRUCT_REF(FglTFRuntimeSkeletalAnimationConfig,Z_Param_Out_SkeletalAnimationConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequence**)Z_Param__Result=P_THIS->CreateSkeletalAnimationFromPath(Z_Param_SkeletalMesh,Z_Param_Out_BonesPath,Z_Param_Out_MorphTargetsPath,Z_Param_Out_SkeletalAnimationConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetBooleanFromExtras)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_UBOOL_REF(Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBooleanFromExtras(Z_Param_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetStringFromExtras)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStringFromExtras(Z_Param_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetNumberFromExtras)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNumberFromExtras(Z_Param_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetStringArrayFromExtras)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY_REF(FString,Z_Param_Out_StringArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStringArrayFromExtras(Z_Param_Key,Z_Param_Out_StringArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetStringMapFromExtras)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_StringMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStringMapFromExtras(Z_Param_Key,Z_Param_Out_StringMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execCreateAnimationFromPose)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_STRUCT_REF(FglTFRuntimeSkeletalAnimationConfig,Z_Param_Out_SkeletalAnimationConfig);
		P_GET_PROPERTY(FIntProperty,Z_Param_SkinIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequence**)Z_Param__Result=P_THIS->CreateAnimationFromPose(Z_Param_SkeletalMesh,Z_Param_Out_SkeletalAnimationConfig,Z_Param_SkinIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetMaterialsVariants)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetMaterialsVariants();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetExtensionsRequired)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetExtensionsRequired();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetExtensionsUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetExtensionsUsed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadImageFromBlob)
	{
		P_GET_STRUCT_REF(FglTFRuntimeImagesConfig,Z_Param_Out_ImagesConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->LoadImageFromBlob(Z_Param_Out_ImagesConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadImage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ImageIndex);
		P_GET_STRUCT_REF(FglTFRuntimeImagesConfig,Z_Param_Out_ImagesConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->LoadImage(Z_Param_ImageIndex,Z_Param_Out_ImagesConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadStaticMeshLODsAsync)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_MeshIndices);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_AsyncCallback);
		P_GET_STRUCT_REF(FglTFRuntimeStaticMeshConfig,Z_Param_Out_StaticMeshConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadStaticMeshLODsAsync(Z_Param_Out_MeshIndices,FglTFRuntimeStaticMeshAsync(Z_Param_AsyncCallback),Z_Param_Out_StaticMeshConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadStaticMeshAsync)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MeshIndex);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_AsyncCallback);
		P_GET_STRUCT_REF(FglTFRuntimeStaticMeshConfig,Z_Param_Out_StaticMeshConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadStaticMeshAsync(Z_Param_MeshIndex,FglTFRuntimeStaticMeshAsync(Z_Param_AsyncCallback),Z_Param_Out_StaticMeshConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadEmitterIntoAudioComponent)
	{
		P_GET_STRUCT_REF(FglTFRuntimeAudioEmitter,Z_Param_Out_Emitter);
		P_GET_OBJECT(UAudioComponent,Z_Param_AudioComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadEmitterIntoAudioComponent(Z_Param_Out_Emitter,Z_Param_AudioComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadPunctualLight)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PunctualLightIndex);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FglTFRuntimeLightConfig,Z_Param_Out_LightConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULightComponent**)Z_Param__Result=P_THIS->LoadPunctualLight(Z_Param_PunctualLightIndex,Z_Param_Actor,Z_Param_Out_LightConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadAudioEmitter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
		P_GET_STRUCT_REF(FglTFRuntimeAudioEmitter,Z_Param_Out_Emitter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadAudioEmitter(Z_Param_EmitterIndex,Z_Param_Out_Emitter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetArraySizeFromPath)
	{
		P_GET_TARRAY_REF(FglTFRuntimePathItem,Z_Param_Out_Path);
		P_GET_UBOOL_REF(Z_Param_Out_bFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetArraySizeFromPath(Z_Param_Out_Path,Z_Param_Out_bFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetBooleanFromPath)
	{
		P_GET_TARRAY_REF(FglTFRuntimePathItem,Z_Param_Out_Path);
		P_GET_UBOOL_REF(Z_Param_Out_bFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBooleanFromPath(Z_Param_Out_Path,Z_Param_Out_bFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetFloatFromPath)
	{
		P_GET_TARRAY_REF(FglTFRuntimePathItem,Z_Param_Out_Path);
		P_GET_UBOOL_REF(Z_Param_Out_bFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFloatFromPath(Z_Param_Out_Path,Z_Param_Out_bFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetIntegerFromPath)
	{
		P_GET_TARRAY_REF(FglTFRuntimePathItem,Z_Param_Out_Path);
		P_GET_UBOOL_REF(Z_Param_Out_bFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetIntegerFromPath(Z_Param_Out_Path,Z_Param_Out_bFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetStringFromPath)
	{
		P_GET_TARRAY_REF(FglTFRuntimePathItem,Z_Param_Out_Path);
		P_GET_UBOOL_REF(Z_Param_Out_bFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringFromPath(Z_Param_Out_Path,Z_Param_Out_bFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadStaticMeshIntoProceduralMeshComponent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MeshIndex);
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_ProceduralMeshComponent);
		P_GET_STRUCT_REF(FglTFRuntimeProceduralMeshConfig,Z_Param_Out_ProceduralMeshConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadStaticMeshIntoProceduralMeshComponent(Z_Param_MeshIndex,Z_Param_ProceduralMeshComponent,Z_Param_Out_ProceduralMeshConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execOnSkeletalMeshCreatedProxy)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSkeletalMeshCreatedProxy(Z_Param_SkeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execOnStaticMeshCreatedProxy)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStaticMeshCreatedProxy(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execOnErrorProxy)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ErrorContext);
		P_GET_PROPERTY(FStrProperty,Z_Param_ErrorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnErrorProxy(Z_Param_ErrorContext,Z_Param_ErrorMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadMaterial)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialIndex);
		P_GET_STRUCT_REF(FglTFRuntimeMaterialsConfig,Z_Param_Out_MaterialsConfig);
		P_GET_UBOOL(Z_Param_bUseVertexColors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->LoadMaterial(Z_Param_MaterialIndex,Z_Param_Out_MaterialsConfig,Z_Param_bUseVertexColors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execBuildTransformFromNodeForward)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_LastNodeIndex);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BuildTransformFromNodeForward(Z_Param_NodeIndex,Z_Param_LastNodeIndex,Z_Param_Out_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execBuildTransformFromNodeBackward)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BuildTransformFromNodeBackward(Z_Param_NodeIndex,Z_Param_Out_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetNodeExtrasNumbers)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY_REF(float,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNodeExtrasNumbers(Z_Param_NodeIndex,Z_Param_Key,Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetNodeExtensionIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExtensionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNodeExtensionIndex(Z_Param_NodeIndex,Z_Param_ExtensionName,Z_Param_FieldName,Z_Param_Out_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetNodeExtensionIndices)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExtensionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Indices);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNodeExtensionIndices(Z_Param_NodeIndex,Z_Param_ExtensionName,Z_Param_FieldName,Z_Param_Out_Indices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetNodeGPUInstancingTransforms)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Transforms);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNodeGPUInstancingTransforms(Z_Param_NodeIndex,Z_Param_Out_Transforms);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execNodeIsBone)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NodeIsBone(Z_Param_NodeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadCamera)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CameraIndex);
		P_GET_OBJECT(UCameraComponent,Z_Param_CameraComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadCamera(Z_Param_CameraIndex,Z_Param_CameraComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetNumImages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumImages();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetNumMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumMeshes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetCameraNodesIndices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetCameraNodesIndices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadNodeCamera)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_GET_OBJECT(UClass,Z_Param_CameraActorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACameraActor**)Z_Param__Result=P_THIS->LoadNodeCamera(Z_Param_WorldContextObject,Z_Param_NodeIndex,Z_Param_CameraActorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetCamerasNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetCamerasNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadAllNodeAnimationCurves)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UglTFRuntimeAnimationCurve*>*)Z_Param__Result=P_THIS->LoadAllNodeAnimationCurves(Z_Param_NodeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadNodeAnimationCurve)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UglTFRuntimeAnimationCurve**)Z_Param__Result=P_THIS->LoadNodeAnimationCurve(Z_Param_NodeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadSkeletalAnimationAsMontage)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_AnimationIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotNodeName);
		P_GET_STRUCT_REF(FglTFRuntimeSkeletalAnimationConfig,Z_Param_Out_SkeletalAnimationConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->LoadSkeletalAnimationAsMontage(Z_Param_SkeletalMesh,Z_Param_AnimationIndex,Z_Param_SlotNodeName,Z_Param_Out_SkeletalAnimationConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadNodeSkeletalAnimation)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_GET_STRUCT_REF(FglTFRuntimeSkeletalAnimationConfig,Z_Param_Out_SkeletalAnimationConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequence**)Z_Param__Result=P_THIS->LoadNodeSkeletalAnimation(Z_Param_SkeletalMesh,Z_Param_NodeIndex,Z_Param_Out_SkeletalAnimationConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadSkeletalAnimationByName)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FStrProperty,Z_Param_AnimationName);
		P_GET_STRUCT_REF(FglTFRuntimeSkeletalAnimationConfig,Z_Param_Out_SkeletalAnimationConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequence**)Z_Param__Result=P_THIS->LoadSkeletalAnimationByName(Z_Param_SkeletalMesh,Z_Param_AnimationName,Z_Param_Out_SkeletalAnimationConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadSkeletalAnimation)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_AnimationIndex);
		P_GET_STRUCT_REF(FglTFRuntimeSkeletalAnimationConfig,Z_Param_Out_SkeletalAnimationConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequence**)Z_Param__Result=P_THIS->LoadSkeletalAnimation(Z_Param_SkeletalMesh,Z_Param_AnimationIndex,Z_Param_Out_SkeletalAnimationConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadSkeletalMeshLODs)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_MeshIndices);
		P_GET_PROPERTY(FIntProperty,Z_Param_SkinIndex);
		P_GET_STRUCT_REF(FglTFRuntimeSkeletalMeshConfig,Z_Param_Out_SkeletalMeshConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->LoadSkeletalMeshLODs(Z_Param_Out_MeshIndices,Z_Param_SkinIndex,Z_Param_Out_SkeletalMeshConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadSkeletonFromNodeTreeByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NodeName);
		P_GET_STRUCT_REF(FglTFRuntimeSkeletonConfig,Z_Param_Out_SkeletonConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeleton**)Z_Param__Result=P_THIS->LoadSkeletonFromNodeTreeByName(Z_Param_NodeName,Z_Param_Out_SkeletonConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadSkeletonFromNodeTree)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_GET_STRUCT_REF(FglTFRuntimeSkeletonConfig,Z_Param_Out_SkeletonConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeleton**)Z_Param__Result=P_THIS->LoadSkeletonFromNodeTree(Z_Param_NodeIndex,Z_Param_Out_SkeletonConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadSkeleton)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SkinIndex);
		P_GET_STRUCT_REF(FglTFRuntimeSkeletonConfig,Z_Param_Out_SkeletonConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeleton**)Z_Param__Result=P_THIS->LoadSkeleton(Z_Param_SkinIndex,Z_Param_Out_SkeletonConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadSkeletalMeshFromRuntimeLODs)
	{
		P_GET_TARRAY_REF(FglTFRuntimeMeshLOD,Z_Param_Out_RuntimeLODs);
		P_GET_PROPERTY(FIntProperty,Z_Param_SkinIndex);
		P_GET_STRUCT_REF(FglTFRuntimeSkeletalMeshConfig,Z_Param_Out_SkeletalMeshConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->LoadSkeletalMeshFromRuntimeLODs(Z_Param_Out_RuntimeLODs,Z_Param_SkinIndex,Z_Param_Out_SkeletalMeshConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadSkeletalMeshRecursiveAsync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NodeName);
		P_GET_TARRAY_REF(FString,Z_Param_Out_ExcludeNodes);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_AsyncCallback);
		P_GET_STRUCT_REF(FglTFRuntimeSkeletalMeshConfig,Z_Param_Out_SkeletalMeshConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSkeletalMeshRecursiveAsync(Z_Param_NodeName,Z_Param_Out_ExcludeNodes,FglTFRuntimeSkeletalMeshAsync(Z_Param_AsyncCallback),Z_Param_Out_SkeletalMeshConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadSkeletalMeshRecursive)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NodeName);
		P_GET_TARRAY_REF(FString,Z_Param_Out_ExcludeNodes);
		P_GET_STRUCT_REF(FglTFRuntimeSkeletalMeshConfig,Z_Param_Out_SkeletalMeshConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->LoadSkeletalMeshRecursive(Z_Param_NodeName,Z_Param_Out_ExcludeNodes,Z_Param_Out_SkeletalMeshConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadSkeletalMeshAsync)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MeshIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SkinIndex);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_AsyncCallback);
		P_GET_STRUCT_REF(FglTFRuntimeSkeletalMeshConfig,Z_Param_Out_SkeletalMeshConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSkeletalMeshAsync(Z_Param_MeshIndex,Z_Param_SkinIndex,FglTFRuntimeSkeletalMeshAsync(Z_Param_AsyncCallback),Z_Param_Out_SkeletalMeshConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadSkeletalMesh)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MeshIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SkinIndex);
		P_GET_STRUCT_REF(FglTFRuntimeSkeletalMeshConfig,Z_Param_Out_SkeletalMeshConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->LoadSkeletalMesh(Z_Param_MeshIndex,Z_Param_SkinIndex,Z_Param_Out_SkeletalMeshConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadStaticMeshRecursiveAsync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NodeName);
		P_GET_TARRAY_REF(FString,Z_Param_Out_ExcludeNodes);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_AsyncCallback);
		P_GET_STRUCT_REF(FglTFRuntimeStaticMeshConfig,Z_Param_Out_StaticMeshConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadStaticMeshRecursiveAsync(Z_Param_NodeName,Z_Param_Out_ExcludeNodes,FglTFRuntimeStaticMeshAsync(Z_Param_AsyncCallback),Z_Param_Out_StaticMeshConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadStaticMeshRecursive)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NodeName);
		P_GET_TARRAY_REF(FString,Z_Param_Out_ExcludeNodes);
		P_GET_STRUCT_REF(FglTFRuntimeStaticMeshConfig,Z_Param_Out_StaticMeshConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=P_THIS->LoadStaticMeshRecursive(Z_Param_NodeName,Z_Param_Out_ExcludeNodes,Z_Param_Out_StaticMeshConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadStaticMeshesFromPrimitives)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MeshIndex);
		P_GET_STRUCT_REF(FglTFRuntimeStaticMeshConfig,Z_Param_Out_StaticMeshConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UStaticMesh*>*)Z_Param__Result=P_THIS->LoadStaticMeshesFromPrimitives(Z_Param_MeshIndex,Z_Param_Out_StaticMeshConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadStaticMeshByNodeName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NodeName);
		P_GET_STRUCT_REF(FglTFRuntimeStaticMeshConfig,Z_Param_Out_StaticMeshConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=P_THIS->LoadStaticMeshByNodeName(Z_Param_NodeName,Z_Param_Out_StaticMeshConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadStaticMeshByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MeshName);
		P_GET_STRUCT_REF(FglTFRuntimeStaticMeshConfig,Z_Param_Out_StaticMeshConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=P_THIS->LoadStaticMeshByName(Z_Param_MeshName,Z_Param_Out_StaticMeshConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadStaticMeshLODs)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_MeshIndices);
		P_GET_STRUCT_REF(FglTFRuntimeStaticMeshConfig,Z_Param_Out_StaticMeshConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=P_THIS->LoadStaticMeshLODs(Z_Param_Out_MeshIndices,Z_Param_Out_StaticMeshConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadStaticMesh)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MeshIndex);
		P_GET_STRUCT_REF(FglTFRuntimeStaticMeshConfig,Z_Param_Out_StaticMeshConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=P_THIS->LoadStaticMesh(Z_Param_MeshIndex,Z_Param_Out_StaticMeshConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadStaticMeshFromRuntimeLODs)
	{
		P_GET_TARRAY_REF(FglTFRuntimeMeshLOD,Z_Param_Out_RuntimeLODs);
		P_GET_STRUCT_REF(FglTFRuntimeStaticMeshConfig,Z_Param_Out_StaticMeshConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=P_THIS->LoadStaticMeshFromRuntimeLODs(Z_Param_Out_RuntimeLODs,Z_Param_Out_StaticMeshConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadSkinnedMeshRecursiveAsRuntimeLOD)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NodeName);
		P_GET_TARRAY_REF(FString,Z_Param_Out_ExcludeNodes);
		P_GET_STRUCT_REF(FglTFRuntimeMeshLOD,Z_Param_Out_RuntimeLOD);
		P_GET_STRUCT_REF(FglTFRuntimeMaterialsConfig,Z_Param_Out_MaterialsConfig);
		P_GET_STRUCT_REF(FglTFRuntimeSkeletonConfig,Z_Param_Out_SkeletonConfig);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SkinIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_OverrideSkinIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadSkinnedMeshRecursiveAsRuntimeLOD(Z_Param_NodeName,Z_Param_Out_ExcludeNodes,Z_Param_Out_RuntimeLOD,Z_Param_Out_MaterialsConfig,Z_Param_Out_SkeletonConfig,Z_Param_Out_SkinIndex,Z_Param_OverrideSkinIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execLoadMeshAsRuntimeLOD)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MeshIndex);
		P_GET_STRUCT_REF(FglTFRuntimeMeshLOD,Z_Param_Out_RuntimeLOD);
		P_GET_STRUCT_REF(FglTFRuntimeMaterialsConfig,Z_Param_Out_MaterialsConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadMeshAsRuntimeLOD(Z_Param_MeshIndex,Z_Param_Out_RuntimeLOD,Z_Param_Out_MaterialsConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execFindNodeByNameInArray)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_NodeIndices);
		P_GET_PROPERTY(FStrProperty,Z_Param_NodeName);
		P_GET_STRUCT_REF(FglTFRuntimeNode,Z_Param_Out_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindNodeByNameInArray(Z_Param_Out_NodeIndices,Z_Param_NodeName,Z_Param_Out_Node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetNodeByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NodeName);
		P_GET_STRUCT_REF(FglTFRuntimeNode,Z_Param_Out_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNodeByName(Z_Param_NodeName,Z_Param_Out_Node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetNode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_GET_STRUCT_REF(FglTFRuntimeNode,Z_Param_Out_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNode(Z_Param_NodeIndex,Z_Param_Out_Node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FglTFRuntimeNode>*)Z_Param__Result=P_THIS->GetNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeAsset::execGetScenes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FglTFRuntimeScene>*)Z_Param__Result=P_THIS->GetScenes();
		P_NATIVE_END;
	}
	void UglTFRuntimeAsset::StaticRegisterNativesUglTFRuntimeAsset()
	{
		UClass* Class = UglTFRuntimeAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildTransformFromNodeBackward", &UglTFRuntimeAsset::execBuildTransformFromNodeBackward },
			{ "BuildTransformFromNodeForward", &UglTFRuntimeAsset::execBuildTransformFromNodeForward },
			{ "CreateAnimationFromPose", &UglTFRuntimeAsset::execCreateAnimationFromPose },
			{ "CreateSkeletalAnimationFromPath", &UglTFRuntimeAsset::execCreateSkeletalAnimationFromPath },
			{ "FindNodeByNameInArray", &UglTFRuntimeAsset::execFindNodeByNameInArray },
			{ "GetArraySizeFromPath", &UglTFRuntimeAsset::execGetArraySizeFromPath },
			{ "GetBooleanFromExtras", &UglTFRuntimeAsset::execGetBooleanFromExtras },
			{ "GetBooleanFromPath", &UglTFRuntimeAsset::execGetBooleanFromPath },
			{ "GetCameraNodesIndices", &UglTFRuntimeAsset::execGetCameraNodesIndices },
			{ "GetCamerasNames", &UglTFRuntimeAsset::execGetCamerasNames },
			{ "GetExtensionsRequired", &UglTFRuntimeAsset::execGetExtensionsRequired },
			{ "GetExtensionsUsed", &UglTFRuntimeAsset::execGetExtensionsUsed },
			{ "GetFloatFromPath", &UglTFRuntimeAsset::execGetFloatFromPath },
			{ "GetIntegerFromPath", &UglTFRuntimeAsset::execGetIntegerFromPath },
			{ "GetMaterialsVariants", &UglTFRuntimeAsset::execGetMaterialsVariants },
			{ "GetNode", &UglTFRuntimeAsset::execGetNode },
			{ "GetNodeByName", &UglTFRuntimeAsset::execGetNodeByName },
			{ "GetNodeExtensionIndex", &UglTFRuntimeAsset::execGetNodeExtensionIndex },
			{ "GetNodeExtensionIndices", &UglTFRuntimeAsset::execGetNodeExtensionIndices },
			{ "GetNodeExtrasNumbers", &UglTFRuntimeAsset::execGetNodeExtrasNumbers },
			{ "GetNodeGPUInstancingTransforms", &UglTFRuntimeAsset::execGetNodeGPUInstancingTransforms },
			{ "GetNodes", &UglTFRuntimeAsset::execGetNodes },
			{ "GetNumberFromExtras", &UglTFRuntimeAsset::execGetNumberFromExtras },
			{ "GetNumImages", &UglTFRuntimeAsset::execGetNumImages },
			{ "GetNumMeshes", &UglTFRuntimeAsset::execGetNumMeshes },
			{ "GetScenes", &UglTFRuntimeAsset::execGetScenes },
			{ "GetStringArrayFromExtras", &UglTFRuntimeAsset::execGetStringArrayFromExtras },
			{ "GetStringFromExtras", &UglTFRuntimeAsset::execGetStringFromExtras },
			{ "GetStringFromPath", &UglTFRuntimeAsset::execGetStringFromPath },
			{ "GetStringMapFromExtras", &UglTFRuntimeAsset::execGetStringMapFromExtras },
			{ "LoadAllNodeAnimationCurves", &UglTFRuntimeAsset::execLoadAllNodeAnimationCurves },
			{ "LoadAudioEmitter", &UglTFRuntimeAsset::execLoadAudioEmitter },
			{ "LoadCamera", &UglTFRuntimeAsset::execLoadCamera },
			{ "LoadEmitterIntoAudioComponent", &UglTFRuntimeAsset::execLoadEmitterIntoAudioComponent },
			{ "LoadImage", &UglTFRuntimeAsset::execLoadImage },
			{ "LoadImageFromBlob", &UglTFRuntimeAsset::execLoadImageFromBlob },
			{ "LoadMaterial", &UglTFRuntimeAsset::execLoadMaterial },
			{ "LoadMeshAsRuntimeLOD", &UglTFRuntimeAsset::execLoadMeshAsRuntimeLOD },
			{ "LoadNodeAnimationCurve", &UglTFRuntimeAsset::execLoadNodeAnimationCurve },
			{ "LoadNodeCamera", &UglTFRuntimeAsset::execLoadNodeCamera },
			{ "LoadNodeSkeletalAnimation", &UglTFRuntimeAsset::execLoadNodeSkeletalAnimation },
			{ "LoadPunctualLight", &UglTFRuntimeAsset::execLoadPunctualLight },
			{ "LoadSkeletalAnimation", &UglTFRuntimeAsset::execLoadSkeletalAnimation },
			{ "LoadSkeletalAnimationAsMontage", &UglTFRuntimeAsset::execLoadSkeletalAnimationAsMontage },
			{ "LoadSkeletalAnimationByName", &UglTFRuntimeAsset::execLoadSkeletalAnimationByName },
			{ "LoadSkeletalMesh", &UglTFRuntimeAsset::execLoadSkeletalMesh },
			{ "LoadSkeletalMeshAsync", &UglTFRuntimeAsset::execLoadSkeletalMeshAsync },
			{ "LoadSkeletalMeshFromRuntimeLODs", &UglTFRuntimeAsset::execLoadSkeletalMeshFromRuntimeLODs },
			{ "LoadSkeletalMeshLODs", &UglTFRuntimeAsset::execLoadSkeletalMeshLODs },
			{ "LoadSkeletalMeshRecursive", &UglTFRuntimeAsset::execLoadSkeletalMeshRecursive },
			{ "LoadSkeletalMeshRecursiveAsync", &UglTFRuntimeAsset::execLoadSkeletalMeshRecursiveAsync },
			{ "LoadSkeleton", &UglTFRuntimeAsset::execLoadSkeleton },
			{ "LoadSkeletonFromNodeTree", &UglTFRuntimeAsset::execLoadSkeletonFromNodeTree },
			{ "LoadSkeletonFromNodeTreeByName", &UglTFRuntimeAsset::execLoadSkeletonFromNodeTreeByName },
			{ "LoadSkinnedMeshRecursiveAsRuntimeLOD", &UglTFRuntimeAsset::execLoadSkinnedMeshRecursiveAsRuntimeLOD },
			{ "LoadStaticMesh", &UglTFRuntimeAsset::execLoadStaticMesh },
			{ "LoadStaticMeshAsync", &UglTFRuntimeAsset::execLoadStaticMeshAsync },
			{ "LoadStaticMeshByName", &UglTFRuntimeAsset::execLoadStaticMeshByName },
			{ "LoadStaticMeshByNodeName", &UglTFRuntimeAsset::execLoadStaticMeshByNodeName },
			{ "LoadStaticMeshesFromPrimitives", &UglTFRuntimeAsset::execLoadStaticMeshesFromPrimitives },
			{ "LoadStaticMeshFromRuntimeLODs", &UglTFRuntimeAsset::execLoadStaticMeshFromRuntimeLODs },
			{ "LoadStaticMeshIntoProceduralMeshComponent", &UglTFRuntimeAsset::execLoadStaticMeshIntoProceduralMeshComponent },
			{ "LoadStaticMeshLODs", &UglTFRuntimeAsset::execLoadStaticMeshLODs },
			{ "LoadStaticMeshLODsAsync", &UglTFRuntimeAsset::execLoadStaticMeshLODsAsync },
			{ "LoadStaticMeshRecursive", &UglTFRuntimeAsset::execLoadStaticMeshRecursive },
			{ "LoadStaticMeshRecursiveAsync", &UglTFRuntimeAsset::execLoadStaticMeshRecursiveAsync },
			{ "NodeIsBone", &UglTFRuntimeAsset::execNodeIsBone },
			{ "OnErrorProxy", &UglTFRuntimeAsset::execOnErrorProxy },
			{ "OnSkeletalMeshCreatedProxy", &UglTFRuntimeAsset::execOnSkeletalMeshCreatedProxy },
			{ "OnStaticMeshCreatedProxy", &UglTFRuntimeAsset::execOnStaticMeshCreatedProxy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics
	{
		struct glTFRuntimeAsset_eventBuildTransformFromNodeBackward_Parms
		{
			int32 NodeIndex;
			FTransform Transform;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventBuildTransformFromNodeBackward_Parms, NodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics::NewProp_NodeIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics::NewProp_NodeIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventBuildTransformFromNodeBackward_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventBuildTransformFromNodeBackward_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventBuildTransformFromNodeBackward_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "BuildTransformFromNodeBackward", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics::glTFRuntimeAsset_eventBuildTransformFromNodeBackward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics::glTFRuntimeAsset_eventBuildTransformFromNodeBackward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics
	{
		struct glTFRuntimeAsset_eventBuildTransformFromNodeForward_Parms
		{
			int32 NodeIndex;
			int32 LastNodeIndex;
			FTransform Transform;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastNodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastNodeIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventBuildTransformFromNodeForward_Parms, NodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::NewProp_NodeIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::NewProp_NodeIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::NewProp_LastNodeIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::NewProp_LastNodeIndex = { "LastNodeIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventBuildTransformFromNodeForward_Parms, LastNodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::NewProp_LastNodeIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::NewProp_LastNodeIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventBuildTransformFromNodeForward_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventBuildTransformFromNodeForward_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventBuildTransformFromNodeForward_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::NewProp_LastNodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "BuildTransformFromNodeForward", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::glTFRuntimeAsset_eventBuildTransformFromNodeForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::glTFRuntimeAsset_eventBuildTransformFromNodeForward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics
	{
		struct glTFRuntimeAsset_eventCreateAnimationFromPose_Parms
		{
			USkeletalMesh* SkeletalMesh;
			FglTFRuntimeSkeletalAnimationConfig SkeletalAnimationConfig;
			int32 SkinIndex;
			UAnimSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalAnimationConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalAnimationConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SkinIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventCreateAnimationFromPose_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::NewProp_SkeletalAnimationConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::NewProp_SkeletalAnimationConfig = { "SkeletalAnimationConfig", nullptr, (EPropertyFlags)0x0010048008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventCreateAnimationFromPose_Parms, SkeletalAnimationConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalAnimationConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::NewProp_SkeletalAnimationConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::NewProp_SkeletalAnimationConfig_MetaData) }; // 1563843514
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::NewProp_SkinIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::NewProp_SkinIndex = { "SkinIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventCreateAnimationFromPose_Parms, SkinIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::NewProp_SkinIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::NewProp_SkinIndex_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventCreateAnimationFromPose_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::NewProp_SkeletalAnimationConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::NewProp_SkinIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SkeletalAnimationConfig" },
		{ "AutoCreateRefTerm", "SkeletalAnimationConfig" },
		{ "Category", "glTFRuntime" },
		{ "CPP_Default_SkinIndex", "-1" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "CreateAnimationFromPose", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::glTFRuntimeAsset_eventCreateAnimationFromPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::glTFRuntimeAsset_eventCreateAnimationFromPose_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics
	{
		struct glTFRuntimeAsset_eventCreateSkeletalAnimationFromPath_Parms
		{
			USkeletalMesh* SkeletalMesh;
			TArray<FglTFRuntimePathItem> BonesPath;
			TArray<FglTFRuntimePathItem> MorphTargetsPath;
			FglTFRuntimeSkeletalAnimationConfig SkeletalAnimationConfig;
			UAnimSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BonesPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonesPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BonesPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MorphTargetsPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetsPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MorphTargetsPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalAnimationConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalAnimationConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventCreateSkeletalAnimationFromPath_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_BonesPath_Inner = { "BonesPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FglTFRuntimePathItem, METADATA_PARAMS(0, nullptr) }; // 2417597737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_BonesPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_BonesPath = { "BonesPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventCreateSkeletalAnimationFromPath_Parms, BonesPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_BonesPath_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_BonesPath_MetaData) }; // 2417597737
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_MorphTargetsPath_Inner = { "MorphTargetsPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FglTFRuntimePathItem, METADATA_PARAMS(0, nullptr) }; // 2417597737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_MorphTargetsPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_MorphTargetsPath = { "MorphTargetsPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventCreateSkeletalAnimationFromPath_Parms, MorphTargetsPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_MorphTargetsPath_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_MorphTargetsPath_MetaData) }; // 2417597737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_SkeletalAnimationConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_SkeletalAnimationConfig = { "SkeletalAnimationConfig", nullptr, (EPropertyFlags)0x0010048008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventCreateSkeletalAnimationFromPath_Parms, SkeletalAnimationConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalAnimationConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_SkeletalAnimationConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_SkeletalAnimationConfig_MetaData) }; // 1563843514
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventCreateSkeletalAnimationFromPath_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_BonesPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_BonesPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_MorphTargetsPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_MorphTargetsPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_SkeletalAnimationConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SkeletalAnimationConfig" },
		{ "AutoCreateRefTerm", "BonesPath,MorphTargetsPath,SkeletalAnimationConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "CreateSkeletalAnimationFromPath", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::glTFRuntimeAsset_eventCreateSkeletalAnimationFromPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::glTFRuntimeAsset_eventCreateSkeletalAnimationFromPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics
	{
		struct glTFRuntimeAsset_eventFindNodeByNameInArray_Parms
		{
			TArray<int32> NodeIndices;
			FString NodeName;
			FglTFRuntimeNode Node;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::NewProp_NodeIndices_Inner = { "NodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::NewProp_NodeIndices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::NewProp_NodeIndices = { "NodeIndices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventFindNodeByNameInArray_Parms, NodeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::NewProp_NodeIndices_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::NewProp_NodeIndices_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventFindNodeByNameInArray_Parms, NodeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::NewProp_NodeName_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::NewProp_NodeName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventFindNodeByNameInArray_Parms, Node), Z_Construct_UScriptStruct_FglTFRuntimeNode, METADATA_PARAMS(0, nullptr) }; // 1883869803
	void Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventFindNodeByNameInArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventFindNodeByNameInArray_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::NewProp_NodeIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::NewProp_NodeIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::NewProp_NodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "FindNodeByNameInArray", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::glTFRuntimeAsset_eventFindNodeByNameInArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::glTFRuntimeAsset_eventFindNodeByNameInArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics
	{
		struct glTFRuntimeAsset_eventGetArraySizeFromPath_Parms
		{
			TArray<FglTFRuntimePathItem> Path;
			bool bFound;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
		static void NewProp_bFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFound;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FglTFRuntimePathItem, METADATA_PARAMS(0, nullptr) }; // 2417597737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetArraySizeFromPath_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::NewProp_Path_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::NewProp_Path_MetaData) }; // 2417597737
	void Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::NewProp_bFound_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventGetArraySizeFromPath_Parms*)Obj)->bFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::NewProp_bFound = { "bFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventGetArraySizeFromPath_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::NewProp_bFound_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetArraySizeFromPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::NewProp_Path_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::NewProp_bFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Path" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetArraySizeFromPath", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::glTFRuntimeAsset_eventGetArraySizeFromPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::glTFRuntimeAsset_eventGetArraySizeFromPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics
	{
		struct glTFRuntimeAsset_eventGetBooleanFromExtras_Parms
		{
			FString Key;
			bool Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetBooleanFromExtras_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::NewProp_Key_MetaData) };
	void Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventGetBooleanFromExtras_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventGetBooleanFromExtras_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventGetBooleanFromExtras_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventGetBooleanFromExtras_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetBooleanFromExtras", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::glTFRuntimeAsset_eventGetBooleanFromExtras_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::glTFRuntimeAsset_eventGetBooleanFromExtras_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics
	{
		struct glTFRuntimeAsset_eventGetBooleanFromPath_Parms
		{
			TArray<FglTFRuntimePathItem> Path;
			bool bFound;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
		static void NewProp_bFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFound;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FglTFRuntimePathItem, METADATA_PARAMS(0, nullptr) }; // 2417597737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetBooleanFromPath_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::NewProp_Path_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::NewProp_Path_MetaData) }; // 2417597737
	void Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::NewProp_bFound_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventGetBooleanFromPath_Parms*)Obj)->bFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::NewProp_bFound = { "bFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventGetBooleanFromPath_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::NewProp_bFound_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventGetBooleanFromPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventGetBooleanFromPath_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::NewProp_Path_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::NewProp_bFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Path" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetBooleanFromPath", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::glTFRuntimeAsset_eventGetBooleanFromPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::glTFRuntimeAsset_eventGetBooleanFromPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetCameraNodesIndices_Statics
	{
		struct glTFRuntimeAsset_eventGetCameraNodesIndices_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetCameraNodesIndices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetCameraNodesIndices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetCameraNodesIndices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetCameraNodesIndices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetCameraNodesIndices_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetCameraNodesIndices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetCameraNodesIndices_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetCameraNodesIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetCameraNodesIndices", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetCameraNodesIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetCameraNodesIndices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetCameraNodesIndices_Statics::glTFRuntimeAsset_eventGetCameraNodesIndices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetCameraNodesIndices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetCameraNodesIndices_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetCameraNodesIndices_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetCameraNodesIndices_Statics::glTFRuntimeAsset_eventGetCameraNodesIndices_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetCameraNodesIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetCameraNodesIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetCamerasNames_Statics
	{
		struct glTFRuntimeAsset_eventGetCamerasNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetCamerasNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetCamerasNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetCamerasNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetCamerasNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetCamerasNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetCamerasNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetCamerasNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetCamerasNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetCamerasNames", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetCamerasNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetCamerasNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetCamerasNames_Statics::glTFRuntimeAsset_eventGetCamerasNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetCamerasNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetCamerasNames_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetCamerasNames_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetCamerasNames_Statics::glTFRuntimeAsset_eventGetCamerasNames_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetCamerasNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetCamerasNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsRequired_Statics
	{
		struct glTFRuntimeAsset_eventGetExtensionsRequired_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsRequired_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsRequired_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetExtensionsRequired_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsRequired_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsRequired_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsRequired_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsRequired_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsRequired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetExtensionsRequired", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsRequired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsRequired_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsRequired_Statics::glTFRuntimeAsset_eventGetExtensionsRequired_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsRequired_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsRequired_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsRequired_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsRequired_Statics::glTFRuntimeAsset_eventGetExtensionsRequired_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsRequired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsRequired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsUsed_Statics
	{
		struct glTFRuntimeAsset_eventGetExtensionsUsed_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsUsed_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsUsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetExtensionsUsed_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsUsed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsUsed_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsUsed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetExtensionsUsed", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsUsed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsUsed_Statics::glTFRuntimeAsset_eventGetExtensionsUsed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsUsed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsUsed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsUsed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsUsed_Statics::glTFRuntimeAsset_eventGetExtensionsUsed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics
	{
		struct glTFRuntimeAsset_eventGetFloatFromPath_Parms
		{
			TArray<FglTFRuntimePathItem> Path;
			bool bFound;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
		static void NewProp_bFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFound;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FglTFRuntimePathItem, METADATA_PARAMS(0, nullptr) }; // 2417597737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetFloatFromPath_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::NewProp_Path_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::NewProp_Path_MetaData) }; // 2417597737
	void Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::NewProp_bFound_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventGetFloatFromPath_Parms*)Obj)->bFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::NewProp_bFound = { "bFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventGetFloatFromPath_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::NewProp_bFound_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetFloatFromPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::NewProp_Path_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::NewProp_bFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Path" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetFloatFromPath", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::glTFRuntimeAsset_eventGetFloatFromPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::glTFRuntimeAsset_eventGetFloatFromPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics
	{
		struct glTFRuntimeAsset_eventGetIntegerFromPath_Parms
		{
			TArray<FglTFRuntimePathItem> Path;
			bool bFound;
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
		static void NewProp_bFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFound;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FglTFRuntimePathItem, METADATA_PARAMS(0, nullptr) }; // 2417597737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetIntegerFromPath_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::NewProp_Path_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::NewProp_Path_MetaData) }; // 2417597737
	void Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::NewProp_bFound_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventGetIntegerFromPath_Parms*)Obj)->bFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::NewProp_bFound = { "bFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventGetIntegerFromPath_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::NewProp_bFound_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetIntegerFromPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::NewProp_Path_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::NewProp_bFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Path" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetIntegerFromPath", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::glTFRuntimeAsset_eventGetIntegerFromPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::glTFRuntimeAsset_eventGetIntegerFromPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetMaterialsVariants_Statics
	{
		struct glTFRuntimeAsset_eventGetMaterialsVariants_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetMaterialsVariants_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetMaterialsVariants_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetMaterialsVariants_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetMaterialsVariants_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetMaterialsVariants_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetMaterialsVariants_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetMaterialsVariants_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetMaterialsVariants_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetMaterialsVariants", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetMaterialsVariants_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetMaterialsVariants_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetMaterialsVariants_Statics::glTFRuntimeAsset_eventGetMaterialsVariants_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetMaterialsVariants_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetMaterialsVariants_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetMaterialsVariants_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetMaterialsVariants_Statics::glTFRuntimeAsset_eventGetMaterialsVariants_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetMaterialsVariants()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetMaterialsVariants_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics
	{
		struct glTFRuntimeAsset_eventGetNode_Parms
		{
			int32 NodeIndex;
			FglTFRuntimeNode Node;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetNode_Parms, NodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics::NewProp_NodeIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics::NewProp_NodeIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetNode_Parms, Node), Z_Construct_UScriptStruct_FglTFRuntimeNode, METADATA_PARAMS(0, nullptr) }; // 1883869803
	void Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventGetNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventGetNode_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetNode", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics::glTFRuntimeAsset_eventGetNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics::glTFRuntimeAsset_eventGetNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics
	{
		struct glTFRuntimeAsset_eventGetNodeByName_Parms
		{
			FString NodeName;
			FglTFRuntimeNode Node;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics::NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetNodeByName_Parms, NodeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics::NewProp_NodeName_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics::NewProp_NodeName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetNodeByName_Parms, Node), Z_Construct_UScriptStruct_FglTFRuntimeNode, METADATA_PARAMS(0, nullptr) }; // 1883869803
	void Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventGetNodeByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventGetNodeByName_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics::NewProp_NodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetNodeByName", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics::glTFRuntimeAsset_eventGetNodeByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics::glTFRuntimeAsset_eventGetNodeByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics
	{
		struct glTFRuntimeAsset_eventGetNodeExtensionIndex_Parms
		{
			int32 NodeIndex;
			FString ExtensionName;
			FString FieldName;
			int32 Index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtensionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetNodeExtensionIndex_Parms, NodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::NewProp_NodeIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::NewProp_NodeIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::NewProp_ExtensionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::NewProp_ExtensionName = { "ExtensionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetNodeExtensionIndex_Parms, ExtensionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::NewProp_ExtensionName_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::NewProp_ExtensionName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetNodeExtensionIndex_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::NewProp_FieldName_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetNodeExtensionIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventGetNodeExtensionIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventGetNodeExtensionIndex_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::NewProp_ExtensionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetNodeExtensionIndex", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::glTFRuntimeAsset_eventGetNodeExtensionIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::glTFRuntimeAsset_eventGetNodeExtensionIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics
	{
		struct glTFRuntimeAsset_eventGetNodeExtensionIndices_Parms
		{
			int32 NodeIndex;
			FString ExtensionName;
			FString FieldName;
			TArray<int32> Indices;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtensionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Indices_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetNodeExtensionIndices_Parms, NodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_NodeIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_NodeIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_ExtensionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_ExtensionName = { "ExtensionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetNodeExtensionIndices_Parms, ExtensionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_ExtensionName_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_ExtensionName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetNodeExtensionIndices_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_FieldName_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetNodeExtensionIndices_Parms, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventGetNodeExtensionIndices_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventGetNodeExtensionIndices_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_ExtensionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_Indices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_Indices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetNodeExtensionIndices", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::glTFRuntimeAsset_eventGetNodeExtensionIndices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::glTFRuntimeAsset_eventGetNodeExtensionIndices_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics
	{
		struct glTFRuntimeAsset_eventGetNodeExtrasNumbers_Parms
		{
			int32 NodeIndex;
			FString Key;
			TArray<float> Values;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetNodeExtrasNumbers_Parms, NodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::NewProp_NodeIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::NewProp_NodeIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetNodeExtrasNumbers_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetNodeExtrasNumbers_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventGetNodeExtrasNumbers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventGetNodeExtrasNumbers_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetNodeExtrasNumbers", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::glTFRuntimeAsset_eventGetNodeExtrasNumbers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::glTFRuntimeAsset_eventGetNodeExtrasNumbers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics
	{
		struct glTFRuntimeAsset_eventGetNodeGPUInstancingTransforms_Parms
		{
			int32 NodeIndex;
			TArray<FTransform> Transforms;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetNodeGPUInstancingTransforms_Parms, NodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::NewProp_NodeIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::NewProp_NodeIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetNodeGPUInstancingTransforms_Parms, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventGetNodeGPUInstancingTransforms_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventGetNodeGPUInstancingTransforms_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::NewProp_Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetNodeGPUInstancingTransforms", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::glTFRuntimeAsset_eventGetNodeGPUInstancingTransforms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::glTFRuntimeAsset_eventGetNodeGPUInstancingTransforms_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetNodes_Statics
	{
		struct glTFRuntimeAsset_eventGetNodes_Parms
		{
			TArray<FglTFRuntimeNode> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FglTFRuntimeNode, METADATA_PARAMS(0, nullptr) }; // 1883869803
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1883869803
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetNodes", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodes_Statics::glTFRuntimeAsset_eventGetNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetNodes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetNodes_Statics::glTFRuntimeAsset_eventGetNodes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics
	{
		struct glTFRuntimeAsset_eventGetNumberFromExtras_Parms
		{
			FString Key;
			float Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetNumberFromExtras_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetNumberFromExtras_Parms, Value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventGetNumberFromExtras_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventGetNumberFromExtras_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetNumberFromExtras", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics::glTFRuntimeAsset_eventGetNumberFromExtras_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics::glTFRuntimeAsset_eventGetNumberFromExtras_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetNumImages_Statics
	{
		struct glTFRuntimeAsset_eventGetNumImages_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNumImages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetNumImages_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetNumImages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNumImages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetNumImages_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNumImages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetNumImages", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetNumImages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNumImages_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetNumImages_Statics::glTFRuntimeAsset_eventGetNumImages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNumImages_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetNumImages_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNumImages_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetNumImages_Statics::glTFRuntimeAsset_eventGetNumImages_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetNumImages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetNumImages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetNumMeshes_Statics
	{
		struct glTFRuntimeAsset_eventGetNumMeshes_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNumMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetNumMeshes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetNumMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetNumMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetNumMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetNumMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetNumMeshes", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetNumMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNumMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetNumMeshes_Statics::glTFRuntimeAsset_eventGetNumMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNumMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetNumMeshes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetNumMeshes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetNumMeshes_Statics::glTFRuntimeAsset_eventGetNumMeshes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetNumMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetNumMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetScenes_Statics
	{
		struct glTFRuntimeAsset_eventGetScenes_Parms
		{
			TArray<FglTFRuntimeScene> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetScenes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FglTFRuntimeScene, METADATA_PARAMS(0, nullptr) }; // 2683113908
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetScenes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetScenes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2683113908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetScenes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetScenes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetScenes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetScenes_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetScenes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetScenes", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetScenes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetScenes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetScenes_Statics::glTFRuntimeAsset_eventGetScenes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetScenes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetScenes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetScenes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetScenes_Statics::glTFRuntimeAsset_eventGetScenes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetScenes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetScenes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics
	{
		struct glTFRuntimeAsset_eventGetStringArrayFromExtras_Parms
		{
			FString Key;
			TArray<FString> StringArray;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StringArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetStringArrayFromExtras_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::NewProp_StringArray_Inner = { "StringArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::NewProp_StringArray = { "StringArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetStringArrayFromExtras_Parms, StringArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventGetStringArrayFromExtras_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventGetStringArrayFromExtras_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::NewProp_StringArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::NewProp_StringArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetStringArrayFromExtras", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::glTFRuntimeAsset_eventGetStringArrayFromExtras_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::glTFRuntimeAsset_eventGetStringArrayFromExtras_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics
	{
		struct glTFRuntimeAsset_eventGetStringFromExtras_Parms
		{
			FString Key;
			FString Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetStringFromExtras_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetStringFromExtras_Parms, Value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventGetStringFromExtras_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventGetStringFromExtras_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetStringFromExtras", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics::glTFRuntimeAsset_eventGetStringFromExtras_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics::glTFRuntimeAsset_eventGetStringFromExtras_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics
	{
		struct glTFRuntimeAsset_eventGetStringFromPath_Parms
		{
			TArray<FglTFRuntimePathItem> Path;
			bool bFound;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
		static void NewProp_bFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFound;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FglTFRuntimePathItem, METADATA_PARAMS(0, nullptr) }; // 2417597737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetStringFromPath_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::NewProp_Path_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::NewProp_Path_MetaData) }; // 2417597737
	void Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::NewProp_bFound_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventGetStringFromPath_Parms*)Obj)->bFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::NewProp_bFound = { "bFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventGetStringFromPath_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::NewProp_bFound_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetStringFromPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::NewProp_Path_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::NewProp_bFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Path" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetStringFromPath", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::glTFRuntimeAsset_eventGetStringFromPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::glTFRuntimeAsset_eventGetStringFromPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics
	{
		struct glTFRuntimeAsset_eventGetStringMapFromExtras_Parms
		{
			FString Key;
			TMap<FString,FString> StringMap;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringMap_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_StringMap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetStringMapFromExtras_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::NewProp_StringMap_ValueProp = { "StringMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::NewProp_StringMap_Key_KeyProp = { "StringMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::NewProp_StringMap = { "StringMap", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventGetStringMapFromExtras_Parms, StringMap), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventGetStringMapFromExtras_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventGetStringMapFromExtras_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::NewProp_StringMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::NewProp_StringMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::NewProp_StringMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "GetStringMapFromExtras", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::glTFRuntimeAsset_eventGetStringMapFromExtras_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::glTFRuntimeAsset_eventGetStringMapFromExtras_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves_Statics
	{
		struct glTFRuntimeAsset_eventLoadAllNodeAnimationCurves_Parms
		{
			int32 NodeIndex;
			TArray<UglTFRuntimeAnimationCurve*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadAllNodeAnimationCurves_Parms, NodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves_Statics::NewProp_NodeIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves_Statics::NewProp_NodeIndex_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UglTFRuntimeAnimationCurve_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadAllNodeAnimationCurves_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadAllNodeAnimationCurves", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves_Statics::glTFRuntimeAsset_eventLoadAllNodeAnimationCurves_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves_Statics::glTFRuntimeAsset_eventLoadAllNodeAnimationCurves_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics
	{
		struct glTFRuntimeAsset_eventLoadAudioEmitter_Parms
		{
			int32 EmitterIndex;
			FglTFRuntimeAudioEmitter Emitter;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Emitter;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics::NewProp_EmitterIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadAudioEmitter_Parms, EmitterIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics::NewProp_EmitterIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics::NewProp_EmitterIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics::NewProp_Emitter = { "Emitter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadAudioEmitter_Parms, Emitter), Z_Construct_UScriptStruct_FglTFRuntimeAudioEmitter, METADATA_PARAMS(0, nullptr) }; // 784258818
	void Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventLoadAudioEmitter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventLoadAudioEmitter_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics::NewProp_EmitterIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics::NewProp_Emitter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadAudioEmitter", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics::glTFRuntimeAsset_eventLoadAudioEmitter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics::glTFRuntimeAsset_eventLoadAudioEmitter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics
	{
		struct glTFRuntimeAsset_eventLoadCamera_Parms
		{
			int32 CameraIndex;
			UCameraComponent* CameraComponent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CameraIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::NewProp_CameraIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::NewProp_CameraIndex = { "CameraIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadCamera_Parms, CameraIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::NewProp_CameraIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::NewProp_CameraIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadCamera_Parms, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::NewProp_CameraComponent_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::NewProp_CameraComponent_MetaData) };
	void Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventLoadCamera_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventLoadCamera_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::NewProp_CameraIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadCamera", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::glTFRuntimeAsset_eventLoadCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::glTFRuntimeAsset_eventLoadCamera_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics
	{
		struct glTFRuntimeAsset_eventLoadEmitterIntoAudioComponent_Parms
		{
			FglTFRuntimeAudioEmitter Emitter;
			UAudioComponent* AudioComponent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Emitter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Emitter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::NewProp_Emitter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::NewProp_Emitter = { "Emitter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadEmitterIntoAudioComponent_Parms, Emitter), Z_Construct_UScriptStruct_FglTFRuntimeAudioEmitter, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::NewProp_Emitter_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::NewProp_Emitter_MetaData) }; // 784258818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadEmitterIntoAudioComponent_Parms, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::NewProp_AudioComponent_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::NewProp_AudioComponent_MetaData) };
	void Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventLoadEmitterIntoAudioComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventLoadEmitterIntoAudioComponent_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::NewProp_Emitter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::NewProp_AudioComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadEmitterIntoAudioComponent", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::glTFRuntimeAsset_eventLoadEmitterIntoAudioComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::glTFRuntimeAsset_eventLoadEmitterIntoAudioComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics
	{
		struct glTFRuntimeAsset_eventLoadImage_Parms
		{
			int32 ImageIndex;
			FglTFRuntimeImagesConfig ImagesConfig;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImageIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImagesConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImagesConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::NewProp_ImageIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::NewProp_ImageIndex = { "ImageIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadImage_Parms, ImageIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::NewProp_ImageIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::NewProp_ImageIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::NewProp_ImagesConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::NewProp_ImagesConfig = { "ImagesConfig", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadImage_Parms, ImagesConfig), Z_Construct_UScriptStruct_FglTFRuntimeImagesConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::NewProp_ImagesConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::NewProp_ImagesConfig_MetaData) }; // 638326696
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadImage_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::NewProp_ImageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::NewProp_ImagesConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "ImagesConfig" },
		{ "AutoCreateRefTerm", "ImagesConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadImage", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::glTFRuntimeAsset_eventLoadImage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::glTFRuntimeAsset_eventLoadImage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadImageFromBlob_Statics
	{
		struct glTFRuntimeAsset_eventLoadImageFromBlob_Parms
		{
			FglTFRuntimeImagesConfig ImagesConfig;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImagesConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImagesConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadImageFromBlob_Statics::NewProp_ImagesConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadImageFromBlob_Statics::NewProp_ImagesConfig = { "ImagesConfig", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadImageFromBlob_Parms, ImagesConfig), Z_Construct_UScriptStruct_FglTFRuntimeImagesConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadImageFromBlob_Statics::NewProp_ImagesConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadImageFromBlob_Statics::NewProp_ImagesConfig_MetaData) }; // 638326696
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadImageFromBlob_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadImageFromBlob_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadImageFromBlob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadImageFromBlob_Statics::NewProp_ImagesConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadImageFromBlob_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadImageFromBlob_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "ImagesConfig" },
		{ "AutoCreateRefTerm", "ImagesConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadImageFromBlob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadImageFromBlob", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadImageFromBlob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadImageFromBlob_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadImageFromBlob_Statics::glTFRuntimeAsset_eventLoadImageFromBlob_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadImageFromBlob_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadImageFromBlob_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadImageFromBlob_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadImageFromBlob_Statics::glTFRuntimeAsset_eventLoadImageFromBlob_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadImageFromBlob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadImageFromBlob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics
	{
		struct glTFRuntimeAsset_eventLoadMaterial_Parms
		{
			int32 MaterialIndex;
			FglTFRuntimeMaterialsConfig MaterialsConfig;
			bool bUseVertexColors;
			UMaterialInterface* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialsConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialsConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseVertexColors_MetaData[];
#endif
		static void NewProp_bUseVertexColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVertexColors;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::NewProp_MaterialIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadMaterial_Parms, MaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::NewProp_MaterialIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::NewProp_MaterialIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::NewProp_MaterialsConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::NewProp_MaterialsConfig = { "MaterialsConfig", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadMaterial_Parms, MaterialsConfig), Z_Construct_UScriptStruct_FglTFRuntimeMaterialsConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::NewProp_MaterialsConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::NewProp_MaterialsConfig_MetaData) }; // 4008255830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::NewProp_bUseVertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::NewProp_bUseVertexColors_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventLoadMaterial_Parms*)Obj)->bUseVertexColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::NewProp_bUseVertexColors = { "bUseVertexColors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventLoadMaterial_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::NewProp_bUseVertexColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::NewProp_bUseVertexColors_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::NewProp_bUseVertexColors_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::NewProp_MaterialIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::NewProp_MaterialsConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::NewProp_bUseVertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "MaterialsConfig" },
		{ "AutoCreateRefTerm", "MaterialsConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadMaterial", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::glTFRuntimeAsset_eventLoadMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::glTFRuntimeAsset_eventLoadMaterial_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics
	{
		struct glTFRuntimeAsset_eventLoadMeshAsRuntimeLOD_Parms
		{
			int32 MeshIndex;
			FglTFRuntimeMeshLOD RuntimeLOD;
			FglTFRuntimeMaterialsConfig MaterialsConfig;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeshIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialsConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialsConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::NewProp_MeshIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::NewProp_MeshIndex = { "MeshIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadMeshAsRuntimeLOD_Parms, MeshIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::NewProp_MeshIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::NewProp_MeshIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::NewProp_RuntimeLOD = { "RuntimeLOD", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadMeshAsRuntimeLOD_Parms, RuntimeLOD), Z_Construct_UScriptStruct_FglTFRuntimeMeshLOD, METADATA_PARAMS(0, nullptr) }; // 1968242049
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::NewProp_MaterialsConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::NewProp_MaterialsConfig = { "MaterialsConfig", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadMeshAsRuntimeLOD_Parms, MaterialsConfig), Z_Construct_UScriptStruct_FglTFRuntimeMaterialsConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::NewProp_MaterialsConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::NewProp_MaterialsConfig_MetaData) }; // 4008255830
	void Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventLoadMeshAsRuntimeLOD_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventLoadMeshAsRuntimeLOD_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::NewProp_MeshIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::NewProp_RuntimeLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::NewProp_MaterialsConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "MaterialsConfig" },
		{ "AutoCreateRefTerm", "MaterialsConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadMeshAsRuntimeLOD", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::glTFRuntimeAsset_eventLoadMeshAsRuntimeLOD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::glTFRuntimeAsset_eventLoadMeshAsRuntimeLOD_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeAnimationCurve_Statics
	{
		struct glTFRuntimeAsset_eventLoadNodeAnimationCurve_Parms
		{
			int32 NodeIndex;
			UglTFRuntimeAnimationCurve* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeAnimationCurve_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeAnimationCurve_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadNodeAnimationCurve_Parms, NodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeAnimationCurve_Statics::NewProp_NodeIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeAnimationCurve_Statics::NewProp_NodeIndex_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeAnimationCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadNodeAnimationCurve_Parms, ReturnValue), Z_Construct_UClass_UglTFRuntimeAnimationCurve_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeAnimationCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeAnimationCurve_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeAnimationCurve_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeAnimationCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeAnimationCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadNodeAnimationCurve", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeAnimationCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeAnimationCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeAnimationCurve_Statics::glTFRuntimeAsset_eventLoadNodeAnimationCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeAnimationCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeAnimationCurve_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeAnimationCurve_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeAnimationCurve_Statics::glTFRuntimeAsset_eventLoadNodeAnimationCurve_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeAnimationCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeAnimationCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics
	{
		struct glTFRuntimeAsset_eventLoadNodeCamera_Parms
		{
			UObject* WorldContextObject;
			int32 NodeIndex;
			TSubclassOf<ACameraActor>  CameraActorClass;
			ACameraActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraActorClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadNodeCamera_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadNodeCamera_Parms, NodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics::NewProp_NodeIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics::NewProp_NodeIndex_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics::NewProp_CameraActorClass = { "CameraActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadNodeCamera_Parms, CameraActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadNodeCamera_Parms, ReturnValue), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics::NewProp_CameraActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadNodeCamera", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics::glTFRuntimeAsset_eventLoadNodeCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics::glTFRuntimeAsset_eventLoadNodeCamera_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics
	{
		struct glTFRuntimeAsset_eventLoadNodeSkeletalAnimation_Parms
		{
			USkeletalMesh* SkeletalMesh;
			int32 NodeIndex;
			FglTFRuntimeSkeletalAnimationConfig SkeletalAnimationConfig;
			UAnimSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalAnimationConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalAnimationConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadNodeSkeletalAnimation_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadNodeSkeletalAnimation_Parms, NodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::NewProp_NodeIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::NewProp_NodeIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::NewProp_SkeletalAnimationConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::NewProp_SkeletalAnimationConfig = { "SkeletalAnimationConfig", nullptr, (EPropertyFlags)0x0010048008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadNodeSkeletalAnimation_Parms, SkeletalAnimationConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalAnimationConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::NewProp_SkeletalAnimationConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::NewProp_SkeletalAnimationConfig_MetaData) }; // 1563843514
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadNodeSkeletalAnimation_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::NewProp_SkeletalAnimationConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SkeletalAnimationConfig" },
		{ "AutoCreateRefTerm", "SkeletalAnimationConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadNodeSkeletalAnimation", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::glTFRuntimeAsset_eventLoadNodeSkeletalAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::glTFRuntimeAsset_eventLoadNodeSkeletalAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics
	{
		struct glTFRuntimeAsset_eventLoadPunctualLight_Parms
		{
			int32 PunctualLightIndex;
			AActor* Actor;
			FglTFRuntimeLightConfig LightConfig;
			ULightComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PunctualLightIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PunctualLightIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::NewProp_PunctualLightIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::NewProp_PunctualLightIndex = { "PunctualLightIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadPunctualLight_Parms, PunctualLightIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::NewProp_PunctualLightIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::NewProp_PunctualLightIndex_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadPunctualLight_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::NewProp_LightConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::NewProp_LightConfig = { "LightConfig", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadPunctualLight_Parms, LightConfig), Z_Construct_UScriptStruct_FglTFRuntimeLightConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::NewProp_LightConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::NewProp_LightConfig_MetaData) }; // 2645290052
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadPunctualLight_Parms, ReturnValue), Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::NewProp_PunctualLightIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::NewProp_LightConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "LightConfig" },
		{ "AutoCreateRefTerm", "LightConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadPunctualLight", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::glTFRuntimeAsset_eventLoadPunctualLight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::glTFRuntimeAsset_eventLoadPunctualLight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics
	{
		struct glTFRuntimeAsset_eventLoadSkeletalAnimation_Parms
		{
			USkeletalMesh* SkeletalMesh;
			int32 AnimationIndex;
			FglTFRuntimeSkeletalAnimationConfig SkeletalAnimationConfig;
			UAnimSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimationIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalAnimationConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalAnimationConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalAnimation_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::NewProp_AnimationIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::NewProp_AnimationIndex = { "AnimationIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalAnimation_Parms, AnimationIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::NewProp_AnimationIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::NewProp_AnimationIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::NewProp_SkeletalAnimationConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::NewProp_SkeletalAnimationConfig = { "SkeletalAnimationConfig", nullptr, (EPropertyFlags)0x0010048008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalAnimation_Parms, SkeletalAnimationConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalAnimationConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::NewProp_SkeletalAnimationConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::NewProp_SkeletalAnimationConfig_MetaData) }; // 1563843514
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalAnimation_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::NewProp_AnimationIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::NewProp_SkeletalAnimationConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SkeletalAnimationConfig" },
		{ "AutoCreateRefTerm", "SkeletalAnimationConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadSkeletalAnimation", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::glTFRuntimeAsset_eventLoadSkeletalAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::glTFRuntimeAsset_eventLoadSkeletalAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics
	{
		struct glTFRuntimeAsset_eventLoadSkeletalAnimationAsMontage_Parms
		{
			USkeletalMesh* SkeletalMesh;
			int32 AnimationIndex;
			FString SlotNodeName;
			FglTFRuntimeSkeletalAnimationConfig SkeletalAnimationConfig;
			UAnimMontage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimationIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotNodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotNodeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalAnimationConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalAnimationConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalAnimationAsMontage_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::NewProp_AnimationIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::NewProp_AnimationIndex = { "AnimationIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalAnimationAsMontage_Parms, AnimationIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::NewProp_AnimationIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::NewProp_AnimationIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::NewProp_SlotNodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::NewProp_SlotNodeName = { "SlotNodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalAnimationAsMontage_Parms, SlotNodeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::NewProp_SlotNodeName_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::NewProp_SlotNodeName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::NewProp_SkeletalAnimationConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::NewProp_SkeletalAnimationConfig = { "SkeletalAnimationConfig", nullptr, (EPropertyFlags)0x0010048008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalAnimationAsMontage_Parms, SkeletalAnimationConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalAnimationConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::NewProp_SkeletalAnimationConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::NewProp_SkeletalAnimationConfig_MetaData) }; // 1563843514
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalAnimationAsMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::NewProp_AnimationIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::NewProp_SlotNodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::NewProp_SkeletalAnimationConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SkeletalAnimationConfig" },
		{ "AutoCreateRefTerm", "SkeletalAnimationConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadSkeletalAnimationAsMontage", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::glTFRuntimeAsset_eventLoadSkeletalAnimationAsMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::glTFRuntimeAsset_eventLoadSkeletalAnimationAsMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics
	{
		struct glTFRuntimeAsset_eventLoadSkeletalAnimationByName_Parms
		{
			USkeletalMesh* SkeletalMesh;
			FString AnimationName;
			FglTFRuntimeSkeletalAnimationConfig SkeletalAnimationConfig;
			UAnimSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnimationName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalAnimationConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalAnimationConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalAnimationByName_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::NewProp_AnimationName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::NewProp_AnimationName = { "AnimationName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalAnimationByName_Parms, AnimationName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::NewProp_AnimationName_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::NewProp_AnimationName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::NewProp_SkeletalAnimationConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::NewProp_SkeletalAnimationConfig = { "SkeletalAnimationConfig", nullptr, (EPropertyFlags)0x0010048008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalAnimationByName_Parms, SkeletalAnimationConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalAnimationConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::NewProp_SkeletalAnimationConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::NewProp_SkeletalAnimationConfig_MetaData) }; // 1563843514
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalAnimationByName_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::NewProp_AnimationName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::NewProp_SkeletalAnimationConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SkeletalAnimationConfig" },
		{ "AutoCreateRefTerm", "SkeletalAnimationConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadSkeletalAnimationByName", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::glTFRuntimeAsset_eventLoadSkeletalAnimationByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::glTFRuntimeAsset_eventLoadSkeletalAnimationByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics
	{
		struct glTFRuntimeAsset_eventLoadSkeletalMesh_Parms
		{
			int32 MeshIndex;
			int32 SkinIndex;
			FglTFRuntimeSkeletalMeshConfig SkeletalMeshConfig;
			USkeletalMesh* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeshIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SkinIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::NewProp_MeshIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::NewProp_MeshIndex = { "MeshIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMesh_Parms, MeshIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::NewProp_MeshIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::NewProp_MeshIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::NewProp_SkinIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::NewProp_SkinIndex = { "SkinIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMesh_Parms, SkinIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::NewProp_SkinIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::NewProp_SkinIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::NewProp_SkeletalMeshConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::NewProp_SkeletalMeshConfig = { "SkeletalMeshConfig", nullptr, (EPropertyFlags)0x0010048008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMesh_Parms, SkeletalMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::NewProp_SkeletalMeshConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::NewProp_SkeletalMeshConfig_MetaData) }; // 2280782800
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::NewProp_MeshIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::NewProp_SkinIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::NewProp_SkeletalMeshConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SkeletalMeshConfig" },
		{ "AutoCreateRefTerm", "SkeletalMeshConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadSkeletalMesh", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::glTFRuntimeAsset_eventLoadSkeletalMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::glTFRuntimeAsset_eventLoadSkeletalMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics
	{
		struct glTFRuntimeAsset_eventLoadSkeletalMeshAsync_Parms
		{
			int32 MeshIndex;
			int32 SkinIndex;
			FScriptDelegate AsyncCallback;
			FglTFRuntimeSkeletalMeshConfig SkeletalMeshConfig;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeshIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SkinIndex;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_AsyncCallback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::NewProp_MeshIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::NewProp_MeshIndex = { "MeshIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMeshAsync_Parms, MeshIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::NewProp_MeshIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::NewProp_MeshIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::NewProp_SkinIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::NewProp_SkinIndex = { "SkinIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMeshAsync_Parms, SkinIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::NewProp_SkinIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::NewProp_SkinIndex_MetaData) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::NewProp_AsyncCallback = { "AsyncCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMeshAsync_Parms, AsyncCallback), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeSkeletalMeshAsync__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4128973552
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::NewProp_SkeletalMeshConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::NewProp_SkeletalMeshConfig = { "SkeletalMeshConfig", nullptr, (EPropertyFlags)0x0010048008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMeshAsync_Parms, SkeletalMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::NewProp_SkeletalMeshConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::NewProp_SkeletalMeshConfig_MetaData) }; // 2280782800
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::NewProp_MeshIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::NewProp_SkinIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::NewProp_AsyncCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::NewProp_SkeletalMeshConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SkeletalMeshConfig" },
		{ "AutoCreateRefTerm", "SkeletalMeshConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadSkeletalMeshAsync", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::glTFRuntimeAsset_eventLoadSkeletalMeshAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::glTFRuntimeAsset_eventLoadSkeletalMeshAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics
	{
		struct glTFRuntimeAsset_eventLoadSkeletalMeshFromRuntimeLODs_Parms
		{
			TArray<FglTFRuntimeMeshLOD> RuntimeLODs;
			int32 SkinIndex;
			FglTFRuntimeSkeletalMeshConfig SkeletalMeshConfig;
			USkeletalMesh* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeLODs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeLODs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SkinIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::NewProp_RuntimeLODs_Inner = { "RuntimeLODs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FglTFRuntimeMeshLOD, METADATA_PARAMS(0, nullptr) }; // 1968242049
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::NewProp_RuntimeLODs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::NewProp_RuntimeLODs = { "RuntimeLODs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMeshFromRuntimeLODs_Parms, RuntimeLODs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::NewProp_RuntimeLODs_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::NewProp_RuntimeLODs_MetaData) }; // 1968242049
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::NewProp_SkinIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::NewProp_SkinIndex = { "SkinIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMeshFromRuntimeLODs_Parms, SkinIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::NewProp_SkinIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::NewProp_SkinIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::NewProp_SkeletalMeshConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::NewProp_SkeletalMeshConfig = { "SkeletalMeshConfig", nullptr, (EPropertyFlags)0x0010048008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMeshFromRuntimeLODs_Parms, SkeletalMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::NewProp_SkeletalMeshConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::NewProp_SkeletalMeshConfig_MetaData) }; // 2280782800
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMeshFromRuntimeLODs_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::NewProp_RuntimeLODs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::NewProp_RuntimeLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::NewProp_SkinIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::NewProp_SkeletalMeshConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SkeletalMeshConfig" },
		{ "AutoCreateRefTerm", "SkeletalMeshConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadSkeletalMeshFromRuntimeLODs", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::glTFRuntimeAsset_eventLoadSkeletalMeshFromRuntimeLODs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::glTFRuntimeAsset_eventLoadSkeletalMeshFromRuntimeLODs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics
	{
		struct glTFRuntimeAsset_eventLoadSkeletalMeshLODs_Parms
		{
			TArray<int32> MeshIndices;
			int32 SkinIndex;
			FglTFRuntimeSkeletalMeshConfig SkeletalMeshConfig;
			USkeletalMesh* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeshIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SkinIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::NewProp_MeshIndices_Inner = { "MeshIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::NewProp_MeshIndices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::NewProp_MeshIndices = { "MeshIndices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMeshLODs_Parms, MeshIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::NewProp_MeshIndices_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::NewProp_MeshIndices_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::NewProp_SkinIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::NewProp_SkinIndex = { "SkinIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMeshLODs_Parms, SkinIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::NewProp_SkinIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::NewProp_SkinIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::NewProp_SkeletalMeshConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::NewProp_SkeletalMeshConfig = { "SkeletalMeshConfig", nullptr, (EPropertyFlags)0x0010048008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMeshLODs_Parms, SkeletalMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::NewProp_SkeletalMeshConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::NewProp_SkeletalMeshConfig_MetaData) }; // 2280782800
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMeshLODs_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::NewProp_MeshIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::NewProp_MeshIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::NewProp_SkinIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::NewProp_SkeletalMeshConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SkeletalMeshConfig" },
		{ "AutoCreateRefTerm", "SkeletalMeshConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadSkeletalMeshLODs", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::glTFRuntimeAsset_eventLoadSkeletalMeshLODs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::glTFRuntimeAsset_eventLoadSkeletalMeshLODs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics
	{
		struct glTFRuntimeAsset_eventLoadSkeletalMeshRecursive_Parms
		{
			FString NodeName;
			TArray<FString> ExcludeNodes;
			FglTFRuntimeSkeletalMeshConfig SkeletalMeshConfig;
			USkeletalMesh* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludeNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMeshRecursive_Parms, NodeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::NewProp_NodeName_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::NewProp_NodeName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::NewProp_ExcludeNodes_Inner = { "ExcludeNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::NewProp_ExcludeNodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::NewProp_ExcludeNodes = { "ExcludeNodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMeshRecursive_Parms, ExcludeNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::NewProp_ExcludeNodes_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::NewProp_ExcludeNodes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::NewProp_SkeletalMeshConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::NewProp_SkeletalMeshConfig = { "SkeletalMeshConfig", nullptr, (EPropertyFlags)0x0010048008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMeshRecursive_Parms, SkeletalMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::NewProp_SkeletalMeshConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::NewProp_SkeletalMeshConfig_MetaData) }; // 2280782800
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMeshRecursive_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::NewProp_NodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::NewProp_ExcludeNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::NewProp_ExcludeNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::NewProp_SkeletalMeshConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SkeletalMeshConfig" },
		{ "AutoCreateRefTerm", "ExcludeNodes, SkeletalMeshConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadSkeletalMeshRecursive", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::glTFRuntimeAsset_eventLoadSkeletalMeshRecursive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::glTFRuntimeAsset_eventLoadSkeletalMeshRecursive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics
	{
		struct glTFRuntimeAsset_eventLoadSkeletalMeshRecursiveAsync_Parms
		{
			FString NodeName;
			TArray<FString> ExcludeNodes;
			FScriptDelegate AsyncCallback;
			FglTFRuntimeSkeletalMeshConfig SkeletalMeshConfig;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludeNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeNodes;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_AsyncCallback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMeshRecursiveAsync_Parms, NodeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::NewProp_NodeName_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::NewProp_NodeName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::NewProp_ExcludeNodes_Inner = { "ExcludeNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::NewProp_ExcludeNodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::NewProp_ExcludeNodes = { "ExcludeNodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMeshRecursiveAsync_Parms, ExcludeNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::NewProp_ExcludeNodes_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::NewProp_ExcludeNodes_MetaData) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::NewProp_AsyncCallback = { "AsyncCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMeshRecursiveAsync_Parms, AsyncCallback), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeSkeletalMeshAsync__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4128973552
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::NewProp_SkeletalMeshConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::NewProp_SkeletalMeshConfig = { "SkeletalMeshConfig", nullptr, (EPropertyFlags)0x0010048008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletalMeshRecursiveAsync_Parms, SkeletalMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::NewProp_SkeletalMeshConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::NewProp_SkeletalMeshConfig_MetaData) }; // 2280782800
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::NewProp_NodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::NewProp_ExcludeNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::NewProp_ExcludeNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::NewProp_AsyncCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::NewProp_SkeletalMeshConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SkeletalMeshConfig" },
		{ "AutoCreateRefTerm", "ExcludeNodes, SkeletalMeshConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadSkeletalMeshRecursiveAsync", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::glTFRuntimeAsset_eventLoadSkeletalMeshRecursiveAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::glTFRuntimeAsset_eventLoadSkeletalMeshRecursiveAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics
	{
		struct glTFRuntimeAsset_eventLoadSkeleton_Parms
		{
			int32 SkinIndex;
			FglTFRuntimeSkeletonConfig SkeletonConfig;
			USkeleton* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SkinIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletonConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::NewProp_SkinIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::NewProp_SkinIndex = { "SkinIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeleton_Parms, SkinIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::NewProp_SkinIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::NewProp_SkinIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::NewProp_SkeletonConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::NewProp_SkeletonConfig = { "SkeletonConfig", nullptr, (EPropertyFlags)0x0010048008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeleton_Parms, SkeletonConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletonConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::NewProp_SkeletonConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::NewProp_SkeletonConfig_MetaData) }; // 3149263229
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeleton_Parms, ReturnValue), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::NewProp_SkinIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::NewProp_SkeletonConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SkeletonConfig" },
		{ "AutoCreateRefTerm", "SkeletonConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadSkeleton", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::glTFRuntimeAsset_eventLoadSkeleton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::glTFRuntimeAsset_eventLoadSkeleton_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics
	{
		struct glTFRuntimeAsset_eventLoadSkeletonFromNodeTree_Parms
		{
			int32 NodeIndex;
			FglTFRuntimeSkeletonConfig SkeletonConfig;
			USkeleton* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletonConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletonFromNodeTree_Parms, NodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::NewProp_NodeIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::NewProp_NodeIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::NewProp_SkeletonConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::NewProp_SkeletonConfig = { "SkeletonConfig", nullptr, (EPropertyFlags)0x0010048008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletonFromNodeTree_Parms, SkeletonConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletonConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::NewProp_SkeletonConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::NewProp_SkeletonConfig_MetaData) }; // 3149263229
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletonFromNodeTree_Parms, ReturnValue), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::NewProp_SkeletonConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SkeletonConfig" },
		{ "AutoCreateRefTerm", "SkeletonConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadSkeletonFromNodeTree", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::glTFRuntimeAsset_eventLoadSkeletonFromNodeTree_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::glTFRuntimeAsset_eventLoadSkeletonFromNodeTree_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics
	{
		struct glTFRuntimeAsset_eventLoadSkeletonFromNodeTreeByName_Parms
		{
			FString NodeName;
			FglTFRuntimeSkeletonConfig SkeletonConfig;
			USkeleton* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletonConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletonFromNodeTreeByName_Parms, NodeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::NewProp_NodeName_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::NewProp_NodeName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::NewProp_SkeletonConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::NewProp_SkeletonConfig = { "SkeletonConfig", nullptr, (EPropertyFlags)0x0010048008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletonFromNodeTreeByName_Parms, SkeletonConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletonConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::NewProp_SkeletonConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::NewProp_SkeletonConfig_MetaData) }; // 3149263229
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkeletonFromNodeTreeByName_Parms, ReturnValue), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::NewProp_NodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::NewProp_SkeletonConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SkeletonConfig" },
		{ "AutoCreateRefTerm", "SkeletonConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadSkeletonFromNodeTreeByName", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::glTFRuntimeAsset_eventLoadSkeletonFromNodeTreeByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::glTFRuntimeAsset_eventLoadSkeletonFromNodeTreeByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics
	{
		struct glTFRuntimeAsset_eventLoadSkinnedMeshRecursiveAsRuntimeLOD_Parms
		{
			FString NodeName;
			TArray<FString> ExcludeNodes;
			FglTFRuntimeMeshLOD RuntimeLOD;
			FglTFRuntimeMaterialsConfig MaterialsConfig;
			FglTFRuntimeSkeletonConfig SkeletonConfig;
			int32 SkinIndex;
			int32 OverrideSkinIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludeNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeNodes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialsConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialsConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletonConfig;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SkinIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideSkinIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OverrideSkinIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkinnedMeshRecursiveAsRuntimeLOD_Parms, NodeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_NodeName_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_NodeName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_ExcludeNodes_Inner = { "ExcludeNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_ExcludeNodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_ExcludeNodes = { "ExcludeNodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkinnedMeshRecursiveAsRuntimeLOD_Parms, ExcludeNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_ExcludeNodes_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_ExcludeNodes_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_RuntimeLOD = { "RuntimeLOD", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkinnedMeshRecursiveAsRuntimeLOD_Parms, RuntimeLOD), Z_Construct_UScriptStruct_FglTFRuntimeMeshLOD, METADATA_PARAMS(0, nullptr) }; // 1968242049
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_MaterialsConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_MaterialsConfig = { "MaterialsConfig", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkinnedMeshRecursiveAsRuntimeLOD_Parms, MaterialsConfig), Z_Construct_UScriptStruct_FglTFRuntimeMaterialsConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_MaterialsConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_MaterialsConfig_MetaData) }; // 4008255830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_SkeletonConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_SkeletonConfig = { "SkeletonConfig", nullptr, (EPropertyFlags)0x0010048008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkinnedMeshRecursiveAsRuntimeLOD_Parms, SkeletonConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletonConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_SkeletonConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_SkeletonConfig_MetaData) }; // 3149263229
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_SkinIndex = { "SkinIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkinnedMeshRecursiveAsRuntimeLOD_Parms, SkinIndex), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_OverrideSkinIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_OverrideSkinIndex = { "OverrideSkinIndex", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadSkinnedMeshRecursiveAsRuntimeLOD_Parms, OverrideSkinIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_OverrideSkinIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_OverrideSkinIndex_MetaData) };
	void Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventLoadSkinnedMeshRecursiveAsRuntimeLOD_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventLoadSkinnedMeshRecursiveAsRuntimeLOD_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_NodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_ExcludeNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_ExcludeNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_RuntimeLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_MaterialsConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_SkeletonConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_SkinIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_OverrideSkinIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "MaterialsConfig, SkeletonConfig, OverrideSkinIndex" },
		{ "AutoCreateRefTerm", "MaterialsConfig, SkeletonConfig, ExcludeNodes" },
		{ "Category", "glTFRuntime" },
		{ "CPP_Default_OverrideSkinIndex", "-1" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadSkinnedMeshRecursiveAsRuntimeLOD", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::glTFRuntimeAsset_eventLoadSkinnedMeshRecursiveAsRuntimeLOD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::glTFRuntimeAsset_eventLoadSkinnedMeshRecursiveAsRuntimeLOD_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics
	{
		struct glTFRuntimeAsset_eventLoadStaticMesh_Parms
		{
			int32 MeshIndex;
			FglTFRuntimeStaticMeshConfig StaticMeshConfig;
			UStaticMesh* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeshIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::NewProp_MeshIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::NewProp_MeshIndex = { "MeshIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMesh_Parms, MeshIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::NewProp_MeshIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::NewProp_MeshIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::NewProp_StaticMeshConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::NewProp_StaticMeshConfig = { "StaticMeshConfig", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMesh_Parms, StaticMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeStaticMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::NewProp_StaticMeshConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::NewProp_StaticMeshConfig_MetaData) }; // 2209239704
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::NewProp_MeshIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::NewProp_StaticMeshConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "StaticMeshConfig" },
		{ "AutoCreateRefTerm", "StaticMeshConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadStaticMesh", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::glTFRuntimeAsset_eventLoadStaticMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::glTFRuntimeAsset_eventLoadStaticMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics
	{
		struct glTFRuntimeAsset_eventLoadStaticMeshAsync_Parms
		{
			int32 MeshIndex;
			FScriptDelegate AsyncCallback;
			FglTFRuntimeStaticMeshConfig StaticMeshConfig;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeshIndex;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_AsyncCallback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::NewProp_MeshIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::NewProp_MeshIndex = { "MeshIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshAsync_Parms, MeshIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::NewProp_MeshIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::NewProp_MeshIndex_MetaData) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::NewProp_AsyncCallback = { "AsyncCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshAsync_Parms, AsyncCallback), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeStaticMeshAsync__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4260202489
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::NewProp_StaticMeshConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::NewProp_StaticMeshConfig = { "StaticMeshConfig", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshAsync_Parms, StaticMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeStaticMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::NewProp_StaticMeshConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::NewProp_StaticMeshConfig_MetaData) }; // 2209239704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::NewProp_MeshIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::NewProp_AsyncCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::NewProp_StaticMeshConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "StaticMeshConfig" },
		{ "AutoCreateRefTerm", "StaticMeshConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadStaticMeshAsync", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::glTFRuntimeAsset_eventLoadStaticMeshAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::glTFRuntimeAsset_eventLoadStaticMeshAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics
	{
		struct glTFRuntimeAsset_eventLoadStaticMeshByName_Parms
		{
			FString MeshName;
			FglTFRuntimeStaticMeshConfig StaticMeshConfig;
			UStaticMesh* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::NewProp_MeshName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshByName_Parms, MeshName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::NewProp_MeshName_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::NewProp_MeshName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::NewProp_StaticMeshConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::NewProp_StaticMeshConfig = { "StaticMeshConfig", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshByName_Parms, StaticMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeStaticMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::NewProp_StaticMeshConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::NewProp_StaticMeshConfig_MetaData) }; // 2209239704
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshByName_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::NewProp_MeshName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::NewProp_StaticMeshConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "StaticMeshConfig" },
		{ "AutoCreateRefTerm", "StaticMeshConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadStaticMeshByName", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::glTFRuntimeAsset_eventLoadStaticMeshByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::glTFRuntimeAsset_eventLoadStaticMeshByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics
	{
		struct glTFRuntimeAsset_eventLoadStaticMeshByNodeName_Parms
		{
			FString NodeName;
			FglTFRuntimeStaticMeshConfig StaticMeshConfig;
			UStaticMesh* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshByNodeName_Parms, NodeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::NewProp_NodeName_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::NewProp_NodeName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::NewProp_StaticMeshConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::NewProp_StaticMeshConfig = { "StaticMeshConfig", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshByNodeName_Parms, StaticMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeStaticMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::NewProp_StaticMeshConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::NewProp_StaticMeshConfig_MetaData) }; // 2209239704
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshByNodeName_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::NewProp_NodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::NewProp_StaticMeshConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "StaticMeshConfig" },
		{ "AutoCreateRefTerm", "StaticMeshConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadStaticMeshByNodeName", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::glTFRuntimeAsset_eventLoadStaticMeshByNodeName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::glTFRuntimeAsset_eventLoadStaticMeshByNodeName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics
	{
		struct glTFRuntimeAsset_eventLoadStaticMeshesFromPrimitives_Parms
		{
			int32 MeshIndex;
			FglTFRuntimeStaticMeshConfig StaticMeshConfig;
			TArray<UStaticMesh*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeshIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::NewProp_MeshIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::NewProp_MeshIndex = { "MeshIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshesFromPrimitives_Parms, MeshIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::NewProp_MeshIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::NewProp_MeshIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::NewProp_StaticMeshConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::NewProp_StaticMeshConfig = { "StaticMeshConfig", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshesFromPrimitives_Parms, StaticMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeStaticMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::NewProp_StaticMeshConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::NewProp_StaticMeshConfig_MetaData) }; // 2209239704
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshesFromPrimitives_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::NewProp_MeshIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::NewProp_StaticMeshConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "StaticMeshConfig" },
		{ "AutoCreateRefTerm", "StaticMeshConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadStaticMeshesFromPrimitives", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::glTFRuntimeAsset_eventLoadStaticMeshesFromPrimitives_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::glTFRuntimeAsset_eventLoadStaticMeshesFromPrimitives_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics
	{
		struct glTFRuntimeAsset_eventLoadStaticMeshFromRuntimeLODs_Parms
		{
			TArray<FglTFRuntimeMeshLOD> RuntimeLODs;
			FglTFRuntimeStaticMeshConfig StaticMeshConfig;
			UStaticMesh* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeLODs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeLODs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::NewProp_RuntimeLODs_Inner = { "RuntimeLODs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FglTFRuntimeMeshLOD, METADATA_PARAMS(0, nullptr) }; // 1968242049
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::NewProp_RuntimeLODs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::NewProp_RuntimeLODs = { "RuntimeLODs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshFromRuntimeLODs_Parms, RuntimeLODs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::NewProp_RuntimeLODs_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::NewProp_RuntimeLODs_MetaData) }; // 1968242049
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::NewProp_StaticMeshConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::NewProp_StaticMeshConfig = { "StaticMeshConfig", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshFromRuntimeLODs_Parms, StaticMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeStaticMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::NewProp_StaticMeshConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::NewProp_StaticMeshConfig_MetaData) }; // 2209239704
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshFromRuntimeLODs_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::NewProp_RuntimeLODs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::NewProp_RuntimeLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::NewProp_StaticMeshConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "StaticMeshConfig" },
		{ "AutoCreateRefTerm", "StaticMeshConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadStaticMeshFromRuntimeLODs", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::glTFRuntimeAsset_eventLoadStaticMeshFromRuntimeLODs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::glTFRuntimeAsset_eventLoadStaticMeshFromRuntimeLODs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics
	{
		struct glTFRuntimeAsset_eventLoadStaticMeshIntoProceduralMeshComponent_Parms
		{
			int32 MeshIndex;
			UProceduralMeshComponent* ProceduralMeshComponent;
			FglTFRuntimeProceduralMeshConfig ProceduralMeshConfig;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeshIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProceduralMeshConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::NewProp_MeshIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::NewProp_MeshIndex = { "MeshIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshIntoProceduralMeshComponent_Parms, MeshIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::NewProp_MeshIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::NewProp_MeshIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::NewProp_ProceduralMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::NewProp_ProceduralMeshComponent = { "ProceduralMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshIntoProceduralMeshComponent_Parms, ProceduralMeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::NewProp_ProceduralMeshComponent_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::NewProp_ProceduralMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::NewProp_ProceduralMeshConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::NewProp_ProceduralMeshConfig = { "ProceduralMeshConfig", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshIntoProceduralMeshComponent_Parms, ProceduralMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeProceduralMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::NewProp_ProceduralMeshConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::NewProp_ProceduralMeshConfig_MetaData) }; // 1280940301
	void Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventLoadStaticMeshIntoProceduralMeshComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventLoadStaticMeshIntoProceduralMeshComponent_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::NewProp_MeshIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::NewProp_ProceduralMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::NewProp_ProceduralMeshConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "ProceduralMeshConfig" },
		{ "AutoCreateRefTerm", "ProceduralMeshConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadStaticMeshIntoProceduralMeshComponent", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::glTFRuntimeAsset_eventLoadStaticMeshIntoProceduralMeshComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::glTFRuntimeAsset_eventLoadStaticMeshIntoProceduralMeshComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics
	{
		struct glTFRuntimeAsset_eventLoadStaticMeshLODs_Parms
		{
			TArray<int32> MeshIndices;
			FglTFRuntimeStaticMeshConfig StaticMeshConfig;
			UStaticMesh* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeshIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::NewProp_MeshIndices_Inner = { "MeshIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::NewProp_MeshIndices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::NewProp_MeshIndices = { "MeshIndices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshLODs_Parms, MeshIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::NewProp_MeshIndices_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::NewProp_MeshIndices_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::NewProp_StaticMeshConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::NewProp_StaticMeshConfig = { "StaticMeshConfig", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshLODs_Parms, StaticMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeStaticMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::NewProp_StaticMeshConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::NewProp_StaticMeshConfig_MetaData) }; // 2209239704
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshLODs_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::NewProp_MeshIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::NewProp_MeshIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::NewProp_StaticMeshConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "StaticMeshConfig" },
		{ "AutoCreateRefTerm", "StaticMeshConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadStaticMeshLODs", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::glTFRuntimeAsset_eventLoadStaticMeshLODs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::glTFRuntimeAsset_eventLoadStaticMeshLODs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics
	{
		struct glTFRuntimeAsset_eventLoadStaticMeshLODsAsync_Parms
		{
			TArray<int32> MeshIndices;
			FScriptDelegate AsyncCallback;
			FglTFRuntimeStaticMeshConfig StaticMeshConfig;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeshIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshIndices;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_AsyncCallback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::NewProp_MeshIndices_Inner = { "MeshIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::NewProp_MeshIndices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::NewProp_MeshIndices = { "MeshIndices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshLODsAsync_Parms, MeshIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::NewProp_MeshIndices_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::NewProp_MeshIndices_MetaData) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::NewProp_AsyncCallback = { "AsyncCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshLODsAsync_Parms, AsyncCallback), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeStaticMeshAsync__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4260202489
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::NewProp_StaticMeshConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::NewProp_StaticMeshConfig = { "StaticMeshConfig", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshLODsAsync_Parms, StaticMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeStaticMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::NewProp_StaticMeshConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::NewProp_StaticMeshConfig_MetaData) }; // 2209239704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::NewProp_MeshIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::NewProp_MeshIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::NewProp_AsyncCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::NewProp_StaticMeshConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "StaticMeshConfig" },
		{ "AutoCreateRefTerm", "StaticMeshConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadStaticMeshLODsAsync", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::glTFRuntimeAsset_eventLoadStaticMeshLODsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::glTFRuntimeAsset_eventLoadStaticMeshLODsAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics
	{
		struct glTFRuntimeAsset_eventLoadStaticMeshRecursive_Parms
		{
			FString NodeName;
			TArray<FString> ExcludeNodes;
			FglTFRuntimeStaticMeshConfig StaticMeshConfig;
			UStaticMesh* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludeNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshRecursive_Parms, NodeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::NewProp_NodeName_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::NewProp_NodeName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::NewProp_ExcludeNodes_Inner = { "ExcludeNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::NewProp_ExcludeNodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::NewProp_ExcludeNodes = { "ExcludeNodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshRecursive_Parms, ExcludeNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::NewProp_ExcludeNodes_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::NewProp_ExcludeNodes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::NewProp_StaticMeshConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::NewProp_StaticMeshConfig = { "StaticMeshConfig", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshRecursive_Parms, StaticMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeStaticMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::NewProp_StaticMeshConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::NewProp_StaticMeshConfig_MetaData) }; // 2209239704
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshRecursive_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::NewProp_NodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::NewProp_ExcludeNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::NewProp_ExcludeNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::NewProp_StaticMeshConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "StaticMeshConfig" },
		{ "AutoCreateRefTerm", "ExcludeNodes, StaticMeshConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadStaticMeshRecursive", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::glTFRuntimeAsset_eventLoadStaticMeshRecursive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::glTFRuntimeAsset_eventLoadStaticMeshRecursive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics
	{
		struct glTFRuntimeAsset_eventLoadStaticMeshRecursiveAsync_Parms
		{
			FString NodeName;
			TArray<FString> ExcludeNodes;
			FScriptDelegate AsyncCallback;
			FglTFRuntimeStaticMeshConfig StaticMeshConfig;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludeNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeNodes;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_AsyncCallback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshRecursiveAsync_Parms, NodeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::NewProp_NodeName_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::NewProp_NodeName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::NewProp_ExcludeNodes_Inner = { "ExcludeNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::NewProp_ExcludeNodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::NewProp_ExcludeNodes = { "ExcludeNodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshRecursiveAsync_Parms, ExcludeNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::NewProp_ExcludeNodes_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::NewProp_ExcludeNodes_MetaData) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::NewProp_AsyncCallback = { "AsyncCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshRecursiveAsync_Parms, AsyncCallback), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeStaticMeshAsync__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4260202489
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::NewProp_StaticMeshConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::NewProp_StaticMeshConfig = { "StaticMeshConfig", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventLoadStaticMeshRecursiveAsync_Parms, StaticMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeStaticMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::NewProp_StaticMeshConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::NewProp_StaticMeshConfig_MetaData) }; // 2209239704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::NewProp_NodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::NewProp_ExcludeNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::NewProp_ExcludeNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::NewProp_AsyncCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::NewProp_StaticMeshConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "StaticMeshConfig" },
		{ "AutoCreateRefTerm", "ExcludeNodes, StaticMeshConfig" },
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "LoadStaticMeshRecursiveAsync", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::glTFRuntimeAsset_eventLoadStaticMeshRecursiveAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::glTFRuntimeAsset_eventLoadStaticMeshRecursiveAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone_Statics
	{
		struct glTFRuntimeAsset_eventNodeIsBone_Parms
		{
			int32 NodeIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventNodeIsBone_Parms, NodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone_Statics::NewProp_NodeIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone_Statics::NewProp_NodeIndex_MetaData) };
	void Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeAsset_eventNodeIsBone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeAsset_eventNodeIsBone_Parms), &Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "NodeIsBone", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone_Statics::glTFRuntimeAsset_eventNodeIsBone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone_Statics::glTFRuntimeAsset_eventNodeIsBone_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy_Statics
	{
		struct glTFRuntimeAsset_eventOnErrorProxy_Parms
		{
			FString ErrorContext;
			FString ErrorMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorContext_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy_Statics::NewProp_ErrorContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy_Statics::NewProp_ErrorContext = { "ErrorContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventOnErrorProxy_Parms, ErrorContext), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy_Statics::NewProp_ErrorContext_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy_Statics::NewProp_ErrorContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventOnErrorProxy_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy_Statics::NewProp_ErrorMessage_MetaData), Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy_Statics::NewProp_ErrorMessage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy_Statics::NewProp_ErrorContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "OnErrorProxy", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy_Statics::glTFRuntimeAsset_eventOnErrorProxy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy_Statics::glTFRuntimeAsset_eventOnErrorProxy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_OnSkeletalMeshCreatedProxy_Statics
	{
		struct glTFRuntimeAsset_eventOnSkeletalMeshCreatedProxy_Parms
		{
			USkeletalMesh* SkeletalMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_OnSkeletalMeshCreatedProxy_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventOnSkeletalMeshCreatedProxy_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_OnSkeletalMeshCreatedProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_OnSkeletalMeshCreatedProxy_Statics::NewProp_SkeletalMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_OnSkeletalMeshCreatedProxy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_OnSkeletalMeshCreatedProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "OnSkeletalMeshCreatedProxy", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_OnSkeletalMeshCreatedProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_OnSkeletalMeshCreatedProxy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_OnSkeletalMeshCreatedProxy_Statics::glTFRuntimeAsset_eventOnSkeletalMeshCreatedProxy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_OnSkeletalMeshCreatedProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_OnSkeletalMeshCreatedProxy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_OnSkeletalMeshCreatedProxy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_OnSkeletalMeshCreatedProxy_Statics::glTFRuntimeAsset_eventOnSkeletalMeshCreatedProxy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_OnSkeletalMeshCreatedProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_OnSkeletalMeshCreatedProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeAsset_OnStaticMeshCreatedProxy_Statics
	{
		struct glTFRuntimeAsset_eventOnStaticMeshCreatedProxy_Parms
		{
			UStaticMesh* StaticMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAsset_OnStaticMeshCreatedProxy_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAsset_eventOnStaticMeshCreatedProxy_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAsset_OnStaticMeshCreatedProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAsset_OnStaticMeshCreatedProxy_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeAsset_OnStaticMeshCreatedProxy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAsset_OnStaticMeshCreatedProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAsset, nullptr, "OnStaticMeshCreatedProxy", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAsset_OnStaticMeshCreatedProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_OnStaticMeshCreatedProxy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_OnStaticMeshCreatedProxy_Statics::glTFRuntimeAsset_eventOnStaticMeshCreatedProxy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_OnStaticMeshCreatedProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAsset_OnStaticMeshCreatedProxy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAsset_OnStaticMeshCreatedProxy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAsset_OnStaticMeshCreatedProxy_Statics::glTFRuntimeAsset_eventOnStaticMeshCreatedProxy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeAsset_OnStaticMeshCreatedProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAsset_OnStaticMeshCreatedProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UglTFRuntimeAsset);
	UClass* Z_Construct_UClass_UglTFRuntimeAsset_NoRegister()
	{
		return UglTFRuntimeAsset::StaticClass();
	}
	struct Z_Construct_UClass_UglTFRuntimeAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialsMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialsMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialsMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStaticMeshCreated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStaticMeshCreated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSkeletalMeshCreated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSkeletalMeshCreated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeContextString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RuntimeContextString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UglTFRuntimeAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_glTFRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAsset_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UglTFRuntimeAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeBackward, "BuildTransformFromNodeBackward" }, // 2911236467
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_BuildTransformFromNodeForward, "BuildTransformFromNodeForward" }, // 1856985522
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_CreateAnimationFromPose, "CreateAnimationFromPose" }, // 1542197515
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_CreateSkeletalAnimationFromPath, "CreateSkeletalAnimationFromPath" }, // 1913452822
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_FindNodeByNameInArray, "FindNodeByNameInArray" }, // 587137339
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetArraySizeFromPath, "GetArraySizeFromPath" }, // 2060500857
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromExtras, "GetBooleanFromExtras" }, // 3261090037
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetBooleanFromPath, "GetBooleanFromPath" }, // 3462394578
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetCameraNodesIndices, "GetCameraNodesIndices" }, // 2035005064
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetCamerasNames, "GetCamerasNames" }, // 1099782950
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsRequired, "GetExtensionsRequired" }, // 3756989073
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetExtensionsUsed, "GetExtensionsUsed" }, // 3890085442
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetFloatFromPath, "GetFloatFromPath" }, // 1183662378
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetIntegerFromPath, "GetIntegerFromPath" }, // 490699061
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetMaterialsVariants, "GetMaterialsVariants" }, // 546200858
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetNode, "GetNode" }, // 1571111212
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeByName, "GetNodeByName" }, // 2812879362
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndex, "GetNodeExtensionIndex" }, // 2428052689
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtensionIndices, "GetNodeExtensionIndices" }, // 4254830298
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeExtrasNumbers, "GetNodeExtrasNumbers" }, // 2949551002
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetNodeGPUInstancingTransforms, "GetNodeGPUInstancingTransforms" }, // 836834902
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetNodes, "GetNodes" }, // 2774083506
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetNumberFromExtras, "GetNumberFromExtras" }, // 4279895020
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetNumImages, "GetNumImages" }, // 158196419
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetNumMeshes, "GetNumMeshes" }, // 3552086081
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetScenes, "GetScenes" }, // 1895597197
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetStringArrayFromExtras, "GetStringArrayFromExtras" }, // 2148391390
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromExtras, "GetStringFromExtras" }, // 1490772506
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetStringFromPath, "GetStringFromPath" }, // 3155357760
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_GetStringMapFromExtras, "GetStringMapFromExtras" }, // 874107486
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadAllNodeAnimationCurves, "LoadAllNodeAnimationCurves" }, // 532480242
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadAudioEmitter, "LoadAudioEmitter" }, // 2492173835
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadCamera, "LoadCamera" }, // 1802330462
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadEmitterIntoAudioComponent, "LoadEmitterIntoAudioComponent" }, // 3620947135
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadImage, "LoadImage" }, // 3143545666
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadImageFromBlob, "LoadImageFromBlob" }, // 4169985796
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadMaterial, "LoadMaterial" }, // 1849598442
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadMeshAsRuntimeLOD, "LoadMeshAsRuntimeLOD" }, // 1406947086
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeAnimationCurve, "LoadNodeAnimationCurve" }, // 1045459832
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeCamera, "LoadNodeCamera" }, // 4107792431
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadNodeSkeletalAnimation, "LoadNodeSkeletalAnimation" }, // 1166441089
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadPunctualLight, "LoadPunctualLight" }, // 743681829
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimation, "LoadSkeletalAnimation" }, // 1261529444
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationAsMontage, "LoadSkeletalAnimationAsMontage" }, // 763968670
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalAnimationByName, "LoadSkeletalAnimationByName" }, // 249823131
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMesh, "LoadSkeletalMesh" }, // 3407851458
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshAsync, "LoadSkeletalMeshAsync" }, // 1497654607
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshFromRuntimeLODs, "LoadSkeletalMeshFromRuntimeLODs" }, // 4059376301
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshLODs, "LoadSkeletalMeshLODs" }, // 1786544733
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursive, "LoadSkeletalMeshRecursive" }, // 1907534525
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletalMeshRecursiveAsync, "LoadSkeletalMeshRecursiveAsync" }, // 4057414965
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeleton, "LoadSkeleton" }, // 1231161355
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTree, "LoadSkeletonFromNodeTree" }, // 2030403888
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkeletonFromNodeTreeByName, "LoadSkeletonFromNodeTreeByName" }, // 1145395276
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadSkinnedMeshRecursiveAsRuntimeLOD, "LoadSkinnedMeshRecursiveAsRuntimeLOD" }, // 2955571070
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMesh, "LoadStaticMesh" }, // 1807281989
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshAsync, "LoadStaticMeshAsync" }, // 2547516094
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByName, "LoadStaticMeshByName" }, // 649377715
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshByNodeName, "LoadStaticMeshByNodeName" }, // 2387413212
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshesFromPrimitives, "LoadStaticMeshesFromPrimitives" }, // 627963779
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshFromRuntimeLODs, "LoadStaticMeshFromRuntimeLODs" }, // 2436389701
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshIntoProceduralMeshComponent, "LoadStaticMeshIntoProceduralMeshComponent" }, // 3074000346
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODs, "LoadStaticMeshLODs" }, // 1464507287
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshLODsAsync, "LoadStaticMeshLODsAsync" }, // 2305372509
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursive, "LoadStaticMeshRecursive" }, // 1201359561
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_LoadStaticMeshRecursiveAsync, "LoadStaticMeshRecursiveAsync" }, // 1502950199
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_NodeIsBone, "NodeIsBone" }, // 2569345043
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_OnErrorProxy, "OnErrorProxy" }, // 1400718119
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_OnSkeletalMeshCreatedProxy, "OnSkeletalMeshCreatedProxy" }, // 989315601
		{ &Z_Construct_UFunction_UglTFRuntimeAsset_OnStaticMeshCreatedProxy, "OnStaticMeshCreatedProxy" }, // 4131782730
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAsset_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFRuntimeAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "glTFRuntimeAsset.h" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_MaterialsMap_ValueProp = { "MaterialsMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_MaterialsMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_MaterialsMap_Key_KeyProp = { "MaterialsMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_glTFRuntime_EglTFRuntimeMaterialType, METADATA_PARAMS(0, nullptr) }; // 2263050066
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_MaterialsMap_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_MaterialsMap = { "MaterialsMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UglTFRuntimeAsset, MaterialsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_MaterialsMap_MetaData), Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_MaterialsMap_MetaData) }; // 2263050066
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_OnError_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UglTFRuntimeAsset, OnError), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeError__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_OnError_MetaData), Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_OnError_MetaData) }; // 1602362485
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_OnStaticMeshCreated_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_OnStaticMeshCreated = { "OnStaticMeshCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UglTFRuntimeAsset, OnStaticMeshCreated), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeOnStaticMeshCreated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_OnStaticMeshCreated_MetaData), Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_OnStaticMeshCreated_MetaData) }; // 333790143
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_OnSkeletalMeshCreated_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_OnSkeletalMeshCreated = { "OnSkeletalMeshCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UglTFRuntimeAsset, OnSkeletalMeshCreated), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeOnSkeletalMeshCreated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_OnSkeletalMeshCreated_MetaData), Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_OnSkeletalMeshCreated_MetaData) }; // 2780405159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_RuntimeContextObject_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_RuntimeContextObject = { "RuntimeContextObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UglTFRuntimeAsset, RuntimeContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_RuntimeContextObject_MetaData), Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_RuntimeContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_RuntimeContextString_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_RuntimeContextString = { "RuntimeContextString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UglTFRuntimeAsset, RuntimeContextString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_RuntimeContextString_MetaData), Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_RuntimeContextString_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UglTFRuntimeAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_MaterialsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_MaterialsMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_MaterialsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_MaterialsMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_OnError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_OnStaticMeshCreated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_OnSkeletalMeshCreated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_RuntimeContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFRuntimeAsset_Statics::NewProp_RuntimeContextString,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UglTFRuntimeAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UglTFRuntimeAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UglTFRuntimeAsset_Statics::ClassParams = {
		&UglTFRuntimeAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UglTFRuntimeAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAsset_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UglTFRuntimeAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UglTFRuntimeAsset()
	{
		if (!Z_Registration_Info_UClass_UglTFRuntimeAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UglTFRuntimeAsset.OuterSingleton, Z_Construct_UClass_UglTFRuntimeAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UglTFRuntimeAsset.OuterSingleton;
	}
	template<> GLTFRUNTIME_API UClass* StaticClass<UglTFRuntimeAsset>()
	{
		return UglTFRuntimeAsset::StaticClass();
	}
	UglTFRuntimeAsset::UglTFRuntimeAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UglTFRuntimeAsset);
	UglTFRuntimeAsset::~UglTFRuntimeAsset() {}
	struct Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UglTFRuntimeAsset, UglTFRuntimeAsset::StaticClass, TEXT("UglTFRuntimeAsset"), &Z_Registration_Info_UClass_UglTFRuntimeAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UglTFRuntimeAsset), 3562745074U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAsset_h_322301933(TEXT("/Script/glTFRuntime"),
		Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_filie_Documents_Unreal_Projects_unreal_playground_demo_Plugins_InworldReadyPlayerMe_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
