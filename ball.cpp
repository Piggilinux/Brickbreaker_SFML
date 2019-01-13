#include "ball.hpp"

Ball::Ball(float direction, float speed)
: Block(xPos, yPos, block_size_x, block_size_y)
{
  this->block_size_x = block_size_x;
  this->speed = speed;

  // circle.setRadius(150);
  // circle.setPosition(sf::Vector2f(385, 350));
  // circle.setFillColor(sf::Color::Red);

  rect.setSize(sf::Vector2f(20, 20));
  rect.setPosition(sf::Vector2f(385, 350));
  rect.setFillColor(sf::Color::Red);
}

Ball::~Ball()
{

}

void Ball::Update(float dt)
{

  // float velX = 0.15f;
  // float velY = 0.35f;
  // 
  // // Move the ball in the game loop
  // Ball.Move(velX * App.GetFrameTime(), velY * App.GetFrameTime());
  //
  // // When the ball hits the top or bottom of the screen
  // velY = -velY;
  //
  // // When the ball hits a paddle
  // velX = -velX;
  //
  // Ball.Move(App.GetFrameTime() * this->speed * cos(ballAngle * (3.14159265 / 180)), App.GetFrameTime() * this->speed * sin(ballAngle));



  // // Movies player-tile according to choice.
  // if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
  // 	{
  //     // Stops Ball-tile to move out of the window.
  //     if (rect.getPosition().x <= 0)
  //     {
  //       rect.move(+(this->speed + 0.1), 0);
  //     }
  //     rect.move(-this->speed, 0);
  // 	}
  // 	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
  // 	{
  //       // Stops Ball-tile to move out of the window (150=size of player).
  //     if ((rect.getPosition().x + 150) >= 800)
  //     {
  //       rect.move(-(this->speed + 0.1), 0);
  //     }
  //     rect.move(this->speed, 0);
  // 	}
}
