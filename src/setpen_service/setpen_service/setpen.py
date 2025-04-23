import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from turtlesim.srv import SetPen

class TurtleControllerNode(Node):

    def __init__(self):
        super().__init__("turtle_controller")
        
        # Create publisher to send commands to move the turtle
        self.cmd_vel_publisher_ = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        
        # Create subscriber to get the turtle's pose (position)
        self.pose_subscriber_ = self.create_subscription(Pose, "/turtle1/pose", self.pose_callback, 10)
        
        # Create client for the SetPen service to change the pen color
        self.set_pen_client_ = self.create_client(SetPen, "/turtle1/set_pen")
        
        # Wait for the SetPen service to be available
        while not self.set_pen_client_.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("SetPen service not available, waiting...")

        # Log when the node is started
        self.get_logger().info("Turtle controller has been started.")

    def pose_callback(self, pose: Pose):
        # Create Twist message for controlling the turtle
        cmd = Twist()

        # Check turtle's position and make movement decisions
        if pose.x > 9.0 or pose.x < 2.0 or pose.y > 9.0 or pose.y < 2.0:
            cmd.linear.x = 1.0
            cmd.angular.z = 0.9
        else:
            cmd.linear.x = 5.0
            cmd.angular.z = 0.0

        # Check if turtle is in the right or left half of the screen to change pen color
        if pose.x > 5.5:
            # Right half: Change pen color to red
            self.change_pen_color(255, 0, 0, 2, 0)  # Red
        else:
            # Left half: Change pen color to green
            self.change_pen_color(0, 255, 0, 2, 0)  # Green

        # Publish the movement command
        self.cmd_vel_publisher_.publish(cmd)

    def change_pen_color(self, r, g, b, width, off):
        # Request to set pen color via the SetPen service
        request = SetPen.Request()
        request.r = r
        request.g = g
        request.b = b
        request.width = width
        request.off = off
        
        # Call the SetPen service asynchronously
        self.set_pen_client_.call_async(request)

def main(args=None):
    # Initialize ROS 2 system
    rclpy.init(args=args)
    
    # Create and run the TurtleControllerNode
    node = TurtleControllerNode()
    rclpy.spin(node)
    
    # Shutdown the ROS 2 system when done
    rclpy.shutdown()

if __name__ == '__main__':
    main()
