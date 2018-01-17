#include "simulator.h"

#include <string>
#include "world.h"
#include "organism.h"

Simulator::Simulator(World& world)
:world_(world)
{
}

void
Simulator::Simulate(){
    // enter game loop
    while (1)
    {
        Action();
        Render();
    }    
}

void
Simulator::Action(){
    for (auto& organism : world_.organism_pool_){
        organism->Action();
    }
}

void
Simulator::Render(){}