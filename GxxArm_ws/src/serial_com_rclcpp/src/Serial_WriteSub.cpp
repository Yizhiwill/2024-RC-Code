/**
 * @file Serial_WriteSub.cpp
 * @author Will Zou
 * @brief Subscribe to the data sent by each node and send it through the serial
 * port
 * @version 1.0
 * @date 2024-01-16
 *
 * @copyright Copyright (c) 2024
 *
 */
#include "base_interfaces/msg/robot_pose.hpp"
#include "rclcpp/rclcpp.hpp"
#include "serial_com_rclcpp/serial_port.hpp"



class InterfacesControl : public rclcpp::Node {
public:
  InterfacesControl(std::string name) : Node(name) {
    RCLCPP_INFO(this->get_logger(), "节点已启动：%s.", name.c_str());
    serial_init();
    /*订阅机器人状态话题*/
    robot_status_subscribe_ =
        this->create_subscription<base_interfaces::msg::RobotPose>(
            "robot_pose", 10,
            std::bind(&InterfacesControl::robot_status_callback_, this,
                      std::placeholders::_1));
  }

private:
  // 声明客户端
  rclcpp::Subscription<base_interfaces::msg::RobotPose>::SharedPtr
      robot_status_subscribe_;

  /**
   * @brief 机器人状态话题接收回调函数
   *
   * @param msg
   */
  void
  robot_status_callback_(const base_interfaces::msg::RobotPose msg) {
    RCLCPP_INFO(this->get_logger(), "Subscribing: %f  %f  %f  %f  %f  %f ",
                msg.temp_arm_angle1, msg.temp_arm_angle2,
                msg.temp_arm_angle3, msg.temp_arm_angle4,
                msg.temp_arm_angle5, msg.temp_arm_angle6);
    Serial_Sen_Callback(msg.temp_arm_angle1, msg.temp_arm_angle2,
                        msg.temp_arm_angle3, msg.temp_arm_angle4,
                        msg.temp_arm_angle5, msg.temp_arm_angle6);
  }
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<InterfacesControl>("robotCtrl_Send");
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}

/*
* @version 0.1
* @date 2021-03-30
*
* @copyright Copyright (c) 2021
*
 */
//#include "CRC.h"
//#include <stdint.h>
//
//const unsigned char MyCRC8Tab[]=
//    {
//        0,94,188,226,97,63,221,131,194,156,126,32,163,253,31,65,
//        157,195,33,127,252,162,64,30, 95,1,227,189,62,96,130,220,
//        35,125,159,193,66,28,254,160,225,191,93,3,128,222,60,98,
//        190,224,2,92,223,129,99,61,124,34,192,158,29,67,161,255,
//        70,24,250,164,39,121,155,197,132,218,56,102,229,187,89,7,
//        219,133,103,57,186,228,6,88,25,71,165,251,120,38,196,154,
//        101,59,217,135,4,90,184,230,167,249,27,69,198,152,122,36,
//        248,166,68,26,153,199,37,123,58,100,134,216,91,5,231,185,
//        140,210,48,110,237,179,81,15,78,16,242,172,47,113,147,205,
//        17,79,173,243,112,46,204,146,211,141,111,49,178,236,14,80,
//        175,241,19,77,206,144,114,44,109,51,209,143,12,82,176,238,
//        50,108,142,208,83,13,239,177,240,174,76,18,145,207,45,115,
//        202,148,118,40,171,245,23,73,8,86,180,234,105,55,213,139,
//        87,9,235,181,54,104,138,212,149,203, 41,119,244,170,72,22,
//        233,183,85,11,136,214,52,106,43,117,151,201,74,20,246,168,
//        116,42,200,150,21,75,169,247,182,232,10,84,215,137,107,53
//};
//
///**
//* @Data 2019-04-02 17:44
//* @brief CRC8校验
//* @param void *pvParameters
//* @retval void
// */
//unsigned char Checksum_CRC8(uint8_t *buf,uint16_t len)
//{
//  uint8_t check = 0;
//
//  while(len--)
//  {
//    check = MyCRC8Tab[check^(*buf++)];
//  }
//
//  return (check) /* (& 0xff) 保证了二进制补码的一致性??*/;
//}
//
//
///**
//* @Data 2019-04-02 17:44
//* @brief 求和校验
//* @param void *pvParameters
//* @retval void
// */
//uint16_t Checksum_Sum(uint8_t* buf,uint16_t len)
//{
//  uint8_t check = 0x00;
//
//  while(len--)
//  {
//    check += *buf++;
//  }
//  check = 256 - check%256;
//
//  return (check)&0x00ff;
//}
///*-----------------------------------file of end------------------------------*/
