#pragma once
#include "shape.h"

namespace assign1{

	class rectangle : public shape{
		public:
			rectangle(double s1, double s2);

			virtual double area();
			virtual double circumference();
			virtual std::string getDescription();

		protected:
			double s1, s2;
	};
}