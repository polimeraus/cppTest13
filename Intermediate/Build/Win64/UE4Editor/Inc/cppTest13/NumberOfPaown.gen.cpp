// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppTest13/NumberOfPaown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNumberOfPaown() {}
// Cross Module References
	CPPTEST13_API UClass* Z_Construct_UClass_ANumberOfPaown_NoRegister();
	CPPTEST13_API UClass* Z_Construct_UClass_ANumberOfPaown();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_cppTest13();
// End Cross Module References
	void ANumberOfPaown::StaticRegisterNativesANumberOfPaown()
	{
	}
	UClass* Z_Construct_UClass_ANumberOfPaown_NoRegister()
	{
		return ANumberOfPaown::StaticClass();
	}
	struct Z_Construct_UClass_ANumberOfPaown_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numberOfPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numberOfPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANumberOfPaown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_cppTest13,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANumberOfPaown_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NumberOfPaown.h" },
		{ "ModuleRelativePath", "NumberOfPaown.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANumberOfPaown_Statics::NewProp_numberOfPawn_MetaData[] = {
		{ "ModuleRelativePath", "NumberOfPaown.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANumberOfPaown_Statics::NewProp_numberOfPawn = { "numberOfPawn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANumberOfPaown, numberOfPawn), METADATA_PARAMS(Z_Construct_UClass_ANumberOfPaown_Statics::NewProp_numberOfPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANumberOfPaown_Statics::NewProp_numberOfPawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANumberOfPaown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberOfPaown_Statics::NewProp_numberOfPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANumberOfPaown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANumberOfPaown>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANumberOfPaown_Statics::ClassParams = {
		&ANumberOfPaown::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANumberOfPaown_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANumberOfPaown_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANumberOfPaown_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANumberOfPaown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANumberOfPaown()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANumberOfPaown_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANumberOfPaown, 2426120570);
	template<> CPPTEST13_API UClass* StaticClass<ANumberOfPaown>()
	{
		return ANumberOfPaown::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANumberOfPaown(Z_Construct_UClass_ANumberOfPaown, &ANumberOfPaown::StaticClass, TEXT("/Script/cppTest13"), TEXT("ANumberOfPaown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANumberOfPaown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
