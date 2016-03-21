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

				case sf::Event::MouseMoved:
					std::cout << "Mouse moved to: (" << event.mouseMove.x << ", " << event.mouseMove.y << ")\n";
					break;

				case sf::Event::MouseButtonPressed:
					if (event.mouseButton.button == sf::Mouse::Left)
						std::cout << "Mouse Position: (" << event.mouseButton.x << ", " << event.mouseButton.y << ")\n";
					break;
					
				default:
					break;
			}
		}
		
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
			EntityManager::getComponentFromEntity<CameraComponent>(2)->view.move(0, -5);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
			EntityManager::getComponentFromEntity<CameraComponent>(2)->view.move(0, 5);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
			EntityManager::getComponentFromEntity<CameraComponent>(2)->view.move(-5, 0);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
			EntityManager::getComponentFromEntity<CameraComponent>(2)->view.move(5, 0);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Q))
			EntityManager::getComponentFromEntity<CameraComponent>(2)->view.zoom(1.2f);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::E))
			EntityManager::getComponentFromEntity<CameraComponent>(2)->view.zoom(0.8f);
		
		window.clear(sf::Color::White);
		renderSystem.update();
		window.display();
	}
	
	return EXIT_SUCCESS;
}