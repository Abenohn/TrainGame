//
//  RenderingSystem.cpp
//  Game
//
//  Created by Jon Abel on 3/5/16.
//  Copyright © 2016 Jon Abel. All rights reserved.
//

#include "RenderingSystem.hpp"
#include "../../Types.h"

RenderingSystem::RenderingSystem(sf::RenderWindow& w)
{
    window = &w;
}

void RenderingSystem::update()
{
    std::vector<EntityID> entities = EntityManager::getEntitiesWithComponent<SpriteComponent>();
    for (EntityID id : entities)
    {
        if (EntityManager::getComponentFromEntity<TransformComponent>(id) != NULL)
        {
            TransformComponent* tcp = EntityManager::getComponentFromEntity<TransformComponent>(id);
            SpriteComponent* scp = EntityManager::getComponentFromEntity<SpriteComponent>(id);
            tcp->updateSprite(&scp->sprite);
            window->draw(scp->sprite);
        }
    }
}