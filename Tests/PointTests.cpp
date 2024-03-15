#include "pch.h"
#include "CppUnitTest.h"
#include "..\Domain\Point.h"
#include <limits>


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{
	TEST_CLASS(PointTests)
	{
	public:
		
		TEST_METHOD(Ctor_ValidData_Success)
		{
			// Arrange
			const double x = 1.0;
			const double y = 1.0;
			rut::cip::figure::Point point{ x, y };
			double expectedX = x;
			double expectedY = y;

			// Act
			double actualX = point.x;
			double actualY = point.y;

			// Assert
			Assert::IsTrue(std::abs(expectedX - actualX)
				<= std::numeric_limits<double>::epsilon());
		}
	};
}
