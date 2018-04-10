using UnrealBuildTool;
using System.Collections.Generic;

public class UE4Duino : ModuleRules
{
    public UE4Duino(ReadOnlyTargetRules  Target) : base(Target)
    {
        PrivateIncludePaths.AddRange(new string[] { "UE4Duino/Private" });

        PrivateDependencyModuleNames.AddRange(
            new string[]
			{
                "Engine",
                "InputCore",
                "Core",
                "Slate",
                "SlateCore",
                "EditorStyle",
                "CoreUObject"
            }
        );
    }
}