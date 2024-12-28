// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Niszczyciel : ModuleRules
{
	public Niszczyciel(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
