#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>

class Window {
public:
	Window();
	Window(const std::string& title, const sf::Vector2u& size);
	~Window();

	void BeginDraw();
	void EndDraw();

	void Update();

	bool IsDone();
	sf::RenderWindow* GetRenderWindow();
	sf::Vector2u GetWindowSize();

private:
	void Setup(const std::string& title, const sf::Vector2u& size);
	void Create();
	void Destroy();

	sf::RenderWindow window;
	sf::Vector2u windowSize;
	std::string windowTitle;

	bool isDone;
};