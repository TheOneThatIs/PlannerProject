#include <filesystem>
#include <iostream>

#include "Board.h"


void update() {
	
}

int main() {
	Board board(720, 428, "Planner Program");

	while(board.getWindow()->isOpen()) {
		board.update();
		board.render();
	}

	return 0;
}
