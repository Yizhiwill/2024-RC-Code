/**
 * @file kinesiology_arm.hpp
 * @author Keyi Huang
 * @brief  Kinesiology Library
 * @version 1.0
 * @date 2024-01-17
 *
 * @copyright Copyright (c) 2024
 *
 */
#ifndef SERIAL_PORT_HPP_
#define SERIAL_PORT_HPP_
#pragma once
#include <Eigen/Dense>
#include <cmath>
#include <complex>
#include <iostream>

#define pi 3.141592653589793
#define angle 180. / pi
#define radian pi / 180.
class MyArm {
public:
  double theta1, d1 = 0, a0 = 0, alpha0 = 0, offset1 = 0;
  double theta2, d2 = 0, a1 = 0, alpha1 = -pi / 2, offset2 = 0;
  double theta3, d3 = 0, a2 = 250, alpha2 = 0, offset3 = 0;
  double theta4, d4 = 303, a3 = 0, alpha3 = -pi / 2, offset4 = 0;
  double theta5, d5 = 0, a4 = 0, alpha4 = pi / 2, offset5 = 0;
  double theta6, d6 = 0, a5 = 0, alpha5 = -pi / 2, offset6 = 0;
};
void arm_Fk(double theta1, double theta2, double theta3, double theta4,
            double theta5, double theta6, int mode);
double *arm_Ik(double x, double y, double z, double roll, double pit,
               double yaw);

using namespace std;

MyArm arm;
double Target[3] = {0};
double Target1[3] = {0};
double count_R06[3][3];

double rrr(double num) { return round(num * 1000) / 1000; }

