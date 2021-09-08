#ifndef SPIC_ASSIGNMENT_REPO_PLANET_HPP
#define SPIC_ASSIGNMENT_REPO_PLANET_HPP

#include <vector>

#include "SpaceBody.hpp"

class Planet : public SpaceBody {
public:
    Planet(std::string name, int radius, int color, Vector2 position, Vector2 velocity);

    void AddNeighborPlanet(Planet planet);

private:
    std::string name;
    std::vector<Planet> neighbours;
};

#endif
