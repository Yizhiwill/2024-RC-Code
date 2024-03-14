/**
 * @file Serial_ReadPub.cpp
 * @author Will Zou
 * @brief The serial port of the lower computer receives and publishes
 * @version 1.0
 * @date 2024-01-16
 *
 * @copyright Copyright (c) 2024
 *
 */
#include "base_interfaces/msg/robot_status.hpp"
#include "rclcpp/rclcpp.hpp"
#include "serial_com_rclcpp/serial_port.hpp"
#include "base_interfaces/srv/arm_angle.hpp"
#include "base_interfaces/srv/vision_angle.hpp"

class InterfacesArm : public rclcpp::Node {
public:
  InterfacesArm(std::string name) : Node(name) {
    RCLCPP_INFO(this->get_logger(), "节点已启动：%s.", name.c_str());
    /*创建发布者*/
    serial_init();
    robot_status_publisher_ =
        this->create_publisher<base_interfaces::msg::RobotStatus>("robot_status",
                                                                10);
    /*创建一个周期为500ms的定时器*/
    timer_ = this->create_wall_timer(
        std::chrono::milliseconds(200),
        std::bind(&InterfacesArm::timer_callback, this));
  }

private:
  rclcpp::TimerBase::SharedPtr timer_; /*定时器，用于定时发布机器人位置*/
  rclcpp::Publisher<base_interfaces::msg::RobotStatus>::SharedPtr
      robot_status_publisher_; /*发布机器人位姿发布者*/
  /**
   * @brief 500ms 定时回调函数，
   *
   */
  void timer_callback() {
    // 创建消息
    ser.read(RecDate.ros_rx, 15);
    // 数据传递
    Serial_Rec_Callback();
    base_interfaces::msg::RobotStatus message;
    RCLCPP_INFO(this->get_logger(), "Publishing: %f  %f  %f  %f  %f  %f ",
                message.real_arm_angle1, message.real_arm_angle2,
                message.real_arm_angle3, message.real_arm_angle4,
                message.real_arm_angle5, message.real_arm_angle6);
    // 发布消息
    robot_status_publisher_->publish(message);
  };

  void serial_init() {
    //    serial::Serial ser;
    // serial::Serial sp;
    // 创建timeout
    serial::Timeout to = serial::Timeout::simpleTimeout(100);
    // 设置要打开的串口名称
    ser.setPort("/dev/ttyACM0");
    // 设置串口通信的波特率
    ser.setBaudrate(115200);
    // 串口设置timeout
    ser.setTimeout(to);

    try {
      // 打开串口
      ser.open();
    } catch (serial::IOException &e) {
      RCLCPP_ERROR(this->get_logger(), "Unable to open port.");
    }

    // 判断串口是否打开成功
    if (ser.isOpen()) {
      RCLCPP_ERROR(this->get_logger(), "/dev/ttyACM0 is opened.");
    }
  }
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<InterfacesArm>("robotStatus_Get");
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
