cmake_minimum_required(VERSION 3.20)
project(template_project)

# 指定源文件路径
set(SRC_LIST src/base.cpp)

# add_library(TemplateLib ${SRC_LIST})

# 编译可执行文件
add_executable(app main.cpp ${SRC_LIST})
# 指定头文件路径
target_include_directories(app PRIVATE ${PROJECT_SOURCE_DIR}/include)


# message(STATUS "PROJECT_NAME: ${PROJECT_NAME}")
# message(STATUS "PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
# message(STATUS "PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")

