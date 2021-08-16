#pragma once
#include "IComponent.h"
#include <string>

class ImageComponent : public IComponent{
protected:
	std::string filepath;
	sf::Texture texture;
	sf::Sprite sprite;
public:
	ImageComponent(std::string filepath, int x = 0, int y = 0, int z = 0);
	sf::Sprite* getSprite();
};