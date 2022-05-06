#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include "math.h"

class Pow : public Base{
	private:
		Base* leftBase;
		Base* rightBase;
	public:
		Pow(Base* left, Base* right) : leftBase(left), rightBase(right){}
		double evaluate() {return (std::pow(leftBase->evaluate(), rightBase->evaluate()));}
		std::string stringify() {return "(" + leftBase->stringify() + "**" + rightBase->stringify()  + ")";}
};

#endif

