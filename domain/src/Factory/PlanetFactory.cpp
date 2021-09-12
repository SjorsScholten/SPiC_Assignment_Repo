#include "../../include/Factory/PlanetFactory.hpp"
#include "../../include/Planet.hpp"

SpaceBody* PlanetFactory::createSpaceBody() {
    return new Planet{};
}

