#pragma once
#include "Window.h"
#include "Gem.h"
#include "GameObject.h"
#include "TextBox.h"
#include "Button.h"
#include <iostream>


class Game {
public:
	Game();
	~Game();

	void Input();
	void Update();
	void Render();

	sf::Time GetElapsedTime();
	void RestartClock();
	void CreateMap();
	void CreateUI();

	Window* GetWindow();

private:
	Window window;
	sf::Clock clock;
	float elapsed;
	GameObject *gameObjects[100];
};