import rclpy
from rclpy.node import Node
from std_msgs.msg import Int16

rclpy.init()
node = Node("talker")

pub_countup = node.create_publisher(Int16, "countup", 10)
pub_naikaku = node.create_publisher(Int16, "naikaku", 10)

n = 0
i = 3

def cb(): #countup
    global i
    msg = Int16()
    msg.data = i
    pub_countup.publish(msg)

def nakami(): #naikaku
    global n
    global i
    n = 180 * (i - 2)
    i += 1
    msg = Int16()
    msg.data = n
    pub_naikaku.publish(msg)

def main():
    node.create_timer(0.5, cb)
    node.create_timer(0.5, nakami)
    rclpy.spin(node)
