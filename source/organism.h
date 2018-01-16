#ifndef EVOSIM_ORGANISM_H
#define EVOSIM_ORGANISM_H
#include <string>
#include <utility>

class Organism{
public:
    Organism();
    Organism(std::pair<int, int> position);
    int age_;
    std::string dna_;
    std::pair<int, int> position_; // x, y
    void SetPosition(std::pair<int, int> position);
    // movement
    // sensors
    // reproduction
};
#endif /* EVOSIM_ORGANISM_H */

