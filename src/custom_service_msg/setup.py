from setuptools import setup

package_name = 'custom_service_msg'

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
            "service = custom_service_msg.service:main",
            "client = custom_service_msg.client:main",
            "ass5_s = custom_service_msg.ass5_service:main",
            "ass5_c = custom_service_msg.ass5_client:main"
        ],
    },
)
