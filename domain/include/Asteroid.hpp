#ifndef SPIC_ASSIGNMENT_REPO_ASTEROID_HPP
#define SPIC_ASSIGNMENT_REPO_ASTEROID_HPP

#include "SpaceBody.hpp"

class Asteroid : public SpaceBody {
public:
    Asteroid(Vector2 position, Vector2 velocity) : SpaceBody{5, 0xFFFFFF, position, velocity} {}
};

#endif
