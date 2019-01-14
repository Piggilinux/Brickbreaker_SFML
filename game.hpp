#ifndef GAME_HPP
#define GAME_HPP
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

#include "block.hpp"
#include "bricks.hpp"
#include "player.hpp"
#include "ball.hpp"

#include <random>
#include <functional>
#include <cstdlib>
#include <cmath>


using namespace std;

class Game : public sf::Drawable
{
private:
  Bricks bricks;
  Player player;
  Ball ball;
  sf::CircleShape circle;
  sf::Texture mBackgroundTex;
	sf::Sprite mBackgroundSprite;
  //***************************************************************************
  bool heading = true; // true is up!

	void draw(sf::RenderTarget &target, sf::RenderStates states) const;

public:
	Game();
	~Game();
//	int getCurrentScore();
  void howToIntercept(bool heading, string object);
	int Update(float dt);

};

#endif
