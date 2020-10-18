// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CPPTEST13_MyTriggerBox_generated_h
#error "MyTriggerBox.generated.h already included, missing '#pragma once' in MyTriggerBox.h"
#endif
#define CPPTEST13_MyTriggerBox_generated_h

#define cppTest13_Source_cppTest13_MyTriggerBox_h_15_SPARSE_DATA
#define cppTest13_Source_cppTest13_MyTriggerBox_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define cppTest13_Source_cppTest13_MyTriggerBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define cppTest13_Source_cppTest13_MyTriggerBox_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTriggerBox(); \
	friend struct Z_Construct_UClass_AMyTriggerBox_Statics; \
public: \
	DECLARE_CLASS(AMyTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/cppTest13"), NO_API) \
	DECLARE_SERIALIZER(AMyTriggerBox)


#define cppTest13_Source_cppTest13_MyTriggerBox_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyTriggerBox(); \
	friend struct Z_Construct_UClass_AMyTriggerBox_Statics; \
public: \
	DECLARE_CLASS(AMyTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/cppTest13"), NO_API) \
	DECLARE_SERIALIZER(AMyTriggerBox)


#define cppTest13_Source_cppTest13_MyTriggerBox_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyTriggerBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyTriggerBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTriggerBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTriggerBox(AMyTriggerBox&&); \
	NO_API AMyTriggerBox(const AMyTriggerBox&); \
public:


#define cppTest13_Source_cppTest13_MyTriggerBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTriggerBox(AMyTriggerBox&&); \
	NO_API AMyTriggerBox(const AMyTriggerBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTriggerBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyTriggerBox)


#define cppTest13_Source_cppTest13_MyTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET
#define cppTest13_Source_cppTest13_MyTriggerBox_h_12_PROLOG
#define cppTest13_Source_cppTest13_MyTriggerBox_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	cppTest13_Source_cppTest13_MyTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET \
	cppTest13_Source_cppTest13_MyTriggerBox_h_15_SPARSE_DATA \
	cppTest13_Source_cppTest13_MyTriggerBox_h_15_RPC_WRAPPERS \
	cppTest13_Source_cppTest13_MyTriggerBox_h_15_INCLASS \
	cppTest13_Source_cppTest13_MyTriggerBox_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define cppTest13_Source_cppTest13_MyTriggerBox_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	cppTest13_Source_cppTest13_MyTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET \
	cppTest13_Source_cppTest13_MyTriggerBox_h_15_SPARSE_DATA \
	cppTest13_Source_cppTest13_MyTriggerBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	cppTest13_Source_cppTest13_MyTriggerBox_h_15_INCLASS_NO_PURE_DECLS \
	cppTest13_Source_cppTest13_MyTriggerBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPPTEST13_API UClass* StaticClass<class AMyTriggerBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID cppTest13_Source_cppTest13_MyTriggerBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
