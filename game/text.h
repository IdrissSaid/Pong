#ifndef TEXT_H_
#define TEXT_H_
#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

class MyText
{
private:
	Text text;
	Font font;

public:
	MyText(Vector2f pos = {0, 0}, unsigned int size = 0, Color color = Color::White);
	virtual ~MyText();

	void update(string str, Vector2f pos);
	void render(RenderTarget *target);

	unsigned int get_size();
};

#endif // !TEXT_H_
