#ifndef INPUT_H
	#define INPUT_H
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;

class Input
{

public:
	Input();

	struct Button { bool up, down, escape, arrow_up, arrow_down; };
	Button GetButton(void) const;
	void InputHandler(Event event, RenderWindow &window);

private:
	Button button;

};

#endif

