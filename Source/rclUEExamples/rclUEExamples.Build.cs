// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

using UnrealBuildTool;

public class rclUEExamples : ModuleRules
{
    public rclUEExamples(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        CppStandard = CppStandardVersion.Cpp17;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "rclUE", "RapyutaSimulationPlugins", "ROSAssets" });

        PrivateDependencyModuleNames.AddRange(new string[] { });
    }
}
