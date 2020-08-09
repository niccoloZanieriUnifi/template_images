//
// Created by niccolo on 03/08/20.
//

#ifndef TEMPLATE_IMAGES_IMAGE_H
#define TEMPLATE_IMAGES_IMAGE_H

#include <vector>
#include "PixelRGBA.h"
#include "PixelRGB.h"
#include "PixelGA.h"
#include "PixelG.h"

template<typename T>
class Image {
public:
    Image() : Image(0, 0) {};

    Image(int h, int w) : height(h), width(w) {
        pixels.reserve(h * w);
        for (int i = 0; i < h * w; i++)
            pixels.emplace_back(T());
    }

    void setPixel(int x, int y, const T &newValue) {
        pixels[x * height + y] = newValue;
    }


private:
    int height{0};
    int width{0};
    std::vector<T> pixels;
};

template<>
class Image<PixelRGBA> {
public:
    Image() : Image(0, 0) {};

    Image(int h, int w) : height(h), width(w) {
        pixels.reserve(h * w);
        for (int i = 0; i < h * w; i++)
            pixels.emplace_back(PixelRGBA());
    }

    void setPixel(int x, int y, float r, float g, float b, float a) {
        pixels[x * height + y].setValue(r, g, b, a);
    }


private:
    int height{0};
    int width{0};
    std::vector<PixelRGBA> pixels;
};

template<>
class Image<PixelRGB> {
public:
    Image() : Image(0, 0) {};

    Image(int h, int w) : height(h), width(w) {
        pixels.reserve(h * w);
        for (int i = 0; i < h * w; i++)
            pixels.emplace_back(PixelRGB());
    }

    void setPixel(int x, int y, float r, float g, float b, float a) {
        pixels[x * height + y].setValue(r, g, b, a);
    }


private:
    int height{0};
    int width{0};
    std::vector<PixelRGB> pixels;
};


#endif //TEMPLATE_IMAGES_IMAGE_H
