cmake_minimum_required(VERSION 3.20)
project(template_project)

set(CMAKE_PREFIX_PATH $ENV{HOME}/.local ${CMAKE_PREFIX_PATH})
message(STATUS "配置路径: ${CMAKE_PREFIX_PATH}")
message(STATUS "系统默认:${CMAKE_SYSTEM_PREFIX_PATH}")
message(STATUS "环境变量:$ENV{PKG_CONFIG_PATH}")

# 生成compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 构建库
set(SRC_LIST src/base.cpp)  # 指定源文件路径
add_library(MyLib ${SRC_LIST})
# 库:指定头文件路径
target_include_directories(MyLib PUBLIC ${PROJECT_SOURCE_DIR}/include) 

# 添加库
find_package(zenohc REQUIRED)
find_package(zenohcxx REQUIRED)

# 编译可执行文件
add_executable(app main.cpp)

# 可执行文件:指定头文件路径
target_include_directories(app PRIVATE ${PROJECT_SOURCE_DIR}/include)

# 链接 用到的库
target_link_libraries(app PUBLIC MyLib zenohcxx::zenohc)




