//
// Created by niccolo on 03/08/20.
//

#include "PixelRGB.h"

PixelRGB &PixelRGB::operator+(const PixelRGB &rhs) {
    r += rhs.r;
    g += rhs.g;
    b += rhs.b;

    return *this;
}

PixelRGB &PixelRGB::operator-(const PixelRGB &rhs) {
    if (r - rhs.r < 0 || b - rhs.b < 0 || g - rhs.g < 0)
        throw std::out_of_range("Pixel's channels value must be equal or greater than 0!");
    r -= rhs.r;
    g -= rhs.g;
    b -= rhs.b;

    return *this;
}

bool PixelRGB::operator==(const PixelRGB &rhs) const {
    return (r == rhs.r && g == rhs.g && b == rhs.b);
}

bool PixelRGB::operator!=(const PixelRGB &rhs) const {
    return !(*this == rhs);
}
