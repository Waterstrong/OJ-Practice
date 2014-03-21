// NYOJ733_HalloweenParty.cpp : 定义控制台应用程序的入口点。
//
/*
万圣节派对
时间限制：1000 ms  |  内存限制：65535 KB
难度：1
描述
万圣节有一个Party，XadillaX显然也要去凑热闹了。因为去凑热闹的人数非常庞大，几十W的数量级吧，自然要进场就需要有门票了。很幸运的，XadillaX竟然拿到了一张真·门票！这真·门票的排列规则有些奇怪：
门票号是由0~6组成的六位数（0~6这几个数字可重用）
每一个门票号的每一位不能有三个连续相同的数字（如123335是不行的）
每一个门票号相邻的两位相差必须在四以下（≤4）（如016245是不行的）
输入
第一行一个n，代表输入个数
接下去n行，每行两个数字x,y(x <= y)
输出
对于每个测试，输出x到y之间的门票编号。每个测试结尾之间空行。
样例输入
2
001001 001002
001011 001012
样例输出
001001
001002

001011
001012
来源
NBOJ-1004
上传者
勿念情*/
#include "stdafx.h"

#include <stdio.h>
#include <memory.h>
#define N 6
int arr[N];
bool isTicket(int x)
{
	memset(arr, 0, sizeof(arr));
	int i;
	for (i = 0; i < N; ++i)
	{
		arr[i] = x%10;
		x /= 10;
	}
	int cnt = 0;
	for (i = 0; i < N-1; ++i)
	{
		if (arr[i] > 6 || arr[i+1] > 6) //每一位都不超过6
		{
			return false;
		}
		if (arr[i] == arr[i+1])
		{
			if (++cnt == 2)
			{
				return false;
			}
		}
		else
		{
			cnt = 0;
		}
		if ((arr[i]-arr[i+1])>4 || (arr[i]-arr[i+1]) < -4)
		{
			return false;
		}
	}
	return true;

}
int main()
{	
	int n;
	int s, e;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d%d", &s, &e);
		for (int i = s; i <= e; ++i)
		{
			if (isTicket(i))
			{
				printf("%.6d\n", i);
			}
		}
		printf("\n");
	}
	return 0;
}

