import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from action_prime.action import PrintPrime

class PrimeActionClient(Node):
    def __init__(self):
        super().__init__('prime_action_client')
        self._action_client = ActionClient(self, PrintPrime, 'print_prime')

    def send_goal(self, n):
        goal_msg = PrintPrime.Goal()
        goal_msg.n = n
        self._action_client.send_goal(
            goal_msg,
            feedback_callback=self.feedback_callback
        )

    def feedback_callback(self, feedback_msg):
        self.get_logger().info(f"Feedback: {feedback_msg.current_prime}")

def main(args=None):
    rclpy.init(args=args)
    action_client = PrimeActionClient()

    while not action_client._action_client.wait_for_server(timeout_sec=1.0):
        action_client.get_logger().info('Action server not available, waiting again...')

    action_client.send_goal(74)  
    rclpy.spin(action_client)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
