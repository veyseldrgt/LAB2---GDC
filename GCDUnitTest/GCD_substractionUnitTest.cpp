#include "CppUnitTest.h"
#include "..\GCDLib\GCD.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GCDUnitTest
{
	TEST_CLASS(GCD_substractionUnitTest)
	{
	public:
		TEST_METHOD(GCD_substraction_1_1)
		{
			Assert::AreEqual(1ULL, GCD_subtraction(1ULL, 1ULL));
		}
		TEST_METHOD(GCD_substraction_1_5)
		{
			Assert::AreEqual(1ULL, GCD_subtraction(1ULL, 5ULL));
		}
		TEST_METHOD(GCD_substraction_7_1)
		{
			Assert::AreEqual(1ULL, GCD_subtraction(7ULL, 1ULL));
		}
		TEST_METHOD(GCD_substraction_3_13)
		{
			Assert::AreEqual(1ULL, GCD_subtraction(3ULL, 13ULL));
		}
		TEST_METHOD(GCD_substraction_17_7)
		{
			Assert::AreEqual(1ULL, GCD_subtraction(17ULL, 7ULL));
		}
		TEST_METHOD(GCD_substraction_3_12)
		{
			Assert::AreEqual(3ULL, GCD_subtraction(3ULL, 12ULL));
		}
		TEST_METHOD(GCD_substraction_15_5)
		{
			Assert::AreEqual(5ULL, GCD_subtraction(15ULL, 5ULL));
		}
		TEST_METHOD(GCD_substraction_7_60)
		{
			Assert::AreEqual(1ULL, GCD_subtraction(7ULL, 60ULL));
		}
		TEST_METHOD(GCD_substraction_42_5)
		{
			Assert::AreEqual(1ULL, GCD_subtraction(42ULL, 5ULL));
		}
		TEST_METHOD(GCD_substraction_110_21)
		{
			Assert::AreEqual(1ULL, GCD_subtraction(110ULL, 21ULL));
		}
		TEST_METHOD(GCD_substraction_21_110)
		{
			Assert::AreEqual(1ULL, GCD_subtraction(1ULL, 1ULL));
		}
		TEST_METHOD(GCD_substraction_42_105)
		{
			Assert::AreEqual(21ULL, GCD_subtraction(42ULL, 105ULL));
		}
		TEST_METHOD(GCD_substraction_105_42)
		{
			Assert::AreEqual(21ULL, GCD_subtraction(105ULL, 42ULL));
		}
		TEST_METHOD(GCD_substraction_45_45)
		{
			Assert::AreEqual(45ULL, GCD_subtraction(45ULL, 45ULL));
		}
	};
}
