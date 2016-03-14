//
//  SpriteComponent.hpp
//  Game
//
//  Created by Jon Abel on 3/4/16.
//  Copyright © 2016 Jon Abel. All rights reserved.
//

#ifndef SpriteComponent_hpp
#define SpriteComponent_hpp

#include <SFML/Graphics.hpp>
#include "../EntitySystem.h"

class SpriteComponent : public Component
{
public:
    static std::string name() {return "SpriteComponent";}
    
    SpriteComponent();
    sf::Sprite sprite;
};

#endif /* SpriteComponent_hpp */
