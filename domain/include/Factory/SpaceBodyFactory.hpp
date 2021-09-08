#ifndef SPIC_ASSIGNMENT_REPO_SPACEBODYFACTORY_HPP
#define SPIC_ASSIGNMENT_REPO_SPACEBODYFACTORY_HPP

#include "../SpaceBody.hpp"

enum class SpaceBodyType{ Planet, Asteroid};

class SpaceBodyFactory {
public:
    virtual SpaceBody* createSpaceBody(SpaceBodyType);
};

#endif
