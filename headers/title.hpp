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
  bool toRight = true;
  bool toBottom = true;

public:
  // Title();
  void init();
  void draw(RenderWindow &window);
  void setText(string text);
};

#endif