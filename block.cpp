#include "block.hpp"
#include <SFML/Graphics.hpp>


// void Block::set_rect(sf::RectangleShape rectangle)
// {
//   this->rect = rectangle;
// }

void Block::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
  target.draw(rect, states);
}


Block::Block(int xPos, int yPos, int block_size_x, int block_size_y)
{
  this->block_size_x = block_size_x;
  this->block_size_y = block_size_y;
  this->xPos = xPos;
  this->yPos = yPos;

  rect.setSize(sf::Vector2f(this->block_size_x, this->block_size_y));
  rect.setPosition(sf::Vector2f(this->xPos, this->yPos));
  rect.setFillColor(sf::Color::Green);
  // sets a 10-pixel wide black outline
  rect.setOutlineThickness(1);
  rect.setOutlineColor(sf::Color(0, 0, 0, 255));
}

Block::~Block()
{

}

sf::Vector2i Block::getPos()
{
  return sf::Vector2i(rect.getPosition().x, rect.getPosition().y);
}

int Block::get_block_size_x()
{
  return this->block_size_x;
}

int Block::get_block_size_y()
{
  return this->block_size_y;
}

sf::RectangleShape Block::get_rect()
{
  return sf::RectangleShape(rect);
}

//		if (helpFood.getRectFood().getGlobalBounds().intersects(food.getRectFood()
//.getGlobalBounds()))
