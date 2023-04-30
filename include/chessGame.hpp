#ifndef CHESSGAME_HPP
#define CHESSGAME_HPP

#include <SFML/Graphics.hpp>
#include <map>
#include <string>

typedef unsigned uint;

std::map<std::string, uint> type = { 
                                    {"None", 0},
                                    {"Pawn", 1},
                                    {"Bishop", 100}, 
                                    {"Knight", 200}, 
                                    {"Rook", 300}, 
                                    {"Queen", 400},
                                    {"King", 500}
                                };

sf::Texture texture;

#endif