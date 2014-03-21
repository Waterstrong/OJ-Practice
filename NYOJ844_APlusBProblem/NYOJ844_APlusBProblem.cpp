// NYOJ844_APlusBProblem.cpp : 定义控制台应用程序的入口点。
//
/*
A+B Problem（V）
时间限制：1000 ms  |  内存限制：65535 KB
难度：1
描述
做了A+B Problem之后，Yougth感觉太简单了，于是他想让你求出两个数反转后相加的值。帮帮他吧
输入
有多组测试数据。每组包括两个数m和n，数据保证int范围，当m和n同时为0是表示输入结束。
输出
输出反转后相加的结果。
样例输入
1234 1234
125 117
0 0
样例输出
8642
1232
来源
Yougth原创
上传者
TC_杨闯亮*/
#include "stdafx.h"

#include <stdio.h>
int Reverse(int x)
{
	int ret = 0;
	while(x)
	{
		ret = ret*10+x%10;
		x /=10;
	}
	return ret;
}
int main()
{
	int m, n;
	while(scanf("%d%d", &m, &n)&&(m||n))
	{
		printf("%d\n",Reverse(m)+Reverse(n));
	}
	return 0;
}

/*
最优程序
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s,t;
	int x,y;
	while(cin>>s>>t)
	{
		int x=0,y=0;
		if(s[0]=='0'&&t[0]=='0')
			break;
		for(int i=s.size()-1;i>=0;i--)
			x=x*10+(s[i]-'0');
		for(int i=t.size()-1;i>=0;i--)
			y=y*10+(t[i]-'0');
		cout<<x+y<<endl;
	}
	return 0;
}
*/