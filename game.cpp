#include "game.hpp"


void Game::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
  target.draw(mBackgroundSprite, states);
  target.draw(player, states);
}


Game::Game()
{
	if (! mBackgroundTex.loadFromFile("./Resources/background.jpg"))
	{
		cout << "Error" << endl;
	}
	mBackgroundSprite.setTexture(mBackgroundTex);




	// windowLeft.setSize(sf::Vector2f(50, 600));
	// windowLeft.setPosition(sf::Vector2f(-48 , 0));
	// windowLeft.setFillColor(sf::Color::Black);

}

Game::~Game()
{

}

int Update(float dt)
{

}
