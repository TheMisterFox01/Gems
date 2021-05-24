#include "Game.h"

Game::Game() : window("Gems", sf::Vector2u(460, 384)) {

}

Game::~Game() {}

Window* Game::GetWindow() { return &window; }

void Game::Update() {
	window.Update();
}

void Game::CreateMap() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			gameObjects[i+j*8] = new Gem;
			gameObjects[i + j * 8]->SetPosition(sf::Vector2f(0 + 48 * i, 0 + 48 * j));
		}
	}
}

void Game::CreateUI() {

}

sf::Time Game::GetElapsedTime() {
	return clock.getElapsedTime();
}

void Game::RestartClock() {
	clock.restart().asSeconds();
}

void Game::Input() {
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
		if (sf::Mouse::getPosition(*window.GetRenderWindow()).x < 384 && sf::Mouse::getPosition(*window.GetRenderWindow()).y < 384) {
			std::cout << "Hello";
		}
	}
}

void Game::Render() {
	window.BeginDraw();
	for (int i = 0; i < 64; i++) {
		gameObjects[i]->Render(*window.GetRenderWindow());
	}
	window.EndDraw();
}