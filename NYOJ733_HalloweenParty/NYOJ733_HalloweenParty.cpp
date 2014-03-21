// NYOJ733_HalloweenParty.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
��ʥ���ɶ�
ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�1
����
��ʥ����һ��Party��XadillaX��ȻҲҪȥ�������ˡ���Ϊȥ�����ֵ������ǳ��Ӵ󣬼�ʮW���������ɣ���ȻҪ��������Ҫ����Ʊ�ˡ������˵ģ�XadillaX��Ȼ�õ���һ���桤��Ʊ�����桤��Ʊ�����й�����Щ��֣�
��Ʊ������0~6��ɵ���λ����0~6�⼸�����ֿ����ã�
ÿһ����Ʊ�ŵ�ÿһλ����������������ͬ�����֣���123335�ǲ��еģ�
ÿһ����Ʊ�����ڵ���λ�������������£���4������016245�ǲ��еģ�
����
��һ��һ��n�������������
����ȥn�У�ÿ����������x,y(x <= y)
���
����ÿ�����ԣ����x��y֮�����Ʊ��š�ÿ�����Խ�β֮����С�
��������
2
001001 001002
001011 001012
�������
001001
001002

001011
001012
��Դ
NBOJ-1004
�ϴ���
������*/
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
		if (arr[i] > 6 || arr[i+1] > 6) //ÿһλ��������6
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

