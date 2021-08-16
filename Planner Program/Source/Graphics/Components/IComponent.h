#pragma once
#include "..\IRenderable.h"
#include<string>


class IComponent : public IRenderable {

public:
	IComponent();
	void loadFromFile(std::string filepath);
};