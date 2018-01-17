#ifndef EVOSIM_SIMULATOR_H
#define EVOSIM_SIMULATOR_H

#include "world.h"

class Simulator
{
public:
    Simulator(World& world);
    void Simulate();
private:
    void Action();
    void Render();
    World& world_;
};

#endif /* EVOSIM_SIMULATOR_H */