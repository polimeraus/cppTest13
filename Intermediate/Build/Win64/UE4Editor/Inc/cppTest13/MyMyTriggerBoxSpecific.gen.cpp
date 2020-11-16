// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppTest13/MyMyTriggerBoxSpecific.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMyTriggerBoxSpecific() {}
// Cross Module References
	CPPTEST13_API UClass* Z_Construct_UClass_AMyMyTriggerBoxSpecific_NoRegister();
	CPPTEST13_API UClass* Z_Construct_UClass_AMyMyTriggerBoxSpecific();
	CPPTEST13_API UClass* Z_Construct_UClass_AMyTriggerBox();
	UPackage* Z_Construct_UPackage__Script_cppTest13();
// End Cross Module References
	void AMyMyTriggerBoxSpecific::StaticRegisterNativesAMyMyTriggerBoxSpecific()
	{
	}
	UClass* Z_Construct_UClass_AMyMyTriggerBoxSpecific_NoRegister()
	{
		return AMyMyTriggerBoxSpecific::StaticClass();
	}
	struct Z_Construct_UClass_AMyMyTriggerBoxSpecific_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyMyTriggerBoxSpecific_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMyTriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_cppTest13,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMyTriggerBoxSpecific_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyMyTriggerBoxSpecific.h" },
		{ "ModuleRelativePath", "MyMyTriggerBoxSpecific.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyMyTriggerBoxSpecific_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMyTriggerBoxSpecific>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyMyTriggerBoxSpecific_Statics::ClassParams = {
		&AMyMyTriggerBoxSpecific::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyMyTriggerBoxSpecific_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMyTriggerBoxSpecific_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyMyTriggerBoxSpecific()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyMyTriggerBoxSpecific_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyMyTriggerBoxSpecific, 2871043394);
	template<> CPPTEST13_API UClass* StaticClass<AMyMyTriggerBoxSpecific>()
	{
		return AMyMyTriggerBoxSpecific::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyMyTriggerBoxSpecific(Z_Construct_UClass_AMyMyTriggerBoxSpecific, &AMyMyTriggerBoxSpecific::StaticClass, TEXT("/Script/cppTest13"), TEXT("AMyMyTriggerBoxSpecific"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMyTriggerBoxSpecific);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
