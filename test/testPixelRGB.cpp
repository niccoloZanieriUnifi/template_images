//
// Created by niccolo on 06/08/20.
//

#include "gtest/gtest.h"
#include "../PixelRGB.h"

TEST(RGBTEST, Constructors) {
    PixelRGB rgb1;
    EXPECT_EQ(0, rgb1.getR());
    EXPECT_EQ(0, rgb1.getG());
    EXPECT_EQ(0, rgb1.getB());

    PixelRGB rgb2(2.3, 3.6, 4.6);
    EXPECT_EQ(2.3f, rgb2.getR());
    EXPECT_EQ(3.6f, rgb2.getG());
    EXPECT_EQ(4.6f, rgb2.getB());

    PixelRGB rgb3(8.678);
    EXPECT_EQ(8.678f, rgb3.getR());
    EXPECT_EQ(8.678f, rgb3.getG());
    EXPECT_EQ(8.678f, rgb3.getB());

    EXPECT_THROW(PixelRGB(-3, 5, 6), std::out_of_range);
    EXPECT_THROW(PixelRGB(-5.6), std::out_of_range);
}

TEST(RGBTEST, MinusOperator) {

    EXPECT_THROW(PixelRGB(3) - PixelRGB(45), std::out_of_range);
    EXPECT_THROW(PixelRGB(3, 5, 6) - PixelRGB(1, 5, 8), std::out_of_range);
    EXPECT_EQ(PixelRGB(3) - PixelRGB(1), PixelRGB(2));
}

TEST(RGBTEST, PlusOperator) {
    EXPECT_EQ(PixelRGB(4) + PixelRGB(5), PixelRGB(9));
}

TEST(RGBTEST, EqualityOperator) {
    EXPECT_TRUE(PixelRGB(4, 6.8, 4.4) == PixelRGB(4, 6.8, 4.4));
    EXPECT_FALSE(PixelRGB(4) == PixelRGB(5));
    EXPECT_FALSE(PixelRGB(4, 6, 8.6) == PixelRGB(4, 6, 8.09));
}

TEST(RGBTEST, InequalityOperator) {
    EXPECT_FALSE(PixelRGB(4, 6.8, 4.4) != PixelRGB(4, 6.8, 4.4));
    EXPECT_TRUE(PixelRGB(4) != PixelRGB(5));
    EXPECT_TRUE(PixelRGB(4, 6, 8.6) != PixelRGB(4, 6, 8.09));
}


