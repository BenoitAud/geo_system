from setuptools import find_packages
from setuptools import setup

setup(
    name='norlab_icp_mapper_ros',
    version='0.0.1',
    packages=find_packages(
        include=('norlab_icp_mapper_ros', 'norlab_icp_mapper_ros.*')),
)
