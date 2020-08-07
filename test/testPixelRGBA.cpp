//
// Created by niccolo on 06/08/20.
//

#include "gtest/gtest.h"
#include "../PixelRGBA.h"

TEST(RGBATEST, Constructors) {
    PixelRGBA rgba1;
    EXPECT_EQ(0, rgba1.getA());
    EXPECT_EQ(0, rgba1.getR());
    EXPECT_EQ(0, rgba1.getG());
    EXPECT_EQ(0, rgba1.getB());

    PixelRGBA rgba2(2.3, 3.6, 4.6, 7.5);
    EXPECT_EQ(7.5f, rgba2.getA());
    EXPECT_EQ(2.3f, rgba2.getR());
    EXPECT_EQ(3.6f, rgba2.getG());
    EXPECT_EQ(4.6f, rgba2.getB());

    PixelRGBA rgba3(8.678, 9.6);
    EXPECT_EQ(9.6f, rgba3.getA());
    EXPECT_EQ(8.678f, rgba3.getR());
    EXPECT_EQ(8.678f, rgba3.getG());
    EXPECT_EQ(8.678f, rgba3.getB());

    EXPECT_THROW(PixelRGBA(-3, 5, 6, 6), std::out_of_range);
    EXPECT_THROW(PixelRGBA(-5.6, 4), std::out_of_range);
}

TEST(RGBATEST, MinusOperator) {

    EXPECT_THROW(PixelRGBA(3, 65) - PixelRGBA(45, 3), std::out_of_range);
    EXPECT_EQ(PixelRGBA(3, 45) - PixelRGBA(1, 5), PixelRGBA(2, 40));
}

TEST(RGBATEST, PlusOperator) {
    EXPECT_EQ(PixelRGBA(4, 6) + PixelRGBA(5, 6), PixelRGBA(9, 12));
}

TEST(RGBATEST, EqualityOperator) {
    EXPECT_TRUE(PixelRGBA(4, 6.8, 4.4, 6.3) == PixelRGBA(4, 6.8, 4.4, 6.3));
    EXPECT_FALSE(PixelRGBA(4, 6) == PixelRGBA(5, 8));
    EXPECT_FALSE(PixelRGBA(4, 6, 8.6, 1) == PixelRGBA(4, 6, 8.6, 1.002));
}

TEST(RGBATEST, InequalityOperator) {
    EXPECT_FALSE(PixelRGBA(4, 6.8, 4.4, 6.3) != PixelRGBA(4, 6.8, 4.4, 6.3));
    EXPECT_TRUE(PixelRGBA(4, 6) != PixelRGBA(5, 8));
    EXPECT_TRUE(PixelRGBA(4, 6, 8.6, 1) != PixelRGBA(4, 6, 8.6, 1.002));
}


