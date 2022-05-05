#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
    private:
	double storedValue = -1.0;
    public:
        Op(double value) : Base(), storedValue(value) { }
        virtual double evaluate() { return storedValue; }
        virtual std::string stringify() { return std::to_string(storedValue); }
};

#endif //__OP_HPP__
