#ifndef BLOCK_HPP
#define BLOCK_HPP
#include <SFML/Graphics.hpp>
using namespace std;

class Block : public sf::Drawable
{
private:
  int x;
  int y;
  sf::RectangleShape rect;
  int block_size = 20;

  void draw(sf::RectangleShape rect, sf::RenderTarget &target, sf::RenderStates states);

public:
  Block(int x, int y, int block_size);

  #
  sf::Vector2i getPos();
  int get_block_size();

  sf::RectangleShape get_rect();
};


#endif
