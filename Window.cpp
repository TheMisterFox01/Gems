#include "Window.h"

Window::Window(const std::string& title, const sf::Vector2u& size) {
	Setup(title, size);

}

void Window::Setup(const std::string& title, const sf::Vector2u& size) {
	isDone = false;
	windowTitle = title;
	windowSize = size;
	Create();
}

void Window::Create() {
	auto style = sf::Style::Default;
	window.create(sf::VideoMode(windowSize.x,windowSize.y), windowTitle, style);
}

Window::~Window() { Destroy(); }

void Window::Destroy() {
	window.close();
}

sf::RenderWindow* Window::GetRenderWindow() {
	return &window;
}

bool Window::IsDone() { 
	return isDone; 
}

void Window::BeginDraw() {
	window.clear(sf::Color::White);
}

void Window::EndDraw() {
	window.display();
}

void Window::Update() {
	sf::Event event;
	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) { isDone = true; }		
	}
}
