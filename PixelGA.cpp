//
// Created by niccolo on 04/08/20.
//

#include "PixelGA.h"

PixelGA &PixelGA::operator+(const PixelGA &rhs) {
    g += rhs.g;
    a += rhs.a;

    return *this;
}

PixelGA &PixelGA::operator-(const PixelGA &rhs) {
    if (g - rhs.g < 0 || a - rhs.a < 0)
        throw std::out_of_range("Pixel's channels value must be equal or greater than 0!");
    g -= rhs.g;
    a -= rhs.a;

    return *this;
}

bool PixelGA::operator==(const PixelGA &rhs) const {
    return (g == rhs.g && a == rhs.a);

}

bool PixelGA::operator!=(const PixelGA &rhs) const {
    return !(*this == rhs);
}
