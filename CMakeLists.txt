cmake_minimum_required(VERSION 3.3)
project(OpenCV_Project)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
include_directories( ${OpenCV_INCLUDE_DIRS} )

FIND_PACKAGE( OpenCV REQUIRED )
set(OpenCV_FOUND TRUE)

set(SOURCE_FILES main.cpp)
add_executable(OpenCV_Project ${SOURCE_FILES})
target_link_libraries( OpenCV_Project ${OpenCV_LIBS} )
