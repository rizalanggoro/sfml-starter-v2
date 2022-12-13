#include <SFML/Graphics.hpp>
#include <iostream>

#include "headers/coba.hpp"
#include "headers/title.hpp"

using namespace sf;
using namespace std;

int main()
{
  RenderWindow window(VideoMode(1280, 720), "SFML | Starter V2");
  window.setFramerateLimit(60);

  Title title{};
  title.setText("Starter V2!!");

  while (window.isOpen())
  {
    Event event{};
    while (window.pollEvent(event))
    {
      if (event.type == Event::Closed)
        window.close();
    }

    window.clear(Color::White);
    title.draw(window);
    window.display();
  }

  return 0;
}