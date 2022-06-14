#include "ball.h"

Ball::Ball()
{
	this->speed = 5.f;
	ball.setFillColor(Color::White);
	ball.setRadius(10.f);
	this->sens = Vector2f(-this->speed + std::rand() % ((int)this->speed - (int)-this->speed + 1), (int)-this->speed + std::rand() % ((int)this->speed - (int)-this->speed + 1));
	(this->sens.x <= 0) ? this->sens.x = -this->speed : this->sens.x = this->speed;
	(this->sens.y <= 0) ? this->sens.y = -this->speed : this->sens.y = this->speed;
}

Ball::~Ball()
{
}

void Ball::update(RenderTarget *target, Player *player1, Player *player2, int *res)
{
	this->ballCollision(target, player1, player2, res);
	ball.move(this->sens);
}

void Ball::render(RenderTarget *target)
{
	target->draw(this->ball);
}

void Ball::ballCollision(RenderTarget* target, Player *player1, Player *player2, int *res)
{
	Vector2f pos = ball.getPosition();
	Vector2f pos_p = player1->getPos();
	Vector2f pos_p2 = player2->getPos();
	Vector2f size_p = player1->getSize();
	Vector2f size_p2 = player2->getSize();

	/* Border */
	if (pos.x + sens.x < 0 || pos.x + (ball.getRadius() * 2) + sens.x > target->getSize().x) {
		(pos.x + sens.x < 0) ? res[1] += 1 : res[0] += 1;
		ball.setPosition((float)(target->getSize().x / 2) - (ball.getRadius() / 2), (float)(target->getSize().y / 2) - (ball.getRadius() / 2));
		this->sens = Vector2f(-this->speed + std::rand() % ((int)this->speed - (int)-this->speed + 1), (int)-this->speed + std::rand() % ((int)this->speed - -(int)this->speed + 1));
		(this->sens.x <= 0) ? this->sens.x = -this->speed : this->sens.x = this->speed;
		(this->sens.y <= 0) ? this->sens.y = -this->speed : this->sens.y = this->speed;
	}

	if (pos.y + sens.y < 0 || pos.y + (ball.getRadius() * 2) + sens.x >= target->getSize().y)
		(sens.y != 0) ? sens.y *= -1 : sens.y++;

	/* Player 1*/
	pos += sens;
	if (player1->getRect().contains(pos))
		sens.x *= -1;

	/*Player 2*/
	pos.x += (ball.getRadius() * 2);
	if (player2->getRect().contains(pos))
		sens.x *= -1;
}

void Ball::setPosition(float x, float y)
{
	ball.setPosition(x, y);
}

Vector2f Ball::getPos()
{
	return ball.getPosition();
}

float Ball::getRadius()
{
	return ball.getRadius();
}
