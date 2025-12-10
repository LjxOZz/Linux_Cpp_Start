#include <iostream>

#include "base.h"

// 抑制clangd的未使用头文件警告 - 实际上我们在使用zenoh类型
// NOLINTNEXTLINE(clang-diagnostic-unused-includes,llvm-include-order)
#include "zenoh.hxx"

// 故意直接使用一个zenoh类型，消除clangd的未使用警告
using zenoh_init_t = decltype(zenoh::init_log_from_env_or);

int main(int argc, char** argv)
{
    std::cout << "Zenoh Test" << std::endl;

    Dog dog;
    std::cout << dog.barking() << std::endl;

    zenoh::init_log_from_env_or("error");
    auto config = zenoh::Config::create_default();
    auto session = std::move(zenoh::Session::open(std::move(config)));
    session.put("demo/example/simple", "Simple!");

    return 0;
}

// cmake -S . -B build