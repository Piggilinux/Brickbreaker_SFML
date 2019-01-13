#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "block.hpp"
#include <SFML/Graphics.hpp>

class Player : public Block
{
private:
  float direction;
  float speed;
public:
  Player(float direction = 0, float speed = 0.4);
  ~Player();

  void Update(float dt);
};

#endif
