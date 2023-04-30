#ifndef SETOFPIECES_HPP
#define SETOFPIECES_HPP

#include "piece.hpp"
#include <vector>
#include <string>

class setOfPieces {
    std::vector<Piece> set;
    std::string notation;

    public:
        inline setOfPieces(std::string _notation, uint maxSize) : notation(_notation), set(0) {
            set.reserve(maxSize);
        }
        
};

#endif