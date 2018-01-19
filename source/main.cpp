#include <iostream>
#include <string>
#include "evosim.h"

int main()
{
    std::cout << "evosim" << std::endl;

   // std::cout << "create world" << std::endl;
    
    // std::string file_name =  "../resources/flag_b24.BMP";
    // auto MyWorld = World();
    // MyWorld.LoadMapFile(file_name);

    // std::cout << "populate world" << std::endl;
    // MyWorld.AddOrganismAtRandomLocation();

    // std::cout << "simulate" << std::endl;
    // Simulator MySimulator(MyWorld);
    // MySimulator.Simulate();

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