#pragma once
#include "..\IRenderable.h"
#include<string>


class IComponent : public IRenderable {

public:
	IComponent(){}
	virtual void loadFromFile(std::string filepath){}
	virtual sf::Sprite* getSprite() = 0;
};