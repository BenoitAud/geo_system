from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='imu_odom',
            executable='imu_odom_node',
            name='imu_odom_node',
            remappings=[
                ('imu_topic', '/vectornav/imu')
            ],
            parameters=[
                {"odom_frame":"odom"},
                {"robot_frame":"base_link"},
                {"imu_frame":"imu"},
                {"real_time":True}
                ]
        )
    ])
