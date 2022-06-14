#include "text.h"

MyText::MyText()
{
	font.loadFromFile("./gothic.ttf");
	text.setFont(this->font);
}

MyText::~MyText()
{

}

void MyText::update(string str)
{
	text.setString(str);
}

void MyText::render(RenderTarget *target)
{
	string str = text.getString();
	text.setPosition((target->getSize().x / 2.f) - str.length(), 0);
	target->draw(text);
}
