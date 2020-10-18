// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppTest13/SetViewTargetBlendActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetViewTargetBlendActor() {}
// Cross Module References
	CPPTEST13_API UClass* Z_Construct_UClass_ASetViewTargetBlendActor_NoRegister();
	CPPTEST13_API UClass* Z_Construct_UClass_ASetViewTargetBlendActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_cppTest13();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASetViewTargetBlendActor::StaticRegisterNativesASetViewTargetBlendActor()
	{
	}
	UClass* Z_Construct_UClass_ASetViewTargetBlendActor_NoRegister()
	{
		return ASetViewTargetBlendActor::StaticClass();
	}
	struct Z_Construct_UClass_ASetViewTargetBlendActor_Statics
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
	UObject* (*const Z_Construct_UClass_ASetViewTargetBlendActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_cppTest13,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASetViewTargetBlendActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SetViewTargetBlendActor.h" },
		{ "ModuleRelativePath", "SetViewTargetBlendActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASetViewTargetBlendActor_Statics::NewProp_ViewedActor_MetaData[] = {
		{ "Category", "SetViewTargetBlendActor" },
		{ "ModuleRelativePath", "SetViewTargetBlendActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASetViewTargetBlendActor_Statics::NewProp_ViewedActor = { "ViewedActor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASetViewTargetBlendActor, ViewedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASetViewTargetBlendActor_Statics::NewProp_ViewedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASetViewTargetBlendActor_Statics::NewProp_ViewedActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASetViewTargetBlendActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASetViewTargetBlendActor_Statics::NewProp_ViewedActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASetViewTargetBlendActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASetViewTargetBlendActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASetViewTargetBlendActor_Statics::ClassParams = {
		&ASetViewTargetBlendActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASetViewTargetBlendActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASetViewTargetBlendActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASetViewTargetBlendActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASetViewTargetBlendActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASetViewTargetBlendActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASetViewTargetBlendActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASetViewTargetBlendActor, 2576412881);
	template<> CPPTEST13_API UClass* StaticClass<ASetViewTargetBlendActor>()
	{
		return ASetViewTargetBlendActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASetViewTargetBlendActor(Z_Construct_UClass_ASetViewTargetBlendActor, &ASetViewTargetBlendActor::StaticClass, TEXT("/Script/cppTest13"), TEXT("ASetViewTargetBlendActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASetViewTargetBlendActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
