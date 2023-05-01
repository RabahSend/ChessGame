#include "piece.hpp"
#include "chessGame.hpp"
#include <iostream>

sf::Texture Piece::texture;

Piece::Piece(bool _color) : 
    color(_color)
{}