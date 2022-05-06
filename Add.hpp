#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"

class Add : public Base{
	private:
		Base* leftBase;
		Base* rightBase;
	public:
		Add(Base* left, Base* right) : leftBase(left), rightBase(right){}
		double evaluate() {return (leftBase->evaluate() + rightBase->evaluate());}
		std::string stringify() {return "(" + leftBase->stringify() + "+" + rightBase->stringify()  + ")";}
};

#endif
