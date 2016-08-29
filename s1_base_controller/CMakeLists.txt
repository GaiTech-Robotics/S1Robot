cmake_minimum_required(VERSION 2.8.3)
project(s1_base_controller)

find_package(catkin REQUIRED COMPONENTS
  urdf
  roscpp
  rospy
  std_msgs
  sensor_msgs
  nav_msgs
  geometry_msgs
  tf
  rosconsole
)


###################################
## catkin specific configuration ##
###################################
## The catkin_package macro generates cmake config files for your package
## Declare things to be passed to dependent projects
## INCLUDE_DIRS: uncomment this if you package contains header files
## LIBRARIES: libraries you create in this project that dependent projects also need
## CATKIN_DEPENDS: catkin_packages dependent projects also need
## DEPENDS: system dependencies of this project that dependent projects also need
catkin_package(

)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
# include_directories(include)
include_directories(
#  include
  ${catkin_INCLUDE_DIRS}
)

## Declare a C++ executable
 add_executable(s1_base_controller_node_test src/s1_base_controller_node_test.cpp)
 target_link_libraries(s1_base_controller_node_test
   ${catkin_LIBRARIES}
 )
 add_executable(subSpeedpubOdom src/subSpeedpubOdom.cpp )
 target_link_libraries(subSpeedpubOdom
   ${catkin_LIBRARIES}
 )
 add_executable(laserScanpub src/laserScanpub.cpp )
 target_link_libraries(laserScanpub
   ${catkin_LIBRARIES}
 )
 add_executable(odom_publisher src/myodompub.cpp )
 target_link_libraries(odom_publisher
   ${catkin_LIBRARIES}
 )
 add_executable(parser src/parser.cpp )
 target_link_libraries(parser
   ${catkin_LIBRARIES}
 )
