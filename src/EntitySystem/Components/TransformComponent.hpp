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

	void move(float x, float y);
	void move(sf::Vector2f offset);
	void stretch(float x, float y);
	void stretch(sf::Vector2f factor);
	void rotate(double degrees);

	void setPosition(float x, float y);
	void setPosition(sf::Vector2f position);
	void setOrigin(float x, float y);
	void setOrigin(sf::Vector2f origin);
	void setScale(float x, float y);
	void setScale(sf::Vector2f scale);
	void setRotation(double rotation);

	sf::Vector2f position();
	sf::Vector2f origin();
	sf::Vector2f scale();
	double rotation();
	
	void updateSprite(sf::Sprite* sprite);

private:
	sf::Vector2f _position;
	sf::Vector2f _origin;
	sf::Vector2f _scale;
	double _rotation;
};

#endif /* TransformComponent_hpp */
