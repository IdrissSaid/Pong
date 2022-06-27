#include "player.h"

void Player::initVariable()
{
	this->speed = 10.f;
}

void Player::initShape()
{
	this->player.setFillColor(Color::Green);
	this->player.setSize(Vector2f(15.f, 100.f));
}

Player::Player(float x, float y)
{
	initVariable();
	initShape();
	this->player.setPosition(x, y);
}

Player::~Player()
{
}

void Player::update(RenderTarget* target, Input::Button btn, int player)
{
	if (this->player.getPosition().y + -this->speed >= 0) {
		if (btn.up == true && player == 1)
			this->player.move(0, -this->speed);
		if (btn.arrow_up == true && player == 2)
			this->player.move(0, -this->speed);
	}
	
	if (this->player.getPosition().y + this->speed + this->player.getSize().y <= target->getSize().y) {
		if (btn.down == true && player == 1)
			this->player.move(0, this->speed);
		if (btn.arrow_down == true && player == 2)
			this->player.move(0, this->speed);
	}
}

Vector2f Player::getPos()
{
	return player.getPosition();
}

Vector2f Player::getSize()
{
	return player.getSize();
}

const FloatRect Player::getRect()
{
	return player.getGlobalBounds();
}

void Player::setPosition(float x, float y)
{
	player.setPosition(x, y);
}

void Player::render(RenderTarget *target)
{
	target->draw(this->player);
}
