#ifndef MENU_H_
#define MENU_H_
#include "text.h"
#include "button.h"

class Menu {
private:
	MyText title = MyText("101-Pong", Vector2f(50, 50), 30);
	MyText startTxt = MyText("Start", Vector2f(50, 50), 30, Color::Black);
	MyText quitTxt = MyText("Quit", Vector2f(50, 50), 30, Color::Black);

	Button startBtn = Button(Vector2f(0, 0), Vector2f(100, 50), Color::White);
	Button quitBtn = Button(Vector2f(0, 100), Vector2f(100, 50), Color::White);

public:
	Menu();
	~Menu();

	void btnHover(RenderWindow* target);

	void updateButton(RenderWindow* target);

	void update(RenderWindow* target, int* statement);
	void render(RenderTarget *target);
};

#endif // !MENU_H_
