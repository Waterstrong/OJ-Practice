// NYOJ227_LicensePlateNumber.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	int m;
	string early;
	string temp;
	cin>>n;
	while(n--)
	{
		cin>>m;
		early = "zzzzz";
		while(m--)
		{
			cin>>temp;
			if (early > temp)
			{
				early = temp;
			}
		}
		cout<<early<<endl;
	}
	return 0;
}

