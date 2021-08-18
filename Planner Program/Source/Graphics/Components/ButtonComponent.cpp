#include "ButtonComponent.h"
#include "ImageComponent.h"


ButtonComponent::ButtonComponent(int width, int height, sf::Color color) {
	this->width = width;
	this->height = height;
	this->color = color;
}

ButtonComponent::ButtonComponent(int width, int height, std::string textureFilepath) : color({0, 0, 0}) {
	this->width = width;
	this->height = height;
}

ButtonComponent::ButtonComponent(std::string texPath) {
	// TO BE IMPLEMENTED
}