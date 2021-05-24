#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
class GameObject {
public:

	sf::Vector2f GetPosition();
	virtual void Render(sf::RenderWindow& renderWindow);
	virtual void SetPosition(const sf::Vector2f position);
	sf::Vector2f position;
	
private:
	
};