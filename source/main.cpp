#include <iostream>
#include <memory>
#include <string>
#include "world.h"
#include "simulator.h"

int main()
{
    std::cout << "evosim" << std::endl;

    std::cout << "create world" << std::endl;
    
    std::string file_name =  "../resources/flag_b24.BMP";
    auto MyWorld = World();
    MyWorld.LoadMapFile(file_name);

    std::cout << "populate world" << std::endl;
    MyWorld.AddOrganismAtRandomLocation();

    std::cout << "simulate" << std::endl;
    Simulator MySimulator(MyWorld);
    MySimulator.Simulate();

    return 0;
}