// Copyright 2020-2023 Rapyuta Robotics Co., Ltd.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

#define RAPYUTA_SIM_INTERNAL_MODULE_NAME (TEXT("CustomMsgExample"))
#define RAPYUTA_SIM_INTERNAL_MODULE_FOLDER_NAME (TEXT("CustomMsgExample"))
class FCustomMsgExampleModule : public IModuleInterface
{
public:
    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};

DECLARE_LOG_CATEGORY_EXTERN(LogCustomMsgExample, Log, All);
