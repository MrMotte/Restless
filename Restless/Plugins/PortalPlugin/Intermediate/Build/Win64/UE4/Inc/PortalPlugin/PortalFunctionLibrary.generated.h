// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FQuat;
struct FTransform;
class USceneComponent;
struct FRotator;
struct FVector;
class USceneCaptureComponent2D;
class UMaterialInstanceDynamic;
class APlayerController;
#ifdef PORTALPLUGIN_PortalFunctionLibrary_generated_h
#error "PortalFunctionLibrary.generated.h already included, missing '#pragma once' in PortalFunctionLibrary.h"
#endif
#define PORTALPLUGIN_PortalFunctionLibrary_generated_h

#define Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetQuatMappedToTargetTransform) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Rotation); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Source); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UPortalFunctionLibrary::GetQuatMappedToTargetTransform(Z_Param_Out_Rotation,Z_Param_Out_Source,Z_Param_Out_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetQuatMappedToTarget) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Rotation); \
		P_GET_OBJECT(USceneComponent,Z_Param_Source); \
		P_GET_OBJECT(USceneComponent,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UPortalFunctionLibrary::GetQuatMappedToTarget(Z_Param_Out_Rotation,Z_Param_Source,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotationMappedToTargetTransform) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Source); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UPortalFunctionLibrary::GetRotationMappedToTargetTransform(Z_Param_Out_Rotation,Z_Param_Out_Source,Z_Param_Out_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotationMappedToTarget) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_OBJECT(USceneComponent,Z_Param_Source); \
		P_GET_OBJECT(USceneComponent,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UPortalFunctionLibrary::GetRotationMappedToTarget(Z_Param_Out_Rotation,Z_Param_Source,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirectionMappedToTargetTransform) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Source); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UPortalFunctionLibrary::GetDirectionMappedToTargetTransform(Z_Param_Out_Direction,Z_Param_Out_Source,Z_Param_Out_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirectionMappedToTarget) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction); \
		P_GET_OBJECT(USceneComponent,Z_Param_Source); \
		P_GET_OBJECT(USceneComponent,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UPortalFunctionLibrary::GetDirectionMappedToTarget(Z_Param_Out_Direction,Z_Param_Source,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocationMappedToTargetTransform) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Source); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UPortalFunctionLibrary::GetLocationMappedToTargetTransform(Z_Param_Out_Location,Z_Param_Out_Source,Z_Param_Out_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocationMappedToTarget) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_OBJECT(USceneComponent,Z_Param_Source); \
		P_GET_OBJECT(USceneComponent,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UPortalFunctionLibrary::GetLocationMappedToTarget(Z_Param_Out_Location,Z_Param_Source,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateFullPortalState) \
	{ \
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_CaptureComponent); \
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MaterialInstance); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_CameraTransform); \
		P_GET_OBJECT(USceneComponent,Z_Param_SourcePortal); \
		P_GET_OBJECT(USceneComponent,Z_Param_TargetPortal); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ClipOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPortalFunctionLibrary::UpdateFullPortalState(Z_Param_CaptureComponent,Z_Param_MaterialInstance,Z_Param_Out_CameraTransform,Z_Param_SourcePortal,Z_Param_TargetPortal,Z_Param_ClipOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCaptureComponentClipPlaneTransform) \
	{ \
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_CaptureComponent); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TargetPortal); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ClipOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPortalFunctionLibrary::UpdateCaptureComponentClipPlaneTransform(Z_Param_CaptureComponent,Z_Param_Out_TargetPortal,Z_Param_ClipOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCaptureComponentClipplane) \
	{ \
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_CaptureComponent); \
		P_GET_OBJECT(USceneComponent,Z_Param_TargetPortal); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ClipOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPortalFunctionLibrary::UpdateCaptureComponentClipplane(Z_Param_CaptureComponent,Z_Param_TargetPortal,Z_Param_ClipOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCaptureComponentWithTransforms) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_CaptureComponent); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_CameraTransform); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SourcePortal); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TargetPortal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPortalFunctionLibrary::UpdateCaptureComponentWithTransforms(Z_Param_CaptureComponent,Z_Param_Out_CameraTransform,Z_Param_Out_SourcePortal,Z_Param_Out_TargetPortal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCaptureComponentTransform) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_CaptureComponent); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_CameraTransform); \
		P_GET_OBJECT(USceneComponent,Z_Param_SourcePortal); \
		P_GET_OBJECT(USceneComponent,Z_Param_TargetPortal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPortalFunctionLibrary::UpdateCaptureComponentTransform(Z_Param_CaptureComponent,Z_Param_Out_CameraTransform,Z_Param_SourcePortal,Z_Param_TargetPortal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePortalVPMParameters) \
	{ \
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_CaptureComponent); \
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MaterialInstance); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_CameraTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPortalFunctionLibrary::UpdatePortalVPMParameters(Z_Param_CaptureComponent,Z_Param_MaterialInstance,Z_Param_Out_CameraTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFOVForCaptureComponents) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ForPlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UPortalFunctionLibrary::GetFOVForCaptureComponents(Z_Param_ForPlayerController); \
		P_NATIVE_END; \
	}


