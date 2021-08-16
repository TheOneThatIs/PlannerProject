#include "ImageComponent.h"


ImageComponent::ImageComponent(std::string filepath, int x, int y, int z) : filepath("") {
	this->x = x;
	this->y = y;
	this->z = z;

}

std::string ImageComponent::getFilepath() {
	return filepath;
}