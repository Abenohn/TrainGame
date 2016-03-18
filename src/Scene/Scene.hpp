//
//  Scene.hpp
//  Game
//

#ifndef Scene_hpp
#define Scene_hpp

class Scene
{
public:
	virtual bool load() = 0;
	virtual bool unload() = 0;
};

#endif /* Scene_hpp */