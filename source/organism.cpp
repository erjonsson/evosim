#include "organism.h"

Organism::Organism(){

}

Organism::Organism(std::pair<int, int> position)
: position_(position)
{
}

void
Organism::SetPosition(std::pair<int, int> position){
    position_ = position;
}