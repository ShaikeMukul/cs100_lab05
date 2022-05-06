#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__
#include "gtest/gtest.h"
#include "mult.hpp"
#include "op.hpp"

TEST(MultTest, MultEvaluate) {
	Base* three = new Op(3);
	Base* four = new Op(4);
	Mult* test = new Mult(three, four);
	EXPECT_EQ(test->evaluate(), 12);
}

TEST(MultTest, MultEvaluateNeg) {
        Base* three = new Op(3);
        Base* negfour = new Op(-4);
        Mult* test = new Mult(three, negfour);
        EXPECT_EQ(test->evaluate(), -12);
}

TEST(MultTest, MultStringify) {
        Base* three = new Op(5);
        Base* four = new Op(4);
        Mult* test = new Mult(three, four);
        EXPECT_EQ(test->stringify(), "(3.000000 * 4.000000)");
}

TEST(MultTest, MultStringifyNeg) {
        Base* three = new Op(3);
        Base* negfour = new Op(-4);
        Mult* test = new Mult(three, negfour);
        EXPECT_EQ(test->stringify(), "(3.000000 * -4.000000)");
}


#endif// __MULT_TEST_HPP__
