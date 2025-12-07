#!/bin/bash

# 定义build目录路径（与你的项目目录对应）
BUILD_DIR="./build"

# 判断执行参数
if [ "$1" = "clean" ]; then
    # 清理模式：删除build目录
    if [ -d "$BUILD_DIR" ]; then
        rm -rf "$BUILD_DIR"
        echo "已删除 $BUILD_DIR 目录及所有内容"
    else
        echo "$BUILD_DIR 目录不存在，无需清理"
    fi
else
    # 编译配置模式：创建build并执行cmake
    echo "===== 开始编译配置 ====="
    # 创建build目录（已存在则不报错）
    mkdir -p "$BUILD_DIR"
    # 进入build目录
    cd "$BUILD_DIR" || {
        echo "进入 $BUILD_DIR 目录失败"
        exit 1
    }
    # 执行cmake配置
    echo "执行 cmake .."
    cmake ..
    # 检查cmake执行结果
    if [ $? -eq 0 ]; then
        echo "cmake配置完成,可在build目录执行make编译"
    else
        echo "cmake配置失败,请检查CMakeLists.txt"
        exit 1
    fi
    # 执行cmake配置
    echo "执行 make .."
    cd build
    make
fi