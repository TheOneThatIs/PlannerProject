#include <SFML/Graphics.hpp>
#include <filesystem>
#include <iostream>


int main() {
	sf::RenderWindow window(sf::VideoMode(1080, 720), "Planner");

	while(window.isOpen()) {
		sf::Event event;
		while(window.pollEvent(event)) {
			switch(event.type) {
				case sf::Event::Closed:
					window.close();
					break;
			}
		}
	}

	return 0;
}
