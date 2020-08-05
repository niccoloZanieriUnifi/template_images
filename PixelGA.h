//
// Created by niccolo on 04/08/20.
//

#ifndef TEMPLATE_IMAGES_PIXELGA_H
#define TEMPLATE_IMAGES_PIXELGA_H


class PixelGA {
public:
    ~PixelGA() = default;

    PixelGA(float g, float a) : g(g), a(a) {};

    PixelGA() : PixelGA(0, 0) {};


private:
    float g;
    float a;


};


#endif //TEMPLATE_IMAGES_PIXELGA_H
