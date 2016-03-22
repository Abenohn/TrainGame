//
//  CameraComponent.cpp
//  Game
//

#include "CameraComponent.hpp"

CameraComponent::CameraComponent()
{
	_view.reset(sf::FloatRect(0, 0, 144, 90));
	_view.setViewport(sf::FloatRect(0.0f, 0.0f, 1.0f, 1.0f));
}

const sf::View& CameraComponent::view() const
{
	return _view;
}

const sf::Vector2f& CameraComponent::getCenter() const
{
	return _view.getCenter();
}

const sf::Vector2f& CameraComponent::getSize() const
{
	return _view.getSize();
}

float CameraComponent::getRotation() const
{
	return _view.getRotation();
}

const sf::FloatRect& CameraComponent::getViewport() const
{
	return _view.getViewport();
}

void CameraComponent::setCenter(float x, float y)
{
	_view.setCenter(x, y);
}

void CameraComponent::setCenter(const sf::Vector2f& center)
{
	_view.setCenter(center);
}

void CameraComponent::setSize(float x, float y)
{
	_view.setSize(x, y);
}

void CameraComponent::setSize(sf::Vector2f size)
{
	_view.setSize(size);
}

void CameraComponent::setRotation(float angle)
{
	_view.setRotation(angle);
}

void CameraComponent::setViewport(const sf::FloatRect& viewport)
{
	_view.setViewport(viewport);
}

void CameraComponent::move(float xOffset, float yOffset)
{
	_view.move(xOffset, yOffset);
}

void CameraComponent::move(const sf::Vector2f& offset)
{
	_view.move(offset);
}

void CameraComponent::rotate(float angle)
{
	_view.rotate(angle);
}

void CameraComponent::zoom(float factor)
{
	_view.zoom(factor);
}
