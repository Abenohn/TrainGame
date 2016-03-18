//
//  SpriteComponent.hpp
//  Game
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
