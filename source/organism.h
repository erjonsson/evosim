#ifndef EVOSIM_ORGANISM_H
#define EVOSIM_ORGANISM_H
#include <string>
#include <utility>
//#include "world.h" //why doesnt this work?
class World;
class Organism{
public:
    Organism(std::pair<int, int> position, World& world);

    void Action();
    void SetPosition(std::pair<int, int> position);
    
private:
    int age_;
    std::string dna_;
    std::pair<int, int> position_; // x, y
    World& world_;

    // movement
    // sensors
    // reproduction
};
#endif /* EVOSIM_ORGANISM_H */

