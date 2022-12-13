#ifndef title_hpp
#define title_hpp

#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using namespace std;

class Title
{
private:
  Text text;
  Font font;
  bool toRight = true;
  bool toBottom = true;
  int velocity = 5;

public:
  Title();
  void init();
  void draw(RenderWindow &window);
  void setText(string text);
};

#endif