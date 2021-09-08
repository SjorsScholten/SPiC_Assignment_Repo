#include "../include/Planet.hpp"

Planet::Planet(std::string name, int radius, int color, Vector2 position, Vector2 velocity) : name(name), SpaceBody(radius, color, position, velocity) {}

void AddNeighborPlanet(Planet planet) {
    //TODO: add neighbor
}
