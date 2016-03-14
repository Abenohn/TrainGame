//
//  TransformComponent.hpp
//  Game
//
//  Created by Jon Abel on 3/7/16.
//  Copyright © 2016 Jon Abel. All rights reserved.
//

#ifndef TransformComponent_hpp
#define TransformComponent_hpp

#include <SFML/Graphics.hpp>
#include "../EntitySystem.h"

class TransformComponent : public Component
{
public:
    static std::string name() {return "TransformComponent";}
    
    TransformComponent();
    
    sf::Vector2f position;
    sf::Vector2f origin;
    sf::Vector2f scale;
    double rotation;
    
    void updateSprite(sf::Sprite* sprite);
};

#endif /* TransformComponent_hpp */
