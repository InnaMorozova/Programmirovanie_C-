#include "pch.h"
#include "CppUnitTest.h"
#include "..\programming\programming.cpp"
#include "..\programming\Array.h"
#include "..\programming\Array.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ArrayTest
{
	TEST_CLASS(ArrayTest)
	{
	public:
		
		TEST_METHOD(TestMax)
		{
			size_t t = 5;
			Array arr(t);
			arr[0] = float(1.3);
			arr[1] = float(-9.0);
			arr[2] = float(5.9);
			arr[3] = float(6.0);
			arr[4] = float(-8.2);

			float x = arr.max();
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(x, float(6.0));
		};

		TEST_METHOD(TestMin)
		{
			size_t t = 5;
			Array arr(t);
			arr[0] = float(1.3);
			arr[1] = float(-9.0);
			arr[2] = float(5.9);
			arr[3] = float(6.0);
			arr[4] = float(-8.2);

			float x = arr.min();
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(x, float(-9));
		};

		TEST_METHOD(TestStr)
		{
			size_t t = 5;
			Array arr(t);
			arr[0] = float(1.3);
			arr[1] = float(-9.0);
			arr[2] = float(5.9);
			arr[3] = float(6.0);
			arr[4] = float(-8.2);

			std::string x = arr.ToStr();
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(x, std::string("1.300000 -9.000000 5.900000 6.000000 -8.200000 "));
		};

		TEST_METHOD(TestFind)
		{
			size_t t = 5;
			Array arr(t);
			arr[0] = float(1.3);
			arr[1] = float(-9.0);
			arr[2] = float(5.9);
			arr[3] = float(6.0);
			arr[4] = float(-8.2);

			size_t x = arr.find(-9.0);
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(x, size_t(1));
		};

		TEST_METHOD(TestSortIncrease)
		{
			size_t t = 5;
			Array arr(t);
			arr[0] = float(1.3);
			arr[1] = float(-9.0);
			arr[2] = float(5.9);
			arr[3] = float(6.0);
			arr[4] = float(-8.2);

			arr.sortArray(1);

			Array res(t);
			res[0] = float(-9.0);
			res[1] = float(-8.2);
			res[2] = float(1.3);
			res[3] = float(5.9);
			res[4] = float(6.0);

			bool s = arr == res;

			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(s, true);
		};

		TEST_METHOD(TestSortDecrease)
		{
			size_t t = 5;
			Array arr(t);
			arr[0] = float(1.3);
			arr[1] = float(-9.0);
			arr[2] = float(5.9);
			arr[3] = float(6.0);
			arr[4] = float(-8.2);

			arr.sortArray(-1);

			Array res(t);
			res[4] = float(-9.0);
			res[3] = float(-8.2);
			res[2] = float(1.3);
			res[1] = float(5.9);
			res[0] = float(6.0);

			bool s = arr == res;

			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(s, true);
		};
	};
}
