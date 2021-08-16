#include"Board.h"
#include<iostream>


Board::Board(int width, int height, std::string name) : window(sf::VideoMode(1080, 720), "Planner") {
	ImageComponent imageComp("Resources/Textures/TestImage.png", 500, 200);
	components.push_back(new ImageComponent("Resources/Textures/TestImage.png", 500, 200));
	components.back()->getFilepath();
}

void Board::render() {
	
}

void Board::update() {
	sf::Event event;
	while(window.pollEvent(event)) {
		switch(event.type) {
			case sf::Event::Closed:
				window.close();
				break;
		}
	}
}

sf::RenderWindow* Board::getWindow() {
	return &window;
}