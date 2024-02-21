#include <sstream>
#include "Triangle.h"

rut::cip::figure::Triangle::Triangle(
	const Point& point1,
	const Point& point2,
	const Point& point3)
	: point1{point1}, point2{point2}, point3{point3}
{
	if (point1 == point2 || point2 == point3
		|| point1 == point3)
	{
		throw std::logic_error("Can't be triangle");
	}
}

double rut::cip::figure::Triangle::GetSide1() const
{
	return this->side1;
}

double rut::cip::figure::Triangle::GetSide2() const
{
	return this->side2;
}

double rut::cip::figure::Triangle::GetSide3() const
{
	return this->side3;
}

std::string rut::cip::figure::Triangle::ToString() const
{
	std::stringstream buffer{};
	buffer << "Первая сторона " << this->side1 <<
		" Вторая сторона " << this->side2 <<
		" Стороны сторона " << this->side3;

	return buffer.str();
}
