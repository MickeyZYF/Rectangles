//
// Created by Mickey Zhou on 2021-06-15.
//

#include <iostream>
#include <string>
#include <vector>
#include "Rectangle2D.h"
#include "Entity.h"

// Default Constructor
Entity::Entity()
{
    boundingBox = Rectangle2D();
    components = std::vector<Component *>();
}

// Basic Constructor
Entity::Entity(Rectangle2D boundingBox, std::vector<Component *> components)
{
    this->boundingBox = boundingBox;
    this->components = std::move(components);
}

// Copy Constructor
Entity::Entity(const Entity &original)
{
    boundingBox = original.boundingBox;
    components = original.components;
}

// Takes a vector of Components and moves it into an Entity
void Entity::addComponents(std::vector<Component *> components)
{
    this->components = std::move(components);
}

// Test all three constructor and adding
/*int main()
{
    // Default Constructor
    Entity entityA = Entity();

    // Basic Constructor
    Rectangle2D boundingBox = Rectangle2D(2, 1, 0, 0);
    std::vector<Component *> components;
    components.emplace_back(new HealthComponent());
    components.emplace_back(new AttackComponent());
    components.emplace_back(new MovementComponent());
    Entity entityB = Entity(boundingBox, components);

    // Check amount of components in B
    int componentSizeB = static_cast<int>(entityB.getComponents().size());
    printf("EntityB has %d components\n", componentSizeB);

    // Copy Constructor
    Entity entityC = Entity(entityB);

    // Check amount of components in C
    int componentSizeC = static_cast<int>(entityC.getComponents().size());
    printf("EntityC has %d components\n", componentSizeC);

    entityA.addComponents(components);

    // Check amount of components in A
    int componentSizeA = static_cast<int>(entityA.getComponents().size());
    printf("EntityA has %d components\n", componentSizeA);

    // free allocated memory
    for (int i = 0; i < components.size(); i++)
    {
        delete components[i];
    }

    // empty container
    components.clear();

    // free allocated memory
    for (int i = 0; i < entityA.getComponents().size(); i++)
    {
        delete entityA.getComponents()[i];
    }

    // empty container
    entityA.getComponents().clear();

    // free allocated memory
    for (int i = 0; i < entityB.getComponents().size(); i++)
    {
        delete entityB.getComponents()[i];
    }

    // empty container
    entityB.getComponents().clear();

    // free allocated memory
    for (int i = 0; i < entityC.getComponents().size(); i++)
    {
        delete entityC.getComponents()[i];
    }

    // empty container
    entityC.getComponents().clear();
    return 0;
}*/
