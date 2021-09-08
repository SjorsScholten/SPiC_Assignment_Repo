#include "../../include/Factory/PlanetFactory.hpp"
#include "../../include/Planet.hpp"

SpaceBody* PlanetFactory::createSpaceBody() {
    return new Planet("planetName", 7, 0x000000, Vector2(), Vector2());
}

