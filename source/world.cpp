#include <memory>
#include <vector>
#include "world.h"
#include "evosim.h"
#include "bitmap_image.hpp"

World::World():
world_size_(std::make_pair<int, int>(800, 600))
{
    organism_pool_ = std::make_unique<std::vector<std::unique_ptr<Organism>>>();
}

int
World::LoadMapFile(std::string& file_path)
{
    bitmap_world_ = std::make_unique<bitmap_image>(file_path);

    if (!bitmap_world_)
    {  
        return -1;
    }

   std::cout << "World height: " << bitmap_world_->height() << std::endl;
   std::cout << "World width: " << bitmap_world_->width() << std::endl;

   return 0;
}

void
World::AddOrganismAtRandomLocation(){
    // sort out the randomness later, for now add at fixed position
    organism_pool_->push_back(std::make_unique<Organism>(std::make_pair(1,1), *this));

}

std::pair<int, int>
World::GetWorldSize(){
    return world_size_;
}

std::vector<std::unique_ptr<Organism>>&
World::GetOrganismPool(){
    return *organism_pool_.get();
}