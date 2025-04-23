# ros2_urdf
# Assignment 7: ROS2 URDF and XACRO

## Overview
This repository contains ROS2 packages and configuration files for simulating and visualizing a robot using URDF (Unified Robot Description Format) and XACRO (XML Macro Language).

## Package Information
- **Package Name:** assingment7
- **ROS2 Version:** Humble (recommended)
- **Language:** C++, XML

## Dependencies
- `ament_cmake`
- `urdf`
- `xacro`
- `robot_state_publisher`
- `joint_state_publisher_gui`

## Repository Structure

```
assingment7/
├── CMakeLists.txt
├── package.xml
├── launch/
│   └── ass7.launch.xml
├── urdf/
│   ├── robot.urdf.xacro
│   ├── four_dof.xacro
│   ├── four_wheel.xacro
│   └── inertial_macros.xacro
└── rviz/
```

## Installation

Clone the repository into your ROS2 workspace:

```bash
git clone https://github.com/your-username/assingment7.git ~/ros2_ws/src/
cd ~/ros2_ws
colcon build --symlink-install
source install/setup.bash
```

## Running the Simulation

Launch the robot state publisher and joint state publisher GUI using:

```bash
ros2 launch assingment7 ass7.launch.xml
```

In New Terminal just run this 

```bash
rviz2
```
This command initializes RViz and displays your robot's joints, allowing you to interact with the robot model.

## Contributors
- **Maintainer:** Varad Sandeep Desai (`varad.sandeep.desai@gmail.com`)

## License
Please update your repository with an appropriate license.

