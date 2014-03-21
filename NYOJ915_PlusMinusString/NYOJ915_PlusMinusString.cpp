// NYOJ915_PlusMinusString.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*̰���㷨
+-�ַ���
ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�1
����
Shiva�õ�������ֻ�мӺźͼ��ŵ��ַ������ִ�������ͬ��Shivaһ�ο��԰�һ���Ӻź������ڵļ��Ž���������֪��������Ҫ���ٴβ������ܰѵ�һ���ַ����任�ɵڶ����ַ�����������Ҫȥ����������Ǹ�������⡣
����
�����������

ÿ�����������У�ÿ�а���һ���ɡ�+���͡�-����ɵ��ַ�����ÿ���ӷ������Ȳ�����5000��
���
��һ�����������������Ҫ�����Ĵ���������𰸲����ڣ����-1��
��������
++-+--+ 
-++--++ 
�������
4
��Դ
NBOJ
�ϴ���
TC_����
*/
#include "stdafx.h"

#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	string str1, str2;
	char tmp;
	int i, j, cnt, plus1, plus2;
	while(cin>>str1>>str2)
	{
		cnt = 0;
		plus1 = plus2 = 0;
		for (i = 0; i < str1.length(); ++i)
		{
			if (str1[i] == '+')
			{
				++plus1;
			}
			if (str2[i] == '+')
			{
				++plus2;
			}
		}
		if (plus2 != plus1)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			for (i = 0; i < str1.length(); ++i)
			{
				if (str1[i] != str2[i])
				{
					for (j = i+1; j < str1.length(); ++j)
					{
						if (str1[j]==str2[i])
						{
							tmp = str1[i];
							str1[i] = str1[j];
							str1[j] = tmp;
							cnt += j-i;
							break;
						}
					}
				}
			}
			cout<<cnt<<endl;
		}
	}
	return 0;
}

