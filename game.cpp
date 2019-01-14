#include "game.hpp"


void Game::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
  target.draw(mBackgroundSprite, states);
  target.draw(bricks, states);
  target.draw(player, states);
  target.draw(ball, states);
//  target.draw(circle, states);
}


Game::Game()
{
	if (! mBackgroundTex.loadFromFile("./Resources/dickbutt.jpg"))
	{
		cout << "Error" << endl;
	}
	mBackgroundSprite.setTexture(mBackgroundTex);
  mBackgroundSprite.scale(0.9f, 0.5f);

// should be in Ball class......
  // circle.setRadius(10);
  // circle.setOutlineThickness(4);
  // circle.setOutlineColor(sf::Color::Black);
  // circle.setFillColor(sf::Color::Red);
  // circle.setOrigin(16.f / 2, 16.f / 2);
  // circle.setPosition(800 / 2, 500 / 2);

	// windowLeft.setSize(sf::Vector2f(50, 600));
	// windowLeft.setPosition(sf::Vector2f(-48 , 0));
	// windowLeft.setFillColor(sf::Color::Black);

}

Game::~Game()
{

}

// void Game::howToIntercept(bool heading, string object)
// {
//   if (heading == true)
//   {
//     // if ball is hitting object from the left side --> bounce down left.
//     if (ball.get_rect().getPosition().y < player.get_rect().getPosition().y && ball.get_rect().getPosition().x < player.get_rect().getPosition().x)
//     {
//       ball.setVelX(-ball.getVelX());
//     }
//     // if ball is hitting object from the right side --> bounce down right.
//     if (ball.get_rect().getPosition().y < player.get_rect().getPosition().y && ball.get_rect().getPosition().x > player.get_rect().getPosition().x)
//     {
//       ball.setVelX(ball.getVelX());
//     }
//   }
//   else if (heading == false)
//   {
//     // if ball is hitting object from the left side --> bounce down left.
//     if (ball.get_rect().getPosition().y < player.get_rect().getPosition().y && ball.get_rect().getPosition().x < player.get_rect().getPosition().x)
//     {
//       ball.setVelX(-ball.getVelX());
//     }
//     // if ball is hitting object from the right side --> bounce down right.
//     if (ball.get_rect().getPosition().y < player.get_rect().getPosition().y && ball.get_rect().getPosition().x > player.get_rect().getPosition().x)
//     {
//       ball.setVelX(ball.getVelX());
//     }
//   }
//
// }

int Game::Update(float dt)
{

  player.Update(1);
  ball.Update(1);
              // PUT ALL THIS IN A FUNCTION JEEEZ MAN....
//##############################################################################
  // if ball intersects with player.
  if (ball.get_rect().getGlobalBounds().intersects(player.get_rect().getGlobalBounds()))
  {
    //howToIntercept(heading, "player");
    // if ball is hitting player from the left side --> bounce down left.
    if (ball.get_rect().getPosition().y < player.get_rect().getPosition().y && ball.get_rect().getPosition().x < player.get_rect().getPosition().x)
    {
      ball.setVelX(-ball.getVelX());
    }
    // if ball is hitting player from the right side --> bounce down right.
    if (ball.get_rect().getPosition().y < player.get_rect().getPosition().y && ball.get_rect().getPosition().x > player.get_rect().getPosition().x)
    {
      ball.setVelX(ball.getVelX());
    }
    // bounce up!
    ball.setVelY(-ball.getVelY());
  }

  // if ball intersects with a brick. OBS! getNrOfBricks is getting nr of blocks.. (correct later...)
  for (int i = 0; i < bricks.getNrOfBricks(); i++)
  {
    // if ball intercepts with any brick
    if (ball.get_rect().getGlobalBounds().intersects(bricks.getBlockPos(i).getGlobalBounds()))
    {
      // REMOVE BLOCK!!
      bricks.removeBlock(i);
      
      // if ball is left of brick ## ball.get_rect().getPosition().y < bricks.getBlockPos(i).getPosition().y &&
      if (ball.get_rect().getPosition().y < bricks.getBlockPos(i).getPosition().y && ball.get_rect().getPosition().x < bricks.getBlockPos(i).getPosition().x)
      {
        // sending the ball to the left
        ball.setVelX(-ball.getVelX());
      }
      // if ball is left of brick. ## ball.get_rect().getPosition().y < bricks.getBlockPos(i).getPosition().y &&
      if (ball.get_rect().getPosition().y < bricks.getBlockPos(i).getPosition().y && ball.get_rect().getPosition().x > bricks.getBlockPos(i).getPosition().x)
      {
        // sending the ball to the right
        ball.setVelX(ball.getVelX());
      }
      //************************************************************************
      // bounce down oh you!
      ball.setVelY(-ball.getVelY());
    }
  }
//##############################################################################

}
