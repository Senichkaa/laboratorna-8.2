#include "pch.h"
#include "CppUnitTest.h"
#include "..\pr.8.2\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			/*char* word = "aboba";
			void retard = printf(word);
			Assert::AreEqual(retard, true);*/
			string word = "aboba";
			bool retard = printf("global elite", word);
			Assert::AreEqual(retard, true);
		}
	};
}
