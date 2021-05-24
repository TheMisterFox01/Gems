#include "Animator.h"
#include <math.h>

Animator::Animator() {

}

Animator::Animator(Gem& l_gem1) {
	IsFall = true;
	gem1 = l_gem1;
	pos1 = gem1.GetPosition();
	pos2 = sf::Vector2f(gem1.GetPosition().x, gem1.GetPosition().y + 48);
}

Animator::Animator(Gem& l_gem1, Gem& l_gem2) {
	IsSwitch = true;
	gem1 = l_gem1;
	gem2 = l_gem2;
	pos1 = gem1.GetPosition();
	pos2 = gem2.GetPosition();
}


Animator::~Animator() {

}

void Animator::GemSwitch() {
	gem1.SetPosition(sf::Vector2f(abs(gem1.GetPosition().x - pos2.x) / 80, abs(gem1.GetPosition().y - pos2.y) / 80));
	gem2.SetPosition(sf::Vector2f(abs(gem2.GetPosition().x - pos1.x) / 80, abs(gem2.GetPosition().y - pos1.y) / 80));
}

void Animator::GemFall() {

}

bool Animator::Animation() {
	if (IsFall) {
		GemFall();
		if (gem1.GetPosition() == pos2) {
			return false;
		}
	}
	else if (IsSwitch) {
		GemSwitch();
		if(gem1.GetPosition() == pos2){
			return false;
		}
	}
	return true;
}
