// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppTest13/SetViewTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetViewTarget() {}
// Cross Module References
	CPPTEST13_API UClass* Z_Construct_UClass_ASetViewTarget_NoRegister();
	CPPTEST13_API UClass* Z_Construct_UClass_ASetViewTarget();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_cppTest13();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASetViewTarget::StaticRegisterNativesASetViewTarget()
	{
	}
	UClass* Z_Construct_UClass_ASetViewTarget_NoRegister()
	{
		return ASetViewTarget::StaticClass();
	}
	struct Z_Construct_UClass_ASetViewTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ViewedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASetViewTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_cppTest13,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASetViewTarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SetViewTarget.h" },
		{ "ModuleRelativePath", "SetViewTarget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASetViewTarget_Statics::NewProp_ViewedActor_MetaData[] = {
		{ "Category", "SetViewTarget" },
		{ "ModuleRelativePath", "SetViewTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASetViewTarget_Statics::NewProp_ViewedActor = { "ViewedActor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASetViewTarget, ViewedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASetViewTarget_Statics::NewProp_ViewedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASetViewTarget_Statics::NewProp_ViewedActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASetViewTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASetViewTarget_Statics::NewProp_ViewedActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASetViewTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASetViewTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASetViewTarget_Statics::ClassParams = {
		&ASetViewTarget::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASetViewTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASetViewTarget_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASetViewTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASetViewTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASetViewTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASetViewTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASetViewTarget, 900685658);
	template<> CPPTEST13_API UClass* StaticClass<ASetViewTarget>()
	{
		return ASetViewTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASetViewTarget(Z_Construct_UClass_ASetViewTarget, &ASetViewTarget::StaticClass, TEXT("/Script/cppTest13"), TEXT("ASetViewTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASetViewTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
