#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "Add.hpp"

TEST(AddTest, Addition){
	Op* stub1 = new Op(5);
	Op* stub2 = new Op(7);
	Base* test = new Add(stub1, stub2);
	EXPECT_EQ(test->evaluate(), 12.0);
}

TEST(AddTest, AdditionNeg){
	Op* stub1 = new Op(-10);
        Op* stub2 = new Op(5);
        Base* test = new Add(stub1, stub2);
        EXPECT_EQ(test->evaluate(), -5.0);
}

TEST(AddTest, AdditionZero){
        Op* stub1 = new Op(0);
        Op* stub2 = new Op(245);
        Base* test = new Add(stub1, stub2);
        EXPECT_EQ(test->evaluate(), 245);
}

TEST(AddTest, OrderedExpression){
        Op* stub1 = new Op(5);
        Op* stub2 = new Op(7);
        Base* test = new Add(stub1, stub2);
        EXPECT_EQ(test->stringify(), "(5.000000+7.000000)");
}

TEST(AddTest, OrderedExpressionNeg){
        Op* stub1 = new Op(-24);
        Op* stub2 = new Op(2);
        Base* test = new Add(stub1, stub2);
        EXPECT_EQ(test->stringify(), "(-24.000000+2.000000)");
}

TEST(AddTest, OrderedExpressionZero){
        Op* stub1 = new Op(0);
        Op* stub2 = new Op(1.5);
        Base* test = new Add(stub1, stub2);
        EXPECT_EQ(test->stringify(), "(0.000000+1.500000)");
}


#endif
