//
//  CameraComponent.cpp
//  Game
//

#include "CameraComponent.hpp"

CameraComponent::CameraComponent()
{
	view.reset(sf::FloatRect(0, 0, 144, 90));
	view.setViewport(sf::FloatRect(0.0f, 0.0f, 1.0f, 1.0f));
}