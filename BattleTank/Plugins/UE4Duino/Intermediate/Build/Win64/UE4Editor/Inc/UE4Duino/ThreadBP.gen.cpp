// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/UE4DuinoPCH.h"
#include "Private/ThreadBP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThreadBP() {}
// Cross Module References
	UE4DUINO_API UClass* Z_Construct_UClass_UThreadBP_NoRegister();
	UE4DUINO_API UClass* Z_Construct_UClass_UThreadBP();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UE4Duino();
	UE4DUINO_API UFunction* Z_Construct_UFunction_UThreadBP_CloseSerial();
	UE4DUINO_API UFunction* Z_Construct_UFunction_UThreadBP_IsSerialPortOpen();
	UE4DUINO_API UFunction* Z_Construct_UFunction_UThreadBP_OpenSerial();
	UE4DUINO_API UFunction* Z_Construct_UFunction_UThreadBP_ReadSerial();
	UE4DUINO_API UFunction* Z_Construct_UFunction_UThreadBP_WriteSerial();
// End Cross Module References
	void UThreadBP::StaticRegisterNativesUThreadBP()
	{
		UClass* Class = UThreadBP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseSerial", &UThreadBP::execCloseSerial },
			{ "IsSerialPortOpen", &UThreadBP::execIsSerialPortOpen },
			{ "OpenSerial", &UThreadBP::execOpenSerial },
			{ "ReadSerial", &UThreadBP::execReadSerial },
			{ "WriteSerial", &UThreadBP::execWriteSerial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UThreadBP_CloseSerial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UE4Duino" },
				{ "ModuleRelativePath", "Private/ThreadBP.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UThreadBP, "CloseSerial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UThreadBP_IsSerialPortOpen()
	{
		struct ThreadBP_eventIsSerialPortOpen_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ThreadBP_eventIsSerialPortOpen_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ThreadBP_eventIsSerialPortOpen_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UE4Duino" },
				{ "ModuleRelativePath", "Private/ThreadBP.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UThreadBP, "IsSerialPortOpen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ThreadBP_eventIsSerialPortOpen_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UThreadBP_OpenSerial()
	{
		struct ThreadBP_eventOpenSerial_Parms
		{
			int32 portNum;
			int32 baudRate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_baudRate = { UE4CodeGen_Private::EPropertyClass::Int, "baudRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ThreadBP_eventOpenSerial_Parms, baudRate), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_portNum = { UE4CodeGen_Private::EPropertyClass::Int, "portNum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ThreadBP_eventOpenSerial_Parms, portNum), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_baudRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_portNum,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UE4Duino" },
				{ "ModuleRelativePath", "Private/ThreadBP.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UThreadBP, "OpenSerial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ThreadBP_eventOpenSerial_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UThreadBP_ReadSerial()
	{
		struct ThreadBP_eventReadSerial_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ThreadBP_eventReadSerial_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UE4Duino" },
				{ "ModuleRelativePath", "Private/ThreadBP.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UThreadBP, "ReadSerial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ThreadBP_eventReadSerial_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UThreadBP_WriteSerial()
	{
		struct ThreadBP_eventWriteSerial_Parms
		{
			FString writeData;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_writeData = { UE4CodeGen_Private::EPropertyClass::Str, "writeData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ThreadBP_eventWriteSerial_Parms, writeData), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_writeData,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UE4Duino" },
				{ "ModuleRelativePath", "Private/ThreadBP.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UThreadBP, "WriteSerial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ThreadBP_eventWriteSerial_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UThreadBP_NoRegister()
	{
		return UThreadBP::StaticClass();
	}
	UClass* Z_Construct_UClass_UThreadBP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_UE4Duino,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UThreadBP_CloseSerial, "CloseSerial" }, // 2953698516
				{ &Z_Construct_UFunction_UThreadBP_IsSerialPortOpen, "IsSerialPortOpen" }, // 3346123479
				{ &Z_Construct_UFunction_UThreadBP_OpenSerial, "OpenSerial" }, // 3508446093
				{ &Z_Construct_UFunction_UThreadBP_ReadSerial, "ReadSerial" }, // 3551920076
				{ &Z_Construct_UFunction_UThreadBP_WriteSerial, "WriteSerial" }, // 192374870
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "ThreadBP.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Private/ThreadBP.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UThreadBP>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UThreadBP::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UThreadBP, 3672213955);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UThreadBP(Z_Construct_UClass_UThreadBP, &UThreadBP::StaticClass, TEXT("/Script/UE4Duino"), TEXT("UThreadBP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThreadBP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
