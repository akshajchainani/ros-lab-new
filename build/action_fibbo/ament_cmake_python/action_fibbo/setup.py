from setuptools import find_packages
from setuptools import setup

setup(
    name='action_fibbo',
    version='0.0.0',
    packages=find_packages(
        include=('action_fibbo', 'action_fibbo.*')),
)
