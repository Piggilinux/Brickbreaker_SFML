#ifndef GAME_HPP
#define GAME_HPP
#include <iostream>
#include <SFML/Graphics.hpp>

#include "block.hpp"
#include "player.hpp"

using namespace std;


class Game : public sf::Drawable
{
private:

  Player player;
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
