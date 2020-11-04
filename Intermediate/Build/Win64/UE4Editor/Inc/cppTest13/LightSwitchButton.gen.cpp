// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppTest13/LightSwitchButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightSwitchButton() {}
// Cross Module References
	CPPTEST13_API UClass* Z_Construct_UClass_ALightSwitchButton_NoRegister();
	CPPTEST13_API UClass* Z_Construct_UClass_ALightSwitchButton();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_cppTest13();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALightSwitchButton::execToggleLight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleLight();
		P_NATIVE_END;
	}
	void ALightSwitchButton::StaticRegisterNativesALightSwitchButton()
	{
		UClass* Class = ALightSwitchButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToggleLight", &ALightSwitchButton::execToggleLight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALightSwitchButton_ToggleLight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightSwitchButton_ToggleLight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light Switch" },
		{ "ModuleRelativePath", "LightSwitchButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightSwitchButton_ToggleLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightSwitchButton, nullptr, "ToggleLight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightSwitchButton_ToggleLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSwitchButton_ToggleLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightSwitchButton_ToggleLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightSwitchButton_ToggleLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALightSwitchButton_NoRegister()
	{
		return ALightSwitchButton::StaticClass();
	}
	struct Z_Construct_UClass_ALightSwitchButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointLight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightSwitchButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_cppTest13,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALightSwitchButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALightSwitchButton_ToggleLight, "ToggleLight" }, // 130785008
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightSwitchButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LightSwitchButton.h" },
		{ "ModuleRelativePath", "LightSwitchButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightSwitchButton_Statics::NewProp_LightIntensity_MetaData[] = {
		{ "Category", "Light Switch" },
		{ "ModuleRelativePath", "LightSwitchButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALightSwitchButton_Statics::NewProp_LightIntensity = { "LightIntensity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightSwitchButton, LightIntensity), METADATA_PARAMS(Z_Construct_UClass_ALightSwitchButton_Statics::NewProp_LightIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitchButton_Statics::NewProp_LightIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightSwitchButton_Statics::NewProp_LightSphere_MetaData[] = {
		{ "Category", "Light Switch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LightSwitchButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightSwitchButton_Statics::NewProp_LightSphere = { "LightSphere", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightSwitchButton, LightSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightSwitchButton_Statics::NewProp_LightSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitchButton_Statics::NewProp_LightSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightSwitchButton_Statics::NewProp_PointLight_MetaData[] = {
		{ "Category", "Light Switch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LightSwitchButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightSwitchButton_Statics::NewProp_PointLight = { "PointLight", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightSwitchButton, PointLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightSwitchButton_Statics::NewProp_PointLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitchButton_Statics::NewProp_PointLight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightSwitchButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightSwitchButton_Statics::NewProp_LightIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightSwitchButton_Statics::NewProp_LightSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightSwitchButton_Statics::NewProp_PointLight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightSwitchButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightSwitchButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALightSwitchButton_Statics::ClassParams = {
		&ALightSwitchButton::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALightSwitchButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitchButton_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALightSwitchButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitchButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALightSwitchButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALightSwitchButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALightSwitchButton, 894974999);
	template<> CPPTEST13_API UClass* StaticClass<ALightSwitchButton>()
	{
		return ALightSwitchButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALightSwitchButton(Z_Construct_UClass_ALightSwitchButton, &ALightSwitchButton::StaticClass, TEXT("/Script/cppTest13"), TEXT("ALightSwitchButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightSwitchButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
