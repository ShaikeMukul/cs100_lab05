#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "Sub.hpp"

TEST(SubTest, Subtraction){
	Op* stub1 = new Op(123);
	Op* stub2 = new Op(23);
	Base* test = new Sub(stub1, stub2);
	EXPECT_EQ(test->evaluate(), 100);
}

TEST(SubTest, SubtractionNeg){
	Op* stub1 = new Op(10);
        Op* stub2 = new Op(23);
        Base* test = new Sub(stub1, stub2);
        EXPECT_EQ(test->evaluate(), -13.0);
}

TEST(SubTest, SubtractionZero){
        Op* stub1 = new Op(0);
        Op* stub2 = new Op(245);
        Base* test = new Sub(stub1, stub2);
        EXPECT_EQ(test->evaluate(), -245);
}

TEST(SubTest, OrderedExpression){
        Op* stub1 = new Op(5);
        Op* stub2 = new Op(7);
        Base* test = new Sub(stub1, stub2);
        EXPECT_EQ(test->stringify(), "(5.000000-7.000000)");
}

TEST(SubTest, OrderedExpressionNeg){
        Op* stub1 = new Op(-24);
        Op* stub2 = new Op(2);
        Base* test = new Sub(stub1, stub2);
        EXPECT_EQ(test->stringify(), "(-24.000000-2.000000)");
}

TEST(SubTest, OrderedExpressionZero){
        Op* stub1 = new Op(0);
        Op* stub2 = new Op(1.5);
        Base* test = new Sub(stub1, stub2);
        EXPECT_EQ(test->stringify(), "(0.000000-1.500000)");
}


#endif

