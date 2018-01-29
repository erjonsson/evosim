#include <iostream>
#include <string>
#include "evosim.h"

int main()
{
    std::cout << "evosim" << std::endl;

    int exit_code = 1;

    auto evosim = Evosim();
    
    // Process command line arguments
    exit_code = evosim.ProcessArguments();
    
    if (exit_code == 0){
        exit_code = evosim.Simulate();
    }
    
    // return our exit code
    return exit_code;

    return 0;
}