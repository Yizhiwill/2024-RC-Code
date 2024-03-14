cmake_minimum_required(VERSION 3.8)
project(Kinesiology_arm_rclcpp)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})
find_package(base_interfaces REQUIRED
        PATHS /home/vol/willgit/GxxArm_ws/install/base_interfaces
        NO_DEFAULT_PATH)

#---------------------NODE-----------------------
add_executable(arm_FK_server src/arm_FK_server.cpp
        /home/vol/willgit/GxxArm_ws/src/kinesiology_arm_rclcpp/include/kinesiology_arm_rclcpp/Kinesiology_arm.hpp)
target_include_directories(arm_FK_server PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_compile_features(arm_FK_server PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
        arm_FK_server
        base_interfaces
        "rclcpp"
        "Eigen3"
)

install(TARGETS arm_FK_server
        DESTINATION lib/${PROJECT_NAME})

#---------------------NODE-----------------------
add_executable(arm_FK_client src/arm_FK_client.cpp
        /home/vol/willgit/GxxArm_ws/src/kinesiology_arm_rclcpp/include/kinesiology_arm_rclcpp/Kinesiology_arm.hpp)
target_include_directories(arm_FK_client PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_compile_features(arm_FK_client PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
        arm_FK_client
        base_interfaces
        "rclcpp"
        "Eigen3"
)

install(TARGETS arm_FK_client
        DESTINATION lib/${PROJECT_NAME})

#---------------------NODE-----------------------
add_executable(arm_IK_client src/arm_IK_client.cpp
        /home/vol/willgit/GxxArm_ws/src/kinesiology_arm_rclcpp/include/kinesiology_arm_rclcpp/Kinesiology_arm.hpp)
target_include_directories(arm_IK_client PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_compile_features(arm_IK_client PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
        arm_IK_client
        base_interfaces
        "rclcpp"
        "Eigen3"
)

install(TARGETS arm_IK_client
        DESTINATION lib/${PROJECT_NAME})

#---------------------NODE-----------------------
add_executable(arm_IK_server src/arm_IK_server.cpp
        /home/vol/willgit/GxxArm_ws/src/kinesiology_arm_rclcpp/include/kinesiology_arm_rclcpp/Kinesiology_arm.hpp)
target_include_directories(arm_IK_server PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_compile_features(arm_IK_server PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
        arm_IK_server
        base_interfaces
        "rclcpp"
        "Eigen3"
)

install(TARGETS arm_IK_server
        DESTINATION lib/${PROJECT_NAME})
#-------------------------------------------------------------------------------------------------------
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME})

#-------------------------------------------------------------------------------------------------------
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
