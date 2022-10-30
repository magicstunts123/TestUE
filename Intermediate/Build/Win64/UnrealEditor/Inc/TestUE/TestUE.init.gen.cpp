// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestUE_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TestUE;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TestUE()
	{
		if (!Z_Registration_Info_UPackage__Script_TestUE.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TestUE",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xF52DE48F,
				0xDBBC5D6C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TestUE.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TestUE.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TestUE(Z_Construct_UPackage__Script_TestUE, TEXT("/Script/TestUE"), Z_Registration_Info_UPackage__Script_TestUE, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF52DE48F, 0xDBBC5D6C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
