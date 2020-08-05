//
// Created by niccolo on 04/08/20.
//

#include "PixelG.h"

void PixelG::operator+(const PixelG &rhs) {
    g += rhs.g;
}

void PixelG::operator-(const PixelG &rhs) {
    if (g - rhs.g < 0)
        throw std::out_of_range("Pixel's channel value must be equal or greater than 0!");
    g -= rhs.g;
}

bool PixelG::operator==(const PixelG &rhs) const {
    return g == rhs.g;
}

bool PixelG::operator!=(const PixelG &rhs) const {
    return !(*this == rhs);
}
