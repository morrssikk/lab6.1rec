#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1rec/lab6.1rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestrec
{
	TEST_CLASS(UnitTestrec)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int r[n] = { 87, 52, 65, 30, 46, 23, 24, 70, 33, 76 };

			int sum = 0;
			int count = 0;

			int expectedSum = 0 + 52 + 65 + 30 + 46 + 23 + 24 + 70 + 0 + 76;

			Calculate(r, n, sum, count, 0);

			Assert::AreEqual(expectedSum, sum);
		}
	};
}
