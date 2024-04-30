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
- Character: Examplme map to test character navigation
- Warehouse: Example map of warehouse composed oof contesnts in Epic Marketplace

## Dependency
Some example maps uses assets from Epic MarketPlace. Sicne those can not be included in github repository even if it is free, you need to download followings under Contents folder
 - [Factory Environment Collection
](https://www.unrealengine.com/marketplace/en-US/product/factory-environment-collection?sessionInvalidated=true): Warehouse map and forklift models are comes from here.
 - [Vehicle Variety Pack
](https://www.unrealengine.com/marketplace/en-US/product/bbcb90a03f844edbb20c8b89ee16ea32): Track models are comes from here
 - [Mannequins Pack](https://www.unrealengine.com/marketplace/en-US/product/mannequins-asset-pack)

*you can use [lutris](https://lutris.net/) to use Epic launcher in Ubuntu.

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
