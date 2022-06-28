#include "button.h"
#include <iostream>
void Button::initBtn(RectangleShape* buttonPtr, Vector2f pos, Vector2f size, Color color)
{
	buttonPtr->setPosition(pos);
	buttonPtr->setFillColor(color);
	buttonPtr->setSize(size);
}

RectangleShape *Button::getRect()
{
	return &btn;
}

const Vector2f Button::getSize()
{
	return btn.getSize();
}

const Vector2f Button::getPos()
{
	return btn.getPosition();
}

void Button::hover(RenderWindow &target, Color new_, Color old)
{
	if (isOnBtn(target))
		btn.setFillColor(new_);
	else 
		btn.setFillColor(old);
}

const int Button::isOnBtn(RenderWindow &target)
{
	Vector2i pos_mouse = Mouse::getPosition(target);
	Vector2f pos = { (float) pos_mouse.x, (float) pos_mouse.y};

	return btn.getGlobalBounds().contains(pos);
}

Button::Button(Vector2f pos, Vector2f size, Color color)
{
	initBtn(&btn, pos, size, color);
}

Button::~Button()
{
}

void Button::update()
{
}

void Button::render(RenderTarget *target)
{
	target->draw(btn);
}
