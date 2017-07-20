// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORTALPLUGIN_ViewportResizedComponent_generated_h
#error "ViewportResizedComponent.generated.h already included, missing '#pragma once' in ViewportResizedComponent.h"
#endif
#define PORTALPLUGIN_ViewportResizedComponent_generated_h

#define Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_ViewportResizedComponent_h_16_DELEGATE \
static inline void FOnViewportResized_DelegateWrapper(const FMulticastScriptDelegate& OnViewportResized) \
{ \
	OnViewportResized.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_ViewportResizedComponent_h_13_RPC_WRAPPERS
#define Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_ViewportResizedComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_ViewportResizedComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportResizedComponent(); \
	friend PORTALPLUGIN_API class UClass* Z_Construct_UClass_UViewportResizedComponent(); \
public: \
	DECLARE_CLASS(UViewportResizedComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PortalPlugin"), NO_API) \
	DECLARE_SERIALIZER(UViewportResizedComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_ViewportResizedComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUViewportResizedComponent(); \
	friend PORTALPLUGIN_API class UClass* Z_Construct_UClass_UViewportResizedComponent(); \
public: \
	DECLARE_CLASS(UViewportResizedComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PortalPlugin"), NO_API) \
	DECLARE_SERIALIZER(UViewportResizedComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_ViewportResizedComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewportResizedComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewportResizedComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewportResizedComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportResizedComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UViewportResizedComponent(UViewportResizedComponent&&); \
	NO_API UViewportResizedComponent(const UViewportResizedComponent&); \
public:


#define Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_ViewportResizedComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UViewportResizedComponent(UViewportResizedComponent&&); \
	NO_API UViewportResizedComponent(const UViewportResizedComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewportResizedComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportResizedComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UViewportResizedComponent)


#define Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_ViewportResizedComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnViewportResized() { return STRUCT_OFFSET(UViewportResizedComponent, OnViewportResized); }


#define Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_ViewportResizedComponent_h_10_PROLOG
#define Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_ViewportResizedComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_ViewportResizedComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_ViewportResizedComponent_h_13_RPC_WRAPPERS \
	Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_ViewportResizedComponent_h_13_INCLASS \
	Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_ViewportResizedComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_ViewportResizedComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_ViewportResizedComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_ViewportResizedComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_ViewportResizedComponent_h_13_INCLASS_NO_PURE_DECLS \
	Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_ViewportResizedComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Restless_Plugins_PortalPlugin_Source_PortalPlugin_Classes_ViewportResizedComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
