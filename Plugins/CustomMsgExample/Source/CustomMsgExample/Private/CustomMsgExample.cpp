// Copyright 2020-2023 Rapyuta Robotics Co., Ltd.

#include "CustomMsgExample.h"

#define LOCTEXT_NAMESPACE "FCustomMsgExampleModule"

void FCustomMsgExampleModule::StartupModule()
{
    // This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FCustomMsgExampleModule::ShutdownModule()
{
    // This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
    // we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
DEFINE_LOG_CATEGORY(LogCustomMsgExample);
IMPLEMENT_MODULE(FCustomMsgExampleModule, CustomMsgExample)
