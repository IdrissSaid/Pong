#ifndef MAIN_H_
#define MAIN_H_
#include <iostream>
#include <SFML/Graphics.hpp>
#include "input.h"
#include "player.h"
#include "ball.h"
#include "text.h"

const float WIN_WITDH = 800.f;
const float WIN_HEIGHT = 600.f;

using namespace sf;
using namespace std;

class Game
{
private:
	RenderWindow *window;
	VideoMode videoMode;
	Event event;

	Input input;

	MyText text;
	int res[2];

	Player player;
	Player player2;

	Ball ball;

	void initVariable();
	void initWindow();

public:
	Game();
	virtual ~Game();

	bool isRunning() const;

	void update();
	void render();
};

#endif