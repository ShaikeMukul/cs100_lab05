#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__
#include "gtest/gtest.h"
#include "op.hpp"

TEST(OpTest, OpEvaluate) {
    Base* eight = new Op(8);
    EXPECT_EQ(eight->evaluate(), 8);
}

TEST(OpTest, OpEvaluateZero) {
    Base* zero = new Op(0);
    EXPECT_EQ(zero->evaluate(), 0);
}

TEST(OpTest, OpEvaluateNeg) {
    Base* negeight = new Op(-8);
    EXPECT_EQ(negeight->evaluate(), -8);
}

TEST(OpTest, OpStringify) {
    Base* eight = new Op(8);
    EXPECT_EQ(eight->stringify(), "8.000000");
}

TEST(OpTest, OpStringifyZero) {
    Base* zero = new Op(0);
    EXPECT_EQ(zero->stringify(), "0.000000");
}

TEST(OpTest, OpStringifyNeg) {
    Base* negeight = new Op(-8);
    EXPECT_EQ(negeight->stringify(), "-8.000000" );
}

#endif //__OP_TEST_HPP__

