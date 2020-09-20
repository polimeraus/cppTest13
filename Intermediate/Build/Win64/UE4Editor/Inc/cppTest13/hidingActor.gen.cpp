// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppTest13/hidingActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodehidingActor() {}
// Cross Module References
	CPPTEST13_API UClass* Z_Construct_UClass_AhidingActor_NoRegister();
	CPPTEST13_API UClass* Z_Construct_UClass_AhidingActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_cppTest13();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	void AhidingActor::StaticRegisterNativesAhidingActor()
	{
	}
	UClass* Z_Construct_UClass_AhidingActor_NoRegister()
	{
		return AhidingActor::StaticClass();
	}
	struct Z_Construct_UClass_AhidingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideActor_MetaData[];
#endif
		static void NewProp_bHideActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_billBoardComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_billBoardComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AhidingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_cppTest13,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AhidingActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "hidingActor.h" },
		{ "ModuleRelativePath", "hidingActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AhidingActor_Statics::NewProp_bHideActor_MetaData[] = {
		{ "Category", "Actor Gizleme" },
		{ "ModuleRelativePath", "hidingActor.h" },
	};
#endif
	void Z_Construct_UClass_AhidingActor_Statics::NewProp_bHideActor_SetBit(void* Obj)
	{
		((AhidingActor*)Obj)->bHideActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AhidingActor_Statics::NewProp_bHideActor = { "bHideActor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AhidingActor), &Z_Construct_UClass_AhidingActor_Statics::NewProp_bHideActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AhidingActor_Statics::NewProp_bHideActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AhidingActor_Statics::NewProp_bHideActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AhidingActor_Statics::NewProp_billBoardComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "hidingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AhidingActor_Statics::NewProp_billBoardComponent = { "billBoardComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AhidingActor, billBoardComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AhidingActor_Statics::NewProp_billBoardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AhidingActor_Statics::NewProp_billBoardComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AhidingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AhidingActor_Statics::NewProp_bHideActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AhidingActor_Statics::NewProp_billBoardComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AhidingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AhidingActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AhidingActor_Statics::ClassParams = {
		&AhidingActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AhidingActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AhidingActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AhidingActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AhidingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AhidingActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AhidingActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AhidingActor, 4163606956);
	template<> CPPTEST13_API UClass* StaticClass<AhidingActor>()
	{
		return AhidingActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AhidingActor(Z_Construct_UClass_AhidingActor, &AhidingActor::StaticClass, TEXT("/Script/cppTest13"), TEXT("AhidingActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AhidingActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
