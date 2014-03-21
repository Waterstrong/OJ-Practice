// NYOJ106_Knapsack.cpp : 定义控制台应用程序的入口点。
//
/*贪心算法
背包问题
时间限制：3000 ms  |  内存限制：65535 KB
难度：3
描述
现在有很多物品（它们是可以分割的），我们知道它们每个物品的单位重量的价值v和重量w（1<=v,w<=10）；如果给你一个背包它能容纳的重量为m（10<=m<=20）,你所要做的就是把物品装到背包里，使背包里的物品的价值总和最大。
输入
第一行输入一个正整数n（1<=n<=5）,表示有n组测试数据；
随后有n测试数据，每组测试数据的第一行有两个正整数s，m（1<=s<=10）;s表示有s个物品。接下来的s行每行有两个正整数v，w。
输出
输出每组测试数据中背包内的物品的价值和，每次输出占一行。
样例输入
1
3 15
5 10
2 8
3 9
样例输出
65
来源
[苗栋栋]原创
上传者
苗栋栋*/
#include "stdafx.h"
/*WA
#include <stdio.h>
#include <set>
using namespace std;
struct Thing
{
	int v;
	int w;
	bool operator < (const Thing &t) const
	{
		if (v > t.v)// 已经是单位价值了，并且是可拆分的
		{
			return true;
		}
		if (v == t.v && w > t.w)
		{
			return true;
		}
		return false;
	}
};
int main()
{
	set<Thing> things;
	Thing t;
	int test;
	int s, m, v, w, i, totalValue, sum;
	scanf("%d", &test);
	while(test--)
	{
		scanf("%d%d", &s, &m);
		things.clear();
		totalValue = 0;
		sum = 0;
		for (i = 0; i < s; ++i)
		{
			scanf("%d%d", &t.v, &t.w);
			things.insert(t);
		}
		for (set<Thing>::iterator it = things.begin(); it != things.end(); ++it)
		{
			if (sum+(*it).w > m)
			{
				totalValue += (m-sum)*(*it).v; // 是可拆分的
				break;
			}
			else
			{
				totalValue += (*it).v*(*it).w;
				sum += (*it).w;
			}
		}
		printf("%d\n", totalValue);
	}
	return 0;
}
*/

#include <stdio.h>
#include <algorithm>
using namespace std;
struct Thing
{
	int v;
	int w;
};
bool comp (const Thing &t1, const Thing &t2)
{
	if (t1.v > t2.v)// 已经是单位价值了，并且是可拆分的
	{
		return true;
	}
	if (t1.v == t2.v && t1.w > t2.w)
	{
		return true;
	}
	return false;
}
int main()
{
	Thing things[12];
	int test, i, s, m, totalValue;
	scanf("%d", &test);
	while(test--)
	{
		scanf("%d%d", &s, &m);
		totalValue = 0;
		for (i = 0; i < s; ++i)
		{
			scanf("%d%d", &things[i].v, &things[i].w);
		}
		sort(things, things+s, comp);
		for (i = 0; i < s; ++i)
		{
			m -=things[i].w;
			if (m < 0)
			{
				totalValue += (m + things[i].w)*things[i].v;
				break;
			}
			totalValue += things[i].w*things[i].v;
		}
		printf("%d\n", totalValue);
	}
	return 0;
}

/*
最优程序
#include<iostream>
#include<algorithm>
using namespace std;
struct Ww{
	int w,v;
};
Ww record[100];
bool compare(const Ww &a,const Ww &b)
{
	return a.v>b.v;
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int m,sw,Weight=0,Cost=0;
		cin>>m>>sw;
		for(int i=0;i!=m;i++)
		{
			cin>>record[i].v>>record[i].w;
		}
		sort(record,record+m,compare);
		for(int j=0;j!=m;j++)
		{
			Weight+=record[j].w;
			if(Weight<sw)
			{
				Cost+=record[j].w*record[j].v;
			}
			else
			{
				int temp=sw-(Weight-record[j].w);
				Cost+=temp*record[j].v;
				break;
			}
			
		}
			cout<<Cost<<endl;
	}
} 
*/