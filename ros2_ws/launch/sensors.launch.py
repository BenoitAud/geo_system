from ament_index_python import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

import os


def generate_launch_description():

    shared_dir = get_package_share_directory("ros2_ws")

    velodyne_driver_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            os.path.join(shared_dir, 'launch'),
            '/velodyne_driver_node-VLP16-launch.py'
        ])
    )

    velodyne_pointcloud_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
          os.path.join(shared_dir, 'launch'),
          '/TODO.launch.py'
        ])
    )

    vectornav_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
          os.path.join(shared_dir, 'launch'),
          '/TODO.launch.py'
        ])
    )

    return LaunchDescription([
        velodyne_driver_launch, 
        velodyne_pointcloud_launch,
        vectornav_launch
    ])