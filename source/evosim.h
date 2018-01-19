#ifndef EVOSIM_EVOSIM_H
#define EVOSIM_EVOSIM_H

#include "world.h"
#include <SFML/Graphics.hpp>


class Evosim
{
public:
    Evosim();
    int ProcessArguments();
    int Simulate();
    bool running_;
private:
    void Action();
    void Render();
    void InitRenderer();
    void GameLoop();
    std::unique_ptr<World> world_;
    std::unique_ptr<sf::RenderWindow> window_;
};

#endif /* EVOSIM_EVOSIM_H */