// NYOJ274_CircumcircleofTriangleArea.cpp : �������̨Ӧ�ó������ڵ㡣
//

/*
�������ε����Բ���
ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�0
����
�����������εı߳���pi=3.1415926 ,���������ε����Բ�����
����
ֻ��һ��������� ��һ������һ������n(1<n<1000)��ʾ������Ҫ����n���߳�m(1.0<=m<1000.0)
���
���ÿ���������ε����Բ�����������λС����ÿ���������ռһ�С�
��������
5
1
13
22
62
155
�������
1.05
176.98
506.84
4025.43
25158.92
��Դ
[zinber]ԭ��
�ϴ���
zinber
*/

#include "stdafx.h"

#include <stdio.h>
#define tan30 0.57735
#define pi 3.1415926
int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		double d;
		scanf("%lf", &d);
		printf("%.2lf\n",pi*d*d/3.0);
	}
	return 0;
}

/*
���ų���

#include<stdio.h>
int main()
{
	int n;double m,pi=3.1415926;
	scanf("%d",&n);
	while(n--){
		scanf("%lf",&m);
		printf("%.2lf\n",pi*m*m/3);
	}
	return 0;
}

*/