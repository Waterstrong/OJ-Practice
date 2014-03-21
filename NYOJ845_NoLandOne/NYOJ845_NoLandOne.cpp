// NYOJ845_NoLandOne.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
����֮��1
ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�0
����
���������������֮��1�����������Ϸ�����۲��������FPS��RPGԪ�أ�����Ⱥܸߡ���������������һ��������ϵͳ���Ĳ��ã�����ϵͳ��û�а���ͳ������ĸ������ж������񣬶��ң��������ʱ���أ�Ҳ�Ƚ�ɢ�ҡ����磬��1�����һ������㣬���쵽��4������2�����һ������㣬���쵽��3��������Ϸһ��ʱ���������1������һ���������쵽��3����֮ǰ����û����ɣ���3�����쵽��9�����񡭡����о������ң�������Ҫ���һ��������ͳ��ÿ�������ж��ٸ�����
����
����������ݣ�������0 0����
ÿ������ռһ��,����m����n������0<m,n<100��
���
������������ͳ�ƽ������Ҫ������
��������
1 3
2 3
3 4
1 7
0 0
�������
1 10
2 3
3 4
��Դ
ԭ��
�ϴ���
TC_�߽�*/
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

