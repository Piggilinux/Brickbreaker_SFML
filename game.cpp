#include "game.hpp"


void Game::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
  target.draw(mBackgroundSprite, states);
  target.draw(bricks, states);
  target.draw(player, states);
  target.draw(ball, states);
}


Game::Game()
{
	if (! mBackgroundTex.loadFromFile("./Resources/dickbutt.jpg"))
	{
		cout << "Error" << endl;
	}
	mBackgroundSprite.setTexture(mBackgroundTex);
  mBackgroundSprite.scale(0.9f, 0.5f);


	// windowLeft.setSize(sf::Vector2f(50, 600));
	// windowLeft.setPosition(sf::Vector2f(-48 , 0));
	// windowLeft.setFillColor(sf::Color::Black);

}

Game::~Game()
{

}

int Game::Update(float dt)
{
  player.Update(1);
  ball.Update(1);

}
