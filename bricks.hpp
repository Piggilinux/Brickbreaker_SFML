#ifndef BRICKS_HPP
#define BRICKS_HPP

#include "block.hpp"

class Bricks : public sf::Drawable
{
private:
  Block* *block;
  int nr_of_blocks;
  int capacity;
//  float mspeed = 150.0f;
  int x;
  int y;

  void draw(sf::RenderTarget &target, sf::RenderStates states) const;
  void makeCopy(const Bricks & origObject);
  void expand();
  void initiate(int from = 0);
  void freeMemory();

public:
  Bricks();
  ~Bricks();
  void operator=(const Bricks& origObject);
  sf::RectangleShape get_rect();
//  bool getBricksPos(sf::FloatRect positions);
  sf::RectangleShape getBlockPos(int blockPos);
  int getNrOfBricks();
  void Update(float dt);

  void removeBlock(int nr_to_remove);

  //Block* getBlock(int i);
};

#endif
