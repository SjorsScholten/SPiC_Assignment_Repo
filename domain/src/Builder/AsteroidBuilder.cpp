#include "../../include/Builder/AsteroidBuilder.h"

AsteroidBuilder::AsteroidBuilder() {
    currentAsteroid = new Asteroid {};
}

void AsteroidBuilder::setRadius(int radius) {
    currentAsteroid->radius = radius;
}

void AsteroidBuilder::setColor(int color) {
    currentAsteroid->color = color;
}

void AsteroidBuilder::setPosition(Vector2 position) {
    currentAsteroid->position = position;
}

void AsteroidBuilder::setVelocity(Vector2 velocity) {
    currentAsteroid->velocity = velocity;
}

SpaceBody* AsteroidBuilder::getBody() {
    return currentAsteroid;
}