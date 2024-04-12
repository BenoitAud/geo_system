from ament_index_python import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

import os


def generate_launch_description():

    shared_dir_velodyne = get_package_share_directory("velodyne")
    shared_dir_vectornav = get_package_share_directory("vectornav")

    velodyne_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            os.path.join(shared_dir_velodyne, 'launch'),
            '/velodyne-all-nodes-VLP16-launch.py'
        ])
    )

    vectornav_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
          os.path.join(shared_dir_vectornav, 'launch'),
          '/vectornav.launch.py'
        ])
    )

    return LaunchDescription([
        velodyne_launch, 
        vectornav_launch
    ])
