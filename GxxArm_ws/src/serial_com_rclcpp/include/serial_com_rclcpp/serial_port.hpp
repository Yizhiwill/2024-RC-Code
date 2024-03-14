/**
* @file serial_port.hpp
* @author Will Zou
* @brief Serial library
* @version 1.0
* @date 2024-01-10
*
* @copyright Copyright (c) 2024
*
*/
#ifndef SERIAL_PORT_HPP_
#define SERIAL_PORT_HPP_
#include "rclcpp/rclcpp.hpp"
#include "serial/serial.h"
#include "base_interfaces/msg/robot_pose.hpp"
#define BYTE0(dwTemp) (*((char *)(&dwTemp)))
#define BYTE1(dwTemp) (*((char *)(&dwTemp) + 1))
#define BYTE2(dwTemp) (*((char *)(&dwTemp) + 2))
#define BYTE3(dwTemp) (*((char *)(&dwTemp) + 3))

#define SEND_START_Tag 0xAA
#define SEND_END_Tag 0xFF

namespace serial_port {
class serial_com {
public:
  uint8_t sedBuf[27];
  uint8_t recBuf[16];
private:
};
} // namespace serial_port

typedef struct {
  union {
    struct {
      uint8_t START_Tag;
      uint8_t LENS;
      // 关节1角度的数据
      uint8_t Arm_Angle1_L;
      uint8_t Arm_Angle1_H;
      // 关节2角度的数据
      uint8_t Arm_Angle2_L;
      uint8_t Arm_Angle2_H;
      // 关节3角度的数据
      uint8_t Arm_Angle3_L;
      uint8_t Arm_Angle3_H;
      // 关节4角度的数据
      uint8_t Arm_Angle4_L;
      uint8_t Arm_Angle4_H;
      // 关节5角度的数据
      uint8_t Arm_Angle5_L;
      uint8_t Arm_Angle5_H;
      // 关节6角度的数据
      uint8_t Arm_Angle6_L;
      uint8_t Arm_Angle6_H;
      uint8_t END_Tag;
    } ROS_Type;
    unsigned char ros_rx[15];
  };
  float Arm_Angle1;
  float Arm_Angle2;
  float Arm_Angle3;
  float Arm_Angle4;
  float Arm_Angle5;
  float Arm_Angle6;
} Serial_RecDate_t;

Serial_RecDate_t RecDate;

void Serial_Rec_Callback() {
  if (RecDate.ros_rx[0] != 0xaa) {
    return;
  }
  if (RecDate.ROS_Type.START_Tag == 0xaa && RecDate.ROS_Type.LENS == 0xF &&
      RecDate.ROS_Type.END_Tag == 0xFF) {
    RecDate.Arm_Angle1 = (float)((RecDate.ROS_Type.Arm_Angle1_L << 8) |
                                 RecDate.ROS_Type.Arm_Angle1_H);
    RecDate.Arm_Angle2 = (float)((RecDate.ROS_Type.Arm_Angle2_L << 8) |
                                 RecDate.ROS_Type.Arm_Angle2_H);
    RecDate.Arm_Angle3 = (float)((RecDate.ROS_Type.Arm_Angle3_L << 8) |
                                 RecDate.ROS_Type.Arm_Angle3_H);
    RecDate.Arm_Angle4 = (float)((RecDate.ROS_Type.Arm_Angle4_L << 8) |
                                 RecDate.ROS_Type.Arm_Angle4_H);
    RecDate.Arm_Angle5 = (float)((RecDate.ROS_Type.Arm_Angle5_L << 8) |
                                 RecDate.ROS_Type.Arm_Angle5_H);
    RecDate.Arm_Angle6 = (float)((RecDate.ROS_Type.Arm_Angle6_L << 8) |
                                 RecDate.ROS_Type.Arm_Angle6_H);
  }
}
serial_port::serial_com port;
serial::Serial ser;

void Serial_Sen_Callback(float A,float B,float C,float D,float E,float F){
  uint8_t _cnt=0;
  port.sedBuf[_cnt++]=SEND_START_Tag;
  port.sedBuf[_cnt++]=0x18;
  port.sedBuf[_cnt++]=BYTE3(A);
  port.sedBuf[_cnt++]=BYTE2(A);
  port.sedBuf[_cnt++]=BYTE1(A);
  port.sedBuf[_cnt++]=BYTE0(A);
  port.sedBuf[_cnt++]=BYTE3(B);
  port.sedBuf[_cnt++]=BYTE2(B);
  port.sedBuf[_cnt++]=BYTE1(B);
  port.sedBuf[_cnt++]=BYTE0(B);
  port.sedBuf[_cnt++]=BYTE3(C);
  port.sedBuf[_cnt++]=BYTE2(C);
  port.sedBuf[_cnt++]=BYTE1(C);
  port.sedBuf[_cnt++]=BYTE0(C);
  port.sedBuf[_cnt++]=BYTE3(D);
  port.sedBuf[_cnt++]=BYTE2(D);
  port.sedBuf[_cnt++]=BYTE1(D);
  port.sedBuf[_cnt++]=BYTE0(D);
  port.sedBuf[_cnt++]=BYTE3(E);
  port.sedBuf[_cnt++]=BYTE2(E);
  port.sedBuf[_cnt++]=BYTE1(E);
  port.sedBuf[_cnt++]=BYTE0(E);
  port.sedBuf[_cnt++]=BYTE3(F);
  port.sedBuf[_cnt++]=BYTE2(F);
  port.sedBuf[_cnt++]=BYTE1(F);
  port.sedBuf[_cnt++]=BYTE0(F);
  port.sedBuf[_cnt++]=SEND_END_Tag;
  ser.write(port.sedBuf, 27);
}
void serial_init() {
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
//    RCLCPP_ERROR(this->get_logger(), "Unable to open port.");
  }

  // 判断串口是否打开成功
  if (ser.isOpen()) {
//    RCLCPP_ERROR(this->get_logger(), "/dev/ttyTHS0 is opened.");
  }
}
#endif // SERIAL_PORT_HPP_
