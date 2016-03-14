//
//  ResourceManager.cpp
//  Game
//
//  Created by Jon Abel on 3/4/16.
//  Copyright © 2016 Jon Abel. All rights reserved.
//

#include "ResourceManager.hpp"

std::unordered_map<std::string, sf::Texture> ResourceManager::textures = std::unordered_map<std::string, sf::Texture>(0);

bool ResourceManager::loadTexture(std::string name)
{
    sf::Texture texture;
    if (texture.loadFromFile("resources/" + name))
    {
        textures.emplace(name, texture);
        return true;
    }
    else return false;
}

sf::Texture& ResourceManager::getTexture(std::string name)
{
    return textures[name];
}