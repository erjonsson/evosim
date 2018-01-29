#ifndef EVOSIM_WORLD_H
#define EVOSIM_WORLD_H

#include <string>
#include <memory>
#include "organism.h"
#include "evosim.h"
#include "bitmap_image.hpp"

class Evosim;
class World
{
public:
    World();
    int LoadMapFile(std::string& file_path);

    void AddOrganismAtRandomLocation();
    std::pair<int, int> GetWorldSize();
    std::vector<std::unique_ptr<Organism>>& GetOrganismPool();

private:
    std::unique_ptr<std::vector<std::unique_ptr<Organism>>> organism_pool_;
    std::unique_ptr<bitmap_image> bitmap_world_;
    std::pair<int, int> world_size_;
};

#endif  /* EVOSIM_WORLD_H */