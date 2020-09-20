// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppTest13/MyActorDelete.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorDelete() {}
// Cross Module References
	CPPTEST13_API UClass* Z_Construct_UClass_AMyActorDelete_NoRegister();
	CPPTEST13_API UClass* Z_Construct_UClass_AMyActorDelete();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_cppTest13();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	void AMyActorDelete::StaticRegisterNativesAMyActorDelete()
	{
	}
	UClass* Z_Construct_UClass_AMyActorDelete_NoRegister()
	{
		return AMyActorDelete::StaticClass();
	}
	struct Z_Construct_UClass_AMyActorDelete_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_billBoardComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_billBoardComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActorDelete_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_cppTest13,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorDelete_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorDelete.h" },
		{ "ModuleRelativePath", "MyActorDelete.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorDelete_Statics::NewProp_billBoardComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyActorDelete.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActorDelete_Statics::NewProp_billBoardComponent = { "billBoardComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorDelete, billBoardComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyActorDelete_Statics::NewProp_billBoardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorDelete_Statics::NewProp_billBoardComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActorDelete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorDelete_Statics::NewProp_billBoardComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActorDelete_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorDelete>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyActorDelete_Statics::ClassParams = {
		&AMyActorDelete::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyActorDelete_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorDelete_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyActorDelete_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorDelete_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyActorDelete()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyActorDelete_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyActorDelete, 355959640);
	template<> CPPTEST13_API UClass* StaticClass<AMyActorDelete>()
	{
		return AMyActorDelete::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyActorDelete(Z_Construct_UClass_AMyActorDelete, &AMyActorDelete::StaticClass, TEXT("/Script/cppTest13"), TEXT("AMyActorDelete"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActorDelete);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
