//
// Created by niccolo on 03/08/20.
//

#ifndef TEMPLATE_IMAGES_PIXELRGB_H
#define TEMPLATE_IMAGES_PIXELRGB_H


#include "Pixel.h"

class PixelRGB : Pixel {
public:
    PixelRGB(float r, float g, float b) : r(r), g(g), b(b) {};

    explicit PixelRGB(float c) : PixelRGB(c, c, c) {};

    PixelRGB() : PixelRGB(0, 0, 0) {};

private:
    float r;
    float g;
    float b;
};


#endif //TEMPLATE_IMAGES_PIXELRGB_H
