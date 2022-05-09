#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__
#include "gtest/gtest.h"
#include "div.hpp"
#include "op.hpp"

TEST(DivTest, DivEvaluateZero) {
        Base* eight = new Op(8);
        Base* zero = new Op(0);
        Div* test = new Div(eight, zero);
        EXPECT_EQ(test->evaluate(), 0);
}

TEST(DivTest, DivEvaluate) {
        Base* eight = new Op(8);
        Base* four = new Op(4);
        Div* test = new Div(eight, four);
        EXPECT_EQ(test->evaluate(), 2);
}

TEST(DivTest, DivEvaluateNeg) {
        Base* eight = new Op(8);
        Base* negfour = new Op(-4);
        Div* test = new Div(eight, negfour);
        EXPECT_EQ(test->evaluate(), -2);
}

TEST(DivTest, DivStringifyZero) {
        Base* eight = new Op(8);
        Base* zero = new Op(0);
        Div* test = new Div(eight, zero);
        EXPECT_EQ(test->stringify(), "(8.000000 / 0.000000)");
}

TEST(DivTest, DivStringify) {
        Base* eight = new Op(8);
        Base* four = new Op(4);
        Div* test = new Div(eight, four);
        EXPECT_EQ(test->stringify(), "(8.000000 / 4.000000)");
}

TEST(DivTest, DivStringifyNeg) {
        Base* eight = new Op(8);
        Base* negfour = new Op(-4);
        Div* test = new Div(eight, negfour);
        EXPECT_EQ(test->stringify(), "(8.000000 / -4.000000)");
}


#endif// __DIV_TEST_HPP__
