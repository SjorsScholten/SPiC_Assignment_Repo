#ifndef SPIC_ASSIGNMENT_REPO_SPACEBODY_HPP
#define SPIC_ASSIGNMENT_REPO_SPACEBODY_HPP

#include <string>
#include "Vector2.hpp"

class SpaceBody {
public:
    SpaceBody(int radius, int color, Vector2 position, Vector2 velocity) : radius{radius}, color{color}, position{position}, velocity{velocity} {}

    void move();

private:
    int radius;
    int color;
    Vector2 position;
    Vector2 velocity;
};

#endif