/*****Author ¿ÉÒÖ
******ÔË¶¯Ñ§Äæœâ
******ÊäÈë xyzrpy
******Êä³ö ž÷žö¹ØœÚœÇ¶È
*/
double result[6] = {0};
double *arm_Ik(double x, double y, double z, double roll, double pit,
               double yaw) {

  double a, t;
  double angle23, angle3_result1, angle2_result1, angle2_result2,
      angle1_result1;
  double s23, c23, a1, b1, c1;

  // œÇ¶ÈÒ»
  angle1_result1 = atan2(y, x);

  // œÇ¶ÈÈý
  a = x * cos(angle1_result1) + y * sin(angle1_result1);
  t = (pow(arm.a2, 2) + pow(arm.d4, 2) - pow(a, 2) - pow(z, 2)) /
      (2 * arm.a2 * arm.d4);
  angle3_result1 = atan2(t, sqrt(1 - pow(t, 2)));

  // œÇ¶È¶þ
  // µÚÒ»×éœâ
  a1 = cos(angle1_result1) * x + sin(angle1_result1) * y;
  b1 = arm.a2 * cos(angle3_result1);
  c1 = arm.a2 * sin(angle3_result1);
  s23 = -(a1 * arm.d4 + b1 * z - a1 * c1) / (pow(a1, 2) + pow(z, 2));
  c23 = sqrt(1 - pow(s23, 2));
  angle23 = atan2(s23, c23);
  angle2_result1 = (angle23 - angle3_result1);

  angle2_result2 = atan2(s23, -c23) - angle3_result1;

  std::cout << "ÑéÖ€ŸØÕóÒ»£º" << endl;
  arm_Fk(angle1_result1, angle2_result1, angle3_result1, 0, 0, 0, 1);
  std::cout << "ÑéÖ€¹ØœÚ¶þ£º" << endl;
  arm_Fk(angle1_result1, angle2_result2, angle3_result1, 0, 0, 0, 2);

  if ((round(Target[0]) - round(x) == 0 &&
       (round(Target[1]) - round(y) == 0 &&
        (round(Target[2]) - round(z) == 0)))) {
    arm.theta1 = angle1_result1;
    arm.theta2 = angle2_result1;
    arm.theta3 = angle3_result1;
  } else if ((round(Target1[0]) - round(x) == 0 &&
              (round(Target1[1]) - round(y) == 0 &&
               (round(Target1[2]) - round(z) == 0)))) {
    arm.theta1 = angle1_result1;
    arm.theta2 = angle2_result2;
    arm.theta3 = angle3_result1;
  } else {
    arm.theta1 = 0;
    arm.theta2 = 0;
    arm.theta3 = 0;
    std::cout << "ŒÄŒÄŒÄŒÄŒÄŒÄŒÄŒÄŒÄŒÄŒÄŒÄŒÄŒÄŒÄŒÄŒÄŒÄŒÄŒÄŒÄŒÄ" << endl;
  }

  std::cout << "motor1" << endl;
  std::cout << round(arm.theta1 * angle) << endl;
  std::cout << "motor2" << endl;
  std::cout << round(arm.theta2 * angle) << endl;
  std::cout << "motor3" << endl;
  std::cout << round(arm.theta3 * angle) << endl;

  //***********************************************************
  // ×¢ÒâœÇ¶È5²»ÄÜÊÇ0ºÍpi
  Eigen::Matrix<double, 3, 3> R36;
  Eigen::Matrix<double, 3, 3> RRR;
  Eigen::Matrix<double, 3, 3> Rzyz;
  Eigen::Matrix<double, 3, 3> Rx;
  Eigen::Matrix<double, 3, 3> Ry;
  Eigen::Matrix<double, 3, 3> Rz;
  Eigen::Matrix<double, 3, 3> R03;
  Eigen::Matrix<double, 3, 3> R04;
  Eigen::Matrix<double, 3, 3> R06;
  double RR46[3][3] = {0};

  // Ìî³äŸØÕó
  R03 << cos(arm.theta1) * cos(arm.theta2) * cos(arm.theta3) -
             cos(arm.theta1) * sin(arm.theta2) * sin(arm.theta3),
      -cos(arm.theta1) * cos(arm.theta2) * sin(arm.theta3) -
          cos(arm.theta1) * cos(arm.theta3) * sin(arm.theta2),
      -sin(arm.theta1),
      cos(arm.theta2) * cos(arm.theta3) * sin(arm.theta1) -
          sin(arm.theta1) * sin(arm.theta2) * sin(arm.theta3),
      -cos(arm.theta2) * sin(arm.theta1) * sin(arm.theta3) -
          cos(arm.theta3) * sin(arm.theta1) * sin(arm.theta2),
      cos(arm.theta1),
      -cos(arm.theta2) * sin(arm.theta3) - cos(arm.theta3) * sin(arm.theta2),
      sin(arm.theta2) * sin(arm.theta3) - cos(arm.theta2) * cos(arm.theta3), 0;

  Rx << 1, 0, 0, 0, cos(yaw * pi / 180), -sin(yaw * pi / 180), 0,
      sin(yaw * pi / 180), cos(yaw * pi / 180);
  Ry << cos(pit * pi / 180), 0, sin(pit * pi / 180), 0, 1, 0,
      -sin(pit * pi / 180), 0, cos(pit * pi / 180);
  Rz << cos(roll * pi / 180), -sin(roll * pi / 180), 0, sin(roll * pi / 180),
      cos(roll * pi / 180), 0, 0, 0, 1;

  R06 = Rx * Ry * Rz;

  RRR << 1, 0, 0, 0, 0, 1, 0, -1, 0;

  R36 << R03.inverse() * R06;
  Rzyz = RRR.inverse() * R36;

  // œ«œá¹û×ª»»³ÉÊý×é
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      RR46[i][j] = Rzyz(i, j);
    }
  }

  ////ŽòÓ¡Êý×é
  // std::cout << "RR46:\n";
  // for (int i = 0; i < 3; ++i) {
  //	for (int j = 0; j < 3; ++j) {
  //		if (fabs(RR46[i][j]) < 0.000001)
  //			RR46[i][j] = 0;
  //		std::cout << RR46[i][j] << ' ';
  //	}
  //	std::cout << '\n';
  // }

  arm.theta5 = atan2(sqrt(pow(RR46[2][0], 2) + pow(RR46[2][1], 2)), RR46[2][2]);

  if (fabs(arm.theta5) < 0.00000001) {
    arm.theta5 = 0;
  }

  if (arm.theta5 != 0 && fabs(arm.theta5 - pi) >= 0.0001) {
    arm.theta4 =
        atan2(RR46[1][2] / sin(arm.theta5), RR46[0][2] / sin(arm.theta5));
    arm.theta6 =
        atan2(RR46[2][1] / sin(arm.theta5), -RR46[2][0] / sin(arm.theta5));
  } else if (arm.theta5 == 0) {
    arm.theta4 = 0;
    arm.theta6 = atan2(-RR46[0][1], RR46[0][0]);
  } else if (abs(arm.theta5 - pi) <= 0.001) {
    arm.theta4 = 0;
    arm.theta6 = atan2(RR46[0][1], -RR46[0][0]);
  }

  if (fabs(arm.theta4) < 0.000001)
    arm.theta4 = 0;
  if (fabs(arm.theta6) < 0.000001)
    arm.theta6 = 0;

  result[0] = arm.theta1 * angle;
  result[1] = arm.theta2 * angle;
  result[2] = arm.theta3 * angle;
  result[3] = arm.theta4 * angle;
  result[4] = arm.theta5 * angle;
  result[5] = arm.theta6 * angle;

  std::cout << "motor4" << endl;
  std::cout << round(arm.theta4 * angle) << endl;
  std::cout << "motor5" << endl;
  std::cout << round(arm.theta5 * angle) << endl;
  std::cout << "motor6" << endl;
  std::cout << round(arm.theta6 * angle) << endl;

  return result;
}

