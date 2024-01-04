# rclUE-Examples

UE Project which includes examples to use rclUE.

## Documentation
- [rclUE](https://rclue.readthedocs.io/en/devel/index.html): This repo enables communication between UE and ROS 2.
- [RapyutaSimulationPlugins](https://rapyutasimulationplugins.readthedocs.io/en/devel/index.html): This repo has classes/tools to create ROS 2 enables robots with rclUE.

## Branches
- `devel`: Main branch. Compatible with Unreal Engine 5.1 with Ubuntu 22.04

## Maps
- Default: empty map.
- MeshExamples: Example map to show StaticMeshes

## Setup and run
* please check [Getting Started](https://rapyutasimulationplugins.readthedocs.io/en/doc_update/getting_started.html) as well.

1.  Download UE5.1 for Linux by following [Unreal Engine for Linux](https://www.unrealengine.com/en-US/linux)
2.  Clone this repo : `git clone --recurse-submodules git@github.com:rapyuta-robotics/rclUEExamples.git`
3.  Retrieve the large files : `git-lfs pull && git submodule foreach git-lfs pull`
4.  Build and run
    ```
    cd rclUEExamples
    export UE5_DIR=<path to UE5>
    ./update_project_files.sh //this is only required first time.
    make rclUEExamplesEditor
    ./run_editor.sh 
    ```


### Run client
Setup ROS 2 client repo by following [this repo's README](https://github.com/yuokamoto/rclUE_client_example)
This example ROS 2 package spawn/control UE models from ROS 2 API.
