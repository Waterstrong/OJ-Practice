// NYOJ813_Beatdown.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
�Ծ�
ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�0
����
TopcoderҪ�н����� n ����ͬѧ��Yougth�ƻ������n��ͬѧ�ֳ����飬Ҫ��ÿ����ÿ���˱������һ����ÿ��ͬѧ����һ���㷨�Ծ����ʴ治����һ�ַ��鷽ʽ��k����ɶԾ�����������ÿһ����������Ҫ����0��

����
�ж���������ݣ�ÿ��������������� n �� k ��n��k��Ϊ0ʱ��ʾ�����������0<n<10000,0<k<1000000��
���
���һ�У�������ԣ����YES�����еĻ����NO��
��������
4 1
4 3
4 4
2 1
3 3
0 0
�������
NO
YES
YES
YES
NO
��ʾ
4���˷ֳ����飬1��3����Ծ�3����2��2����Ծ�4����
��Դ
Yougthԭ��
�ϴ���
TC_���*/
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
���ų���
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