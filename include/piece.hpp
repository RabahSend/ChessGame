#ifndef PIECE_HPP
#define PIECE_HPP

#include "chessGame.hpp"
#include <iostream>

class Piece {
    bool color;
    uint type;
    sf::Sprite sprite;

    public:
        inline Piece(bool _color, uint _type) : 
                    color(_color), type(_type) 
        {
            if (color == 0 && type == 500) {
                if (!texture.loadFromFile("image/sprite.png")) std::cout << "bug" << std::endl;
                sprite.setTexture(texture);
                sprite.setTextureRect(sf::IntRect(10, 10, 110, 110));
                sprite.setPosition(100.f, 100.f);
            }
        }

        inline sf::Sprite getSprite() { return sprite; }
        inline void setSprite(sf::Sprite _sprite) { sprite = sprite; }
        
};

#endif