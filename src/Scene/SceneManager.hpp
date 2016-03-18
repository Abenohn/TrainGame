//
//  SceneManager.hpp
//  Game
//

#ifndef SceneManager_hpp
#define SceneManager_hpp

#include <unordered_map>
#include <string>
#include "Scene.hpp"

class SceneManager
{
public:
	static void addScene(std::string sceneName, Scene* scene);
	static bool loadScene(std::string sceneName);
private:
	static std::unordered_map<std::string, Scene*> _scenes;
};

#endif /* SceneManager_hpp */