#include <iostream>

#include "base.h"

int main(int argc, char** argv) 
{

    std::cout << "Hello World" << std::endl;
    
    Dog dog;
    std::cout << dog.barking() << std::endl;

    return 0;
}

// cmake -S . -B build