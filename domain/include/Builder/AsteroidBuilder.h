#ifndef SPIC_ASSIGNMENT_REPO_ASTEROIDBUILDER_H
#define SPIC_ASSIGNMENT_REPO_ASTEROIDBUILDER_H

#include "SpaceBodyBuilder.h"
#include "../Asteroid.hpp"

class AsteroidBuilder : public SpaceBodyBuilder {
public:
    AsteroidBuilder();

    void setRadius(int radius) override;
    void setColor(int color) override;
    void setPosition(Vector2 position) override;
    void setVelocity(Vector2 velocity) override;

    SpaceBody* getBody() override;

private:
    Asteroid* currentAsteroid;
};

#endif
