#include "pch.h"
#include "CppUnitTest.h"
#include "../lab7.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest777
{
	TEST_CLASS(UnitTest777)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int S = 0;
			int** b = new int* [5];
			for (int i = 0; i < 5; i++)
				b[i] = new int[5];

			for (int i = 0; i < 5; i++)
				for (int j = 0; j < 5; j++)
					b[i][j] = i+j;
			Search(b, 5, 5, 1, 1, S);
			Assert::AreEqual(S, 4);
		}
	};
}
