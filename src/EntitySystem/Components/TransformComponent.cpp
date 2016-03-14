//
//  TransformComponent.cpp
//  Game
//
//  Created by Jon Abel on 3/7/16.
//  Copyright © 2016 Jon Abel. All rights reserved.
//

#include "TransformComponent.hpp"

TransformComponent::TransformComponent()
{
    position = sf::Vector2f(0, 0);
    origin = sf::Vector2f(0, 0);
    scale = sf::Vector2f(1, 1);
    rotation = 0.0f;
}

void TransformComponent::updateSprite(sf::Sprite *sprite)
{
    sprite->setPosition(position);
    sprite->setOrigin(origin);
    sprite->setScale(scale);
    sprite->setRotation(rotation);
}