#include <memory>
#include "world.h"
#include "bitmap_image.hpp"

World::World()
{
}

int
World::LoadMapFile(std::string& file_path)
{
    bitmap_world_ = std::unique_ptr<bitmap_image>(new bitmap_image(file_path));

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
    organism_pool_.push_back(std::unique_ptr<Organism>(new Organism(std::make_pair(1,1))));
}