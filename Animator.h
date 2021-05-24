#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Gem.h"

class Animator {
public:
	Animator();
	Animator(Gem& gem1);
	Animator(Gem& gem1,Gem& gem2);
	~Animator();

	void GemSwitch();
	void GemFall();
	bool Animation();

private:
	bool IsFall = false;
	bool IsSwitch = false;
	Gem gem1;
	Gem gem2;
	sf::Vector2f pos1;
	sf::Vector2f pos2;

};