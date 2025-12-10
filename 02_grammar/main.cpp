#include <iostream>

#include "base.h"

using namespace std;


int main(int argc, char** argv) 
{

    cout << "02_grammar" << endl;
    
    Grammar test;
    
    test.barking();
    test.zz_and_yy_test();


    return 0;
}

// cmake -S . -B build