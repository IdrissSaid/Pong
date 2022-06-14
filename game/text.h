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
	MyText();
	virtual ~MyText();

	void update(string str);
	void render(RenderTarget *target);

};

#endif // !TEXT_H_
