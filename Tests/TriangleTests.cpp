#include "pch.h"
#include "CppUnitTest.h"
#include "..\Domain\Point.h"
#include "..\Domain\Triangle.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace rut::cip::figure;
namespace Tests
{
	TEST_CLASS(TriangleTests)
	{
	public:

		TEST_METHOD(Ctor_WrongData_Exception)
		{
			// Arrange
			
			// Act & Assert
			Assert::ExpectException<std::logic_error>(
				[]()
				{ 
					Point point1{ 0, 0 };
					Point point2{ 0, 0 };
					Point point3{ 1, 1 };
					auto x = new Triangle { point1, point2, point3 };
				});
		}
	};
}