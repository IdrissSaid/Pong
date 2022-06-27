#include "game.h"

int main(void)
{
	srand((unsigned int) time(NULL));

	Game game;

	while (game.isRunning()) {
		game.update();
		game.render();
	}

	return 0;
}
