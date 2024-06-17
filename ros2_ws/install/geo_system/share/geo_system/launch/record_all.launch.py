import os, yaml
from datetime import datetime

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import ExecuteProcess

def generate_launch_description():

    config_folder = os.path.join(get_package_share_directory('vaul_f1tenth_system'), 'config')
    topics_file = os.path.join(config_folder, 'topics_to_record.yaml')

    topics_list = yaml.safe_load(open(topics_file, 'r'))["topics"]
    filename = datetime.now().strftime("%Y-%m-%d_%H-%M-%S")
    command = ['ros2', 'bag', 'record', "-o", f"/home/vaul-f1tenth/rosbags/{filename}"]
    command.extend(topics_list)

    rosbag_record_process= ExecuteProcess(
        name="rosbag_record",
        cmd=command,
        output='screen'
    )

    return LaunchDescription([
        rosbag_record_process,
    ])