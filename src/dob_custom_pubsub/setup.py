from setuptools import setup

package_name = 'dob_custom_pubsub'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='varad',
    maintainer_email='varad@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'pub = dob_custom_pubsub.dob_pub:main',
            'sub = dob_custom_pubsub.dob_sub:main'
        ],
    },
)
