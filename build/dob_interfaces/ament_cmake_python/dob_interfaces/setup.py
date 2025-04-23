from setuptools import find_packages
from setuptools import setup

setup(
    name='dob_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('dob_interfaces', 'dob_interfaces.*')),
)
