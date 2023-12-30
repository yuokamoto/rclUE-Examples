// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

using System;
using System.IO;
using UnrealBuildTool;

public class rclUEExamples : ModuleRules
{
    private void CreateSymbolicLinkToEnginePack(string InName)
    {
        string ProjectPath = Path.GetDirectoryName(Target.ProjectFile.FullName);
        string EngineContentTemplatePath = Path.Combine(EngineDirectory, "../Templates/TemplateResources/High");

        string targetPath = Path.Combine(EngineDirectory, "../Templates/TemplateResources/High",  InName, "Content");
        string path = Path.Combine(ProjectPath, "Content", InName);
        if (!Directory.Exists(path))
        {
            Directory.CreateSymbolicLink(path, targetPath);
            System.Console.WriteLine("Create symbolic link to Engine contents: " + targetPath + " -> " + path );
        }
    }

    public rclUEExamples(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        CppStandard = CppStandardVersion.Cpp17;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "rclUE", "RapyutaSimulationPlugins", "ROSAssets" });

        PrivateDependencyModuleNames.AddRange(new string[] { });

        CreateSymbolicLinkToEnginePack("LevelPrototyping");
        CreateSymbolicLinkToEnginePack("Characters");
    }
}
