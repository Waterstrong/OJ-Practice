// WS_Test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
using namespace std;
void Print(int i, int n)
{
	int k, j;
	for (k = 0; k < n - i; ++k)
	{
		cout<<" ";
	}
	for (j = 0; j <= 2*i; ++j)
	{
		if (j == 0 || 2*i == j)
		{
			cout<<"*";
		}
		else if(j % 2 == 0)
		{
			cout<<"*";
		}
		else 
		{
			cout<<" ";
		}
	}
	cout<<endl;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int n = 1;
	while(n != -1)
	{
		cout<<"请输入数字："<<flush;
		cin>>n;
		--n;
		int i;
		for (i = 0; i < n; ++i)
		{
			Print(i, n);
		}
		for (; i >= 0; --i)
		{
			Print(i, n);
		}
	}
	return 0;
}

