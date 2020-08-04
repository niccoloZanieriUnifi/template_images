//
// Created by niccolo on 04/08/20.
//

#ifndef TEMPLATE_IMAGES_PIXELRGBA_H
#define TEMPLATE_IMAGES_PIXELRGBA_H


#include "Pixel.h"

class PixelRGBA : Pixel {
public:
    ~PixelRGBA() override = default;

    PixelRGBA(float r, float g, float b, float a) : r(r), g(g), b(b), a(a) {};

    PixelRGBA(float c, float a) : PixelRGBA(c, c, c, a) {};

    PixelRGBA() : PixelRGBA(0, 0, 0, 0) {};
private:
    float r;
    float g;
    float b;
    float a;

};


#endif //TEMPLATE_IMAGES_PIXELRGBA_H
