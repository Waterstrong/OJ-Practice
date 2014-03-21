// NYOJ006_WaterSprayDeviceOne.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*̰���㷨
��ˮװ�ã�һ��
ʱ�����ƣ�3000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�3
����
����һ���ƺ����Ϊ20�ף���Ϊ2�ף�Ҫ�ں��������Ϸ��ð뾶ΪRi����ˮװ�ã�ÿ����ˮװ�õ�Ч������������Ϊ���ĵİ뾶Ϊʵ��Ri(0<Ri<15)��Բ��ʪ�����г������ˮװ��i��1<i<600)��������һ���ܰѲ�ƺȫ��ʪ����Ҫ�����ǣ�ѡ�����ٵ���ˮװ�ã���������ƺ��ȫ��ʪ��
����
��һ��m��ʾ��m���������
ÿһ��������ݵĵ�һ����һ��������n��n��ʾ����n����ˮװ�ã�����һ�У���n��ʵ��ri��ri��ʾ����ˮװ���ܸ��ǵ�Բ�İ뾶��
���
�������װ�õĸ���
��������
2
5
2 3.2 4 4.5 6 
10
1 2 3 1 2 1.2 3 1.1 1 2
�������
2
5
��Դ
[�綰��]ԭ��
�ϴ���
�綰��*/
#include "stdafx.h"

#include <stdio.h>
#include <algorithm>
#include <set>
#include <math.h>
using namespace std;
int main()
{
	float water[601];
	int i, test, n;
	scanf("%d", &test);
	while(test--)
	{
		scanf("%d", &n);
		for (i = 0; i < n; ++i)
		{
			scanf("%f", &water[i]);
		}
		sort(water, water+n, greater<float>());
		float sum = 0; // С�İ���sum�Ǹ�����
		for (i = 0; i < n; ++i)
		{
			sum += 2*sqrt(water[i]*water[i]-1);
			if (sum >= 20)
			{
				printf("%d\n", i+1);
				break;
			}
		}
	}
	return 0;
}

/*
���ų���

#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
#include<cmath>
using namespace std;
double Length(double R,double b)
{
	return 2*sqrt(R*R-b*b/4);
}
int main()
{
	const double l=20,w=2;
	int n;
	cin>>n;
	while(n--)
	{
		int m;
		cin>>m;
		double R;
		vector<double> Rs;
		while(m--)
		{
			cin>>R;
			Rs.push_back(R);
		}
		sort(Rs.begin(),Rs.end(),greater<double>());
		double sum=0;
		int i;
		for(i=0;i!=Rs.size();i++)
		{
			if (sum>l) break;
			sum+=Length(Rs[i],w);
		}
		cout<<i<<endl;
	}
}        
*/