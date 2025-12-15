// #include <iostream>

#include "function_template.h"

int main(int argc, char** argv) 
{
    spdlog::set_level(spdlog::level::debug);

    spdlog::info("This is Fun_Template");
    test();

    
    return 0;
}

// cmake -S . -B build