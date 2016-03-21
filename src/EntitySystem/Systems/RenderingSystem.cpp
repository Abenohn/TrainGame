//
//  RenderingSystem.cpp
//  Game
//

#include "RenderingSystem.hpp"
#include "../../Types.h"

RenderingSystem::RenderingSystem(sf::RenderWindow& w)
{
	window = &w;
}

void RenderingSystem::update()
{
	sf::View view = EntityManager::getComponentFromEntity<CameraComponent>(2)->view;
	window->setView(view);
	std::vector<EntityID> entities = EntityManager::getEntitiesWithComponent<SpriteComponent>();
	for (EntityID id : entities)
	{
		if (EntityManager::getComponentFromEntity<TransformComponent>(id) != NULL)
		{
			TransformComponent* tcp = EntityManager::getComponentFromEntity<TransformComponent>(id);
			SpriteComponent* scp = EntityManager::getComponentFromEntity<SpriteComponent>(id);
			tcp->updateSprite(&scp->sprite);
			window->draw(scp->sprite);
		}
	}
}