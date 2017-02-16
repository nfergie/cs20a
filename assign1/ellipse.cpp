#include <iostream>
#include <math.h>
#include <string>
#include "ellipse.h"

namespace assign1{

	ellipse::ellipse(double axis1, double axis2) :shape(), 
			a1(axis1), a2(axis2){}

	double ellipse::area(){
		return (M_PI)*a1*a2;
	}

	double ellipse::circumference(){
		//calculated with ramanujans approximation
		return (M_PI)*((3*(a1+a2))-sqrt((3*a1+a2)*(a1+3*a2)));
	}

	std::string ellipse::getDescription(){
		return "ellipse with axis1 = " + std::to_string(a1) +
		", and axis2 = " +std::to_string(a2);
	}
}