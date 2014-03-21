// NYOJ813_Beatdown.cpp : 定义控制台应用程序的入口点。
//
/*
对决
时间限制：1000 ms  |  内存限制：65535 KB
难度：0
描述
Topcoder要招进来了 n 个新同学，Yougth计划把这个n个同学分成两组，要求每组中每个人必须跟另一组中每个同学进行一次算法对决，问存不存在一种分组方式在k场完成对决。（两组中每一组中人数都要大于0）

输入
有多组测试数据，每组测试数据两个数 n 和 k ，n和k都为0时表示输入结束。（0<n<10000,0<k<1000000）
输出
输出一行，如果可以，输出YES，不行的话输出NO。
样例输入
4 1
4 3
4 4
2 1
3 3
0 0
样例输出
NO
YES
YES
YES
NO
提示
4个人分成两组，1和3则需对决3场，2和2则需对决4场。
来源
Yougth原创
上传者
TC_杨闯亮*/
#include "stdafx.h"

#include <stdio.h>
#include <math.h>
int main()
{
	int n, k;
	while(scanf("%d%d", &n, &k) && n+k !=0)
	{
		int tmp = n*n - 4*k;
		if (tmp < 0)
		{
			printf("NO\n");
		}
		else
		{
			double u = sqrt((double)(tmp));
			double root = (n+u)/2.0;
			if (root == (int)(root))
			{
				printf("YES\n");
			}
			else
			{
				root = (n-u)/2.0;
				if (root == (int)(root))
				{
					printf("YES\n");
				}
				else
				{
					printf("NO\n");
				}
			}			 
		}
	}
	return 0;
}

/*
最优程序
#include <cstdio>

int main()
{
	int n,k;
	while(scanf("%d%d",&n,&k)&&(n||k))
	{
		int ok=0;
		for(int i=1;i<=n/2;i++)
		{
			if(i*(n-i)==k)
				ok=1;continue;
		}
		if(ok)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
*/