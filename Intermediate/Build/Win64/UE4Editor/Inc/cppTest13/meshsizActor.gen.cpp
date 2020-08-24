// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppTest13/meshsizActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemeshsizActor() {}
// Cross Module References
	CPPTEST13_API UClass* Z_Construct_UClass_AmeshsizActor_NoRegister();
	CPPTEST13_API UClass* Z_Construct_UClass_AmeshsizActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_cppTest13();
// End Cross Module References
	void AmeshsizActor::StaticRegisterNativesAmeshsizActor()
	{
	}
	UClass* Z_Construct_UClass_AmeshsizActor_NoRegister()
	{
		return AmeshsizActor::StaticClass();
	}
	struct Z_Construct_UClass_AmeshsizActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AmeshsizActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_cppTest13,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmeshsizActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "meshsizActor.h" },
		{ "ModuleRelativePath", "meshsizActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AmeshsizActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AmeshsizActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AmeshsizActor_Statics::ClassParams = {
		&AmeshsizActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AmeshsizActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AmeshsizActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AmeshsizActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AmeshsizActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AmeshsizActor, 3684963610);
	template<> CPPTEST13_API UClass* StaticClass<AmeshsizActor>()
	{
		return AmeshsizActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AmeshsizActor(Z_Construct_UClass_AmeshsizActor, &AmeshsizActor::StaticClass, TEXT("/Script/cppTest13"), TEXT("AmeshsizActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AmeshsizActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
