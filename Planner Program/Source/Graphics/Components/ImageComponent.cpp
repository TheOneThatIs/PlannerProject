#include "ImageComponent.h"
#include<iostream>


ImageComponent::ImageComponent(std::string filepath, int x, int y, int z) : filepath("") {
	this->x = x;
	this->y = y;
	this->z = z;

	if(!texture.loadFromFile(filepath))
		std::cout << "Could not open file" << std::endl;
	sprite.setTexture(texture);
	sprite.setPosition(x, y);
}

sf::Sprite* ImageComponent::getSprite() {
	return &sprite;
}