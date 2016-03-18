//
//  GameScene.cpp
//  Game
//

#include "GameScene.hpp"
#include "../EntitySystem/EntitySystem.h"
#include "../ResourceManager.hpp"

bool GameScene::load()
{
	ResourceManager::loadTexture("Background.png");
	Entity* background = EntityManager::createEntity();
	EntityManager::addComponentToEntity<TransformComponent>(background->id);
	EntityManager::addComponentToEntity<SpriteComponent>(background->id);
	EntityManager::getComponentFromEntity<SpriteComponent>(background->id)->sprite.setTexture(ResourceManager::getTexture("Background.png"));
	
	ResourceManager::loadTexture("Trains.png");
	Entity* train = EntityManager::createEntity();
	EntityManager::addComponentToEntity<TransformComponent>(train->id);
	EntityManager::addComponentToEntity<SpriteComponent>(train->id);
	EntityManager::getComponentFromEntity<SpriteComponent>(train->id)->sprite.setTexture(ResourceManager::getTexture("Trains.png"));
	EntityManager::getComponentFromEntity<SpriteComponent>(train->id)->sprite.setTextureRect(sf::IntRect(0, 0, 16, 64));
	EntityManager::getComponentFromEntity<TransformComponent>(train->id)->stretch(5, 5);
	
	return true;
}

bool GameScene::unload()
{
	return true;
}