from ament_index_python import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_xml.launch_description_sources import XMLLaunchDescriptionSource

import os


def generate_launch_description():

    shared_dir_mapping = get_package_share_directory("mapper_config_template")
    shared_dir_imu_odom = get_package_share_directory("imu_odom")

    mapping_launch = IncludeLaunchDescription(
        XMLLaunchDescriptionSource([
            os.path.join(shared_dir_mapping, 'launch'),
            '/mapper.launch'
        ])
    )

    imu_odom_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
          os.path.join(shared_dir_imu_odom, 'launch'),
          '/imu_odom.launch.py'
        ])
    )

    return LaunchDescription([
        mapping_launch, 
        imu_odom_launch,
    ])
