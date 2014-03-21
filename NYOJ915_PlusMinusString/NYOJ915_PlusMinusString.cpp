// NYOJ915_PlusMinusString.cpp : 定义控制台应用程序的入口点。
//
/*贪心算法
+-字符串
时间限制：1000 ms  |  内存限制：65535 KB
难度：1
描述
Shiva得到了两个只有加号和减号的字符串，字串长度相同。Shiva一次可以把一个加号和它相邻的减号交换。他想知道最少需要多少次操作才能把第一个字符串变换成第二个字符串。你现在要去帮助他完成那个这个问题。
输入
多组测试数据

每组数据有两行，每行包含一个由”+”和”-“最成的字符串。每个子符串长度不超过5000。
输出
仅一个整数，输出最少需要操作的次数。如果答案不存在，输出-1。
样例输入
++-+--+ 
-++--++ 
样例输出
4
来源
NBOJ
上传者
TC_周亿
*/
#include "stdafx.h"

#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	string str1, str2;
	char tmp;
	int i, j, cnt, plus1, plus2;
	while(cin>>str1>>str2)
	{
		cnt = 0;
		plus1 = plus2 = 0;
		for (i = 0; i < str1.length(); ++i)
		{
			if (str1[i] == '+')
			{
				++plus1;
			}
			if (str2[i] == '+')
			{
				++plus2;
			}
		}
		if (plus2 != plus1)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			for (i = 0; i < str1.length(); ++i)
			{
				if (str1[i] != str2[i])
				{
					for (j = i+1; j < str1.length(); ++j)
					{
						if (str1[j]==str2[i])
						{
							tmp = str1[i];
							str1[i] = str1[j];
							str1[j] = tmp;
							cnt += j-i;
							break;
						}
					}
				}
			}
			cout<<cnt<<endl;
		}
	}
	return 0;
}

