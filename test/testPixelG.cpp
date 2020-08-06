//
// Created by niccolo on 06/08/20.
//

//
// Created by niccolo on 06/08/20.
//

#include "gtest/gtest.h"
#include "../PixelG.h"

TEST(GTEST, Constructors) {
    PixelG g1;
    EXPECT_EQ(0, g1.getG());

    PixelG g2(3.6);
    EXPECT_EQ(3.6f, g2.getG());

    EXPECT_THROW(PixelG(-3), std::out_of_range);
}

TEST(GTEST, MinusOperator) {

    EXPECT_THROW(PixelG(3) - PixelG(45), std::out_of_range);
    EXPECT_EQ(PixelG(3) - PixelG(1), PixelG(2));
}

TEST(GTEST, PlusOperator) {
    EXPECT_EQ(PixelG(4) + PixelG(5), PixelG(9));
}

TEST(GTEST, EqualityOperator) {
    EXPECT_TRUE(PixelG(4) == PixelG(4));
    EXPECT_FALSE(PixelG(4) == PixelG(5));
}

TEST(GTEST, InequalityOperator) {
    EXPECT_FALSE(PixelG(4) != PixelG(4));
    EXPECT_TRUE(PixelG(4) != PixelG(5));
}


