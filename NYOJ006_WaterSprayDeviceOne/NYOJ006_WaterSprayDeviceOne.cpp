// NYOJ006_WaterSprayDeviceOne.cpp : 定义控制台应用程序的入口点。
//
/*贪心算法
喷水装置（一）
时间限制：3000 ms  |  内存限制：65535 KB
难度：3
描述
现有一块草坪，长为20米，宽为2米，要在横中心线上放置半径为Ri的喷水装置，每个喷水装置的效果都会让以它为中心的半径为实数Ri(0<Ri<15)的圆被湿润，这有充足的喷水装置i（1<i<600)个，并且一定能把草坪全部湿润，你要做的是：选择尽量少的喷水装置，把整个草坪的全部湿润。
输入
第一行m表示有m组测试数据
每一组测试数据的第一行有一个整数数n，n表示共有n个喷水装置，随后的一行，有n个实数ri，ri表示该喷水装置能覆盖的圆的半径。
输出
输出所用装置的个数
样例输入
2
5
2 3.2 4 4.5 6 
10
1 2 3 1 2 1.2 3 1.1 1 2
样例输出
2
5
来源
[苗栋栋]原创
上传者
苗栋栋*/
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
		float sum = 0; // 小心啊，sum是浮点型
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
最优程序

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