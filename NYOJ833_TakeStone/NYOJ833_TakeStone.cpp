// NYOJ833_TakeStone.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
ȡʯ�ӣ��ߣ�
ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�1
����
Yougth��Hrdv��һ����Ϸ���ó�n��ʯ�Ӱڳ�һȦ��Yougth��Hrdv�ֱ������ȡʯ�ӣ�˭��ȡ����ʤ��ÿ�ο��Դ���ȡһ����������������Hrdv��ȡ�����ʤ���ŵ����֡�

����
�����������������ݡ�
ÿ���������һ��n�����ݱ�֤int��Χ�ڡ�
���
���ʤ���ߵ����֡�
��������
2
3
�������
Hrdv
Yougth
��Դ
Poj
�ϴ���
TC_���*/
#include "stdafx.h"

#include <stdio.h>
int main()
{
	int n;
	while(scanf("%d", &n)!=EOF)
	{
		if (n < 3)
		{
			printf("Hrdv\n");
		}
		else
		{
			printf("Yougth\n");
		}
	}
	return 0;
}


/*
���ų���
#include<cstdio>
int n;
int main()
{
	while(~scanf("%d",&n))
		printf(n>=3?"Yougth\n":"Hrdv\n");
	return 0;
}
*/

