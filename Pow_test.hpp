#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "Pow.hpp"

TEST(PowTest, Subtraction){
	Op* stub1 = new Op(5);
	Op* stub2 = new Op(3);
	Base* test = new Pow(stub1, stub2);
	EXPECT_EQ(test->evaluate(), 125);
}

TEST(PowTest, PowNeg){
	Op* stub1 = new Op(2);
        Op* stub2 = new Op(-2);
        Base* test = new Pow(stub1, stub2);
        EXPECT_EQ(test->evaluate(), .25);
}

TEST(PowTest, PowZero){
        Op* stub1 = new Op(0);
        Op* stub2 = new Op(245);
        Base* test = new Pow(stub1, stub2);
        EXPECT_EQ(test->evaluate(), 0);
}

TEST(PowTest, OtherPowZero){
        Op* stub1 = new Op(12);
        Op* stub2 = new Op(0);
        Base* test = new Pow(stub1, stub2);
        EXPECT_EQ(test->evaluate(), 1);
}

TEST(PowTest, OrderedExpression){
        Op* stub1 = new Op(5);
        Op* stub2 = new Op(7);
        Base* test = new Pow(stub1, stub2);
        EXPECT_EQ(test->stringify(), "(5.000000**7.000000)");
}

TEST(PowTest, OrderedExpressionNeg){
        Op* stub1 = new Op(-24);
        Op* stub2 = new Op(2);
        Base* test = new Pow(stub1, stub2);
        EXPECT_EQ(test->stringify(), "(-24.000000**2.000000)");
}

TEST(PowTest, OrderedExpressionZero){
        Op* stub1 = new Op(0);
        Op* stub2 = new Op(1.5);
        Base* test = new Pow(stub1, stub2);
        EXPECT_EQ(test->stringify(), "(0.000000**1.500000)");
}


#endif

