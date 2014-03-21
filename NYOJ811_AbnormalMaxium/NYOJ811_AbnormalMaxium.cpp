// NYOJ811_AbnormalMaxium.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
��̬���ֵ
ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�1
����
Yougth���ε�ʱ�򿼲���һ�������������ֵ������⣬û�뵽������յ���ô�ã��Һ������İ����´�����ǽ����������⣬�������������ˡ�

������һ��������һ��������������Բ����������е����ģ�����Ҫ����ԱȽϴ�ģ��������������������̫���ˣ���ô���أ����뵽��һ���취������һ�����ӿ�ʼ��ÿ�����������ֳ�һ�飨�����Ǵ�1��ʼ����������������ֵ��ż���������Сֵ��Ȼ���ҳ���Щֵ�е����ֵ��

����
�ж���������ݣ����ļ�������Ϊ��־��
ÿ�������������һ��N,�����������ĸ�������0<N<10000��Ϊ������Ŀ�Ѷȣ�N��3�ı�����
Ȼ���������е���Щ����
���
�������һ�У��������е����ֵ��
��������
3
4 5 6
6
1 2 3 7 9 5
�������
6
5
��Դ
Yougthԭ��
�ϴ���
TC_���*/
#include "stdafx.h"
#include <stdio.h>
int maxTwo(int a, int b)
{
	return (a>b?a:b);
}
int minTwo(int a, int b)
{
	return (a<b?a:b);
}

int main()
{
	int i, n, a, b, c, hmax;
	while(scanf("%d", &n) != EOF)
	{
		hmax = 0;
		for (i = 0; i < n/3; ++i)
		{
			scanf("%d%d%d", &a,&b,&c);
			if ((i+1) % 2 != 0)
			{
				hmax = maxTwo(maxTwo(maxTwo(a, b), c), hmax);
			}
			else
			{
				hmax = maxTwo(minTwo(minTwo(a, b), c), hmax);
			}
		}
		printf("%d\n", hmax);

	}
	
	return 0;
}

/*
���ų���
#include <cstdio>
#define Max(a,b,c) a>(b>c?b:c)?a:(b>c?b:c)
#define Min(a,b,c) a>(b>c?c:b)?(b>c?c:b):a
int main()
{
	int a[10005];
	int n,i,j,h;
	while(~scanf("%d",&n))
	{
		int max=1<<32;
		for(i=0;i<n&&scanf("%d",&a[i]);i++){}
		for(i=0;i<n;i+=3){
			h=i%2==0?Max(a[i],a[i+1],a[i+2]):Min(a[i],a[i+1],a[i+2]);
			max=h>max?h:max;
		}
		printf("%d\n",max);
	}
	return 0;
}
*/