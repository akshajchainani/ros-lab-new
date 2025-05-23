import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose

class PoseSubscriberNode(Node):
    
    def __init__ (self):
        super().__init__('pose_subscriber')
        self.pose_subscriber_ = self.create_subscription(Pose,'turtle1/pose',self.pose_callback,10)
        
    def pose_callback(self,msg:Pose): # creating the callback method 
        self.get_logger().info("("+str(msg.x)+","+str(msg.y)+")") # display message on console

def main(args=None):
    rclpy.init(args=args) # initialize ros communication
    node = PoseSubscriberNode()
    rclpy.spin(node)
    rclpy.shutdown() # shutdown ros connection 

if __name__=='__main__':
    main()