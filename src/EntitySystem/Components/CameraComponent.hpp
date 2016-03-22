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

	const sf::View& view() const;
	const sf::Vector2f& getCenter() const;
	const sf::Vector2f& getSize() const;
	float getRotation() const;
	const sf::FloatRect& getViewport() const;

	void setCenter(float x, float y);
	void setCenter(const sf::Vector2f& center);
	void setSize(float x, float y);
	void setSize(sf::Vector2f size);
	void setRotation(float angle);
	void setViewport(const sf::FloatRect& viewport);

	void move(float xOffset, float yOffset);
	void move(const sf::Vector2f& offset);
	void rotate(float angle);
	void zoom(float factor);

private:
	sf::View _view;
};

#endif /* CameraComponent_hpp */