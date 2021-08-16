#pragma once
#include "IComponent.h"
#include <string>

class ImageComponent : public IComponent{
protected:
	std::string filepath;
public:
	ImageComponent(std::string filepath, int x = 0, int y = 0, int z = 0);

	std::string getFilepath();
};