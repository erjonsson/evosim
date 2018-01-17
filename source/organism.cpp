#include "organism.h"
#include "world.h"

Organism::Organism(std::pair<int, int> position, World& world):
position_(position),
world_(world)
{}

void
Organism::SetPosition(std::pair<int, int> position){
    position_ = position;
}

void
Organism::Action(){

}