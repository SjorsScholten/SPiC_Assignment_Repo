#include "../include/SpaceBody.hpp"

SpaceBody::SpaceBody(int radius, int color, Vector2 position, Vector2 velocity)
: radius(radius), color(color), position(position), velocity(velocity) {}

void SpaceBody::move() {
    //position += velocity * Time.deltaTime;
}