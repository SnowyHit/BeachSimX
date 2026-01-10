// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Beachsim : ModuleRules
{
	public Beachsim(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
