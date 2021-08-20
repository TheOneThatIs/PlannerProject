#include"Board.h"
#include<iostream>


Board::Board(int width, int height, std::string name) : window(sf::VideoMode(width, height), name) {
	components.emplace_back(new ImageComponent("Resources/Textures/TestImage.png", 10, 200));
}

void Board::render() {
	window.clear();

	window.draw(*components[0]->getSprite());

	window.display();
}

void Board::update() {
	sf::Event event;
	while(window.pollEvent(event)) {
		switch(event.type) {
			for(int i = 0; i <= components.size(); i++) {
				components[i]->update();
			}
			case sf::Event::Closed:
				window.close();
				break;
		}
	}
}

sf::RenderWindow* Board::getWindow() {
	return &window;
}