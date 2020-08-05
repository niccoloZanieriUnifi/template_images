//
// Created by niccolo on 04/08/20.
//

#ifndef TEMPLATE_IMAGES_PIXELG_H
#define TEMPLATE_IMAGES_PIXELG_H

#include <stdexcept>

class PixelG {
    ~PixelG() = default;

    explicit PixelG(float g) : g(g) {};

    PixelG() : PixelG(0) {};

    void operator+(const PixelG &rhs);

    void operator-(const PixelG &rhs);

    bool operator==(const PixelG &rhs) const;

    bool operator!=(const PixelG &rhs) const;

private:
    float g;
};


#endif //TEMPLATE_IMAGES_PIXELG_H
