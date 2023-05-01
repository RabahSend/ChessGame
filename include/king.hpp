#ifndef KING_HPP
#define KING_HPP

#include "piece.hpp"
#include "chessGame.hpp"

class King : public Piece {
    uint x, y;
    sf::Sprite sprite;

public:
    King(uint _color, uint _x, uint _y);
    inline sf::Sprite getSprite() { return sprite; }
};

#endif