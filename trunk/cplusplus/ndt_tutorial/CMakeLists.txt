cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(normal_distributions_transform)

#FIND_PACKAGE(PCL 1.7 REQUIRED)
FIND_PACKAGE(Eigen REQUIRED)

include_directories(/home/liz/ros/perception_pcl_fuerte_unstable/pcl17/include/pcl-1.7)
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})


add_executable(normal_distributions_transform src/normal_distributions_transform.cpp )
target_link_libraries (normal_distributions_transform ${PCL_LIBRARIES})
