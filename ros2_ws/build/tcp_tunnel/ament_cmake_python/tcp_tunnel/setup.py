from setuptools import find_packages
from setuptools import setup

setup(
    name='tcp_tunnel',
    version='0.0.1',
    packages=find_packages(
        include=('tcp_tunnel', 'tcp_tunnel.*')),
)
