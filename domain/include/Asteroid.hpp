#ifndef SPIC_ASSIGNMENT_REPO_ASTEROID_HPP
#define SPIC_ASSIGNMENT_REPO_ASTEROID_HPP

#include "SpaceBody.hpp"

class Asteroid : public SpaceBody {
public:
    Asteroid(Vector2 position, Vector2 velocity);

private:
    const int radius = 5;
    const int color = 0xFFFFFF;
};

#endif
