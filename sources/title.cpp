#include "../headers/title.hpp"

void Title::init()
{
}

// Title::Title()
// {
//   this->init();
// }

void Title::draw(RenderWindow &window)
{
  Font font{};
  font.loadFromFile("assets/fonts/Poppins-Regular.ttf");

  this->text.setFont(font);
  this->text.setCharacterSize(32);
  this->text.setFillColor(Color::Red);

  // this->text.setPosition(Vector2f(100, 0));
  double speed = 5;
  if (this->toRight)
  {
    this->text.move(Vector2f(speed, 0));
    if (this->text.getPosition().x >= window.getSize().x - this->text.getGlobalBounds().width)
      this->toRight = false;
  }
  else
  {
    this->text.move(Vector2f(-1 * speed, 0));
    if (this->text.getPosition().x <= 0)
      this->toRight = true;
  }

  if (this->toBottom)
  {
    this->text.move(Vector2f(0, speed));
    if (this->text.getPosition().y >= window.getSize().y - this->text.getGlobalBounds().height)
      this->toBottom = false;
  }
  else
  {
    this->text.move(Vector2f(0, -1 * speed));
    if (this->text.getPosition().y <= 0)
      this->toBottom = true;
  }

  window.draw(this->text);
}

void Title::setText(string text)
{
  this->text.setString(text);
}