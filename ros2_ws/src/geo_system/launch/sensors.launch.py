from ament_index_python import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

import os


def generate_launch_description():

    shared_dir_velodyne = get_package_share_directory("velodyne")
    shared_dir_vectornav = get_package_share_directory("vectornav")
    shared_dir_description = get_package_share_directory("geo_system")

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

    description_launch = IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(shared_dir_description, 'launch'),
                '/description_launch.py'
                ])
            )

    return LaunchDescription([
        velodyne_launch, 
        vectornav_launch,
        description_launch
    ])
