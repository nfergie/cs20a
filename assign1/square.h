#pragma once
#include "rectangle.h"

namespace assign1{

	class square : public rectangle{
	public:
		square(double s1);
		virtual double area();
		virtual double circumference();
		virtual std::string getDescription();

	protected:
		double s1;
	};
}