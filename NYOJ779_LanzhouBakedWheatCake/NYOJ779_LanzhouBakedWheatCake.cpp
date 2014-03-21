// NYOJ779_LanzhouBakedWheatCake.cpp : 定义控制台应用程序的入口点。
//
/*
兰州烧饼
时间限制：1000 ms  |  内存限制：65535 KB
难度：1
描述
烧饼有两面，要做好一个兰州烧饼，要两面都弄热。当然，一次只能弄一个的话，效率就太低了。有这么一个大平底锅，一次可以同时放入k个兰州烧饼，一分钟能做好一面。而现在有n个兰州烧饼，至少需要多少分钟才能全部做好呢？
输入
依次输入n和k，中间以空格分隔，其中1 <= k,n <= 100000
输出
输出全部做好至少需要的分钟数
样例输入
3 2
样例输出
3
提示
如样例，三个兰州烧饼编号a,b,c，首先a和b，然后a和c，最后b和c，3分钟完成
上传者
勿念情
*/
#include "stdafx.h"

#include <stdio.h>
int main()
{
	int n, k;
	while(scanf("%d%d", &n, &k) != EOF)
	{
		if (n <= k)
		{
			printf("2\n");
		}
		else
		{
			n = n<<1; //加速
			if (n % k == 0)
			{
				printf("%d\n", n/k);
			}
			else
			{
				printf("%d\n", n/k+1);
			}
		}
	}

	return 0;
}

