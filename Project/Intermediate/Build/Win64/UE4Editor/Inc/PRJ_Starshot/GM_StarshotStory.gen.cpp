// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PRJ_Starshot/GM_StarshotStory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGM_StarshotStory() {}
// Cross Module References
	PRJ_STARSHOT_API UClass* Z_Construct_UClass_AGM_StarshotStory_NoRegister();
	PRJ_STARSHOT_API UClass* Z_Construct_UClass_AGM_StarshotStory();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PRJ_Starshot();
// End Cross Module References
	void AGM_StarshotStory::StaticRegisterNativesAGM_StarshotStory()
	{
	}
	UClass* Z_Construct_UClass_AGM_StarshotStory_NoRegister()
	{
		return AGM_StarshotStory::StaticClass();
	}
	struct Z_Construct_UClass_AGM_StarshotStory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGM_StarshotStory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PRJ_Starshot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_StarshotStory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GM_StarshotStory.h" },
		{ "ModuleRelativePath", "GM_StarshotStory.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGM_StarshotStory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGM_StarshotStory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGM_StarshotStory_Statics::ClassParams = {
		&AGM_StarshotStory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AGM_StarshotStory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGM_StarshotStory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGM_StarshotStory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGM_StarshotStory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGM_StarshotStory, 476751887);
	template<> PRJ_STARSHOT_API UClass* StaticClass<AGM_StarshotStory>()
	{
		return AGM_StarshotStory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGM_StarshotStory(Z_Construct_UClass_AGM_StarshotStory, &AGM_StarshotStory::StaticClass, TEXT("/Script/PRJ_Starshot"), TEXT("AGM_StarshotStory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGM_StarshotStory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
