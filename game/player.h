#ifndef PLAYER_H_
#define PLAYER_H_
#include <iostream>
#include <SFML/Graphics.hpp>
#include "input.h"

using namespace sf;
using namespace std;

class Player
{
private:
	RectangleShape player;

	void initVariable();
	void initShape();

	Input input;
	
	float speed;

public:
	Player(float x = 0.f, float y = 0.f);
	~Player();

	void update(RenderTarget *target, Input::Button btn, int player);
	void render(RenderTarget *target);

	void setPosition(float x, float y);

	Vector2f getPos();
	Vector2f getSize();
	const FloatRect getRect();
};

#endif // !PLAYER_H_
