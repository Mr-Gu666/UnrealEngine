// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class first_pro : ModuleRules
{
	public first_pro(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
