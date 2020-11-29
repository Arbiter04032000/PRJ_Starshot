// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class PRJ_StarshotEditorTarget : TargetRules
{
	public PRJ_StarshotEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "PRJ_Starshot" } );
	}
}
