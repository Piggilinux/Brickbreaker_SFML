#include "block.hpp"
#include <SFML/Graphics.hpp>

// make const?.
void Block::draw(sf::RectangleShape rect, sf::RenderTarget &target, sf::RenderStates states)
{
  target.draw(rect, states);
}


Block::Block(int x, int y, int block_size)
{
  this->block_size = block_size;
  rect.setSize(sf::Vector2f(block_size, block_size));
  rect.setPosition(sf::Vector2f(x, y));
  rect.setFillColor(sf::Color::Green);
}

sf::Vector2i Block::getPos()
{
  return sf::Vector2i(rect.getPosition().x, rect.getPosition().y);
}

int Block::get_block_size()
{
  return this->block_size;
}

sf::RectangleShape Block::get_rect()
{
  return sf::RectangleShape(rect);
}
