
#include <SFML/Graphics.hpp>
#include "game.hpp"
#include <string>

using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 500), "SFML works!");
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

        window.clear();
        window.draw(*game);
        window.display();
    }

    return 0;
}
