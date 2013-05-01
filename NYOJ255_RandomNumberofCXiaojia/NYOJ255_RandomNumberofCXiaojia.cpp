// NYOJ255_RandomNumberofCXiaojia.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
CС�� ֮ �����
ʱ�����ƣ�3000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�1
����
ACM�ӵġ�CС�ӡ�ͬѧ����ѧУ����һЩͬѧһ����һ���ʾ���飬Ϊ��ʵ��Ŀ͹��ԣ������ü����������N��1��1000֮������������0<N��100�������������ظ������֣�ֻ����һ������������ͬ����ȥ������ͬ������Ӧ�Ų�ͬ��ѧ����ѧ�š�Ȼ���ٰ���Щ����С�������򣬰����źõ�˳��ȥ��ͬѧ�����顣����Э�� CС�� ��ɡ�ȥ�ء��롰���򡱵Ĺ�����
����
��һ����������T��1<T<10����ʾ������������ݣ�
ÿ��������ݰ���2�У�
��1��Ϊ1������������ʾ�����ɵ�������ĸ�����N��0<N��100��
��2����N���ÿո��������������Ϊ���������������
�������Ϊ��Ŀ�����ģ�����ҪACMer���ɣ�
���
���Ҳ��2�У���1��Ϊ1��������M����ʾ����ͬ��������ĸ�����
��2��ΪM���ÿո��������������Ϊ��С�����ź���Ĳ���ͬ���������
��������
1
10
20 40 32 67 40 20 89 300 400 15
�������
8
15 20 32 40 67 89 300 400
��Դ
RQNOJ
�ϴ���
�Ʋ�

���ų���

#include<iostream>
#include<map>
#include<cstdio>
#include<algorithm>
#include<iterator>
using namespace std;
const int maxn=110;
int tab[maxn];
int main()
{

int t;cin>>t;
while(t--){
int n;cin>>n;
for(int i=0;i<n;i++)scanf("%d",&tab[i]);
sort(tab,tab+n);
cout<<(n=distance(tab,unique(tab,tab+n)))<<endl;
copy(tab,tab+n,ostream_iterator<int>(cout," "));cout<<endl;
}

}        
*/
#include "stdafx.h"

#include <iostream>
#include <set>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		set<int> nums;
		int n;
		int num;
		cin>>n;
		while(n--)
		{
			cin>>num;
			nums.insert(num);
		}
		cout<<nums.size()<<endl;
		for (set<int>::iterator it = nums.begin(); it != nums.end(); ++it)
		{
			cout<<*it<<" ";
		}
		cout<<endl;
	}
	return 0;
}

