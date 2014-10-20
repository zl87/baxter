cmake_minimum_required(VERSION 2.8.3)
project(baxter_examples)

find_package(catkin
  REQUIRED
  COMPONENTS
  rospy
  sensor_msgs
  control_msgs
  trajectory_msgs
  cv_bridge
  dynamic_reconfigure
  baxter_core_msgs
  baxter_interface
  roscpp
  roslib 
  tf 
  message_generation 
  pluginlib 
  moveit_core 
  moveit_ros_planning_interface 
  moveit_ros_perception 
  interactive_markers 
  geometry_msgs 
  image_transport
)

catkin_python_setup()

generate_messages(
  DEPENDENCIES
  std_msgs
  geometry_msgs 
  sensor_msgs
  trajectory_msgs
  control_msgs
)

include_directories(include
  ${catkin_INCLUDE_DIRS}
)

generate_dynamic_reconfigure_options(
  cfg/JointSpringsExample.cfg
)

catkin_package(
  CATKIN_DEPENDS
  rospy
  sensor_msgs
  control_msgs
  trajectory_msgs
  cv_bridge
  dynamic_reconfigure
  baxter_core_msgs
  baxter_interface
  roscpp
  roslib 
  tf
  message_runtime
  hardware_interface 
  moveit_ros_move_group 
  geometry_msgs
)

install(
  DIRECTORY scripts/
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
  USE_SOURCE_PERMISSIONS
)

install(
  DIRECTORY launch/
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}/launch
  USE_SOURCE_PERMISSIONS
)

install(
  DIRECTORY share/
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}/share
  USE_SOURCE_PERMISSIONS
)

add_executable(baxter_intro_demo src/baxter_intro_demo.cpp)
target_link_libraries(baxter_intro_demo ${catkin_LIBRARIES})
add_dependencies(baxter_intro_demo baxter_examples_gencpp)

