#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab_06_4_it/lab_06_4_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testlab064it
{
	TEST_CLASS(testlab064it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t[] = { 0,22,18,-4,6 };
			int S = summa(t, 0);
			Assert::AreEqual(10, 10);
		}
	};
}
