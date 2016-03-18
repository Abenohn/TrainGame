//
//  RenderingSystem.hpp
//  Game
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
