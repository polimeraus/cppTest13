// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppTest13/TriggerBoxActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerBoxActor() {}
// Cross Module References
	CPPTEST13_API UClass* Z_Construct_UClass_ATriggerBoxActor_NoRegister();
	CPPTEST13_API UClass* Z_Construct_UClass_ATriggerBoxActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_cppTest13();
// End Cross Module References
	void ATriggerBoxActor::StaticRegisterNativesATriggerBoxActor()
	{
	}
	UClass* Z_Construct_UClass_ATriggerBoxActor_NoRegister()
	{
		return ATriggerBoxActor::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerBoxActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerBoxActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_cppTest13,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TriggerBoxActor.h" },
		{ "ModuleRelativePath", "TriggerBoxActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerBoxActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerBoxActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATriggerBoxActor_Statics::ClassParams = {
		&ATriggerBoxActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerBoxActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATriggerBoxActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATriggerBoxActor, 1516320946);
	template<> CPPTEST13_API UClass* StaticClass<ATriggerBoxActor>()
	{
		return ATriggerBoxActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATriggerBoxActor(Z_Construct_UClass_ATriggerBoxActor, &ATriggerBoxActor::StaticClass, TEXT("/Script/cppTest13"), TEXT("ATriggerBoxActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerBoxActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
