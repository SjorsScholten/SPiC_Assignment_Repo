#ifndef SPIC_ASSIGNMENT_REPO_PLANETBUILDER_H
#define SPIC_ASSIGNMENT_REPO_PLANETBUILDER_H


#include "SpaceBodyBuilder.h"
#include "../Planet.hpp"

class PlanetBuilder : public SpaceBodyBuilder{
public:
    PlanetBuilder();

    void setRadius(int radius) override;
    void setColor(int color) override;
    void setPosition(Vector2 position) override;
    void setVelocity(Vector2 velocity) override;

    void setName(std::string name) override;
    void addNeighbor(SpaceBody& body) override;

    SpaceBody* getBody() override;

private:
    Planet* currentPlanet;
};


#endif