#define Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetQuatMappedToTargetTransform) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Rotation); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Source); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UPortalFunctionLibrary::GetQuatMappedToTargetTransform(Z_Param_Out_Rotation,Z_Param_Out_Source,Z_Param_Out_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetQuatMappedToTarget) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Rotation); \
		P_GET_OBJECT(USceneComponent,Z_Param_Source); \
		P_GET_OBJECT(USceneComponent,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UPortalFunctionLibrary::GetQuatMappedToTarget(Z_Param_Out_Rotation,Z_Param_Source,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotationMappedToTargetTransform) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Source); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UPortalFunctionLibrary::GetRotationMappedToTargetTransform(Z_Param_Out_Rotation,Z_Param_Out_Source,Z_Param_Out_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotationMappedToTarget) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_OBJECT(USceneComponent,Z_Param_Source); \
		P_GET_OBJECT(USceneComponent,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UPortalFunctionLibrary::GetRotationMappedToTarget(Z_Param_Out_Rotation,Z_Param_Source,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirectionMappedToTargetTransform) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Source); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UPortalFunctionLibrary::GetDirectionMappedToTargetTransform(Z_Param_Out_Direction,Z_Param_Out_Source,Z_Param_Out_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirectionMappedToTarget) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction); \
		P_GET_OBJECT(USceneComponent,Z_Param_Source); \
		P_GET_OBJECT(USceneComponent,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UPortalFunctionLibrary::GetDirectionMappedToTarget(Z_Param_Out_Direction,Z_Param_Source,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocationMappedToTargetTransform) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Source); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UPortalFunctionLibrary::GetLocationMappedToTargetTransform(Z_Param_Out_Location,Z_Param_Out_Source,Z_Param_Out_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocationMappedToTarget) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_OBJECT(USceneComponent,Z_Param_Source); \
		P_GET_OBJECT(USceneComponent,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UPortalFunctionLibrary::GetLocationMappedToTarget(Z_Param_Out_Location,Z_Param_Source,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateFullPortalState) \
	{ \
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_CaptureComponent); \
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MaterialInstance); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_CameraTransform); \
		P_GET_OBJECT(USceneComponent,Z_Param_SourcePortal); \
		P_GET_OBJECT(USceneComponent,Z_Param_TargetPortal); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ClipOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPortalFunctionLibrary::UpdateFullPortalState(Z_Param_CaptureComponent,Z_Param_MaterialInstance,Z_Param_Out_CameraTransform,Z_Param_SourcePortal,Z_Param_TargetPortal,Z_Param_ClipOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCaptureComponentClipPlaneTransform) \
	{ \
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_CaptureComponent); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TargetPortal); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ClipOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPortalFunctionLibrary::UpdateCaptureComponentClipPlaneTransform(Z_Param_CaptureComponent,Z_Param_Out_TargetPortal,Z_Param_ClipOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCaptureComponentClipplane) \
	{ \
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_CaptureComponent); \
		P_GET_OBJECT(USceneComponent,Z_Param_TargetPortal); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ClipOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPortalFunctionLibrary::UpdateCaptureComponentClipplane(Z_Param_CaptureComponent,Z_Param_TargetPortal,Z_Param_ClipOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCaptureComponentWithTransforms) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_CaptureComponent); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_CameraTransform); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SourcePortal); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TargetPortal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPortalFunctionLibrary::UpdateCaptureComponentWithTransforms(Z_Param_CaptureComponent,Z_Param_Out_CameraTransform,Z_Param_Out_SourcePortal,Z_Param_Out_TargetPortal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCaptureComponentTransform) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_CaptureComponent); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_CameraTransform); \
		P_GET_OBJECT(USceneComponent,Z_Param_SourcePortal); \
		P_GET_OBJECT(USceneComponent,Z_Param_TargetPortal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPortalFunctionLibrary::UpdateCaptureComponentTransform(Z_Param_CaptureComponent,Z_Param_Out_CameraTransform,Z_Param_SourcePortal,Z_Param_TargetPortal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePortalVPMParameters) \
	{ \
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_CaptureComponent); \
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MaterialInstance); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_CameraTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPortalFunctionLibrary::UpdatePortalVPMParameters(Z_Param_CaptureComponent,Z_Param_MaterialInstance,Z_Param_Out_CameraTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFOVForCaptureComponents) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ForPlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UPortalFunctionLibrary::GetFOVForCaptureComponents(Z_Param_ForPlayerController); \
		P_NATIVE_END; \
	}


#define Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPortalFunctionLibrary(); \
	friend PORTALPLUGIN_API class UClass* Z_Construct_UClass_UPortalFunctionLibrary(); \
public: \
	DECLARE_CLASS(UPortalFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PortalPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPortalFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPortalFunctionLibrary(); \
	friend PORTALPLUGIN_API class UClass* Z_Construct_UClass_UPortalFunctionLibrary(); \
public: \
	DECLARE_CLASS(UPortalFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PortalPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPortalFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPortalFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPortalFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPortalFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPortalFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPortalFunctionLibrary(UPortalFunctionLibrary&&); \
	NO_API UPortalFunctionLibrary(const UPortalFunctionLibrary&); \
public:


#define Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPortalFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPortalFunctionLibrary(UPortalFunctionLibrary&&); \
	NO_API UPortalFunctionLibrary(const UPortalFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPortalFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPortalFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPortalFunctionLibrary)


#define Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_13_PROLOG
#define Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_RPC_WRAPPERS \
	Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_INCLASS \
	Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
