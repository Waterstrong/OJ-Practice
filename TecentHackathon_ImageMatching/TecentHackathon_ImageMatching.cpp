// TecentHackathon_ImageMatching.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
ͼ��ƥ��
ʱ�����ƣ� 5��

����һ�� N * M �����ص�Ľ�ͼ���Լ� K ��С��ͼ�� �ֱ���֤�� K ��Сͼ�Ƿ������ڴ�ͼ��һ����, �����Ƿ�ת����ת�Լ����ŵ������

���룺
��������������ݣ�ÿһ�����ݵĵ�һ������3������ N��M��K���ֱ��ʾ��Ļ���������������Լ�Ҫ��֤��ͼƬ����������������N�У�ÿһ����������M���ַ��������������Ŵ�ͼ����������K��Сͼ��ÿһ��Сͼ���������� Ni,Mi ����Сͼ�Ĵ�С�� Ȼ���������һ�� Ni �� Mi�е�ͼ�ξ������У�0 < N,M,K <= 1000��0 < Ni,Mi <=10���ͼ�ξ���������ַ���Ϊ��Сд��ĸ�������Լ�Ӣ�ı�㡣
�������ʱ�� 3�� 0 ��ʶ��β��

�����
����ÿһ��Сͼ����������ڴ�ͼ�е�һ���֣����Yes, �������No��

�������룺
3 4 2
#!gd
Ddfb
Chrv
2 2
fb
rv
1 2
DD
0 0 0


���������
Yes
No

*/
#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;
int main()
{
	int row, col, num, rowi, coli;
	string pic[1000], pici[10];
	while (cin>>row>>col>>num && (row + col + num != 0))
	{
		int i;
		for (i = 0; i < row; ++i)
		{
			cin>>pic[i];
		}
		while(num--)
		{
			cin>>rowi>>coli;
			for (i = 0; i < rowi; ++i)
			{
				cin>>pici[i];
			}
			int j = 0;
			for (i = 0; i <= row - rowi; ++i)
			{
				size_t found = pic[i].find(pici[j]);
				if (found != string::npos)
				{
					for (j = 1; j < rowi; ++j)
					{
						if (pic[i+j].substr(found, pici[j].length()) != pici[j])
						{
							break;
						}
					}
					if (j == rowi)
					{
						cout<<"Yes"<<endl;
						break;
					}
				}
			}
			if (j != rowi)
			{
				cout<<"No"<<endl;
			}
		}
	}
	return 0;
}

