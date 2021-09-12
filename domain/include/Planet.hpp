#ifndef SPIC_ASSIGNMENT_REPO_PLANET_HPP
#define SPIC_ASSIGNMENT_REPO_PLANET_HPP

#include <vector>

#include "SpaceBody.hpp"

class Planet : public SpaceBody {
public:
    std::string name {};
    std::vector<SpaceBody*> neighbours {};

    Planet() {}

    void AddNeighborPlanet(SpaceBody& planet);
};

#endif
