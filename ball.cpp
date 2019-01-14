#include "ball.hpp"

// void Ball::setRadius(float rad)
// {
//   circle.setRadius(rad);
// }


Ball::Ball(float velX, float velY)
: Block(xPos, yPos, block_size_x, block_size_y)
{
  this->block_size_x = block_size_x;
  this->velY = velY;
  this->velX = velX;
  //this->heading = heading;

  // ask for help!
  // circle.setRadius(50);
  // circle.setPosition(sf::Vector2f(285, 250));
  // circle.setFillColor(sf::Color::Red);

  rect.setSize(sf::Vector2f(20, 20));
  rect.setPosition(sf::Vector2f(385, 350));
  rect.setFillColor(sf::Color::Red);

    // circle.setOutlineThickness(4);
    // circle.setOutlineColor(sf::Color::Black);
    // circle.setFillColor(sf::Color::Red);
    // circle.setOrigin(16.f / 2, 16.f / 2);
    // circle.setPosition(800 / 2, 500 / 2);
}

Ball::~Ball()
{

}

void Ball::Update(float dt)
{

  rect.move(this->velX, this->velY);
  if (rect.getPosition().y == 500)
  {
    this->velY = -this->velY;
  }
  if (rect.getPosition().y == 0)
  {
    this->velY = -this->velY;
  }
  if (rect.getPosition().x == 800)
  {
    this->velX = -this->velX;
  }
  if (rect.getPosition().x == 0)
  {
    this->velX = -this->velX;
  }

}


// bool Ball::getHeading()
// {
//   return heading;
// }
// void Ball::setHeading(bool heading)
// {
//   this->heading = heading;
// }

void Ball::setVelX(float vel)
{
  this->velX = vel;
}
void Ball::setVelY(float vel)
{
  this->velY = vel;
}

float Ball::getVelX()
{
  return this->velX;
}
float Ball::getVelY()
{
  return this->velY;
}
