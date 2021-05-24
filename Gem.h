#pragma once
#include "GameObject.h"
class Gem : public GameObject{
public:
	Gem();
	~Gem();

	void GetTexture();
	void SetTexture();
	virtual void Render(sf::RenderWindow& renderWindow);
	virtual void SetPosition(const sf::Vector2f position);
private:
	sf::Texture texture;
	sf::Sprite sprite;
};