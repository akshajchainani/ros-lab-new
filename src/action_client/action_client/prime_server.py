import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from action_prime.action import PrintPrime
import time

class PrimeActionServer(Node):
    def __init__(self):
        super().__init__('prime_action_server')
        self._action_server = ActionServer(
            self,
            PrintPrime,
            'print_prime',
            self.execute_callback
        )

    def execute_callback(self, goal_handle):
        self.get_logger().info(f"Received goal: {goal_handle.request.n} primes to print.")
        primes = self.get_primes(goal_handle.request.n)
        
        feedback_msg = PrintPrime.Feedback()
        for idx, prime in enumerate(primes):
            feedback_msg.current_prime = prime
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(0.5)  # Simulate delay
            self.get_logger().info(f"Feedback: {prime}")
        
        goal_handle.succeed()
        result = PrintPrime.Result()
        result.primes = primes
        return result

    def get_primes(self, n):
        primes = []
        num = 2
        while len(primes) < n:
            if self.is_prime(num):
                primes.append(num)
            num += 1
        return primes

    def is_prime(self, num):
        if num <= 1:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

def main(args=None):
    rclpy.init(args=args)
    action_server = PrimeActionServer()
    rclpy.spin(action_server)
    rclpy.shutdown()

if __name__ == '__main__':
    main()

