#include "pch.h"
#include "CppUnitTest.h"
#include "../8t/8t.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			list <int> A = { 0 };
			list <int> B = { 0 };
			list <int> C = { 4,2 };
			list <int> D = { 8,-4 };
			list <int> E = { 12, -2 };
			
			Assert::AreEqual(A+B, B);
			Assert::AreEqual(C+D, E);
			Assert::AreEqual(B-A, A);
			Assert::AreEqual(E-D, C);
			
		}

		TEST_METHOD(TestMethod2)
		{
			list <int> A = { 0 };
			list <int> B = { 4,2 };
			list <int> C = { 8,4 };
			list <int> D = { 1, 1 };

			Assert::AreEqual(2*B, C);
			Assert::AreEqual(0*D, A);
		}

		TEST_METHOD(TestMethod3)
		{
			list <int> B = { 4,2 };
			list <int> C = { 4,2,0 };

			Assert::AreEqual(xit(B), C);
		}

	};
}
