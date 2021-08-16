#include"Board.h"
#include<iostream>


Board::Board(int width, int height, std::string name) : window(sf::VideoMode(width, height), name) {
	components.emplace_back(std::make_unique<IComponent>(ImageComponent("Resources/Textures/TestImage.png", 500, 200)));
}

void Board::render() {
	window.clear();
	
	std::cout << "Width =" << components.back()->getSprite()->getTexture()->getSize().x << std::endl;
	std::cout << "Height = " << components.back()->getSprite()->getTexture()->getSize().y << std::endl;

	//window.draw(*components[0]->getSprite());

	window.display();
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