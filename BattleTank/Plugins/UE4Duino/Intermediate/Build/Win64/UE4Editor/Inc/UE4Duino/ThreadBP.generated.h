// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE4DUINO_ThreadBP_generated_h
#error "ThreadBP.generated.h already included, missing '#pragma once' in ThreadBP.h"
#endif
#define UE4DUINO_ThreadBP_generated_h

#define BattleTank_Plugins_UE4Duino_Source_UE4Duino_Private_ThreadBP_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsSerialPortOpen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UThreadBP::IsSerialPortOpen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteSerial) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_writeData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UThreadBP::WriteSerial(Z_Param_writeData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadSerial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UThreadBP::ReadSerial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseSerial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UThreadBP::CloseSerial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenSerial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_portNum); \
		P_GET_PROPERTY(UIntProperty,Z_Param_baudRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UThreadBP::OpenSerial(Z_Param_portNum,Z_Param_baudRate); \
		P_NATIVE_END; \
	}


#define BattleTank_Plugins_UE4Duino_Source_UE4Duino_Private_ThreadBP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsSerialPortOpen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UThreadBP::IsSerialPortOpen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteSerial) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_writeData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UThreadBP::WriteSerial(Z_Param_writeData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadSerial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UThreadBP::ReadSerial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseSerial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UThreadBP::CloseSerial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenSerial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_portNum); \
		P_GET_PROPERTY(UIntProperty,Z_Param_baudRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UThreadBP::OpenSerial(Z_Param_portNum,Z_Param_baudRate); \
		P_NATIVE_END; \
	}


#define BattleTank_Plugins_UE4Duino_Source_UE4Duino_Private_ThreadBP_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUThreadBP(); \
	friend UE4DUINO_API class UClass* Z_Construct_UClass_UThreadBP(); \
public: \
	DECLARE_CLASS(UThreadBP, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UE4Duino"), NO_API) \
	DECLARE_SERIALIZER(UThreadBP) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleTank_Plugins_UE4Duino_Source_UE4Duino_Private_ThreadBP_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUThreadBP(); \
	friend UE4DUINO_API class UClass* Z_Construct_UClass_UThreadBP(); \
public: \
	DECLARE_CLASS(UThreadBP, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UE4Duino"), NO_API) \
	DECLARE_SERIALIZER(UThreadBP) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleTank_Plugins_UE4Duino_Source_UE4Duino_Private_ThreadBP_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UThreadBP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThreadBP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThreadBP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThreadBP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UThreadBP(UThreadBP&&); \
	NO_API UThreadBP(const UThreadBP&); \
public:


#define BattleTank_Plugins_UE4Duino_Source_UE4Duino_Private_ThreadBP_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UThreadBP(UThreadBP&&); \
	NO_API UThreadBP(const UThreadBP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThreadBP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThreadBP); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThreadBP)


#define BattleTank_Plugins_UE4Duino_Source_UE4Duino_Private_ThreadBP_h_12_PRIVATE_PROPERTY_OFFSET
#define BattleTank_Plugins_UE4Duino_Source_UE4Duino_Private_ThreadBP_h_9_PROLOG
#define BattleTank_Plugins_UE4Duino_Source_UE4Duino_Private_ThreadBP_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Plugins_UE4Duino_Source_UE4Duino_Private_ThreadBP_h_12_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Plugins_UE4Duino_Source_UE4Duino_Private_ThreadBP_h_12_RPC_WRAPPERS \
	BattleTank_Plugins_UE4Duino_Source_UE4Duino_Private_ThreadBP_h_12_INCLASS \
	BattleTank_Plugins_UE4Duino_Source_UE4Duino_Private_ThreadBP_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleTank_Plugins_UE4Duino_Source_UE4Duino_Private_ThreadBP_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Plugins_UE4Duino_Source_UE4Duino_Private_ThreadBP_h_12_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Plugins_UE4Duino_Source_UE4Duino_Private_ThreadBP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleTank_Plugins_UE4Duino_Source_UE4Duino_Private_ThreadBP_h_12_INCLASS_NO_PURE_DECLS \
	BattleTank_Plugins_UE4Duino_Source_UE4Duino_Private_ThreadBP_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleTank_Plugins_UE4Duino_Source_UE4Duino_Private_ThreadBP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
