#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8_1_string/lab_8_1_string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestCount)
		{
			string str1 = "while we wait, while working.";
			string str2 = "no while here";
			string str3 = "whilewhile";

			Assert::AreEqual(2, Count(str1, "while"));
			Assert::AreEqual(1, Count(str2, "while"));
			Assert::AreEqual(2, Count(str3, "while"));
		}
		TEST_METHOD(TestChange)
		{
			string str1 = "while we wait, while working.";
			string expected1 = "*** we wait, *** working.";
			string str2 = "no while here";
			string expected2 = "no *** here";
			string str3 = "whilewhile";
			string expected3 = "******";

			// Виконуємо заміну
			Change(str1);
			Change(str2);
			Change(str3);

			// Перевіряємо результати, використовуючи IsTrue з оператором порівняння ==
			Assert::IsTrue(str1 == expected1);
			Assert::IsTrue(str2 == expected2);
			Assert::IsTrue(str3 == expected3);
		}

	};
}
