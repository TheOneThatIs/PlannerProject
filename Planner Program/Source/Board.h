#pragma once
#include <SFML/Graphics.hpp>

class Board {
	sf::RenderWindow* window;
public:
	Board();
	
	void update();
};