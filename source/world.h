#ifndef EVOSIM_WORLD_H
#define EVOSIM_WORLD_H

#include <string>
#include <memory>
#include "organism.h"
#include "bitmap_image.hpp"


class World
{
public:
    World();
    int LoadMapFile(std::string& file_path);

    void AddOrganismAtRandomLocation();

    std::unique_ptr<bitmap_image> bitmap_world_;
    std::vector<std::unique_ptr<Organism>> organism_pool_;
};

#endif  /* EVOSIM_WORLD_H */