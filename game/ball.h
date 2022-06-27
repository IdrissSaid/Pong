#ifndef BALL_H_
#define BALL_H_
#include <SFML/Graphics.hpp>
#include "player.h"
#include <iostream>

using namespace sf;
using namespace std;

class Ball
{
private:
	CircleShape ball;

	Vector2f sens;

	float speed;

public:
	Ball();
	~Ball();

	void update(RenderTarget *target, Player *player1, Player *player2, int *res);
	void render(RenderTarget *target);

	void ballCollision(RenderTarget *target, Player *player1, Player *player2, int *res);

	void setPosition(float x, float y);
	
	Vector2f getPos();

	float getRadius();
};

#endif
