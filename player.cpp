#include "player.hpp"

Player::Player(float direction, float speed)
: Block(xPos, yPos, block_size_x, block_size_y)
{
  this->block_size_x = block_size_x;
  this->speed = speed;
  rect.setSize(sf::Vector2f(150, 30));
  rect.setPosition(sf::Vector2f(325, 450));
  rect.setFillColor(sf::Color::Blue);
}

Player::~Player()
{

}

void Player::Update(float dt)
{
  // Movies player-tile according to choice.
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
  	{
      // Stops Player-tile to move out of the window.
      if (rect.getPosition().x <= 0)
      {
        rect.move(+(this->speed + 0.1), 0);
      }
      rect.move(-this->speed, 0);
  	}
  	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
  	{
        // Stops Player-tile to move out of the window (150=size of player).
      if ((rect.getPosition().x + 150) >= 800)
      {
        rect.move(-(this->speed + 0.1), 0);
      }
      rect.move(this->speed, 0);
  	}
}
