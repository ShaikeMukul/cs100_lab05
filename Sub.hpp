#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"

class Sub : public Base{
	private:
		Base* leftBase;
		Base* rightBase;
	public:
		Sub(Base* left, Base* right) : leftBase(left), rightBase(right){}
		double evaluate() {return (leftBase->evaluate() - rightBase->evaluate());}
		std::string stringify() {return "(" + leftBase->stringify() + "-" + rightBase->stringify()  + ")";}
};

#endif