/*****Author ¿ÉÒÖ
******ÔË¶¯Ñ§Õýœâ
******ÊäÈë xyzrpy
******Êä³ö ž÷žö¹ØœÚœÇ¶È
*/
void arm_Fk(double theta1, double theta2, double theta3, double theta4,
            double theta5, double theta6, int mode) {
  //                      xÖá×ªœÇ£šÊäÈëÁ¿£© xÖáÏà²îŸàÀë zÖáÏà²îŸàÀë   zÖá Ïà²îœÇ
  double MDH[6][4] = {
      theta1, arm.d1, arm.a0, arm.alpha0, theta2, arm.d2, arm.a1, arm.alpha1,
      theta3, arm.d3, arm.a2, arm.alpha2, theta4, arm.d4, arm.a3, arm.alpha3,
      theta5, arm.d5, arm.a4, arm.alpha4, theta6, arm.d6, arm.a5, arm.alpha5};
  double c1 = cos(MDH[0][0]), s1 = sin(MDH[0][0]);
  double c2 = cos(MDH[1][0]), s2 = sin(MDH[1][0]);
  double c3 = cos(MDH[2][0]), s3 = sin(MDH[2][0]);
  double c4 = cos(MDH[3][0]), s4 = sin(MDH[3][0]);
  double c5 = cos(MDH[4][0]), s5 = sin(MDH[4][0]);
  double c6 = cos(MDH[5][0]), s6 = sin(MDH[5][0]);

  double ca1 = cos(MDH[0][3]), sa1 = sin(MDH[0][3]);
  double ca2 = cos(MDH[1][3]), sa2 = sin(MDH[1][3]);
  double ca3 = cos(MDH[2][3]), sa3 = sin(MDH[2][3]);
  double ca4 = cos(MDH[3][3]), sa4 = sin(MDH[3][3]);
  double ca5 = cos(MDH[4][3]), sa5 = sin(MDH[4][3]);
  double ca6 = cos(MDH[5][3]), sa6 = sin(MDH[5][3]);

  Eigen::Matrix<double, 4, 4> T01;
  Eigen::Matrix<double, 4, 4> T12;
  Eigen::Matrix<double, 4, 4> T23;
  Eigen::Matrix<double, 4, 4> T34;
  Eigen::Matrix<double, 4, 4> T45;
  Eigen::Matrix<double, 4, 4> T56;
  Eigen::Matrix<double, 4, 4> T06;

  double TT06[4][4] = {0};
  T01 << c1, -s1, 0, arm.a0, s1 * ca1, c1 * ca1, -sa1, -sa1 * arm.d1, s1 * sa1,
      c1 * sa1, ca1, ca1 * arm.d1, 0, 0, 0, 1;
  T12 << c2, -s2, 0, arm.a1, s2 * ca2, c2 * ca2, -sa2, -sa2 * arm.d2, s2 * sa2,
      c2 * sa2, ca2, ca2 * arm.d2, 0, 0, 0, 1;
  T23 << c3, -s3, 0, arm.a2, s3 * ca3, c3 * ca3, -sa3, -sa3 * arm.d3, s3 * sa3,
      c3 * sa3, ca3, ca3 * arm.d3, 0, 0, 0, 1;
  T34 << c4, -s4, 0, arm.a3, s4 * ca4, c4 * ca4, -sa4, -sa4 * arm.d4, s4 * sa4,
      c4 * sa4, ca4, ca4 * arm.d4, 0, 0, 0, 1;
  T45 << c5, -s5, 0, arm.a4, s5 * ca5, c5 * ca5, -sa5, -sa5 * arm.d5, s5 * sa5,
      c5 * sa5, ca5, ca5 * arm.d5, 0, 0, 0, 1;
  T56 << c6, -s6, 0, arm.a5, s6 * ca6, c6 * ca6, -sa6, -sa6 * arm.d6, s6 * sa6,
      c6 * sa6, ca6, ca6 * arm.d6, 0, 0, 0, 1;

  T06 = T01 * T12 * T23 * T34 * T45 * T56;

  // œ«œá¹û×ª»»³ÉÊý×é
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      TT06[i][j] = T06(i, j);
    }
  }

  // Êä³öŸØÕóC
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (fabs(TT06[i][j]) < 0.0000001) {
        TT06[i][j] = 0;
      }
      cout << TT06[i][j] << "\t ";
    }
    cout << endl;
  }
  if (mode == 1) {
    for (int i = 0; i < 3; i++) {
      Target[i] = TT06[i][3];
    }
  }
  if (mode == 2) {
    for (int i = 0; i < 3; i++) {
      Target1[i] = TT06[i][3];
    }
  }

  if (mode == 3) {
    for (int i = 0; i < 3; ++i) {
      for (int j = 0; j < 3; ++j) {
        count_R06[i][j] = TT06[i][j];
      }
    }
  }

  return;
}

#endif // SERIAL_PORT_HPP_