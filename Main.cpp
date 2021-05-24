#include "Game.h"


int main(void) {

	Game game;
	
	game.CreateMap();
	while (!game.GetWindow()->IsDone()) {
		game.Input();
		game.Update();
		game.Render();
	}

	return 0;
}