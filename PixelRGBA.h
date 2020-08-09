//
// Created by niccolo on 04/08/20.
//

#ifndef TEMPLATE_IMAGES_PIXELRGBA_H
#define TEMPLATE_IMAGES_PIXELRGBA_H

#include <stdexcept>


class PixelRGBA {
public:
    ~PixelRGBA() = default;

    PixelRGBA(float r, float g, float b, float a);

    PixelRGBA(float c, float a) : PixelRGBA(c, c, c, a) {};

    PixelRGBA() : PixelRGBA(0, 0, 0, 0) {};

    PixelRGBA &operator+(const PixelRGBA &rhs);

    PixelRGBA &operator-(const PixelRGBA &rhs);

    bool operator==(const PixelRGBA &rhs) const;

    bool operator!=(const PixelRGBA &rhs) const;

    float getR() const {
        return r;
    }

    void setR(float r) {
        PixelRGBA::r = r;
    }

    float getG() const {
        return g;
    }

    void setG(float g) {
        PixelRGBA::g = g;
    }

    float getB() const {
        return b;
    }

    void setB(float b) {
        PixelRGBA::b = b;
    }

    float getA() const {
        return a;
    }

    void setA(float a) {
        PixelRGBA::a = a;
    }

    void setValue(float red, float green, float blue, float alpha);

private:
    float r;
    float g;
    float b;
    float a;

};


#endif //TEMPLATE_IMAGES_PIXELRGBA_H
