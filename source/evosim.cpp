#include "evosim.h"

#include <string>
#include "world.h"
#include "organism.h"
#include <SFML/Graphics.hpp>

Evosim::Evosim():running_(false)
{
}

int
Evosim::ProcessArguments(){
    return 0;
};

int
Evosim::Simulate(){

    running_ = true;

    InitRenderer();
    InitWorld();
    GameLoop();

    running_ = false;
}

void
Evosim::Action(){

    // check all the window's events that were triggered since the last iteration of the loop
    sf::Event event;
    while (window_->pollEvent(event))
    {
        // "close requested" event: we close the window
        if (event.type == sf::Event::Closed){
            window_->close();
            running_ = false;
        }
    }

    for (auto& organism : world_->GetOrganismPool()){
        organism->Action();
    }
}

void
Evosim::Render(){
    // clear the window with black color
    window_->clear(sf::Color::Black);

    for (auto& organism : world_->GetOrganismPool()){
        window_->draw(organism->GetDrawObject());
    }

    window_->display();
}

void
Evosim::InitRenderer(){
    std::cout << "create window" << std::endl;
    window_ = std::make_unique<sf::RenderWindow>(sf::VideoMode(800, 600), "evosim");
}

void
Evosim::InitWorld(){
    std::cout << "create world" << std::endl;
    world_ = std::make_unique<World>();
   // world_->LoadMapFile() //do this stuff later

   world_->AddOrganismAtRandomLocation();

}

void
Evosim::GameLoop(){
    while (running_){

        Action();
        Render();
    }
}