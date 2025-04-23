import rclpy
from rclpy.node import Node
from dob_interfaces.msg import Dob


class PublisherNode(Node):

    def __init__(self):
        super().__init__('publisher')
        self.publisher_ = self.create_publisher(Dob, 'birthday_topic', 10)
        self.timer = self.create_timer(2.0, self.timer_callback)

    def timer_callback(self):
        msg = Dob()
        msg.year = 2004
        msg.month = 10
        msg.day = 7
        self.publisher_.publish(msg)
        self.get_logger().info(f'year: {msg.year}')
        self.get_logger().info(f'month: {msg.month}')
        self.get_logger().info(f'day: {msg.day}')

def main(args=None):
    rclpy.init(args=args)
    publisher = PublisherNode()
    rclpy.spin(publisher)
    publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
