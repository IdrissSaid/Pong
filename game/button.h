#ifndef BUTTON_H_
#define BUTTON_H_
#include <SFML/Graphics.hpp>
#include <string>
#include "text.h"

using namespace sf;
using namespace std;

class Button {
private:
	RectangleShape btn;

public:
	Button(Vector2f pos = {0, 0}, Vector2f size = {0, 0}, Color color = Color::Black);
	~Button();

	void initBtn(RectangleShape* buttonPtr, Vector2f pos, Vector2f size, Color color);

	RectangleShape *getRect();
	const Vector2f getSize();
	const Vector2f getPos();

	void hover(RenderWindow& target, Color new_, Color old);
	const int isOnBtn(RenderWindow& target);

	void update();
	void render(RenderTarget *target);
};

#endif // !BUTTON_H_
