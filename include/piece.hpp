#ifndef PIECE_HPP
#define PIECE_HPP

#include <SFML/Graphics.hpp>

class Piece {
    bool color;

    public:
        static sf::Texture texture;
        Piece(bool _color);
        virtual sf::Sprite getSprite() = 0;
        inline bool getColor() { return color; }
        
};

#endif