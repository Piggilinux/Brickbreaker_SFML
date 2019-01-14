
#include <SFML/Graphics.hpp>
#include "game.hpp"
#include <string>
//#include <crtdbg.h>
#include <random>
#include <functional>
#include <cstdlib>
#include <cmath>

using namespace std;
int window_x = 800;
int window_y = 500;

int main()
{
  sf::Clock clock;

  // sf::Time elapsed = clock.restart();
  // const sf::Time update_ms = sf::seconds(1.f / 30.f);
//  	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    sf::RenderWindow window(sf::VideoMode(window_x, window_y), "SFML works!");
    // sf::CircleShape shape(100.f);
    // shape.setFillColor(sf::Color::Green);
    Game *game = new Game;
    Ball *ball = new Ball;
    // ball.circle.setRadius(50);
    // ball.circle.setPosition(sf::Vector2f(285, 250));
    // ball.circle.setFillColor(sf::Color::Red);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


        window.setFramerateLimit(100);
        game->Update(1);
        window.clear();
        window.draw(*game);
      //  window.draw(*ball);
      //  window.draw(cricle);
        window.display();
    }

    return 0;
}
