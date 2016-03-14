//
//  RenderingSystem.hpp
//  Game
//
//  Created by Jon Abel on 3/5/16.
//  Copyright © 2016 Jon Abel. All rights reserved.
//

#ifndef RenderingSystem_hpp
#define RenderingSystem_hpp

#include <SFML/Window.hpp>
#include "../EntitySystem.h"

class RenderingSystem : public System
{
public:
    RenderingSystem(sf::RenderWindow& w);
    void update();
private:
    sf::RenderWindow* window;
};

#endif /* RenderingSystem_hpp */
