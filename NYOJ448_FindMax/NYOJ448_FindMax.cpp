// NYOJ448_FindMax.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*̰���㷨
Ѱ�������
ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�2
����
�������� n ��ɾ��m������, ʹ�����µ����ְ�ԭ������ɵ��������

���統n=92081346718538��m=10ʱ�����µ��������9888



����
��һ������һ��������T����ʾ��T���������
ÿ���������ռһ�У�ÿ����������n,m��n������һ���ܴ������������λ��������100λ�����ұ�֤������λ��0��mС������n��λ����
���
ÿ��������ݵ����ռһ�У����ʣ������ְ�ԭ������ɵ��������
��������
2
92081346718538 10
1008908 5
�������
9888
98
��Դ
������itat����B��2��ı�
�ϴ���
ACM_������
*/
#include "stdafx.h"
/*̰���㷨
Ѱ�������
ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�2
����
�������� n ��ɾ��m������, ʹ�����µ����ְ�ԭ������ɵ��������

���統n=92081346718538��m=10ʱ�����µ��������9888



����
��һ������һ��������T����ʾ��T���������
ÿ���������ռһ�У�ÿ����������n,m��n������һ���ܴ������������λ��������100λ�����ұ�֤������λ��0��mС������n��λ����
���
ÿ��������ݵ����ռһ�У����ʣ������ְ�ԭ������ɵ��������
��������
2
92081346718538 10
1008908 5
�������
9888
98
��Դ
������itat����B��2��ı�
�ϴ���
ACM_������

�����������Ϊ�����ַ������ҳ�һ����strlen(str)-m���ַ���˳�򣨲�Ҫ��������ƴ�ɵ��������
��ʵ���Ǹ�����̰�ĵĹ��̣�����Ҫ��str[0]��str[m]������str[m]���ҵ���һ���������֣�ע��Ŷ���ǵ�һ��������֣���Ϊ���λ����֮����Ҫ��0��m���ң�����Ϊ����Ҫ����strlen(str)-m-1λ�������λ����ĵ�λ����������str[k]��Ȼ���ٴ�str[k+1]��str[m+1]����Ϊ��ʱ�Ѿ�ѡ��1����������������strlen(str)-m-2λ���ڵڶ�λλ����ĵ�λ���ҵ���һ��������Ϊ�ڶ�λ������һֱ��strlen(str)-m������ȷ���꣬���������λ�����λ��������ѡ������ֵ�����Եõ��Ľ��Ҳ�������ֵ��
*/
/*WA
#include <string>
#include <iostream>
using namespace std;
int main()
{
	int test;
	string str;
	int num;
	char ch;
	cin>>test;
	while(test--)
	{
		cin>>str;
		cin>>num;
		ch = '0';
		while (true)
		{
			for (size_t i = 0; i < str.length(); )
			{
				if (str[i] == ch)
				{
					str.erase(i, 1);
					--num;
					if (num == 0)
					{
						break;
					}
				}
				else
				{
					++i;
				}
			}
			if (num == 0)
			{
				break;
			}
			++ch;
		}
		cout<<str<<endl;
	}
	
	return 0;
}

*/

#include <string>
#include <iostream>
using namespace std;
int FindMax(string str, int start, int end)
{
	int i, index = start;
	char ch = str[start];
	for (i = start; i <= end; ++i)
	{
		if (str[i] > ch)
		{
			ch = str[i];
			index = i;
		}
	}
	return index;
}
int main()
{
	int test;
	string str;
	int num, index, len;
	cin>>test;
	while(test--)
	{
		cin>>str>>num;
		len = str.length() - num;
		index = 0;
		while(len--)
		{
			index = FindMax(str, index, num);
			cout<<str[index];
			++index;
			++num;
		}		
		cout<<endl;
	}

	return 0;
}

/*
���ų���
#include <stdio.h>
#include <string.h>
int main()
{
	int k,l,max,z;
	char s[105],ans[105];
	scanf("%d",&z);
	while(z--)
	{
		scanf("%s%d",s,&k);
		l = strlen(s);
		for(int i=0,q=-1;i<l-k;i++)
		{
			max = 0;
			for(int j=q+1;j<=k+i;j++)
				if(max < s[j])
					max = s[j] , q = j;
			ans[i] = max;
		}
		ans[l-k] = '\0';
		puts(ans);
	}
	return 0;
}       
*/