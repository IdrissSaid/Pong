#include "text.h"

MyText::MyText(string str, Vector2f pos, unsigned int size, Color color)
{
	font.loadFromFile("./gothic.ttf");
	text.setFont(this->font);
	text.setCharacterSize(size);
	text.setFillColor(color);
	text.setPosition(pos);
	text.setString(str);
}

MyText::~MyText()
{

}

void MyText::setPos(const float x, const float y)
{
	text.setPosition(x, y);
}

void MyText::setCenter(Vector2f cadre, Vector2f len)
{
	setPos((cadre.x + (len.x / 2)) - getSize(), cadre.y);
}

const unsigned int MyText::getSize()
{
	string txt = text.getString();
	return txt.length() + text.getCharacterSize();
}

const unsigned int MyText::getCharSize()
{
	return text.getCharacterSize();
}

void MyText::update(string str, Vector2f pos)
{
	text.setString(str);
	text.setPosition(pos);
}

void MyText::render(RenderTarget *target)
{
	target->draw(text);
}
