#include "menu.h"

Menu::Menu()
{
}

Menu::~Menu()
{
}

void Menu::update(RenderWindow* target, int *statement)
{
	quitBtn.hover(*target, Color::Red, Color::White);
	startBtn.hover(*target, Color::Red, Color::White);
	Vector2f size = startBtn.getSize();

	title.setPos((target->getSize().x / 2) - (title.getSize() + title.getCharSize()), (target->getSize().y / 2.5) - title.getCharSize());
	startBtn.getRect()->setPosition((target->getSize().x / 2) - (size.x / 2), (target->getSize().y / 2) - (size.y / 2));
	startTxt.setCenter(startBtn.getPos(), startBtn.getSize());
	size = quitBtn.getSize();
	quitBtn.getRect()->setPosition((target->getSize().x / 2) - (size.x / 2), (target->getSize().y / 1.6) - (size.y / 2));
	quitTxt.setCenter(quitBtn.getPos(), startBtn.getSize());
	if (*statement == 0 && startBtn.isOnBtn(*target) && Mouse::isButtonPressed(Mouse::Button::Left))
		*statement = 1;
	if (*statement == 0 && quitBtn.isOnBtn(*target) && Mouse::isButtonPressed(Mouse::Button::Left))
		*statement = -1;
}

void Menu::render(RenderTarget *target)
{
	quitBtn.render(target);
	startBtn.render(target);
	title.render(target);
	startTxt.render(target);
	quitTxt.render(target);
}
