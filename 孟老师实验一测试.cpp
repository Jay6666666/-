#include "pch.h"
      
#include "CppUnitTest.h"
#include "../ConsoleApplication1/test.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int maxSum = 0;
			int nowSum = 0;
			int n = 6;
			int num[] = {-2，11，-4，13，-5，-2};
			for (int i = 0;i < n;i++) {
				nowSum += num[i];
				maxSum=now(maxSum, &nowSum, n, num[i]);
			}
			Assert::AreEqual(20,maxSum);
		}

		TEST_METHOD(TestMethod2)
		{
			int maxSum = 0;
			int nowSum = 0;
			int n = 6;
			int num[] = {-3，12，-5，14，-6，-3};
			for (int i = 0;i < n;i++) {
				nowSum += num[i];
				maxSum=now(maxSum, &nowSum, n, num[i]);
			}
			Assert::AreEqual(20,maxSum);
		}

		TEST_METHOD(TestMethod3)
		{
			int maxSum = 0;
			int nowSum = 0;
			int n = 6;
			int num[] = {-2，12，-5，15，-6，-1};
			for (int i = 0;i < n;i++) {
				nowSum += num[i];
				maxSum=now(maxSum, &nowSum, n, num[i]);
			}
			Assert::AreEqual(20,maxSum);
		}
	};
}
