#ifnfed __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"

class Add : public Base{
	private:
		Base* left;
		Base* right;
	public:
		double evaluate() {return left->evaluate() + right->evaluate();}
		std::string stringify() {return "(" + left->stringify() + std::to_string(+) + right->stringify()  + ")"}
}

#endif
