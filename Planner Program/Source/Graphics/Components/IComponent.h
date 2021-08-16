#pragma once
#include "..\IRenderable.h"
#include<string>


class IComponent : public IRenderable {

public:
	IComponent(){}
	void loadFromFile(std::string filepath){}
	virtual sf::Sprite* getSprite() { sf::Sprite spr; return &spr; }
};