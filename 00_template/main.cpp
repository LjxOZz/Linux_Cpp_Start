// #include <iostream>

#include "spdlog/spdlog.h"

#include "base.h"

int main(int argc, char** argv) 
{
    spdlog::set_level(spdlog::level::debug);

    spdlog::info("This is 00_Template");
    spdlog::info("It have a {1} {0}", "pack", "spdlog");

    Dog dog;
    spdlog::debug("Dog {0}", dog.barking());

    return 0;
}

// cmake -S . -B build