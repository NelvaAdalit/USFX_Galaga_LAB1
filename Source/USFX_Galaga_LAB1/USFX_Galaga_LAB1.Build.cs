// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class USFX_Galaga_LAB1 : ModuleRules
{
	public USFX_Galaga_LAB1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
