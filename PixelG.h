//
// Created by niccolo on 04/08/20.
//

#ifndef TEMPLATE_IMAGES_PIXELG_H
#define TEMPLATE_IMAGES_PIXELG_H

#include <stdexcept>

class PixelG {
public:
    ~PixelG() = default;

    explicit PixelG(float g);

    PixelG() : PixelG(0) {};

    PixelG operator+(const PixelG &rhs);

    PixelG &operator-(const PixelG &rhs);

    bool operator==(const PixelG &rhs) const;

    bool operator!=(const PixelG &rhs) const;

public:
    float getG() const {
        return g;
    }

    void setG(float g) {
        PixelG::g = g;
    }

    void setValue(float gray) {
        g = gray;
    }

private:
    float g;
};


#endif //TEMPLATE_IMAGES_PIXELG_H
