#include <iostream>
#include <math.h>
#include <string>
#include "square.h"

namespace assign1{

	square::square(double side1): rectangle(side1, side1), s1(side1){}

	double square::area(){
		return s1*s1;
	}

	double square::circumference(){
		return s1*s1*s1*s1;
	}

	std::string square::getDescription(){
		return "sqare with side = " + std::to_string(s1);
	}
}