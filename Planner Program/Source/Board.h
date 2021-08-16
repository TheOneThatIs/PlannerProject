#pragma once
#include <SFML/Graphics.hpp>
#include <vector>

#include "Graphics\Components\ImageComponent.h"

class Board {
	sf::RenderWindow window;
	std::vector<IComponent*> components;

public:
	Board(int width, int height, std::string name);

	void render();
	void update();

	sf::RenderWindow* getWindow();
};