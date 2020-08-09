//
// Created by niccolo on 04/08/20.
//

#include "PixelRGBA.h"

PixelRGBA &PixelRGBA::operator-(const PixelRGBA &rhs) {
    if (r - rhs.r < 0 || b - rhs.b < 0 || g - rhs.g < 0 || a - rhs.a < 0)
        throw std::out_of_range("Pixel's channels value must be equal or greater than 0!");
    r -= rhs.r;
    g -= rhs.g;
    b -= rhs.b;
    a -= rhs.a;

    return *this;
}


PixelRGBA &PixelRGBA::operator+(const PixelRGBA &rhs) {
    r += rhs.r;
    g += rhs.g;
    b += rhs.b;
    a += rhs.a;

    return *this;
}



bool PixelRGBA::operator==(const PixelRGBA &rhs) const {
    return (r == rhs.r && g == rhs.g && b == rhs.b && a == rhs.a);
}

bool PixelRGBA::operator!=(const PixelRGBA &rhs) const {
    return !(*this == rhs);
}

PixelRGBA::PixelRGBA(float r, float g, float b, float a) : r(r), g(g), b(b), a(a) {
    if (r < 0 || g < 0 || b < 0 || a < 0)
        throw std::out_of_range("Pixel's channels value must be equal or greater than 0!");
}

void PixelRGBA::setValue(float red, float green, float blue, float alpha) {
    r = red;
    g = green;
    b = blue;
    a = alpha;
}

