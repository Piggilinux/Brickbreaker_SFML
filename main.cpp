
#include <SFML/Graphics.hpp>
#include "game.hpp"
#include <string>
//#include <crtdbg.h>

using namespace std;
int window_x = 800;
int window_y = 500;

int main()
{
//  	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    sf::RenderWindow window(sf::VideoMode(window_x, window_y), "SFML works!");
    // sf::CircleShape shape(100.f);
    // shape.setFillColor(sf::Color::Green);
    Game *game = new Game;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        game->Update(1);
        window.clear();
        window.draw(*game);
        window.display();
    }

    return 0;
}
