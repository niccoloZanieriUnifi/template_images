//
// Created by niccolo on 04/08/20.
//

#ifndef TEMPLATE_IMAGES_PIXEL_H
#define TEMPLATE_IMAGES_PIXEL_H


class Pixel {
public:
    virtual ~Pixel() = default;

    virtual void operator+(const Pixel &rhs) = 0;

    virtual void operator-(const Pixel &rhs) = 0;

    virtual void operator==(const Pixel &rhs) = 0;

    virtual void operator!=(const Pixel &rhs) = 0;
};


#endif //TEMPLATE_IMAGES_PIXEL_H
