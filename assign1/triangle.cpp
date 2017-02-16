#include <iostream>
#include <math.h>
#include <string>
#include "triangle.h"

namespace assign1{
	triangle::triangle(double s1, double s2, double s3) 
			: shape(), s1(side1), s2(side2), s3(side3){ }

	double triangle::area(){
		//calculated with Heron's formula
		double sx = (s1 + s2 + s3)/2.0;
		return sqrt(sx*(sx-s1)*(sx-s2)*(sx-s3));
	}

	double triangle::circumference(){
		return s1+s2+s3;
	}
	std::string triangle::getDescription(){
		return "triangle with side1 = "+std::to_string(s1) +
				", side2 = " + std::to_string(s2) +
				", side3 = " + std::to_string(s3);
	}
}