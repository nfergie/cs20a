#pragma once
namespace assign1{

	class shape
	{
	public:
		shape();

		virtual double area() = 0;
		virtual double circumference() = 0;
		virtual std::string getDescription();
	};
}