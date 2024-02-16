#pragma once
#include <string>
#include "Point.h"

namespace rut::cip::figure
{
	class Triangle
	{
	public:
		Triangle(const Point& point1,
			const Point& point2,
			const Point& point3);

		double GetPerimeter() const;
		double GetArea() const;
		double GetSide1() const;
		double GetSide2() const;
		double GetSide3() const;
		std::string ToString() const;

	private:
		Point point1;
		Point point2;
		Point point3;
		double side1;
		double side2;
		double side3;
	};
}