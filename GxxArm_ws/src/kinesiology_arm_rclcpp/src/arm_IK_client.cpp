/**
 * @file arm_IK_client.cpp
 * @author Will Zou
 * @brief
 * @version 1.0
 * @date 2024-01-19
 *
 * @copyright Copyright (c) 2024
 *
 */
#include "base_interfaces/msg/robot_pose.hpp"
#include "base_interfaces/srv/arm_angle.hpp"
#include "kinesiology_arm_rclcpp/Kinesiology_arm.hpp"
#include "rclcpp/rclcpp.hpp"

base_interfaces::msg::RobotPose message;

class arm_IKClient : public rclcpp::Node {
public:
  // 构造函数,有一个参数为节点名称
  arm_IKClient(std::string name) : Node(name) {
    RCLCPP_INFO(this->get_logger(), "节点已启动：%s.", name.c_str());
    // 创建客户端
    client_ = this->create_client<base_interfaces::srv::ArmAngle>("arm_IK_srv");

    // 创建话题
    robot_pose_publisher_ =
        this->create_publisher<base_interfaces::msg::RobotPose>("robot_pose",
                                                                10);

    /*创建一个周期为500ms的定时器*/
    timer_ =
        this->create_wall_timer(std::chrono::milliseconds(500),
                                std::bind(&arm_IKClient::timer_callback, this));
  }

  void send_request() {
    RCLCPP_INFO(this->get_logger(), "计算机械臂逆解");

    // 1.等待服务端上线
    while (!client_->wait_for_service(std::chrono::seconds(1))) {
      // 等待时检测rclcpp的状态
      if (!rclcpp::ok()) {
        RCLCPP_ERROR(this->get_logger(), "等待服务的过程中被打断...");
        return;
      }
      RCLCPP_INFO(this->get_logger(), "等待服务端上线中");
    }

    // 2.构造请求的
    auto request = std::make_shared<base_interfaces::srv::ArmAngle_Request>();
    request->x = x;
    request->y = y;
    request->z = z;
    request->roll = roll;
    request->pit = pit;
    request->yaw = yaw;

    // 3.发送异步请求，然后等待返回，返回时调用回调函数
    client_->async_send_request(request,
                                std::bind(&arm_IKClient::result_callback_, this,
                                          std::placeholders::_1));
  };

private:
  rclcpp::TimerBase::SharedPtr timer_; /*定时器，用于定时发布机器人位置*/
  // 声明客户端
  rclcpp::Client<base_interfaces::srv::ArmAngle>::SharedPtr client_;
  // 声明一个话题
  rclcpp::Publisher<base_interfaces::msg::RobotPose>::SharedPtr
      robot_pose_publisher_; /*发布机器人位姿发布者*/
  rclcpp::Subscription<base_interfaces::msg::RobotPose>::SharedPtr
      robot_status_subscribe_;
  void
  result_callback_(rclcpp::Client<base_interfaces::srv::ArmAngle>::SharedFuture
                       result_future) {
    auto response = result_future.get();
    RCLCPP_INFO(this->get_logger(), "计算结果：%f %f %f %f %f %f",
                response->target_arm_angle1, response->target_arm_angle2,
                response->target_arm_angle3, response->target_arm_angle4,
                response->target_arm_angle5, response->target_arm_angle6);
    message.temp_arm_angle1 = response->target_arm_angle1;
    message.temp_arm_angle2 = response->target_arm_angle2;
    message.temp_arm_angle3 = response->target_arm_angle3;
    message.temp_arm_angle4 = response->target_arm_angle4;
    message.temp_arm_angle5 = response->target_arm_angle5;
    message.temp_arm_angle6 = response->target_arm_angle6;
  }
  /**
   * @brief 500ms 定时回调函数，
   *
   */
  void timer_callback() {
    // 创建消息

    RCLCPP_INFO(this->get_logger(), "Publishing:%f %f %f %f %f %f",
                message.temp_arm_angle1, message.temp_arm_angle2,
                message.temp_arm_angle3, message.temp_arm_angle4,
                message.temp_arm_angle5, message.temp_arm_angle6);
    // 发布消息

    robot_pose_publisher_->publish(message);
  };
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  /*创建对应节点的共享指针对象*/
  auto node = std::make_shared<arm_IKClient>("arm_IK_client");
  /* 运行节点，并检测退出信号*/
  node->send_request();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}