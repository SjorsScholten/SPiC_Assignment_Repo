#ifndef SPIC_ASSIGNMENT_REPO_SPACEBODYFACTORY_HPP
#define SPIC_ASSIGNMENT_REPO_SPACEBODYFACTORY_HPP

#include "../SpaceBody.hpp"

class SpaceBodyFactory {
public:
    virtual SpaceBody* createSpaceBody();
};

#endif
