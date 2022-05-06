#ifndef DIV_HPP
#define DIV_HPP
#include <iostream>
#include <string>
#include "base.hpp"
#include <limits.h>

using namespace std;

class Div: public Base {
   private:
        Base* div1;
        Base* div2;
   public:
        Div(Base* div_val1, Base* div_val2) : Base() {
                div1 = div_val1;
                div2 = div_val2;
        }

        virtual double evaluate() {
                if(div2->evaluate() == 0){ return INT_MAX;} 
                else return (div1->evaluate() / div2->evaluate());
        }

        virtual std::string stringify() {
                return("(" + div1->stringify() + " / " + div2->stringify() + ")");
        }


};
#endif

