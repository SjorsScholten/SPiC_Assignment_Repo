#include "../../include/Builder/PlanetBuilder.h"

PlanetBuilder::PlanetBuilder() {
    currentPlanet = new Planet {};
}

void PlanetBuilder::setRadius(int radius) {
    currentPlanet->radius = radius;
}

void PlanetBuilder::setColor(int color) {
    currentPlanet->color = color;
}

void PlanetBuilder::setPosition(Vector2 position) {
    currentPlanet->position = position;
}

void PlanetBuilder::setVelocity(Vector2 velocity) {
    currentPlanet->velocity = velocity;
}

void PlanetBuilder::setName(std::string name) {
    currentPlanet->name = name;
}

void PlanetBuilder::addNeighbor(SpaceBody& body) {
    currentPlanet->AddNeighborPlanet(body);
}

SpaceBody* PlanetBuilder::getBody() {
    return currentPlanet;
}
