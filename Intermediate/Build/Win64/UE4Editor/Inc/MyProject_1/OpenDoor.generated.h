// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_1_OpenDoor_generated_h
#error "OpenDoor.generated.h already included, missing '#pragma once' in OpenDoor.h"
#endif
#define MYPROJECT_1_OpenDoor_generated_h

#define MyProject_1_Source_MyProject_1_OpenDoor_h_11_SPARSE_DATA
#define MyProject_1_Source_MyProject_1_OpenDoor_h_11_RPC_WRAPPERS
#define MyProject_1_Source_MyProject_1_OpenDoor_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_1_Source_MyProject_1_OpenDoor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject_1"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define MyProject_1_Source_MyProject_1_OpenDoor_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject_1"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define MyProject_1_Source_MyProject_1_OpenDoor_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public:


#define MyProject_1_Source_MyProject_1_OpenDoor_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenDoor)


#define MyProject_1_Source_MyProject_1_OpenDoor_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OpenAngle() { return STRUCT_OFFSET(UOpenDoor, OpenAngle); } \
	FORCEINLINE static uint32 __PPO__PressurePlate() { return STRUCT_OFFSET(UOpenDoor, PressurePlate); }


#define MyProject_1_Source_MyProject_1_OpenDoor_h_8_PROLOG
#define MyProject_1_Source_MyProject_1_OpenDoor_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_1_Source_MyProject_1_OpenDoor_h_11_PRIVATE_PROPERTY_OFFSET \
	MyProject_1_Source_MyProject_1_OpenDoor_h_11_SPARSE_DATA \
	MyProject_1_Source_MyProject_1_OpenDoor_h_11_RPC_WRAPPERS \
	MyProject_1_Source_MyProject_1_OpenDoor_h_11_INCLASS \
	MyProject_1_Source_MyProject_1_OpenDoor_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_1_Source_MyProject_1_OpenDoor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_1_Source_MyProject_1_OpenDoor_h_11_PRIVATE_PROPERTY_OFFSET \
	MyProject_1_Source_MyProject_1_OpenDoor_h_11_SPARSE_DATA \
	MyProject_1_Source_MyProject_1_OpenDoor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_1_Source_MyProject_1_OpenDoor_h_11_INCLASS_NO_PURE_DECLS \
	MyProject_1_Source_MyProject_1_OpenDoor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_1_API UClass* StaticClass<class UOpenDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_1_Source_MyProject_1_OpenDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
