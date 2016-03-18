//
//  ResourceManager.cpp
//  Game
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