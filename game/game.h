#ifndef MAIN_H_
#define MAIN_H_
#include <iostream>
#include <SFML/Graphics.hpp>
#include "input.h"
#include "player.h"
#include "ball.h"
#include "text.h"
#include "menu.h"

const unsigned int WIN_WITDH = 800;
const unsigned int WIN_HEIGHT = 600;

using namespace sf;
using namespace std;

class Game {
private:
	int statement = 0;

	RenderWindow* window;
	VideoMode videoMode;
	Event event;

	Input input;

	Menu menu;

	MyText text = MyText("", Vector2f((WIN_WITDH / 2.f) - 6, 0), 30);
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