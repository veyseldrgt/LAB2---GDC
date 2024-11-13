#include "CppUnitTest.h"
#include "..\GCDLib\GCD.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GCDUnitTest
{
	TEST_CLASS(GCD_moduloUnitTest)
	{
	public:
		
		TEST_METHOD(GCD_modulo_1_1)
		{
			Assert::AreEqual(1ULL, GCD_modulo(1ULL, 1ULL));
		}
		TEST_METHOD(GCD_modulo_1_5)
		{
			Assert::AreEqual(1ULL, GCD_modulo(1ULL, 5ULL));
		}
		TEST_METHOD(GCD_modulo_7_1)
		{
			Assert::AreEqual(1ULL, GCD_modulo(7ULL, 1ULL));
		}
		TEST_METHOD(GCD_modulo_3_13)
		{
			Assert::AreEqual(1ULL, GCD_modulo(3ULL, 13ULL));
		}
		TEST_METHOD(GCD_modulo_17_7)
		{
			Assert::AreEqual(1ULL, GCD_modulo(17ULL, 7ULL));
		}
		TEST_METHOD(GCD_modulo_3_12)
		{
			Assert::AreEqual(3ULL, GCD_modulo(3ULL, 12ULL));
		}
		TEST_METHOD(GCD_modulo_15_5)
		{
			Assert::AreEqual(5ULL, GCD_modulo(15ULL, 5ULL));
		}
		TEST_METHOD(GCD_modulo_7_60)
		{
			Assert::AreEqual(1ULL, GCD_modulo(7ULL, 60ULL));
		}
		TEST_METHOD(GCD_modulo_42_5)
		{
			Assert::AreEqual(1ULL, GCD_modulo(42ULL, 5ULL));
		}
		TEST_METHOD(GCD_modulo_110_21)
		{
			Assert::AreEqual(1ULL, GCD_modulo(110ULL, 21ULL));
		}
		TEST_METHOD(GCD_modulo_21_110)
		{
			Assert::AreEqual(1ULL, GCD_modulo(1ULL, 1ULL));
		}
		TEST_METHOD(GCD_modulo_42_105)
		{
			Assert::AreEqual(21ULL, GCD_modulo(42ULL, 105ULL));
		}
		TEST_METHOD(GCD_modulo_105_42)
		{
			Assert::AreEqual(21ULL, GCD_modulo(105ULL, 42ULL));
		}
		TEST_METHOD(GCD_modulo_45_45)
		{
			Assert::AreEqual(45ULL, GCD_modulo(45ULL, 45ULL));
		}
	};
}
