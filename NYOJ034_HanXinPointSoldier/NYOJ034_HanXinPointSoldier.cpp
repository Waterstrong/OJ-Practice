// NYOJ034_HanXinPointSoldier.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
���ŵ��
ʱ�����ƣ�3000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�1
����
�ഫ���Ų��ǹ��ˣ��Ӳ�ֱ������Լ����ӵ�������ֻҪ��ʿ���Ⱥ�������һ�š�����һ�š�����һ�ŵر任���Σ�����ÿ��ֻ��һ�۶������β��֪���������ˡ�����3���Ǹ�����a,b,c ����ʾÿ�ֶ�����β��������a<3,b<5,c<7�����������������Сֵ���򱨸��޽⣩����֪��������С��10��������100 ��
����
����3���Ǹ�����a,b,c ����ʾÿ�ֶ�����β��������a<3,b<5,c<7��������,���룺2 4 5
���
�������������Сֵ���򱨸��޽⣬�����No answer����ʵ���������89
��������
2 1 6
�������
41
��Դ
�����㷨
�ϴ���
��ϯִ�й�
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
���ų��� �й�ʣ�ඨ��
 
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
