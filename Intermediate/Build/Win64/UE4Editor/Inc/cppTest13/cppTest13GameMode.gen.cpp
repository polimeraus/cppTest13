// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppTest13/cppTest13GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecppTest13GameMode() {}
// Cross Module References
	CPPTEST13_API UClass* Z_Construct_UClass_AcppTest13GameMode_NoRegister();
	CPPTEST13_API UClass* Z_Construct_UClass_AcppTest13GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_cppTest13();
// End Cross Module References
	void AcppTest13GameMode::StaticRegisterNativesAcppTest13GameMode()
	{
	}
	UClass* Z_Construct_UClass_AcppTest13GameMode_NoRegister()
	{
		return AcppTest13GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AcppTest13GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AcppTest13GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_cppTest13,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppTest13GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "cppTest13GameMode.h" },
		{ "ModuleRelativePath", "cppTest13GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AcppTest13GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AcppTest13GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AcppTest13GameMode_Statics::ClassParams = {
		&AcppTest13GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AcppTest13GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AcppTest13GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AcppTest13GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AcppTest13GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AcppTest13GameMode, 843295449);
	template<> CPPTEST13_API UClass* StaticClass<AcppTest13GameMode>()
	{
		return AcppTest13GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AcppTest13GameMode(Z_Construct_UClass_AcppTest13GameMode, &AcppTest13GameMode::StaticClass, TEXT("/Script/cppTest13"), TEXT("AcppTest13GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AcppTest13GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
