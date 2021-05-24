#include "Gem.h"
#include <iostream>
Gem::Gem() {
	SetTexture();
}

Gem::~Gem() {

}

void Gem::SetTexture() {
	sf::Image image;
	image.loadFromFile("../assets/GemGreen.png");
	texture.loadFromImage(image);
	sprite.setTexture(texture);
	
}



void Gem::Render(sf::RenderWindow& renderWindow) {
	renderWindow.draw(sprite);
}

void Gem::SetPosition(const sf::Vector2f l_position) {
	position = l_position;
	sprite.setPosition(l_position);
}