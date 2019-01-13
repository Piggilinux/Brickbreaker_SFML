#ifndef BALL_HPP
#define BALL_HPP

#include "block.hpp"
#include <SFML/Graphics.hpp>

class Ball : public Block
{
private:
  sf::CircleShape circle;
  float direction;
  float speed;
public:
  Ball(float direction = 0, float speed = 0.7);
  ~Ball();

  void Update(float dt);
};

#endif
