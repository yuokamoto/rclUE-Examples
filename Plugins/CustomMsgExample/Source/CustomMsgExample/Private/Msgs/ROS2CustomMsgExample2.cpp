// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from rclue_example_custom_msgs/msg/CustomMsgExample2.msg - do not modify

#include "Msgs/ROS2CustomMsgExample2.h"

#include "Kismet/GameplayStatics.h"



void UROS2CustomMsgExample2Msg::Init()
{
	rclue_example_custom_msgs__msg__CustomMsgExample2__init(&custom_msg_example2_msg);
}

void UROS2CustomMsgExample2Msg::Fini()
{
	rclue_example_custom_msgs__msg__CustomMsgExample2__fini(&custom_msg_example2_msg);
}

const rosidl_message_type_support_t* UROS2CustomMsgExample2Msg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(rclue_example_custom_msgs, msg, CustomMsgExample2);
}

void UROS2CustomMsgExample2Msg::SetMsg(const FROSCustomMsgExample2& Inputs)
{
    Inputs.SetROS2(custom_msg_example2_msg);
}

void UROS2CustomMsgExample2Msg::GetMsg(FROSCustomMsgExample2& Outputs) const
{
    Outputs.SetFromROS2(custom_msg_example2_msg);
}

void* UROS2CustomMsgExample2Msg::Get()
{
	return &custom_msg_example2_msg;
}

FString UROS2CustomMsgExample2Msg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}