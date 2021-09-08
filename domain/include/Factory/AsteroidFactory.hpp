#ifndef SPIC_ASSIGNMENT_REPO_ASTEROIDFACTORY_HPP
#define SPIC_ASSIGNMENT_REPO_ASTEROIDFACTORY_HPP

#include "SpaceBodyFactory.hpp"

class AsteroidFactory : public SpaceBodyFactory{
public:
    SpaceBody* createSpaceBody() override;

};

#endif
