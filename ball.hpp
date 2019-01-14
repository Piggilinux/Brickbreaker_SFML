#ifndef BALL_HPP
#define BALL_HPP
#include <SFML/Graphics/Export.hpp>
#include <SFML/Graphics/Shape.hpp>

#include "block.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

//#include <crtdbg.h>
#include <random>
#include <functional>
#include <cstdlib>
#include <cmath>

class Ball : public Block
{
private:
   sf::CircleShape circle; // ask for help!
  float velX;
  float velY;

  // float direction;
  // float speed;

  // random_device seed_device;
  // default_random_engine engine(seed_device());
  // uniform_int_distribution<int> distribution(-16, 16);
  // auto random = bind(distribution, ref(engine));
  //
//  sf::Vector2f direction(random(), random());
//  const float velocity = sqrt(direction.x * direction.x + direction.y * direction.y);

public:
  Ball(float velX = 5, float velY = 5);
  ~Ball();

  void howToIntercept(bool heading, string object);

  // bool getHeading();
  // void setHeading(bool heading);
  float getVelX();
  float getVelY();
  void setVelX(float vel);
  void setVelY(float vel);
  void Update(float dt);
};

#endif
