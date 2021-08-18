#pragma once
#include"IComponent.h"


class ButtonComponent: public IComponent {
	int width, height;
	sf::Color color;
public:
	ButtonComponent(int width, int height, sf::Color color);
	ButtonComponent(int width, int height, std::string textureFilepath);
	ButtonComponent(std::string texPath);

	void update();
};