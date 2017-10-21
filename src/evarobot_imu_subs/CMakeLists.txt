cmake_minimum_required(VERSION 2.8.3)
project(evarobot_imu_subs)

find_package(catkin REQUIRED COMPONENTS
  sensor_msgs
  roscpp
  rospy
)

catkin_package()

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(imu_listener src/imu_listener.cpp)
add_dependencies(imu_listener sensor_msgs_generate_messages_cpp)
 target_link_libraries(imu_listener
   ${catkin_LIBRARIES}
 )
