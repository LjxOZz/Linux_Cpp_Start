# cmake -P test.cmake
# 需要放入CMakeList.txt中运行才能看出来
cmake_minimum_required(VERSION 3.20)

# CMake 搜索包的优先级：CMAKE_PREFIX_PATH > 系统默认路径 > 环境变量

# CMAKE_PREFIX_PATH
set(CMAKE_PREFIX_PATH $ENV{HOME}/.local ${CMAKE_PREFIX_PATH})
message(STATUS "配置路径: ${CMAKE_PREFIX_PATH}")

# 系统默认路径 CMAKE_SYSTEM_PREFIX_PATH
message(STATUS "系统默认:${CMAKE_SYSTEM_PREFIX_PATH}")

# 环境变量 
message(STATUS "环境变量:$ENV{PKG_CONFIG_PATH}")
