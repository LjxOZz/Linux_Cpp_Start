#include <iostream>
#include <string>

#include "base.h"

using namespace std;

int main(int argc, char** argv) 
{

    std::cout << "02_grammar" << std::endl;
    
    Grammar test;
    
    test.barking();
    test.zz_and_yy_test();


    return 0;
}

// cmake -S . -B build