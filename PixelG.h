//
// Created by niccolo on 04/08/20.
//

#ifndef TEMPLATE_IMAGES_PIXELG_H
#define TEMPLATE_IMAGES_PIXELG_H


class PixelG {
    ~PixelG() = default;

    explicit PixelG(float g) : g(g) {};

    PixelG() : PixelG(0) {};
private:
    float g;
};


#endif //TEMPLATE_IMAGES_PIXELG_H
