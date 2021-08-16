#include "ImageComponent.h"


ImageComponent::ImageComponent(std::string filepath, int x, int y, int z) : filepath("") {
	this->x = x;
	this->y = y;
	this->z = z;
	this->filepath = filepath;
}

std::string ImageComponent::getFilepath() {
	return filepath;
}