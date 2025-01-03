import rclpy
from rclpy.node import Node
from std_msgs.msg import Int16

rclpy.init()
node = Node("result")

# データを保存する変数
current_shape = None
current_angle_sum = None
last_output_shape = None  # 最後に出力した角形
last_output_angle_sum = None  # 最後に出力した内角の和

def cb(msg): #角の数
    global current_shape
    current_shape = msg.data
    log_combined()

def nakami(msg): #内角の和
    global current_angle_sum
    current_angle_sum = msg.data
    log_combined()

def log_combined(): #受信データ出力 
    global current_shape, current_angle_sum
    global last_output_shape, last_output_angle_sum

    # 両データが変化したことを確認
    if current_shape is not None and current_angle_sum is not None:
        if current_shape != last_output_shape and current_angle_sum != last_output_angle_sum:
            node.get_logger().info(f"{current_shape}角形の内角の和は: {current_angle_sum}°")
            last_output_shape = current_shape
            last_output_angle_sum = current_angle_sum

def main():
    node.create_subscription(Int16, "shape", cb, 10)
    node.create_subscription(Int16, "naikaku", nakami, 10)
    
    rclpy.spin(node)
