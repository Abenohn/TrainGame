//
//  CameraComponent.hpp
//  Game
//

#ifndef CameraComponent_hpp
#define CameraComponent_hpp

#include "../EntitySystem.h"
#include <SFML/Graphics.hpp>

class CameraComponent : public Component
{
public:
	static std::string name() {return "CameraComponent";}

	CameraComponent();

	sf::View view;
};

#endif /* CameraComponent_hpp */