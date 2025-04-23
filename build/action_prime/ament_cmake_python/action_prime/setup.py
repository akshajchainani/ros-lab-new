from setuptools import find_packages
from setuptools import setup

setup(
    name='action_prime',
    version='0.0.0',
    packages=find_packages(
        include=('action_prime', 'action_prime.*')),
)
