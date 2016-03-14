//
//  EntityManager.cpp
//  Game
//
//  Created by Jon Abel on 3/4/16.
//  Copyright © 2016 Jon Abel. All rights reserved.
//

#include "EntityManager.hpp"

std::vector<Entity> EntityManager::entities;
std::unordered_map<std::string, std::unordered_map<EntityID, Component*> > EntityManager::componentData;
EntityID EntityManager::lowestID = 0;

EntityID EntityManager::getNextID()
{
    if (lowestID < UINT32_MAX)
        return lowestID++;
    else
        return -1;
}

Entity* EntityManager::createEntity()
{
    EntityID id = getNextID();
    Entity* entity = new Entity();
    entity->id = id;
    entities.push_back(*entity);
    return entity;
}

Entity* EntityManager::getEntityByID(EntityID id)
{
    return &entities[id];
}