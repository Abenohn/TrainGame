//
//  TransformComponent.cpp
//  Game
//

#include "TransformComponent.hpp"

TransformComponent::TransformComponent()
{
    _position = sf::Vector2f(0, 0);
    _origin = sf::Vector2f(0, 0);
    _scale = sf::Vector2f(1, 1);
    _rotation = 0.0f;
}

void TransformComponent::move(float x, float y)
{
	_position = sf::Vector2f(_position.x + x, _position.y + y);
}

void TransformComponent::move(sf::Vector2f offset)
{
	_position += offset;
}

void TransformComponent::stretch(float x, float y)
{
	_scale = sf::Vector2f(_scale.x + x, _scale.y + y);
}

void TransformComponent::stretch(sf::Vector2f factor)
{
	_scale += factor;
}

void TransformComponent::rotate(double degrees)
{
	_rotation += degrees;
}

void TransformComponent::setPosition(float x, float y)
{
	_position = sf::Vector2f(x, y);
}

void TransformComponent::setPosition(sf::Vector2f position)
{
	_position = position;
}

void TransformComponent::setOrigin(float x, float y)
{
	_origin = sf::Vector2f(x, y);
}

void TransformComponent::setOrigin(sf::Vector2f origin)
{
	_origin = origin;
}

void TransformComponent::setScale(float x, float y)
{
	_scale = sf::Vector2f(x, y);
}

void TransformComponent::setScale(sf::Vector2f scale)
{
	_scale = scale;
}

void TransformComponent::setRotation(double rotation)
{
	_rotation = rotation;
}

sf::Vector2f 	TransformComponent::position() 	{return _position;}
sf::Vector2f 	TransformComponent::origin() 	{return _origin;}
sf::Vector2f 	TransformComponent::scale() 	{return _scale;}
double 			TransformComponent::rotation() 	{return _rotation;}

void TransformComponent::updateSprite(sf::Sprite *sprite)
{
    sprite->setPosition(_position);
    sprite->setOrigin(_origin);
    sprite->setScale(_scale);
    sprite->setRotation(_rotation);
}