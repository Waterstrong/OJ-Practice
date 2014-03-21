// NYOJ845_NoLandOne.cpp : 定义控制台应用程序的入口点。
//
/*
无主之地1
时间限制：1000 ms  |  内存限制：65535 KB
难度：0
描述
子晓最近在玩无主之地1，他对这个游戏的评价不错，结合了FPS与RPG元素，可玩度很高。不过，他发现了一代的任务系统做的不好，任务系统并没有帮他统计清楚哪个区域有多少任务，而且，给任务的时候呢，也比较散乱。比如，在1区域的一个任务点，你领到了4个任务；2区域的一个任务点，你领到了3个任务；游戏一段时间后，你又在1区域另一个任务点个领到了3任务（之前任务没有完成），3区域领到了9个任务……他感觉很凌乱，现在他要设计一个程序来统计每个区域有多少个任务。
输入
多组测试数据，以输入0 0结束
每组数据占一行,输入m区域，n个任务（0<m,n<100）
输出
输出各个区域的统计结果（不要求排序）
样例输入
1 3
2 3
3 4
1 7
0 0
样例输出
1 10
2 3
3 4
来源
原创
上传者
TC_高金*/
#include "stdafx.h"

/*#include <stdio.h>
#include <memory.h>
#define N 101
int areas[N];
int main()
{
	int i;
	int area, task;
	while(scanf("%d%d", &area, &task) && (area || task))
	{
		areas[area] += task;
	}
	for (i = 0; i < N; ++i)
	{
		if (areas[i]!=0)
		{
			printf("%d %d\n", i, areas[i]);
		}
	}
	return 0;
}
*/

#include <stdio.h>
#define N 101
struct Task
{
	int area;
	int task;
};
Task tasks[N];
int main()
{
	int i, area, task, cnt = 0;
	while(scanf("%d%d", &area, &task) && (area || task))
	{
		for (i = 1; i <= cnt; ++i)
		{
			if (tasks[i].area == area)
			{
				tasks[i].task += task;
				break;
			}
		}
		if (i > cnt)
		{
			tasks[i].area = area;
			tasks[i].task = task;
			++cnt;
		}
	}
	for (i = 1; i < N; ++i)
	{
		if (tasks[i].task!=0)
		{
			printf("%d %d\n", tasks[i].area, tasks[i].task);
		}
	}
}

