cmake_minimum_required(VERSION 3.10)
project(test)
set(CMAKE_CXX_STANDARD 17)
find_package(OpenCV REQUIRED)
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
set(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR})
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(test_cpp ${SRC})
target_link_libraries(test_cpp ${OpenCV_LIBS})