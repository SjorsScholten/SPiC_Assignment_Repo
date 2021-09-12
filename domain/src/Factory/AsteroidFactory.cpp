#include "../../include/Factory/AsteroidFactory.hpp"
#include "../../include/Asteroid.hpp"

SpaceBody* AsteroidFactory::createSpaceBody(){
    return new Asteroid{};
}

