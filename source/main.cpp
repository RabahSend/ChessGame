#include "piece.hpp"
#include "king.hpp"
#include "chessGame.hpp"

int main() {
    Piece::texture.loadFromFile("image/texture.png");

    King whiteKing(1, 390.f, 700.f);
    King blackKing(0, 290.f, 0);
    sf::RenderWindow window(sf::VideoMode(800, 800), "Chess");


    // run the program as long as the window is open
    while (window.isOpen()) {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
            // Shape creation for the black and white cases
    sf::RectangleShape whiteSquare(sf::Vector2f(100.f, 100.f));
    whiteSquare.setFillColor(sf::Color::White);
    sf::RectangleShape blackSquare(sf::Vector2f(100.f, 100.f));
    blackSquare.setFillColor(sf::Color::Black);

    // Grids creation
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) { // if the sum is even
                whiteSquare.setPosition(i * 100.f, j * 100.f);
                window.draw(whiteSquare);
            }
            else {
                blackSquare.setPosition(i * 100.f, j * 100.f);
                window.draw(blackSquare);
            }
        }
    }
    
    window.draw(whiteKing.getSprite());
    window.draw(blackKing.getSprite());

        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.display();
    }

    return 0;
}