#include "organism.h"
#include "world.h"
#include <SFML/Graphics.hpp>

#include <memory>

Organism::Organism(std::pair<int, int> position, World& world):
position_(position),
world_(world),
draw_object_(std::make_unique<sf::CircleShape>(5))
{}

void
Organism::SetPosition(std::pair<int, int> position){
    position_ = position;
}

void
Organism::Action(){
    if (position_.first < world_.GetWorldSize().first ){
        position_.first++;
    }
    else{
        position_.first = 0;
    }

    draw_object_->setPosition(position_.first, position_.second);
}

sf::CircleShape&
Organism::GetDrawObject(){
    return *draw_object_.get();
}