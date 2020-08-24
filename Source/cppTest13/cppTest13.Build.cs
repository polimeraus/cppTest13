// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class cppTest13 : ModuleRules
{
	public cppTest13(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
