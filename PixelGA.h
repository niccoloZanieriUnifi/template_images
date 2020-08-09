//
// Created by niccolo on 04/08/20.
//

#ifndef TEMPLATE_IMAGES_PIXELGA_H
#define TEMPLATE_IMAGES_PIXELGA_H

#include <stdexcept>

class PixelGA {
public:
    ~PixelGA() = default;

    PixelGA(float g, float a);

    PixelGA() : PixelGA(0, 0) {};

    PixelGA & operator+(const PixelGA &rhs);

    PixelGA & operator-(const PixelGA &rhs);

    bool operator==(const PixelGA &rhs) const;

    bool operator!=(const PixelGA &rhs) const;

    float getG() const {
        return g;
    }

    void setG(float g) {
        PixelGA::g = g;
    }

    float getA() const {
        return a;
    }

    void setA(float a) {
        PixelGA::a = a;
    }

    void setValue(float gray, float alpha);

private:
    float g;
    float a;


};


#endif //TEMPLATE_IMAGES_PIXELGA_H
