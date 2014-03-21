// NYOJ844_APlusBProblem.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
A+B Problem��V��
ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�1
����
����A+B Problem֮��Yougth�о�̫���ˣ������������������������ת����ӵ�ֵ���������
����
�ж���������ݡ�ÿ�����������m��n�����ݱ�֤int��Χ����m��nͬʱΪ0�Ǳ�ʾ���������
���
�����ת����ӵĽ����
��������
1234 1234
125 117
0 0
�������
8642
1232
��Դ
Yougthԭ��
�ϴ���
TC_���*/
#include "stdafx.h"

#include <stdio.h>
int Reverse(int x)
{
	int ret = 0;
	while(x)
	{
		ret = ret*10+x%10;
		x /=10;
	}
	return ret;
}
int main()
{
	int m, n;
	while(scanf("%d%d", &m, &n)&&(m||n))
	{
		printf("%d\n",Reverse(m)+Reverse(n));
	}
	return 0;
}

/*
���ų���
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s,t;
	int x,y;
	while(cin>>s>>t)
	{
		int x=0,y=0;
		if(s[0]=='0'&&t[0]=='0')
			break;
		for(int i=s.size()-1;i>=0;i--)
			x=x*10+(s[i]-'0');
		for(int i=t.size()-1;i>=0;i--)
			y=y*10+(t[i]-'0');
		cout<<x+y<<endl;
	}
	return 0;
}
*/