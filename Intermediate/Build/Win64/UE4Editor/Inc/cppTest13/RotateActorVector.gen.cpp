// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppTest13/RotateActorVector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotateActorVector() {}
// Cross Module References
	CPPTEST13_API UClass* Z_Construct_UClass_ARotateActorVector_NoRegister();
	CPPTEST13_API UClass* Z_Construct_UClass_ARotateActorVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_cppTest13();
// End Cross Module References
	void ARotateActorVector::StaticRegisterNativesARotateActorVector()
	{
	}
	UClass* Z_Construct_UClass_ARotateActorVector_NoRegister()
	{
		return ARotateActorVector::StaticClass();
	}
	struct Z_Construct_UClass_ARotateActorVector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARotateActorVector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_cppTest13,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotateActorVector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RotateActorVector.h" },
		{ "ModuleRelativePath", "RotateActorVector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotateActorVector_Statics::NewProp_Angle_MetaData[] = {
		{ "ModuleRelativePath", "RotateActorVector.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotateActorVector_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARotateActorVector, Angle), METADATA_PARAMS(Z_Construct_UClass_ARotateActorVector_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARotateActorVector_Statics::NewProp_Angle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotateActorVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateActorVector_Statics::NewProp_Angle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARotateActorVector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotateActorVector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARotateActorVector_Statics::ClassParams = {
		&ARotateActorVector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARotateActorVector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARotateActorVector_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARotateActorVector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARotateActorVector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARotateActorVector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARotateActorVector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARotateActorVector, 3680673876);
	template<> CPPTEST13_API UClass* StaticClass<ARotateActorVector>()
	{
		return ARotateActorVector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARotateActorVector(Z_Construct_UClass_ARotateActorVector, &ARotateActorVector::StaticClass, TEXT("/Script/cppTest13"), TEXT("ARotateActorVector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARotateActorVector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
