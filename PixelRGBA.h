//
// Created by niccolo on 04/08/20.
//

#ifndef TEMPLATE_IMAGES_PIXELRGBA_H
#define TEMPLATE_IMAGES_PIXELRGBA_H


class PixelRGBA {
public:
    ~PixelRGBA() = default;

    PixelRGBA(float r, float g, float b, float a) : r(r), g(g), b(b), a(a) {};

    PixelRGBA(float c, float a) : PixelRGBA(c, c, c, a) {};

    PixelRGBA() : PixelRGBA(0, 0, 0, 0) {};

    void operator+(const PixelRGBA &rhs);

    void operator-(const PixelRGBA &rhs);

    void operator==(const PixelRGBA &rhs);

    void operator!=(const PixelRGBA &rhs);

private:
    float r;
    float g;
    float b;
    float a;

};


#endif //TEMPLATE_IMAGES_PIXELRGBA_H
