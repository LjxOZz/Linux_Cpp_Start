# 目录

## 00_template

这是一个代码模板

- CMakeList.txt来构建
- include文件夹放头文件
- src文件夹放源文件

### 参考

https://www.bilibili.com/video/BV1xa4y1R7vT/?spm_id_from=333.1007.top_right_bar_window_custom_collection.content.click&vd_source=c66e6183ead1715d20c8afce53b0923b

## 01_zenoh

添加zenoh-cpp库

```
# Bash
cd /home/xxx
mkdir third_party && cd third_party
git clone https://github.com/eclipse-zenoh/zenoh-cpp.git
git clone https://github.com/eclipse-zenoh/zenoh-c.git
rustup update   #安装rust工具链,并且更新

# 构建zenoh-c
cd zenoh-c && mkdir -p build && cd build 
cmake ../
cmake --build . --config Release

# 构建zenoh-c
cd zenoh-c && mkdir -p build && cd build 
cmake -DZENOHC_BUILD_WITH_UNSTABLE_API=true -DZENOHC_BUILD_WITH_SHARED_MEMORY=true ../
cmake --build . --config Release

# 构建zenoh-cpp 
cd zenoh-cpp && mkdir -p build && cd build 
cmake ..  -DCMAKE_INSTALL_PREFIX=~/.local # to build examples only for zenoh-c backend
cmake --build . --target examples 
cmake --install . #安装到了~/.local目录下

# 运行实例测试
# 示例的可执行文件在third_party/zenoh-cpp/build/examples/zenohc目录下
# 示例说明在third_party/zenoh-cpp/examples目录下

```

### 参考

https://github.com/eclipse-zenoh/zenoh-c

# 信息

作者:刘景贤
