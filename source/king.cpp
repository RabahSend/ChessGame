#include "king.hpp"
#include <iostream>

King::King(uint _color, uint _x, uint _y) 
    : Piece(_color), x(_x), y(_y) 
{
    sprite.setTexture(texture);
    
    sf::Rect<int> coordSprite;
    (Piece::getColor() ? coordSprite = { 35, 25, 110, 110} : coordSprite = { 35, 150, 110, 110});

    sprite.setTextureRect(coordSprite);
    sprite.setPosition(x, y);
}