// NYOJ268_HollandFlagProblem.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
������������
ʱ�����ƣ�3000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�1
����

�����������������鹹�ɣ����ϵ��µ���������ɫ����Ϊ�졢�ס��������������ɺ졢�ס���������ɫ���������У�Ҫ��������������ʹ������ͬ��ɫ��������һ�𡣱�����Ҫ�����к�ɫ�����������ߡ����а�ɫ��������м䡢������ɫ����������ұߡ�
����
��1����һ��������n��n<100������ʾ��n��������ݡ���������n�У�ÿ�������ɸ���R��W��B�����ַ����ɵ��ַ������У�����R��W��B�ֱ��ʾ�졢�ס���������ɫ������,ÿ�������1000���ַ���
���
��������ÿ������R��W��B�����ַ����ɵ��ַ������У���������������ʹ������ͬ��ɫ��������һ������ǰ��Ҫ��
��������
3
BBRRWBWRRR
RRRWWRWRB
RBRW 
�������
RRRRRWWBBB
RRRRRWWWB
RRWB 
��Դ
acm�̲�
�ϴ���
������
*/
#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string str;
		cin>>str;
		size_t i;
		size_t rnum=0,wnum=0,bnum=0;
		for(i = 0; i < str.length(); ++i)
		{
			switch(str[i])
			{
			case 'R':
				++rnum;
				break;
			case 'W':
				++wnum;
				break;
			case 'B':
				++bnum;
				break;
			default:break;
			}
		}
		str.clear();
		for (i = 0; i < rnum; ++i)
		{
			str += "R";
		}
		for (i = 0; i < wnum; ++i)
		{
			str += "W";
		}
		for (i = 0; i < bnum; ++i)
		{
			str += "B";
		}
		cout<<str<<endl;
	}

	return 0;
}
/*
���ų���

#include"stdio.h"
	int main()
{
	int i,j,k,m,n;
	int x,y,z;
	char a[1000];
	scanf("%d",&m);
	while(m--)
	{
		x=0;
		y=0;
		z=0;
		scanf("%s",a);
		for(i=0;i<1000;i++)
		{
			if(a[i]=='R')
				x++;
			if(a[i]=='W')
				y++;
			if(a[i]=='B')
				z++;
		}
		for(i=0;i<x;i++)
			printf("R");
		for(i=0;i<y;i++)
			printf("W");
		for(i=0;i<z;i++)
			printf("B");
		printf("\n");
	}

}
*/