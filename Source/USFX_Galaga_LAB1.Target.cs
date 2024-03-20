// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class USFX_Galaga_LAB1Target : TargetRules
{
	public USFX_Galaga_LAB1Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("USFX_Galaga_LAB1");
	}
}
