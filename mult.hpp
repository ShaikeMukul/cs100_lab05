#ifndef __MULT_HPP__
#define __MULT_HPP__
#include <iostream>
#include <string>
#include "base.hpp"

using namespace std;


class Mult: public Base {
     private:
	Base* mult1;
	Base* mult2;
     public:
	Mult(Base* mult_val1, Base* mult_val2) : Base() {
	mult1 = mult_val1;
	mult2 = mult_val2;
}
    virtual double evaluate() {
	return (mult1->evaluate() * mult2->evaluate());
	}
    virtual std::string stringify() {
		return "(" +  mult1->stringify() + " * " + mult2->stringify() + ")";
	}

};

#endif //__MULT_HPP__
