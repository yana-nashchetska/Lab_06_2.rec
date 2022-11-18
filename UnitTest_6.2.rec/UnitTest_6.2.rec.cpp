#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_2.rec/Lab_06_2.rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62rec
{
	TEST_CLASS(UnitTest62rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5] = { -1, 0, 2, -100, 250 };
			int t = Min(a, 5, -100, 0);
			Assert::AreEqual(t, -100);
		}
	};
}
