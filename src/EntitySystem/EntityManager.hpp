//
//  EntityManager.hpp
//  Game
//

#ifndef EntityManager_hpp
#define EntityManager_hpp

#include "../Types.h"
#include "Entity.hpp"
#include "Components/Component.hpp"
#include <vector>
#include <unordered_map>
#include <string>

class EntityManager
{
public:
    static Entity* createEntity();
    static Entity* getEntityByID(EntityID id);
    template<typename C>
    static void addComponentToEntity(EntityID id)
    {
        C* component = new C();
        if (componentData.find(C::name()) == componentData.end())
            componentData.emplace(C::name(), std::unordered_map<EntityID, Component*> {});
        componentData[C::name()].emplace(id, component);
    }
    template<typename C>
    static void removeComponentFromEntity(EntityID id)
    {
        componentData[C::name()].erase(id);
    }
    template<typename C>
    static C* getComponentFromEntity(EntityID id)
    {
        return static_cast<C*>(componentData[C::name()][id]);
    }
    template<typename C>
    static std::vector<EntityID> getEntitiesWithComponent()
    {
        std::vector<EntityID> result;
        std::unordered_map<EntityID, Component*> tempMap = componentData[C::name()];
        for (auto kv : tempMap)
            result.push_back(kv.first);
        return result;
    }
    
private:
    static std::vector<Entity> entities;
    static std::unordered_map<std::string, std::unordered_map<EntityID, Component*> > componentData;

    static EntityID lowestID;
    static EntityID getNextID();
};

#endif /* EntityManager_hpp */
