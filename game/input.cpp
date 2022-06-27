#include "input.h"

Input::Input()
{
	button.arrow_down = button.down = button.escape = button.arrow_up = button.up = false;
}

Input::Button Input::GetButton(void) const
{
	return button;
}

void Input::InputHandler(Event event, RenderWindow& window)
{
	if (event.type == Event::Closed)
		window.close();
	if (event.type != Event::KeyPressed && event.type != Event::KeyReleased)
		return;
	if (Keyboard::isKeyPressed(Keyboard::Z))
		this->button.up = true;
	else
		this->button.up = false;
	if (Keyboard::isKeyPressed(Keyboard::Up))
		this->button.arrow_up = true;
	else
		this->button.arrow_up = false;
	if (Keyboard::isKeyPressed(Keyboard::S))
		this->button.down = true;
	else
		this->button.down = false;
	if (Keyboard::isKeyPressed(Keyboard::Down))
		this->button.arrow_down = true;
	else
		this->button.arrow_down = false;
	if (Keyboard::isKeyPressed(Keyboard::Escape))
		this->button.escape = true;
	else
		this->button.escape = false;
}
