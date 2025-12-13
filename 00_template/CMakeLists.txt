cmake_minimum_required(VERSION 3.20)
project(template_project)

# 添加第三方包的路径
set(CMAKE_PREFIX_PATH $ENV{HOME}/.local ${CMAKE_PREFIX_PATH})

# 生成compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 构建库
set(SRC_LIST src/base.cpp)  # 指定源文件路径
add_library(MyLib ${SRC_LIST})
# 库:指定头文件路径
target_include_directories(MyLib PUBLIC ${PROJECT_SOURCE_DIR}/include)

# 添加库
find_package(spdlog REQUIRED)

# 编译可执行文件
add_executable(app main.cpp)

# 可执行文件:头文件路径
target_include_directories(app PRIVATE ${PROJECT_SOURCE_DIR}/include)

# 可执行文件:链接库
target_link_libraries(app PUBLIC MyLib)
target_link_libraries(app PRIVATE MyLib spdlog::spdlog)

# message(STATUS "PROJECT_NAME: ${PROJECT_NAME}")
# message(STATUS "PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
# message(STATUS "PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")

