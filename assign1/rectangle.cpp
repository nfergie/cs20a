#include <iostream>
#include <math.h>
#include <string>
#include "rectangle.h"

namespace assign1{

	rectangle::rectangle(double side1, double side2) : shape(),
			s1(side1), s2(side2){}

	double rectangle::area(){
		return s1*s2;
	}

	double rectangle::circumference(){
		return (s1*2)+(s2*2);
	}
	std::string rectangle::getDescription(){
		return "rectangle with side1 = " + std::to_string(s1) +
				", and side2 = " + std::to_string(s2);
	}
}