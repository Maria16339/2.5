#include "pch.h"
#include "CppUnitTest.h"
#include"C://Users/User/source/repos/2.5/2.5/Pair.h"
#include"C://Users/User/source/repos/2.5/2.5/Pair.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest25
{
	TEST_CLASS(UnitTest25)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Pair pair(12.0, 0.5);
			Assert::AreEqual(pair.Dobutok(), 6.0);
		}
	};
}