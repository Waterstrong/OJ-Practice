// NYOJ324_MonkeyEatPeach.cpp : 定义控制台应用程序的入口点。
//
/*
猴子吃桃问题
时间限制：3000 ms  |  内存限制：65535 KB
难度：0
描述
有一堆桃子不知数目，猴子第一天吃掉一半，又多吃了一个，第二天照此方法，吃掉剩下桃子的一半又多一个，天天如此，到第m天早上，猴子发现只剩一只桃子了，问这堆桃子原来有多少个？ (m<29)
输入
第一行有一个整数n,表示有n组测试数据（从第二行开始，每一行的数据为：第m天）；
输出
每一行数据是桃子的总个数
样例输入
2
3
11
样例输出
22
6142
来源
网络
上传者
首席执行官
*/
#include "stdafx.h"

#include <math.h>
#include <stdio.h>
int main()
{
	int n, m;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		printf("%d\n", int(3*pow(2.,m)-2));
	}
	return 0;
}

/*
最优程序 
#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		printf("%d\n",(3<<m)-2);
	}
	return 0;
} 
*/
