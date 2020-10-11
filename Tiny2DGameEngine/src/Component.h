#pragma once
#include <memory>
class Entity;

class Component
{
public:
    Entity* owner;
    virtual ~Component();
    virtual void Initialize();
    virtual void Update(float deltaTime);
    virtual void Render();
};

