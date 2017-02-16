#pragma once
#include "shape.h"

namespace assign1{

	class triangle : public shape{
		public:
			triangle(double s1, double s2, double s3);

			virtual double area();
			virtual double circumference();
			virtual std::string getDescription();

		protected:
			double s1, s2, s3;
	};
}