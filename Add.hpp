#ifnfed __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"

class Add : public Base{
	private:
		Base* left;
		Base* right;
	public:
		double evaluate() {return left->evaluate() + right->evaluate();}
}

#endif
