// NYOJ276_CompareLettersSize.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
�Ƚ���ĸ��С
ʱ�����ƣ�3000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�1
����
�����������Ӣ����ĸ���Ƚ����ǵĴ�С���涨26��Ӣ����ĸA,B,C.....Z���δӴ�С��

����
��һ������T����ʾ��T�����ݣ�
��������T�У�ÿ����������ĸ���Կո������
���
����������ݵıȽϽ���������ʽ�����������
��ע������ϸ��������˳��������A B�����ʱ������A?B��
��������
3
A B
D D
Z C
�������
A>B
D=D
Z<C
��Դ
ԭ��
�ϴ���
Never*/

#include "stdafx.h"

#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	int cases;
	char letter1, letter2;
	cin>>cases;
	while(cases--)
	{
		cin>>letter1>>letter2;
		cout<<letter1;
		char let1 = toupper(letter1);
		char let2 = toupper(letter2);
		if (let1 > let2)
		{
			cout<<"<";
		}
		else if (let1 < let2)
		{
			cout<<">";
		}
		else
		{
			cout<<"=";
		}
		cout<<letter2<<endl;
	}
	return 0;
}

