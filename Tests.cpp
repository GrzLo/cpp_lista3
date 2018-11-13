//
// Created by jakub on 12.11.18.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "QuadraticEquation.h"
#include "QuadraticException.h"

//using testing::InitGoogleTest;

TEST(RootsTest, Zero) {
    QuadraticEquation test(5, 8, 3);
    EXPECT_EQ(-1, test.Roots(1));
    EXPECT_EQ(-0.6, test.Roots(2));
}

TEST(RootsTestException, One) {
    QuadraticEquation test(2, -4, 2);
    EXPECT_EQ(1, test.Roots(1));
//    EXPECT_THAT(std::string(exception.what(), Eq()))
    EXPECT_THROW(test.Roots(3), QuadraticException);
}