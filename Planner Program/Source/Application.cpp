#include <filesystem>
#include <iostream>

#include "Board.h"


sf::RenderWindow window(sf::VideoMode(1080, 720), "Planner");

void loop(){
	sf::Clock clock;
	sf::Time timeElapsed;
	const unsigned int oneSecond = 1000;
	const unsigned int targetUPS = 25;
	const unsigned int targetFPS = 60;

	Board board();

	while(window.isOpen()) {

	}
}

void update() {
	sf::Event event;
	while(window.pollEvent(event)) {
		switch(event.type) {
			case sf::Event::Closed:
				window.close();
				break;
		}
	}
}

int main() {
	loop();

	return 0;
}
