//
//  Game.cpp
//  Game
//

#include <iostream>

#include "Game.hpp"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "EntitySystem/EntitySystem.h"
#include "Scene/SceneSystem.h"
#include "ResourceManager.hpp"

int Game::run()
{   
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Game as Fuck");
    window.setFramerateLimit(60);
    window.setVerticalSyncEnabled(true);

    GameScene gameScene;
    SceneManager::addScene("Game", &gameScene);
    SceneManager::loadScene("Game");


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