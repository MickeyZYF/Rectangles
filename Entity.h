//
// Created by Mickey Zhou on 2021-06-15.
//
#include <iostream>
#include <string>
#include <vector>
#include "Rectangle2D.h"

#ifndef ENTITY_H
#define ENTITY_H

class Component
{
public:
    virtual ~Component() = default;
    // You may add to the interface.

    // Probably something to check if two things are the same
};

// A few basic Components. Entities can have up to one of each Component type.
// Assume they will have more methods, and there will be more Components: those
// details are not important for this test.
// Add anything needed to support your implementation.
class HealthComponent : public Component
{
private:
    int m_health = 0;
};
class AttackComponent : public Component
{
private:
    unsigned int m_attackPower = 0;
};
class MovementComponent : public Component
{
private:
    float m_speed = 0;
};

class Entity
{
    // TODO: Add:
    // - A Rectangle2D bounding-box.
    // - A collection of Components.
    // - An implementation to make Entity copyable.

    // Above says add a collection of Components, so might not have to worry about adding individual Components for now
    // If I want this to be fully featured, I should add checks to see if a component subclass already exists in the
    // entity, something along of the linea of InstantOf checks, and decide whether to reject or replace the component
private:
    Rectangle2D boundingBox;
    std::vector<Component *> components;

public:
    // Contructors
    // May want to consider adding other constructors like initialize with boundingbox but default component
    // and vice versa
    Entity();
    Entity(Rectangle2D boundingBox, std::vector<Component *>);
    Entity(const Entity &original);

    Rectangle2D getboundingBox(){ return boundingBox;};
    std::vector<Component *> getComponents(){ return components;};
    void addComponents(std::vector<Component *> components);
};

#endif
