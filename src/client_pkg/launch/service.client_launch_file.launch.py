from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return
LaunchDescription([
    Node(
        package='service_client_pkg',
        executable='client',
        output='screen'),
])