import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/akshaj/Desktop/ros-lab/ros-lab/install/ti_custom_msg'
