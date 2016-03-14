//
//  ResourceManager.hpp
//  Game
//
//  Created by Jon Abel on 3/4/16.
//  Copyright © 2016 Jon Abel. All rights reserved.
//

#ifndef ResourceManager_hpp
#define ResourceManager_hpp

#include <SFML/Graphics.hpp>
#include <unordered_map>

class ResourceManager
{
public:
    static bool loadTexture(std::string name);
    static sf::Texture& getTexture(std::string name);
private:
    static std::unordered_map<std::string, sf::Texture> textures;
};

#endif /* ResourceManager_hpp */
