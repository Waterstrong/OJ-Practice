// NYOJ034_HanXinPointSoldier.cpp : 定义控制台应用程序的入口点。
//
/*
韩信点兵
时间限制：3000 ms  |  内存限制：65535 KB
难度：1
描述
相传韩信才智过人，从不直接清点自己军队的人数，只要让士兵先后以三人一排、五人一排、七人一排地变换队形，而他每次只掠一眼队伍的排尾就知道总人数了。输入3个非负整数a,b,c ，表示每种队形排尾的人数（a<3,b<5,c<7），输出总人数的最小值（或报告无解）。已知总人数不小于10，不超过100 。
输入
输入3个非负整数a,b,c ，表示每种队形排尾的人数（a<3,b<5,c<7）。例如,输入：2 4 5
输出
输出总人数的最小值（或报告无解，即输出No answer）。实例，输出：89
样例输入
2 1 6
样例输出
41
来源
经典算法
上传者
首席执行官
*/


#include "stdafx.h"
// 13min
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin>>a>>b>>c;
	int i;
	for(i = 10; i < 101; ++i)
	{
		if(i%3==a && i%5==b && i%7==c)
		{
			break;
		}
	}
	if (i > 100)
	{
		cout<<"No answer"<<endl;
	}
	else
	{
		cout<<i<<endl;
	}
	return 0;
}

/*
最优程序 中国剩余定理
 
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int n=(a*70+b*21+c*15)%105;
	if(n>100||n<10) cout<<"No answer"<<endl;
	else cout<<n<<endl;
}
*/
