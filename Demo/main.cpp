#include <iostream>
#include <locale>
#include "..\Domain\Point.h"
#include "..\Domain\Triangle.h"

using namespace rut::cip::figure;

double GetCoordinate(std::string message);

int main()
{
	setlocale(LC_ALL, "RU");

	Point point1{};
	point1.x = GetCoordinate("Введите x = ");
	point1.y = GetCoordinate("Введите y = ");
	
	Point point2{};
	point2.x = GetCoordinate("Введите x = ");
	point2.y = GetCoordinate("Введите y = ");

	Point point3{};
	point3.x = GetCoordinate("Введите x = ");
	point3.y = GetCoordinate("Введите y = ");

	Triangle triangle{ point1, point2, point3 };
	std::cout << triangle.ToString() << "\n";

	return 0;
}

double GetCoordinate(std::string message)
{
	std::cout << message;
	double coordinate = 0;
	std::cin >> coordinate;
	return coordinate;
}
