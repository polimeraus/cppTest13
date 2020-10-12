// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppTest13/setActorLocationRotation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodesetActorLocationRotation() {}
// Cross Module References
	CPPTEST13_API UClass* Z_Construct_UClass_AsetActorLocationRotation_NoRegister();
	CPPTEST13_API UClass* Z_Construct_UClass_AsetActorLocationRotation();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_cppTest13();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AsetActorLocationRotation::StaticRegisterNativesAsetActorLocationRotation()
	{
	}
	UClass* Z_Construct_UClass_AsetActorLocationRotation_NoRegister()
	{
		return AsetActorLocationRotation::StaticClass();
	}
	struct Z_Construct_UClass_AsetActorLocationRotation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AsetActorLocationRotation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_cppTest13,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AsetActorLocationRotation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "setActorLocationRotation.h" },
		{ "ModuleRelativePath", "setActorLocationRotation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AsetActorLocationRotation_Statics::NewProp_NewRotation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "setActorLocationRotation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AsetActorLocationRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsetActorLocationRotation, NewRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UClass_AsetActorLocationRotation_Statics::NewProp_NewRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AsetActorLocationRotation_Statics::NewProp_NewRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AsetActorLocationRotation_Statics::NewProp_NewLocation_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "setActorLocationRotation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AsetActorLocationRotation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsetActorLocationRotation, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AsetActorLocationRotation_Statics::NewProp_NewLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AsetActorLocationRotation_Statics::NewProp_NewLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AsetActorLocationRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AsetActorLocationRotation_Statics::NewProp_NewRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AsetActorLocationRotation_Statics::NewProp_NewLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AsetActorLocationRotation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AsetActorLocationRotation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AsetActorLocationRotation_Statics::ClassParams = {
		&AsetActorLocationRotation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AsetActorLocationRotation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AsetActorLocationRotation_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AsetActorLocationRotation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AsetActorLocationRotation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AsetActorLocationRotation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AsetActorLocationRotation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AsetActorLocationRotation, 1155356477);
	template<> CPPTEST13_API UClass* StaticClass<AsetActorLocationRotation>()
	{
		return AsetActorLocationRotation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AsetActorLocationRotation(Z_Construct_UClass_AsetActorLocationRotation, &AsetActorLocationRotation::StaticClass, TEXT("/Script/cppTest13"), TEXT("AsetActorLocationRotation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AsetActorLocationRotation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
