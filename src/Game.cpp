//
//  Game.cpp
//  Game
//
//  Created by Jon Abel on 3/4/16.
//  Copyright © 2016 Jon Abel. All rights reserved.
//

#include <iostream>

#include "Game.hpp"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "EntitySystem/EntitySystem.h"
#include "ResourceManager.hpp"

int Game::run()
{   
    ResourceManager::loadTexture("Background.png");
    ResourceManager::loadTexture("Trains.png");

    sf::RenderWindow window(sf::VideoMode(2560, 1600), "Game as Fuck", sf::Style::Fullscreen);
    window.setFramerateLimit(60);
    window.setVerticalSyncEnabled(true);

    SpriteComponent* scp;
    TransformComponent* tcp;

    Entity* e1 = EntityManager::createEntity();
    EntityManager::addComponentToEntity<TransformComponent>(e1->id);
    EntityManager::addComponentToEntity<SpriteComponent>(e1->id);
    scp = EntityManager::getComponentFromEntity<SpriteComponent>(e1->id);
    scp->sprite.setTexture(ResourceManager::getTexture("Background.png"));
    
    Entity* e2 = EntityManager::createEntity();
    EntityManager::addComponentToEntity<TransformComponent>(e2->id);
    EntityManager::addComponentToEntity<SpriteComponent>(e2->id);
    scp = EntityManager::getComponentFromEntity<SpriteComponent>(e2->id);
    scp->sprite.setTexture(ResourceManager::getTexture("Trains.png"));
    scp->sprite.setTextureRect(sf::IntRect(0, 0, 16, 64));
    tcp = EntityManager::getComponentFromEntity<TransformComponent>(e2->id);
    tcp->setScale(sf::Vector2f(5, 5));

    RenderingSystem renderSystem(window);
    
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
                case sf::Event::Closed:
                    window.close();
                    break;
                    
                default:
                    break;
            }
        }
        
        window.clear(sf::Color::White);

        renderSystem.update();
                
        window.display();
    }
    
    return EXIT_SUCCESS;
}