// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppTest13/coloredCube.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecoloredCube() {}
// Cross Module References
	CPPTEST13_API UClass* Z_Construct_UClass_AcoloredCube_NoRegister();
	CPPTEST13_API UClass* Z_Construct_UClass_AcoloredCube();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_cppTest13();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	void AcoloredCube::StaticRegisterNativesAcoloredCube()
	{
	}
	UClass* Z_Construct_UClass_AcoloredCube_NoRegister()
	{
		return AcoloredCube::StaticClass();
	}
	struct Z_Construct_UClass_AcoloredCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dynamicMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dynamicMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AcoloredCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_cppTest13,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcoloredCube_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "coloredCube.h" },
		{ "ModuleRelativePath", "coloredCube.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcoloredCube_Statics::NewProp_dynamicMaterial_MetaData[] = {
		{ "ModuleRelativePath", "coloredCube.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcoloredCube_Statics::NewProp_dynamicMaterial = { "dynamicMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcoloredCube, dynamicMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcoloredCube_Statics::NewProp_dynamicMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcoloredCube_Statics::NewProp_dynamicMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AcoloredCube_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcoloredCube_Statics::NewProp_dynamicMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AcoloredCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AcoloredCube>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AcoloredCube_Statics::ClassParams = {
		&AcoloredCube::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AcoloredCube_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AcoloredCube_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AcoloredCube_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AcoloredCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AcoloredCube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AcoloredCube_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AcoloredCube, 4174459021);
	template<> CPPTEST13_API UClass* StaticClass<AcoloredCube>()
	{
		return AcoloredCube::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AcoloredCube(Z_Construct_UClass_AcoloredCube, &AcoloredCube::StaticClass, TEXT("/Script/cppTest13"), TEXT("AcoloredCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AcoloredCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
