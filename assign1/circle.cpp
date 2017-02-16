#include <iostream>
#include <math.h>
#include <string>
#include "circle.h"

namespace assign1{

	circle::circle(double rad) : ellipse(rad, rad), r1(rad){}

	double circle::area(){
		return (M_PI)*r1*r1;
	}

	double circle::circumference(){
		return 2*(M_PI)*r1;
	}

	std::string circle::getDescription(){
		return "circle with radian = " std::to_string(r1);
	}
}