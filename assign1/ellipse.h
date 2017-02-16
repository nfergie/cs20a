#pragma once
#include "shape.h"

namespace assign1{

	class ellipse : public shape{
		public:
			ellipse(double a1, double a2);

			virtual double area();
			virtual double circumference();
			virtual std::string getDescription();

		protected:
			double a1, a2;
	};
}