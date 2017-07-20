// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/IPortalPlugin.h"
#include "PortalPlugin.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1PortalPlugin() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API class UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API class UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();

	PORTALPLUGIN_API class UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget();
	PORTALPLUGIN_API class UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform();
	PORTALPLUGIN_API class UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetFOVForCaptureComponents();
	PORTALPLUGIN_API class UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget();
	PORTALPLUGIN_API class UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform();
	PORTALPLUGIN_API class UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget();
	PORTALPLUGIN_API class UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform();
	PORTALPLUGIN_API class UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget();
	PORTALPLUGIN_API class UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform();
	PORTALPLUGIN_API class UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane();
	PORTALPLUGIN_API class UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform();
	PORTALPLUGIN_API class UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform();
	PORTALPLUGIN_API class UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms();
	PORTALPLUGIN_API class UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState();
	PORTALPLUGIN_API class UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters();
	PORTALPLUGIN_API class UClass* Z_Construct_UClass_UPortalFunctionLibrary_NoRegister();
	PORTALPLUGIN_API class UClass* Z_Construct_UClass_UPortalFunctionLibrary();
	PORTALPLUGIN_API class UFunction* Z_Construct_UDelegateFunction_UViewportResizedComponent_OnViewportResized__DelegateSignature();
	PORTALPLUGIN_API class UClass* Z_Construct_UClass_UViewportResizedComponent_NoRegister();
	PORTALPLUGIN_API class UClass* Z_Construct_UClass_UViewportResizedComponent();
	PORTALPLUGIN_API class UPackage* Z_Construct_UPackage__Script_PortalPlugin();
	void UPortalFunctionLibrary::StaticRegisterNativesUPortalFunctionLibrary()
	{
		UClass* Class = UPortalFunctionLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetDirectionMappedToTarget", (Native)&UPortalFunctionLibrary::execGetDirectionMappedToTarget },
			{ "GetDirectionMappedToTargetTransform", (Native)&UPortalFunctionLibrary::execGetDirectionMappedToTargetTransform },
			{ "GetFOVForCaptureComponents", (Native)&UPortalFunctionLibrary::execGetFOVForCaptureComponents },
			{ "GetLocationMappedToTarget", (Native)&UPortalFunctionLibrary::execGetLocationMappedToTarget },
			{ "GetLocationMappedToTargetTransform", (Native)&UPortalFunctionLibrary::execGetLocationMappedToTargetTransform },
			{ "GetQuatMappedToTarget", (Native)&UPortalFunctionLibrary::execGetQuatMappedToTarget },
			{ "GetQuatMappedToTargetTransform", (Native)&UPortalFunctionLibrary::execGetQuatMappedToTargetTransform },
			{ "GetRotationMappedToTarget", (Native)&UPortalFunctionLibrary::execGetRotationMappedToTarget },
			{ "GetRotationMappedToTargetTransform", (Native)&UPortalFunctionLibrary::execGetRotationMappedToTargetTransform },
			{ "UpdateCaptureComponentClipplane", (Native)&UPortalFunctionLibrary::execUpdateCaptureComponentClipplane },
			{ "UpdateCaptureComponentClipPlaneTransform", (Native)&UPortalFunctionLibrary::execUpdateCaptureComponentClipPlaneTransform },
			{ "UpdateCaptureComponentTransform", (Native)&UPortalFunctionLibrary::execUpdateCaptureComponentTransform },
			{ "UpdateCaptureComponentWithTransforms", (Native)&UPortalFunctionLibrary::execUpdateCaptureComponentWithTransforms },
			{ "UpdateFullPortalState", (Native)&UPortalFunctionLibrary::execUpdateFullPortalState },
			{ "UpdatePortalVPMParameters", (Native)&UPortalFunctionLibrary::execUpdatePortalVPMParameters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 15);
	}
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget()
	{
		struct PortalFunctionLibrary_eventGetDirectionMappedToTarget_Parms
		{
			FVector Direction;
			const USceneComponent* Source;
			const USceneComponent* Target;
			FVector ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UPortalFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetDirectionMappedToTarget"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14C42401, 65535, sizeof(PortalFunctionLibrary_eventGetDirectionMappedToTarget_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, PortalFunctionLibrary_eventGetDirectionMappedToTarget_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Target = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Target"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Target, PortalFunctionLibrary_eventGetDirectionMappedToTarget_Parms), 0x0010000000080082, Z_Construct_UClass_USceneComponent_NoRegister());
			UProperty* NewProp_Source = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Source"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Source, PortalFunctionLibrary_eventGetDirectionMappedToTarget_Parms), 0x0010000000080082, Z_Construct_UClass_USceneComponent_NoRegister());
			UProperty* NewProp_Direction = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Direction"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Direction, PortalFunctionLibrary_eventGetDirectionMappedToTarget_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Portal"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/PortalFunctionLibrary.h"));
			MetaData->SetValue(NewProp_Target, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_Target, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Source, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_Source, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Direction, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform()
	{
		struct PortalFunctionLibrary_eventGetDirectionMappedToTargetTransform_Parms
		{
			FVector Direction;
			FTransform Source;
			FTransform Target;
			FVector ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UPortalFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetDirectionMappedToTargetTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14C42401, 65535, sizeof(PortalFunctionLibrary_eventGetDirectionMappedToTargetTransform_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, PortalFunctionLibrary_eventGetDirectionMappedToTargetTransform_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Target = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Target"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Target, PortalFunctionLibrary_eventGetDirectionMappedToTargetTransform_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_Source = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Source"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Source, PortalFunctionLibrary_eventGetDirectionMappedToTargetTransform_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_Direction = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Direction"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Direction, PortalFunctionLibrary_eventGetDirectionMappedToTargetTransform_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Portal"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/PortalFunctionLibrary.h"));
			MetaData->SetValue(NewProp_Target, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Source, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Direction, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetFOVForCaptureComponents()
	{
		struct PortalFunctionLibrary_eventGetFOVForCaptureComponents_Parms
		{
			const APlayerController* ForPlayerController;
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UPortalFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetFOVForCaptureComponents"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14042401, 65535, sizeof(PortalFunctionLibrary_eventGetFOVForCaptureComponents_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, PortalFunctionLibrary_eventGetFOVForCaptureComponents_Parms), 0x0010000000000580);
			UProperty* NewProp_ForPlayerController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ForPlayerController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ForPlayerController, PortalFunctionLibrary_eventGetFOVForCaptureComponents_Parms), 0x0010000000000082, Z_Construct_UClass_APlayerController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Portal"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/PortalFunctionLibrary.h"));
			MetaData->SetValue(NewProp_ForPlayerController, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget()
	{
		struct PortalFunctionLibrary_eventGetLocationMappedToTarget_Parms
		{
			FVector Location;
			const USceneComponent* Source;
			const USceneComponent* Target;
			FVector ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UPortalFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetLocationMappedToTarget"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14C42401, 65535, sizeof(PortalFunctionLibrary_eventGetLocationMappedToTarget_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, PortalFunctionLibrary_eventGetLocationMappedToTarget_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Target = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Target"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Target, PortalFunctionLibrary_eventGetLocationMappedToTarget_Parms), 0x0010000000080082, Z_Construct_UClass_USceneComponent_NoRegister());
			UProperty* NewProp_Source = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Source"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Source, PortalFunctionLibrary_eventGetLocationMappedToTarget_Parms), 0x0010000000080082, Z_Construct_UClass_USceneComponent_NoRegister());
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, PortalFunctionLibrary_eventGetLocationMappedToTarget_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Portal"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/PortalFunctionLibrary.h"));
			MetaData->SetValue(NewProp_Target, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_Target, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Source, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_Source, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Location, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform()
	{
		struct PortalFunctionLibrary_eventGetLocationMappedToTargetTransform_Parms
		{
			FVector Location;
			FTransform Source;
			FTransform Target;
			FVector ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UPortalFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetLocationMappedToTargetTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14C42401, 65535, sizeof(PortalFunctionLibrary_eventGetLocationMappedToTargetTransform_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, PortalFunctionLibrary_eventGetLocationMappedToTargetTransform_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Target = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Target"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Target, PortalFunctionLibrary_eventGetLocationMappedToTargetTransform_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_Source = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Source"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Source, PortalFunctionLibrary_eventGetLocationMappedToTargetTransform_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, PortalFunctionLibrary_eventGetLocationMappedToTargetTransform_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Portal"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/PortalFunctionLibrary.h"));
			MetaData->SetValue(NewProp_Target, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Source, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Location, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget()
	{
		struct PortalFunctionLibrary_eventGetQuatMappedToTarget_Parms
		{
			FQuat Rotation;
			const USceneComponent* Source;
			const USceneComponent* Target;
			FQuat ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UPortalFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetQuatMappedToTarget"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14C42401, 65535, sizeof(PortalFunctionLibrary_eventGetQuatMappedToTarget_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, PortalFunctionLibrary_eventGetQuatMappedToTarget_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FQuat());
			UProperty* NewProp_Target = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Target"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Target, PortalFunctionLibrary_eventGetQuatMappedToTarget_Parms), 0x0010000000080082, Z_Construct_UClass_USceneComponent_NoRegister());
			UProperty* NewProp_Source = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Source"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Source, PortalFunctionLibrary_eventGetQuatMappedToTarget_Parms), 0x0010000000080082, Z_Construct_UClass_USceneComponent_NoRegister());
			UProperty* NewProp_Rotation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Rotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Rotation, PortalFunctionLibrary_eventGetQuatMappedToTarget_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FQuat());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Portal"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/PortalFunctionLibrary.h"));
			MetaData->SetValue(NewProp_Target, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_Target, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Source, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_Source, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Rotation, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform()
	{
		struct PortalFunctionLibrary_eventGetQuatMappedToTargetTransform_Parms
		{
			FQuat Rotation;
			FTransform Source;
			FTransform Target;
			FQuat ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UPortalFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetQuatMappedToTargetTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14C42401, 65535, sizeof(PortalFunctionLibrary_eventGetQuatMappedToTargetTransform_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, PortalFunctionLibrary_eventGetQuatMappedToTargetTransform_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FQuat());
			UProperty* NewProp_Target = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Target"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Target, PortalFunctionLibrary_eventGetQuatMappedToTargetTransform_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_Source = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Source"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Source, PortalFunctionLibrary_eventGetQuatMappedToTargetTransform_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_Rotation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Rotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Rotation, PortalFunctionLibrary_eventGetQuatMappedToTargetTransform_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FQuat());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Portal"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/PortalFunctionLibrary.h"));
			MetaData->SetValue(NewProp_Target, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Source, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Rotation, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget()
	{
		struct PortalFunctionLibrary_eventGetRotationMappedToTarget_Parms
		{
			FRotator Rotation;
			const USceneComponent* Source;
			const USceneComponent* Target;
			FRotator ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UPortalFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetRotationMappedToTarget"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14C42401, 65535, sizeof(PortalFunctionLibrary_eventGetRotationMappedToTarget_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, PortalFunctionLibrary_eventGetRotationMappedToTarget_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_Target = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Target"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Target, PortalFunctionLibrary_eventGetRotationMappedToTarget_Parms), 0x0010000000080082, Z_Construct_UClass_USceneComponent_NoRegister());
			UProperty* NewProp_Source = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Source"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Source, PortalFunctionLibrary_eventGetRotationMappedToTarget_Parms), 0x0010000000080082, Z_Construct_UClass_USceneComponent_NoRegister());
			UProperty* NewProp_Rotation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Rotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Rotation, PortalFunctionLibrary_eventGetRotationMappedToTarget_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FRotator());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Portal"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/PortalFunctionLibrary.h"));
			MetaData->SetValue(NewProp_Target, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_Target, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Source, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_Source, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Rotation, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform()
	{
		struct PortalFunctionLibrary_eventGetRotationMappedToTargetTransform_Parms
		{
			FRotator Rotation;
			FTransform Source;
			FTransform Target;
			FRotator ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UPortalFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetRotationMappedToTargetTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14C42401, 65535, sizeof(PortalFunctionLibrary_eventGetRotationMappedToTargetTransform_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, PortalFunctionLibrary_eventGetRotationMappedToTargetTransform_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_Target = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Target"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Target, PortalFunctionLibrary_eventGetRotationMappedToTargetTransform_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_Source = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Source"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Source, PortalFunctionLibrary_eventGetRotationMappedToTargetTransform_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_Rotation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Rotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Rotation, PortalFunctionLibrary_eventGetRotationMappedToTargetTransform_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FRotator());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Portal"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/PortalFunctionLibrary.h"));
			MetaData->SetValue(NewProp_Target, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Source, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Rotation, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane()
	{
		struct PortalFunctionLibrary_eventUpdateCaptureComponentClipplane_Parms
		{
			USceneCaptureComponent2D* CaptureComponent;
			const USceneComponent* TargetPortal;
			float ClipOffset;
		};
		UObject* Outer=Z_Construct_UClass_UPortalFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateCaptureComponentClipplane"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04042401, 65535, sizeof(PortalFunctionLibrary_eventUpdateCaptureComponentClipplane_Parms));
			UProperty* NewProp_ClipOffset = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClipOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ClipOffset, PortalFunctionLibrary_eventUpdateCaptureComponentClipplane_Parms), 0x0010000000000080);
			UProperty* NewProp_TargetPortal = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TargetPortal"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TargetPortal, PortalFunctionLibrary_eventUpdateCaptureComponentClipplane_Parms), 0x0010000000080082, Z_Construct_UClass_USceneComponent_NoRegister());
			UProperty* NewProp_CaptureComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CaptureComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CaptureComponent, PortalFunctionLibrary_eventUpdateCaptureComponentClipplane_Parms), 0x0010000000080080, Z_Construct_UClass_USceneCaptureComponent2D_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Portal"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_ClipOffset"), TEXT("-5.000000"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/PortalFunctionLibrary.h"));
			MetaData->SetValue(NewProp_TargetPortal, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_TargetPortal, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_CaptureComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform()
	{
		struct PortalFunctionLibrary_eventUpdateCaptureComponentClipPlaneTransform_Parms
		{
			USceneCaptureComponent2D* CaptureComponent;
			FTransform TargetPortal;
			float ClipOffset;
		};
		UObject* Outer=Z_Construct_UClass_UPortalFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateCaptureComponentClipPlaneTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04C42401, 65535, sizeof(PortalFunctionLibrary_eventUpdateCaptureComponentClipPlaneTransform_Parms));
			UProperty* NewProp_ClipOffset = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClipOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ClipOffset, PortalFunctionLibrary_eventUpdateCaptureComponentClipPlaneTransform_Parms), 0x0010000000000080);
			UProperty* NewProp_TargetPortal = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TargetPortal"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TargetPortal, PortalFunctionLibrary_eventUpdateCaptureComponentClipPlaneTransform_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_CaptureComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CaptureComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CaptureComponent, PortalFunctionLibrary_eventUpdateCaptureComponentClipPlaneTransform_Parms), 0x0010000000080080, Z_Construct_UClass_USceneCaptureComponent2D_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Portal"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_ClipOffset"), TEXT("-5.000000"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/PortalFunctionLibrary.h"));
			MetaData->SetValue(NewProp_TargetPortal, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_CaptureComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform()
	{
		struct PortalFunctionLibrary_eventUpdateCaptureComponentTransform_Parms
		{
			USceneComponent* CaptureComponent;
			FTransform CameraTransform;
			const USceneComponent* SourcePortal;
			const USceneComponent* TargetPortal;
		};
		UObject* Outer=Z_Construct_UClass_UPortalFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateCaptureComponentTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04C42401, 65535, sizeof(PortalFunctionLibrary_eventUpdateCaptureComponentTransform_Parms));
			UProperty* NewProp_TargetPortal = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TargetPortal"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TargetPortal, PortalFunctionLibrary_eventUpdateCaptureComponentTransform_Parms), 0x0010000000080082, Z_Construct_UClass_USceneComponent_NoRegister());
			UProperty* NewProp_SourcePortal = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SourcePortal"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SourcePortal, PortalFunctionLibrary_eventUpdateCaptureComponentTransform_Parms), 0x0010000000080082, Z_Construct_UClass_USceneComponent_NoRegister());
			UProperty* NewProp_CameraTransform = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CameraTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CameraTransform, PortalFunctionLibrary_eventUpdateCaptureComponentTransform_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_CaptureComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CaptureComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CaptureComponent, PortalFunctionLibrary_eventUpdateCaptureComponentTransform_Parms), 0x0010000000080080, Z_Construct_UClass_USceneComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Portal"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/PortalFunctionLibrary.h"));
			MetaData->SetValue(NewProp_TargetPortal, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_TargetPortal, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_SourcePortal, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_SourcePortal, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_CameraTransform, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_CaptureComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms()
	{
		struct PortalFunctionLibrary_eventUpdateCaptureComponentWithTransforms_Parms
		{
			USceneComponent* CaptureComponent;
			FTransform CameraTransform;
			FTransform SourcePortal;
			FTransform TargetPortal;
		};
		UObject* Outer=Z_Construct_UClass_UPortalFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateCaptureComponentWithTransforms"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04C42401, 65535, sizeof(PortalFunctionLibrary_eventUpdateCaptureComponentWithTransforms_Parms));
			UProperty* NewProp_TargetPortal = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TargetPortal"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TargetPortal, PortalFunctionLibrary_eventUpdateCaptureComponentWithTransforms_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_SourcePortal = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SourcePortal"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SourcePortal, PortalFunctionLibrary_eventUpdateCaptureComponentWithTransforms_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_CameraTransform = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CameraTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CameraTransform, PortalFunctionLibrary_eventUpdateCaptureComponentWithTransforms_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_CaptureComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CaptureComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CaptureComponent, PortalFunctionLibrary_eventUpdateCaptureComponentWithTransforms_Parms), 0x0010000000080080, Z_Construct_UClass_USceneComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Portal"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/PortalFunctionLibrary.h"));
			MetaData->SetValue(NewProp_TargetPortal, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_SourcePortal, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_CameraTransform, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_CaptureComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState()
	{
		struct PortalFunctionLibrary_eventUpdateFullPortalState_Parms
		{
			USceneCaptureComponent2D* CaptureComponent;
			UMaterialInstanceDynamic* MaterialInstance;
			FTransform CameraTransform;
			const USceneComponent* SourcePortal;
			const USceneComponent* TargetPortal;
			float ClipOffset;
		};
		UObject* Outer=Z_Construct_UClass_UPortalFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateFullPortalState"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04C42401, 65535, sizeof(PortalFunctionLibrary_eventUpdateFullPortalState_Parms));
			UProperty* NewProp_ClipOffset = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClipOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ClipOffset, PortalFunctionLibrary_eventUpdateFullPortalState_Parms), 0x0010000000000080);
			UProperty* NewProp_TargetPortal = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TargetPortal"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TargetPortal, PortalFunctionLibrary_eventUpdateFullPortalState_Parms), 0x0010000000080082, Z_Construct_UClass_USceneComponent_NoRegister());
			UProperty* NewProp_SourcePortal = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SourcePortal"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SourcePortal, PortalFunctionLibrary_eventUpdateFullPortalState_Parms), 0x0010000000080082, Z_Construct_UClass_USceneComponent_NoRegister());
			UProperty* NewProp_CameraTransform = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CameraTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CameraTransform, PortalFunctionLibrary_eventUpdateFullPortalState_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_MaterialInstance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MaterialInstance"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MaterialInstance, PortalFunctionLibrary_eventUpdateFullPortalState_Parms), 0x0010000000000080, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister());
			UProperty* NewProp_CaptureComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CaptureComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CaptureComponent, PortalFunctionLibrary_eventUpdateFullPortalState_Parms), 0x0010000000080080, Z_Construct_UClass_USceneCaptureComponent2D_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Portal"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_ClipOffset"), TEXT("-5.000000"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/PortalFunctionLibrary.h"));
			MetaData->SetValue(NewProp_TargetPortal, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_TargetPortal, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_SourcePortal, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_SourcePortal, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_CameraTransform, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_CaptureComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters()
	{
		struct PortalFunctionLibrary_eventUpdatePortalVPMParameters_Parms
		{
			USceneCaptureComponent2D* CaptureComponent;
			UMaterialInstanceDynamic* MaterialInstance;
			FTransform CameraTransform;
		};
		UObject* Outer=Z_Construct_UClass_UPortalFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdatePortalVPMParameters"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04C42401, 65535, sizeof(PortalFunctionLibrary_eventUpdatePortalVPMParameters_Parms));
			UProperty* NewProp_CameraTransform = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CameraTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CameraTransform, PortalFunctionLibrary_eventUpdatePortalVPMParameters_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_MaterialInstance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MaterialInstance"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MaterialInstance, PortalFunctionLibrary_eventUpdatePortalVPMParameters_Parms), 0x0010000000000080, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister());
			UProperty* NewProp_CaptureComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CaptureComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CaptureComponent, PortalFunctionLibrary_eventUpdatePortalVPMParameters_Parms), 0x0010000000080080, Z_Construct_UClass_USceneCaptureComponent2D_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Portal"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/PortalFunctionLibrary.h"));
			MetaData->SetValue(NewProp_CameraTransform, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_CaptureComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPortalFunctionLibrary_NoRegister()
	{
		return UPortalFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UPortalFunctionLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_PortalPlugin();
			OuterClass = UPortalFunctionLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;

				OuterClass->LinkChild(Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget());
				OuterClass->LinkChild(Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform());
				OuterClass->LinkChild(Z_Construct_UFunction_UPortalFunctionLibrary_GetFOVForCaptureComponents());
				OuterClass->LinkChild(Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget());
				OuterClass->LinkChild(Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform());
				OuterClass->LinkChild(Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget());
				OuterClass->LinkChild(Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform());
				OuterClass->LinkChild(Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget());
				OuterClass->LinkChild(Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform());
				OuterClass->LinkChild(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane());
				OuterClass->LinkChild(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform());
				OuterClass->LinkChild(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform());
				OuterClass->LinkChild(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms());
				OuterClass->LinkChild(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState());
				OuterClass->LinkChild(Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget(), "GetDirectionMappedToTarget"); // 2602334217
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform(), "GetDirectionMappedToTargetTransform"); // 473577579
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPortalFunctionLibrary_GetFOVForCaptureComponents(), "GetFOVForCaptureComponents"); // 3560818564
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget(), "GetLocationMappedToTarget"); // 3637174403
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform(), "GetLocationMappedToTargetTransform"); // 3694911733
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget(), "GetQuatMappedToTarget"); // 3420210291
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform(), "GetQuatMappedToTargetTransform"); // 712859
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget(), "GetRotationMappedToTarget"); // 424507040
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform(), "GetRotationMappedToTargetTransform"); // 724643886
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane(), "UpdateCaptureComponentClipplane"); // 1108973751
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform(), "UpdateCaptureComponentClipPlaneTransform"); // 1387836366
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform(), "UpdateCaptureComponentTransform"); // 2671031539
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms(), "UpdateCaptureComponentWithTransforms"); // 309497092
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState(), "UpdateFullPortalState"); // 1885199381
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters(), "UpdatePortalVPMParameters"); // 3108812914
				static TCppClassTypeInfo<TCppClassTypeTraits<UPortalFunctionLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PortalFunctionLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/PortalFunctionLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Documentation: Enable global clip plane for capture actors"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPortalFunctionLibrary, 1897594391);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPortalFunctionLibrary(Z_Construct_UClass_UPortalFunctionLibrary, &UPortalFunctionLibrary::StaticClass, TEXT("/Script/PortalPlugin"), TEXT("UPortalFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPortalFunctionLibrary);
	UFunction* Z_Construct_UDelegateFunction_UViewportResizedComponent_OnViewportResized__DelegateSignature()
	{
		UObject* Outer=Z_Construct_UClass_UViewportResizedComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnViewportResized__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), NULL, 0x00130000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/ViewportResizedComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	void UViewportResizedComponent::StaticRegisterNativesUViewportResizedComponent()
	{
	}
	UClass* Z_Construct_UClass_UViewportResizedComponent_NoRegister()
	{
		return UViewportResizedComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UViewportResizedComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_PortalPlugin();
			OuterClass = UViewportResizedComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20A00080;

				OuterClass->LinkChild(Z_Construct_UDelegateFunction_UViewportResizedComponent_OnViewportResized__DelegateSignature());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_OnViewportResized = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnViewportResized"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnViewportResized, UViewportResizedComponent), 0x0020080010080000, Z_Construct_UDelegateFunction_UViewportResizedComponent_OnViewportResized__DelegateSignature());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UDelegateFunction_UViewportResizedComponent_OnViewportResized__DelegateSignature(), "OnViewportResized__DelegateSignature"); // 1102851497
				static TCppClassTypeInfo<TCppClassTypeTraits<UViewportResizedComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Utility"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ViewportResizedComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/ViewportResizedComponent.h"));
				MetaData->SetValue(NewProp_OnViewportResized, TEXT("Category"), TEXT("Viewport"));
				MetaData->SetValue(NewProp_OnViewportResized, TEXT("ModuleRelativePath"), TEXT("Classes/ViewportResizedComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UViewportResizedComponent, 4223919400);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UViewportResizedComponent(Z_Construct_UClass_UViewportResizedComponent, &UViewportResizedComponent::StaticClass, TEXT("/Script/PortalPlugin"), TEXT("UViewportResizedComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportResizedComponent);
	UPackage* Z_Construct_UPackage__Script_PortalPlugin()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/PortalPlugin")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xB4DF2824;
			Guid.B = 0x564DDC57;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

			Z_Construct_UDelegateFunction_UViewportResizedComponent_OnViewportResized__DelegateSignature();
		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
