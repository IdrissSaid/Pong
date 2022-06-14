#include "text.h"

MyText::MyText(Vector2f pos, unsigned int size, Color color)
{
	font.loadFromFile("./gothic.ttf");
	text.setFont(this->font);
	text.setCharacterSize(size);
	text.setFillColor(color);
	text.setPosition(pos);
	text.setString("Init");
}

MyText::~MyText()
{

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

unsigned int MyText::get_size()
{
	return text.getCharacterSize();
}
