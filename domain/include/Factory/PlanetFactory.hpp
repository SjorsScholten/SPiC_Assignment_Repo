#ifndef SPIC_ASSIGNMENT_REPO_PLANETFACTORY_HPP
#define SPIC_ASSIGNMENT_REPO_PLANETFACTORY_HPP

#include "SpaceBodyFactory.hpp"

class PlanetFactory : public SpaceBodyFactory{
public:
    SpaceBody* createSpaceBody() override;
};

#endif
