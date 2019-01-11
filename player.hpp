#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include "block.hpp"

class Player : public sf::Drawable
{
private:
  Block* *block;
  int nr_of_blocks;
  int capacity;
  float mspeed = 150.0f;
  int x;
  int y;

  void draw(sf::RenderTarget &target, sf::RenderStates states) const;
  void makeCopy(const Player & origObject);
  void expand();
  void initiate(int from = 0);
  void freeMemory();

public:
  Player();
  ~Player();
  void operator=(const Player& origObject);
  sf::RectangleShape get_rect();
  bool getPlayerPos(sf::FloatRect positions);
  void Update(float dt);
};

#endif
