// HOJ4506_HelpXiaoming.cpp : 定义控制台应用程序的入口点。
//
/*
小明系列故事——师兄帮帮忙

Time Limit: 3000/1000 MS (Java/Others)    Memory Limit: 65535/32768 K (Java/Others)
Total Submission(s): 1540    Accepted Submission(s): 358


Problem Description
　　小明自从告别了ACM/ICPC之后，就开始潜心研究数学问题了，一则可以为接下来的考研做准备，再者可以借此机会帮助一些同学，尤其是漂亮的师妹。这不，班里唯一的女生又拿一道数学题来请教小明，小明当然很高兴的就接受了。不过等他仔细读题以后，发现自己也不会做，这下小明囧了：如果回复说自己不懂，岂不是很没面子？
  　　所以，他现在私下求你帮忙解决这道题目，题目是这样的：
	　　给你n个数字，分别是a1,a2,a3,a4,a5……an，这些数字每过一个单位时间就会改变，假设上一个单位时间的数字为a1’,a2’,a3’……an’，那么这个单位时间的数字a[i] = a[i - 1]’ * K(i == 1的时候a[1] = a[n]’ * K)，其中K为给定的系数。
	  　　现在的问题就是求第t单位时间的时候这n个数字变成了什么了？由于数字可能会很大，所以只要你输出数字对10^9 + 7取余以后的结果。


		Input
		　　输入数据第一行是一个正整数T，表示有T组测试数据；
		  　　每组数据有两行，第一行包含输入三个整数n, t, k，其中n代表数字个数，t代表第t个单位时间，k代表系数；第二行输入n个数字ai，代表每个数字开始的时候是多少。

			　　[Technical Specification]
			  　　T <= 100
				　　1 <= n <= 10 ^ 4
				  　　0 <= t <= 10 ^ 9　　其中 t = 0 表示初始状态
					　　1 <= k <= 10 ^ 9
					  　　1 <= ai<= 10 ^ 9


						Output
						　　对于每组数据请输出第t单位时间后这n个数字变成了什么，输出的时候每两个数字之间输出一个空格，行末不要输出多余的空格，具体见样例。


						  Sample Input
						  2
						  3 2 5
						  1 2 3
						  3 0 5
						  1 2 3


						  Sample Output
						  50 75 25
						  1 2 3


						  Source
						  2013腾讯编程马拉松初赛第一场（3月21日）


						  Recommend
						  liuyiding
						  
						  #include <stdio.h>

						  __int64 quickmod(__int64 a,__int64 b,__int64 m)
						  {
						  __int64 ans = 1;
						  while(b)
						  {
						  if(b&1)
						  {
						  ans = (ans*a)%m;
						  b--;
						  }
						  b/=2;
						  a = a*a%m;
						  }
						  return ans;
						  }

						  int main()
						  {
						  int num;
						  __int64 t,k;
						  __int64 mod = 1000000007;
						  __int64 a[10005],n,i,sum;
						  scanf("%d",&num);
						  while(num--)
						  {
						  scanf("%I64d%I64d%I64d",&n,&t,&k);
						  for(i = 0; i<n; i++)
						  {
						  scanf("%I64d",&a[i]);
						  }
						  sum = quickmod(k,t,mod);
						  t%=n;
						  __int64 x;
						  int y;
						  for(i = 0; i<n; i++)
						  {
						  if(i<t)
						  y = i+n-t;
						  else
						  y = i-t;
						  x = (a[y]*sum)%mod;
						  if(!i)
						  printf("%I64d",x);
						  else
						  printf("% I64d",x);
						  }
						  printf("\n");
						  }

						  return 0;
						  }

		*/
#include "stdafx.h"

#include <stdio.h>
const __int64 mod = 1000000007;
__int64 arr[10005];
__int64 quickmod(__int64 k, __int64 t, __int64 m)
{// k^t
	__int64 ans = 1;
	while(t)
	{
		if(t&1)
		{
			ans = (ans*k)%m;
			t--;
		}
		t/=2;
		k = k*k%m;//把k的t次分成 k的t/2次*k的t/2次。
	}
	return ans;
}

int main()
{
	int test;
	scanf("%d", &test);
	__int64 i, num, time, keo, sum;
	while(test--)
	{
		scanf("%I64d%I64d%I64d", &num, &time, &keo);
		for (i = 0; i < num; ++i)
		{
			scanf("%I64d", &arr[i]);
		}
		sum = quickmod(keo, time, mod);
		__int64 dis = time%num; // 经过time次后移了多少位
		for (i = num-dis; i < num; ++i)
		{
			printf("%I64d ", arr[i]*sum%mod);
		}
		for (i = 0; i < num - dis; ++i)
		{
			if (i == num - dis - 1)
			{
				printf("%I64d\n", arr[i]*sum%mod);
			}
			else
			{
				printf("%I64d ", arr[i]*sum%mod);
			}
		}
	}
	return 0;
}

