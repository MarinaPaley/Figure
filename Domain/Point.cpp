#include "Point.h"
#include <cmath>
#include <limits>
using namespace rut::cip::figure;

bool rut::cip::figure::operator==(const Point& point1, const Point& point2)
{
	return (std::abs(point1.x - point2.x) <= std::numeric_limits<double>::epsilon() &&
		std::abs(point1.y - point2.y) <= std::numeric_limits<double>::epsilon());
}

bool rut::cip::figure::operator!=(const Point& point1, const Point& point2)
{
	return !(point1 == point2);
}

rut::cip::figure::Point::Point(const double x, const double y)
	:x{x}, y{y}
{
}
