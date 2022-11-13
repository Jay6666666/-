#include "pch.h"
#include "CppUnitTest.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int num = 10; //算式数量
			int imax = 10;  //最大数
			int nums = 5;  //几个数
			int symbo = 1;  //用户输入的运算符
			int xiaoshu = 1;  //是否有小数
			int kuohao = 1; //是否有括号
			int shuchu = 1;//输出形式
			char fuhao[4] = { '+','-','*','/' }; //运算符
		}

		TEST_METHOD(TestMethod2)
		{
			int num = 10; //算式数量
			int imax = 10;  //最大数
			int nums = 5;  //因子个数
			int symbo = 2;  //用户输入的运算符
			int kuohao = 2; //是否有括号
			int xiaoshu = 2;  //是否有小数
			int shuchu = 2;//输出形式
			char fuhao[4] = { '+','-','*','/' }; //运算符

		}

		TEST_METHOD(TestMethod3)
		{
			int num = 100; //算式数量
			int imax = 100;  //最大数
			int nums = 5;  //几个数
			int symbo = 3;  //用户输入的运算符
			int xiaoshu = 2;  //是否有小数
			int kuohao = 1; //是否有括号
			int shuchu = 2;//输出形式
			char fuhao[4] = { '+','-','*','/' }; //运算符
		}

		TEST_METHOD(TestMethod4)
		{
			int num = 100; //算式数量
			int imax = 100;  //最大数
			int nums = 5;  //几个数
			int symbo = 4;  //用户输入的运算符
			int xiaoshu = 2;  //是否有小数
			int kuohao = 2; //是否有括号
			int shuchu = 2;//输出形式
			char fuhao[4] = { '+','-','*','/' }; //运算符
		}

		TEST_METHOD(TestMethod5)
		{
			int num = 100; //算式数量
			int imax = 100;  //最大数
			int nums = 5;  //几个数
			int symbo = 1;  //用户输入的运算符
			int xiaoshu = 1;  //是否有小数
			int kuohao = 1; //是否有括号
			int shuchu = 2;//输出形式
			char fuhao[4] = { '+','-','*','/' }; //运算符
		}

		TEST_METHOD(TestMethod6)
		{
			int num = 100; //算式数量
			int imax = 100;  //最大数
			int nums = 9;  //几个数
			int symbo = 3;  //用户输入的运算符
			int xiaoshu = 2;  //是否有小数
			int kuohao = 2; //是否有括号
			int shuchu = 2;//输出形式
			char fuhao[4] = { '+','-','*','/' }; //运算符
		}

		TEST_METHOD(TestMethod7)
		{
			int num = 100; //算式数量
			int imax = 100;  //最大数
			int nums = 9;  //几个数
			int symbo = 4;  //用户输入的运算符
			int xiaoshu = 2;  //是否有小数
			int kuohao = 1; //是否有括号
			int shuchu = 2;//输出形式
			char fuhao[4] = { '+','-','*','/' }; //运算符
		}

		TEST_METHOD(TestMethod8)
		{
			int num = 100; //算式数量
			int imax = 100;  //最大数
			int nums = 9;  //几个数
			int symbo = 1;  //用户输入的运算符
			int xiaoshu = 2;  //是否有小数
			int kuohao = 2; //是否有括号
			int shuchu = 2;//输出形式
			char fuhao[4] = { '+','-','*','/' }; //运算符
		}

		TEST_METHOD(TestMethod9)
		{
			int num = 100; //算式数量
			int imax = 100;  //最大数
			int nums = 9;  //几个数
			int symbo = 2;  //用户输入的运算符
			int xiaoshu = 2;  //是否有小数
			int kuohao = 1; //是否有括号
			int shuchu = 1;//输出形式
			char fuhao[4] = { '+','-','*','/' }; //运算符
		}

		TEST_METHOD(TestMethod10)
		{
			int num = 100; //算式数量
			int imax = 100;  //最大数
			int nums = 9;  //几个数
			int symbo = 2;  //用户输入的运算符
			int xiaoshu = 2;  //是否有小数
			int kuohao = 1; //是否有括号
			int shuchu = 2;//输出形式
			char fuhao[4] = { '+','-','*','/' }; //运算符
		}
	};
}
