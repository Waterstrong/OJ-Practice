// NYOJ833_TakeStone.cpp : 定义控制台应用程序的入口点。
//
/*
取石子（七）
时间限制：1000 ms  |  内存限制：65535 KB
难度：1
描述
Yougth和Hrdv玩一个游戏，拿出n个石子摆成一圈，Yougth和Hrdv分别从其中取石子，谁先取完者胜，每次可以从中取一个或者相邻两个，Hrdv先取，输出胜利着的名字。

输入
输入包括多组测试数据。
每组测试数据一个n，数据保证int范围内。
输出
输出胜利者的名字。
样例输入
2
3
样例输出
Hrdv
Yougth
来源
Poj
上传者
TC_杨闯亮*/
#include "stdafx.h"

#include <stdio.h>
int main()
{
	int n;
	while(scanf("%d", &n)!=EOF)
	{
		if (n < 3)
		{
			printf("Hrdv\n");
		}
		else
		{
			printf("Yougth\n");
		}
	}
	return 0;
}


/*
最优程序
#include<cstdio>
int n;
int main()
{
	while(~scanf("%d",&n))
		printf(n>=3?"Yougth\n":"Hrdv\n");
	return 0;
}
*/

