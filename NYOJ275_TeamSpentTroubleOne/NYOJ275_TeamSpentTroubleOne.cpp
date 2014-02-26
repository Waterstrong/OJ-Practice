// NYOJ275_TeamSpentTroubleOne.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
�ӻ��ķ���һ
ʱ�����ƣ�3000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�1
����
ACM�ӵĶӻ�CС+������Թ����C�����еĸ�ʽ�������ʮ����ʮ���˽��������Ȼ��ȴû�ж�����������������ź���˭�ܰ���дһ������ʵ������һ��ʮ������n��������Ķ�������ѽ����

�ѵ��㲻��������^_^

����
�����ж�����ݣ�������EOF������ÿ������ni��0<=ni<=1000010000���ÿո������
����ܰ��ʾ:EOF����һ���ļ��Ľ�����־��while(scanf("%d",&n)!=EOF){}��
���
����ж��У�ÿ�ж�Ӧһ��ʮ������ni�Ķ���������
ע�⣺����Ķ�����ȥ���κ�һ�������0��
��������
0 1 2 10
�������
0
1
10
1010
��Դ
ԭ��
�ϴ���
Never*/
#include "stdafx.h"
#include <bitset>
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
	int num;
	while(scanf("%d",&num)!=EOF)
	{
		bitset<32> bin(num);
		string str = bin.to_string();
		string::size_type pos = str.find('1');
		if (pos == string::npos)
		{
			cout<<"0"<<endl;
		}
		else
		{
			cout<<str.substr(pos)<<endl;
		}
	}
	return 0;
}

