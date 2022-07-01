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
	MyText(string str = nullptr, Vector2f pos = {0, 0}, unsigned int size = 0, Color color = Color::White);
	virtual ~MyText();

	void setPos(const float x, const float y);

	void setCenter(Vector2f cadre, Vector2f len);

	const unsigned int getSize();
	const unsigned int getCharSize();

	void update(string str, Vector2f pos);
	void render(RenderTarget *target);
};

#endif // !TEXT_H_
