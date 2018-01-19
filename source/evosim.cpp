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
}; // will process command line arguments    

int
Evosim::Simulate(){

    running_ = true;

    InitRenderer();
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

    // for (auto& organism : world_->organism_pool_){
    //     organism->Action();
    // }
}

void
Evosim::Render(){
    // clear the window with black color
    window_->clear(sf::Color::Black);

    // draw everything here...
    // window.draw(...);
        sf::CircleShape shape(5);
    shape.setFillColor(sf::Color(150, 50, 250));

    // set a 10-pixel wide orange outline
    shape.setOutlineThickness(1);
    shape.setOutlineColor(sf::Color(250, 150, 100));
   window_->draw(shape);

    // end the current frame
    window_->display();
}

void
Evosim::InitRenderer(){
    std::cout << "create window" << std::endl;
    window_ = std::make_unique<sf::RenderWindow>(sf::VideoMode(800, 600), "evosim");

    // sf::CircleShape shape(5);
    // shape.setFillColor(sf::Color(150, 50, 250));

    // // set a 10-pixel wide orange outline
    // shape.setOutlineThickness(1);
    // shape.setOutlineColor(sf::Color(250, 150, 100));
}

void
Evosim::GameLoop(){
    while (running_){

        Action();
        Render();
    }
}