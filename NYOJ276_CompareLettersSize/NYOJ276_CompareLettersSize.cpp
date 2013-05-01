// NYOJ276_CompareLettersSize.cpp : 定义控制台应用程序的入口点。
//
/*
比较字母大小
时间限制：3000 ms  |  内存限制：65535 KB
难度：1
描述
任意给出两个英文字母，比较它们的大小，规定26个英文字母A,B,C.....Z依次从大到小。

输入
第一行输入T，表示有T组数据；
接下来有T行，每行有两个字母，以空格隔开；
输出
输出各组数据的比较结果，输出格式见样例输出；
（注意输出严格按照输入的顺序即输入是A B，输出时必须是A?B）
样例输入
3
A B
D D
Z C
样例输出
A>B
D=D
Z<C
来源
原创
上传者
Never*/

#include "stdafx.h"

#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	int cases;
	char letter1, letter2;
	cin>>cases;
	while(cases--)
	{
		cin>>letter1>>letter2;
		cout<<letter1;
		char let1 = toupper(letter1);
		char let2 = toupper(letter2);
		if (let1 > let2)
		{
			cout<<"<";
		}
		else if (let1 < let2)
		{
			cout<<">";
		}
		else
		{
			cout<<"=";
		}
		cout<<letter2<<endl;
	}
	return 0;
}

