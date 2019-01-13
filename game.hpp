#ifndef GAME_HPP
#define GAME_HPP
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

#include "block.hpp"
#include "bricks.hpp"
#include "player.hpp"
#include "ball.hpp"


using namespace std;

class Game : public sf::Drawable
{
private:
  Bricks bricks;
  Player player;
  Ball ball;
  sf::Texture mBackgroundTex;
	sf::Sprite mBackgroundSprite;

	void draw(sf::RenderTarget &target, sf::RenderStates states) const;

public:
	Game();
	~Game();
	int getCurrentScore();
	int Update(float dt);

};

#endif
