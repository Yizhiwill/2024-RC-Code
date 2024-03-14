/**
* @file arm_kinesiology_server.cpp
* @author Will Zou
* @brief
* @version 1.0
* @date 2024-01-19
*
* @copyright Copyright (c) 2024
*
*/
#include "base_interfaces/srv/arm_angle.hpp"
#include "kinesiology_arm_rclcpp/Kinesiology_arm.hpp"
#include "rclcpp/rclcpp.hpp"

class arm_FKServer : public rclcpp::Node {
public:
  arm_FKServer(std::string name) : Node(name) {
   RCLCPP_INFO(this->get_logger(), "节点已启动：%s.", name.c_str());
   // 创建服务
   add_ints_server_ = this->create_service<base_interfaces::srv::ArmAngle>(
       "arm_IK_srv",
       std::bind(&arm_FKServer::handle_add_two_ints, this,
                 std::placeholders::_1, std::placeholders::_2));
 }

private:
 // 声明一个服务
 rclcpp::Service<base_interfaces::srv::ArmAngle>::SharedPtr add_ints_server_;

 // 收到请求的处理函数
 void handle_add_two_ints(
     const std::shared_ptr<base_interfaces::srv::ArmAngle::Request> request,
     std::shared_ptr<base_interfaces::srv::ArmAngle::Response> response) {
   arm_Ik(request->x, request->y, request->z, request->roll, request->pit,
          request->yaw);
   response->target_arm_angle1 = result[0];
   response->target_arm_angle2 = result[1];
   response->target_arm_angle3 = result[2];
   response->target_arm_angle4 = result[3];
   response->target_arm_angle5 = result[4];
   response->target_arm_angle6 = result[5];
 };
};

int main(int argc, char **argv) {
 rclcpp::init(argc, argv);
 auto node = std::make_shared<arm_FKServer>("arm_IK_server");
 rclcpp::spin(node);
 rclcpp::shutdown();
 return 0;
}
