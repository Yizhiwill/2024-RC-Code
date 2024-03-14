cmake_minimum_required(VERSION 3.8)
project(serial_com_rclcpp)

if (CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    add_compile_options(-Wall -Wextra -Wpedantic)
endif ()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(base_interfaces REQUIRED
        PATHS /home/vol/willgit/GxxArm_ws/install/base_interfaces
        NO_DEFAULT_PATH)
find_package(serial REQUIRED)

#---------------------NODE-----------------------
add_executable(Serial_ReadPub src/Serial_ReadPub.cpp
        /home/vol/willgit/GxxArm_ws/src/serial_com_rclcpp/include/serial_com_rclcpp/serial_port.hpp)
target_include_directories(Serial_ReadPub PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_compile_features(Serial_ReadPub PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
        Serial_ReadPub
        serial
        "rclcpp"
        "base_interfaces"
)

install(TARGETS Serial_ReadPub
        DESTINATION lib/${PROJECT_NAME})

#---------------------NODE-----------------------
add_executable(Serial_WriteSub src/Serial_WriteSub.cpp
        /home/vol/willgit/GxxArm_ws/src/serial_com_rclcpp/include/serial_com_rclcpp/serial_port.hpp)
target_include_directories(Serial_WriteSub PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_compile_features(Serial_WriteSub PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
        Serial_WriteSub
        serial
        "rclcpp"
        "base_interfaces"
)

install(TARGETS Serial_WriteSub
        DESTINATION lib/${PROJECT_NAME})
# Install launch files.
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME})

#---------------------------------------------

if (BUILD_TESTING)
    find_package(ament_lint_auto REQUIRED)
    # the following line skips the linter which checks for copyrights
    # comment the line when a copyright and license is added to all source files
    set(ament_cmake_copyright_FOUND TRUE)
    # the following line skips cpplint (only works in a git repo)
    # comment the line when this package is in a git repo and when
    # a copyright and license is added to all source files
    set(ament_cmake_cpplint_FOUND TRUE)
    ament_lint_auto_find_test_dependencies()
endif ()

ament_package()
