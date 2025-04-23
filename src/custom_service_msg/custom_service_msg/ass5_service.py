import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from tutorial_interfaces.srv import SetVelocityTurtle

class TurtleServer(Node):
    def __init__(self):
        super().__init__('turtle_server')
        self.srv = self.create_service(SetVelocityTurtle, 'set_turtle_velocity', self.callback_request)
        self.publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.get_logger().info("Turtle Server is ready.")

    def callback_request(self, request, response):
        msg = Twist()
        msg.linear.x = request.velocity
        msg.angular.z = request.angle

        self.publisher.publish(msg)
        response.msg = f"Turtle moving with velocity {request.velocity} and angle {request.angle}"
        self.get_logger().info(response.msg)
        
        return response

def main():
    rclpy.init()
    node = TurtleServer()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()