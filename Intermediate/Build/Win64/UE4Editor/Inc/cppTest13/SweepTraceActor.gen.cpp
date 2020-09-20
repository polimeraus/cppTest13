// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppTest13/SweepTraceActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSweepTraceActor() {}
// Cross Module References
	CPPTEST13_API UClass* Z_Construct_UClass_ASweepTraceActor_NoRegister();
	CPPTEST13_API UClass* Z_Construct_UClass_ASweepTraceActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_cppTest13();
// End Cross Module References
	void ASweepTraceActor::StaticRegisterNativesASweepTraceActor()
	{
	}
	UClass* Z_Construct_UClass_ASweepTraceActor_NoRegister()
	{
		return ASweepTraceActor::StaticClass();
	}
	struct Z_Construct_UClass_ASweepTraceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASweepTraceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_cppTest13,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASweepTraceActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SweepTraceActor.h" },
		{ "ModuleRelativePath", "SweepTraceActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASweepTraceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASweepTraceActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASweepTraceActor_Statics::ClassParams = {
		&ASweepTraceActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASweepTraceActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASweepTraceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASweepTraceActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASweepTraceActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASweepTraceActor, 1774692407);
	template<> CPPTEST13_API UClass* StaticClass<ASweepTraceActor>()
	{
		return ASweepTraceActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASweepTraceActor(Z_Construct_UClass_ASweepTraceActor, &ASweepTraceActor::StaticClass, TEXT("/Script/cppTest13"), TEXT("ASweepTraceActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASweepTraceActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
