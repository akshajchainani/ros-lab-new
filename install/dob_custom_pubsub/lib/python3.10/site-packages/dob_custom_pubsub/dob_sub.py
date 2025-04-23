import rclpy
from rclpy.node import Node

from dob_interfaces.msg import Dob       # CHANGE


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('birthday_subscriber')
        self.subscription = self.create_subscription(Dob, 'birthday_topic',
            self.listener_callback,
            10)
        self.subscription

    def listener_callback(self, msg):
            self.get_logger().info('I heard:' )
            self.get_logger().info(f'year: {msg.year}')
            self.get_logger().info(f'month: {msg.month}')
            self.get_logger().info(f'day: {msg.day}')


def main(args=None):
    rclpy.init(args=args)
    birthday_subscriber = MinimalSubscriber()
    rclpy.spin(birthday_subscriber)
    birthday_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()