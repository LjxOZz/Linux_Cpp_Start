#include <iostream>

#include "base.h"
#include "zenoh.hxx"
using namespace zenoh;

int main(int argc, char** argv) 
{

    std::cout << "Hello World" << std::endl;
    
    Dog dog;
    std::cout << dog.barking() << std::endl;

    init_log_from_env_or("error");
    Config config = Config::create_default();
    auto session = Session::open(std::move(config));
    session.put("demo/example/simple", "Simple!");

    return 0;
}

// cmake -S . -B build