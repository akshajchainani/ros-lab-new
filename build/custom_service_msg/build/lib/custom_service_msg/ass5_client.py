import rclpy
from rclpy.node import Node
from tutorial_interfaces.srv import SetVelocityTurtle

class TurtleClient(Node):
    def __init__(self):
        super().__init__('turtle_client')
        self.client = self.create_client(SetVelocityTurtle, 'set_turtle_velocity')

        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for server...')

    def send_request(self, velocity, angle):
        req = SetVelocityTurtle.Request()
        req.velocity = velocity
        req.angle = angle

        future = self.client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        return future.result()
def main():
    rclpy.init()
    node = TurtleClient()

    velocity = float(input("Enter velocity: "))
    angle = float(input("Enter angle: "))

    response = node.send_request(velocity, angle)
    node.get_logger().info(f"Response: {response.msg}")

    rclpy.shutdown()

if __name__ == "__main__":
    main()