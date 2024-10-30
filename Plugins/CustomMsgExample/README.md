# CustomMsgExample

This is example plugin to use custom ROS 2 msg in UnrealEngine with [rclUE](https://github.com/rapyuta-robotics/rclUE).

CustomMsgs are defined at [rclUE_example_custom_msgs](https://github.com/yuokamoto/rclUE_client_example/tree/custom_msgs/rclUE_example_custom_msgs)

## How to add custom msg
1. Prepare custom_msg_config.yaml. Update mainly followings from example,
    1. Top part `args` which define path t Unreal Engine, project, plugin and etc paths.
    2. `target_pkgs` which defines target pkgs which include custom msg you want to use in UE. 
    3. `dependency` which defines dependent pkgs to build `target_pkgs`.
    4. `repos` path to ros2_custom_pkgs which is explained in next step.
2. Prepare ros2_custom_pkgs.repos. Update mainly followings from example,
    1. repos file which defindes repositories which needs to be clone before build. Since buildin_interfaces and std_msgs are already inside docker, you don't needs to add here. 
3. Build library, generate msg code and copy to the plugins
    1. clone [UE_tools](https://github.com/rapyuta-robotics/UE_tools)
    2. Execute command. Pleare replace rclUE-Exapmples/Plugins/CustomMsgExample/custom_msg_config.yaml to path to your own yaml file which is prepared in step 1
    ```
    python3 docker_build_install_codegen.py --type pkgs --build --install --codegen --rosdistro humble --config ~/rclUE-Examples/Plugins/CustomMsgExample/custom_msg_config.yaml
    ```

## Limitation/Todo
As written in CustomMsgExample.Build.cs, currently library needs to be inside rclUE. That's why, Build.cs copy library to rclUE/Thirdparty/ros/lib durinb build.


## Maintainer
yu.okamoto@rapyuta-robotics.com
