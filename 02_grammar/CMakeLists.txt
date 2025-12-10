cmake_minimum_required(VERSION 3.20)
project(template_project)


# 生成compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 构建库
set(SRC_LIST src/base.cpp)  # 指定源文件路径
add_library(MyLib ${SRC_LIST})
# 库:指定头文件路径
target_include_directories(MyLib PUBLIC ${PROJECT_SOURCE_DIR}/include)

# 编译可执行文件
add_executable(app main.cpp)

# 可执行文件:头文件路径
target_include_directories(app PRIVATE ${PROJECT_SOURCE_DIR}/include)

# 可执行文件:链接库
target_link_libraries(app PUBLIC MyLib)


# message(STATUS "PROJECT_NAME: ${PROJECT_NAME}")
# message(STATUS "PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
# message(STATUS "PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")

