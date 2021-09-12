#ifndef SPIC_ASSIGNMENT_REPO_SPACEBODYBUILDER_H
#define SPIC_ASSIGNMENT_REPO_SPACEBODYBUILDER_H

#include <string>
#include <vector>

#include "../SpaceBody.hpp"

class SpaceBodyBuilder {
private:
    SpaceBody* spaceBody;

public:
    //SpaceBody build parts
    virtual void setRadius(int radius) {}
    virtual void setColor(int color) {}
    virtual void setPosition(Vector2 position) {}
    virtual void setVelocity(Vector2 velocity) {}
    virtual void setCollisionState(std::string string) {}

    //Planet specific build parts
    virtual void setName(std::string name) {}
    virtual void addNeighbor(SpaceBody& body) {}

    virtual SpaceBody* getBody() { return nullptr; }
};


#endif
