// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class USFX_Galaga_LAB1EditorTarget : TargetRules
{
	public USFX_Galaga_LAB1EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("USFX_Galaga_LAB1");
	}
}
