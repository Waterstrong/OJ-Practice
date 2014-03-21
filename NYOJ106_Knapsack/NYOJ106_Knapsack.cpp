// NYOJ106_Knapsack.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*̰���㷨
��������
ʱ�����ƣ�3000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�3
����
�����кܶ���Ʒ�������ǿ��Էָ�ģ�������֪������ÿ����Ʒ�ĵ�λ�����ļ�ֵv������w��1<=v,w<=10�����������һ�������������ɵ�����Ϊm��10<=m<=20��,����Ҫ���ľ��ǰ���Ʒװ�������ʹ���������Ʒ�ļ�ֵ�ܺ����
����
��һ������һ��������n��1<=n<=5��,��ʾ��n��������ݣ�
�����n�������ݣ�ÿ��������ݵĵ�һ��������������s��m��1<=s<=10��;s��ʾ��s����Ʒ����������s��ÿ��������������v��w��
���
���ÿ����������б����ڵ���Ʒ�ļ�ֵ�ͣ�ÿ�����ռһ�С�
��������
1
3 15
5 10
2 8
3 9
�������
65
��Դ
[�綰��]ԭ��
�ϴ���
�綰��*/
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
		if (v > t.v)// �Ѿ��ǵ�λ��ֵ�ˣ������ǿɲ�ֵ�
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
				totalValue += (m-sum)*(*it).v; // �ǿɲ�ֵ�
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
	if (t1.v > t2.v)// �Ѿ��ǵ�λ��ֵ�ˣ������ǿɲ�ֵ�
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
���ų���
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