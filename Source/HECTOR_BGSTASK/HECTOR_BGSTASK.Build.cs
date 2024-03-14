// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HECTOR_BGSTASK : ModuleRules
{
	public HECTOR_BGSTASK(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
