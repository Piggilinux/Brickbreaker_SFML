#ifndef BLOCK_HPP
#define BLOCK_HPP
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
using namespace std;

class Block : public sf::Drawable
{
private:

protected:
  int xPos;
  int yPos;
  //sf::CircleShape circle; // temp
  sf::RectangleShape rect;
  int block_size_x;
  int block_size_y;

  void draw(sf::RenderTarget &target, sf::RenderStates states) const;

public:
  Block(int xPos, int yPos, int block_size_x = 40, int block_size_y = 20);
  ~Block();
  #
  sf::Vector2i getPos();
  int get_block_size_x();
  int get_block_size_y();
  sf::RectangleShape get_rect();
//  void set_rect(sf::RectangleShape rectangle);
};


#endif
