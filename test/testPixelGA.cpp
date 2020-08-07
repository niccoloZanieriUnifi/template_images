//
// Created by niccolo on 06/08/20.
//

#include "gtest/gtest.h"
#include "../PixelGA.h"

TEST(GATEST, Constructors) {
    PixelGA ga1;
    EXPECT_EQ(0, ga1.getA());
    EXPECT_EQ(0, ga1.getG());

    PixelGA ga2(3.6, 7.5);
    EXPECT_EQ(7.5f, ga2.getA());
    EXPECT_EQ(3.6f, ga2.getG());


    EXPECT_THROW(PixelGA(-3, 5), std::out_of_range);
    EXPECT_THROW(PixelGA(5.6, -4), std::out_of_range);
}

TEST(GATEST, MinusOperator) {

    EXPECT_THROW(PixelGA(3, 65) - PixelGA(45, 3), std::out_of_range);
    EXPECT_EQ(PixelGA(3, 45) - PixelGA(1, 5), PixelGA(2, 40));
}

TEST(GATEST, PlusOperator) {
    EXPECT_EQ(PixelGA(4, 6) + PixelGA(5, 6), PixelGA(9, 12));
}

TEST(GATEST, EqualityOperator) {
    EXPECT_TRUE(PixelGA(4, 6.8) == PixelGA(4, 6.8));
    EXPECT_FALSE(PixelGA(4, 6) == PixelGA(5, 8));
    EXPECT_FALSE(PixelGA(4, 6.9) == PixelGA(4, 6));
}

TEST(GATEST, InequalityOperator) {
    EXPECT_FALSE(PixelGA(4, 6.8) != PixelGA(4, 6.8));
    EXPECT_TRUE(PixelGA(4, 6) != PixelGA(5, 8));
    EXPECT_TRUE(PixelGA(4, 6.9) != PixelGA(4, 6));
}


