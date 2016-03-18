//
//  SceneManager.cpp
//  Game
//

#include "SceneManager.hpp"

std::unordered_map<std::string, Scene*> SceneManager::_scenes;

void SceneManager::addScene(std::string sceneName, Scene* scene)
{
	_scenes.emplace(sceneName, scene);
}

bool SceneManager::loadScene(std::string sceneName)
{
	return _scenes[sceneName]->load();
}