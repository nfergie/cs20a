#pragma once
#include "ellipse.h"

namespace assign1{

	class circle : public ellipse{
		public:
			circle(double r1);

			virtual double area();
			virtual double circumference();
			virtual std::string getDescription();

		protected:
			double r1;	
	};
}