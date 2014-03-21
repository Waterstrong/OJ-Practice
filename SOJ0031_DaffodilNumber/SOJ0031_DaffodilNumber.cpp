// SOJ0031_DaffodilNumber.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*

�������C ʵ���� ��Ŀ�� ˮ�ɻ���

Time Limit:   1000MS      	Memory Limit:   65535KB
Submissions:   6030      	Accepted:   1877

Description
�������ʻ��ļ��ڣ�ˮ�ɻ��������������˵Ĵ�����ѧ���и�ˮ�ɻ�����������������ģ� 
��ˮ�ɻ�������ָһ����λ�������ĸ�λ���ֵ������͵����䱾�����磺153=1^3+5^3+3^3�� 
����Ҫ�����������m��n��Χ�ڵ�ˮ�ɻ�����
Input
���������ж��飬ÿ��ռһ�У�������������m��n��100<=m<=n<=999��������Ϊ0 0ʱ��ʾ�������ݽ���������Ҫ�������
Output
����ÿ������ʵ����Ҫ����������ڸ�����Χ�ڵ�ˮ�ɻ���������˵�������ˮ�ɻ���������ڵ���m,����С�ڵ���n������ж������Ҫ���С����������һ���������֮����һ���ո������ĩβ�пո�; 
��������ķ�Χ�ڲ�����ˮ�ɻ����������no; 
ÿ������ʵ���������Ϻ��С�
Sample Input
100 120 
300 380 
0 0
Sample Output
no
370 371
Hint
Source
*/
#include "stdafx.h"
/*
#include <stdio.h>
int Daffodil(int x)
{
	int raw = x;
	int sum = 0;
	int tmp;
	while(x)
	{
		tmp = x%10;
		sum += tmp*tmp*tmp;
		x /= 10;
	}
	if (sum == raw)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int i;
	for (i = 100; i < 1000; ++i)
	{
		if (Daffodil(i) == 1)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	
	return 0;
}
*/
#include <stdio.h>
int main()
{
	int arr[4] = {153,370,371,407};
	int i, m, n, flag;
	while(scanf("%d%d", &m, &n) && (m||n))
	{
		flag = 0;
		for(i = 0; i< 4; ++i)
		{
			if (arr[i]>=m && arr[i]<=n)
			{
				printf("%d ",arr[i]);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			printf("no");
		}
		printf("\n");
	}
	return 0;
}