// NYOJ811_AbnormalMaxium.cpp : 定义控制台应用程序的入口点。
//
/*
变态最大值
时间限制：1000 ms  |  内存限制：65535 KB
难度：1
描述
Yougth讲课的时候考察了一下求三个数最大值这个问题，没想到大家掌握的这么烂，幸好在他的帮助下大家算是解决了这个问题，但是问题又来了。

他想在一组数中找一个数，这个数可以不是这组数中的最大的，但是要是相对比较大的，但是满足这个条件的数太多了，怎么办呢？他想到了一个办法，把这一组数从开始把每相邻三个数分成一组（组数是从1开始），奇数组的求最大值，偶数组的求最小值，然后找出这些值中的最大值。

输入
有多组测试数据，以文件结束符为标志。
每组测试数据首先一个N,是数组中数的个数。（0<N<10000，为降低题目难度，N是3的倍数）
然后是数组中的这些数。
输出
输出包括一行，就是其中的最大值。
样例输入
3
4 5 6
6
1 2 3 7 9 5
样例输出
6
5
来源
Yougth原创
上传者
TC_杨闯亮*/
#include "stdafx.h"
#include <stdio.h>
int maxTwo(int a, int b)
{
	return (a>b?a:b);
}
int minTwo(int a, int b)
{
	return (a<b?a:b);
}

int main()
{
	int i, n, a, b, c, hmax;
	while(scanf("%d", &n) != EOF)
	{
		hmax = 0;
		for (i = 0; i < n/3; ++i)
		{
			scanf("%d%d%d", &a,&b,&c);
			if ((i+1) % 2 != 0)
			{
				hmax = maxTwo(maxTwo(maxTwo(a, b), c), hmax);
			}
			else
			{
				hmax = maxTwo(minTwo(minTwo(a, b), c), hmax);
			}
		}
		printf("%d\n", hmax);

	}
	
	return 0;
}

/*
最优程序
#include <cstdio>
#define Max(a,b,c) a>(b>c?b:c)?a:(b>c?b:c)
#define Min(a,b,c) a>(b>c?c:b)?(b>c?c:b):a
int main()
{
	int a[10005];
	int n,i,j,h;
	while(~scanf("%d",&n))
	{
		int max=1<<32;
		for(i=0;i<n&&scanf("%d",&a[i]);i++){}
		for(i=0;i<n;i+=3){
			h=i%2==0?Max(a[i],a[i+1],a[i+2]):Min(a[i],a[i+1],a[i+2]);
			max=h>max?h:max;
		}
		printf("%d\n",max);
	}
	return 0;
}
*/