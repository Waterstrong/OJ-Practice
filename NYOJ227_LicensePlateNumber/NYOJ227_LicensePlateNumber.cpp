// NYOJ227_LicensePlateNumber.cpp : 定义控制台应用程序的入口点。
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

