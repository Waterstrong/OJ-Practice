// NYOJ273_SmallGameofLetter.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
��ĸС��Ϸ
ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�0
����
����һ��������ַ���,���������Сд��ĸ(a--z)�Լ�һЩ������ţ������ҳ������ַ����������е�Сд��ĸ�ĸ����� ���������26ȡ�࣬���ȡ������������ĸ���ж�Ӧ��Сд��ĸ(0��Ӧz,1��Ӧa��2��Ӧb....25��Ӧy)��
����
��һ����һ������n(1<n<1000)��ʾ��������n�е��ַ���m(1<m<200)��Ҫ����
���
�����Ӧ��Сд��ĸ ÿ��Сд��ĸ����ռһ��
��������
2
asdasl+%$^&ksdhkjhjksd
adklf&(%^(alkha
�������
q
j
��Դ
[zinber]ԭ��
�ϴ���
zinber
*/
#include "stdafx.h"

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	int test;
	int cnt;
	string str;
	cin>>test;
	while (test--)
	{
		cnt = 0;
		cin>>str;
		for (size_t i = 0; i < str.length(); ++i)
		{
			if (islower(str[i]))
			{
				++cnt;
			}
		}
		cnt %= 26;
		if (cnt == 0)
		{
			cout<<'z'<<endl;
		}
		else
		{
			cout<<char('a' + cnt - 1)<<endl;
		}
		
	}
	return 0;
}

