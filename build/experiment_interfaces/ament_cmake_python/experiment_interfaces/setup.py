from setuptools import find_packages
from setuptools import setup

setup(
    name='experiment_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('experiment_interfaces', 'experiment_interfaces.*')),
)
