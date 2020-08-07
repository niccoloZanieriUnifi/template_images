//
// Created by niccolo on 03/08/20.
//

#ifndef TEMPLATE_IMAGES_PIXELRGB_H
#define TEMPLATE_IMAGES_PIXELRGB_H


#include <stdexcept>

class PixelRGB {
public:
    ~PixelRGB() = default;

    PixelRGB(float r, float g, float b);

    explicit PixelRGB(float c) : PixelRGB(c, c, c) {};

    PixelRGB() : PixelRGB(0, 0, 0) {};

    PixelRGB & operator+(const PixelRGB &rhs);

    PixelRGB &operator-(const PixelRGB &rhs);

    bool operator==(const PixelRGB &rhs) const;

    bool operator!=(const PixelRGB &rhs) const;

    float getR() const {
        return r;
    }

    void setR(float r) {
        PixelRGB::r = r;
    }

    float getG() const {
        return g;
    }

    void setG(float g) {
        PixelRGB::g = g;
    }

    float getB() const {
        return b;
    }

    void setB(float b) {
        PixelRGB::b = b;
    }

private:
    float r;
    float g;
    float b;
};


#endif //TEMPLATE_IMAGES_PIXELRGB_H
