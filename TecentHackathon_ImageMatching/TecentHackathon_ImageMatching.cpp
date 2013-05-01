// TecentHackathon_ImageMatching.cpp : 定义控制台应用程序的入口点。
//
/*
图形匹配
时间限制： 5秒

给定一张 N * M 个像素点的截图，以及 K 张小截图， 分别验证这 K 张小图是否是属于大图的一部分, 不考虑翻转、旋转以及缩放的情况。

输入：
输入包含多组数据，每一组数据的第一行输入3个整数 N、M、K，分别表示屏幕的行数、列数，以及要验证的图片张数。接下来输入N行，每一行有连续的M个字符，用来描述这张大图。接下来有K组小图，每一组小图用两个整数 Ni,Mi 描述小图的大小。 然后接下来是一个 Ni 行 Mi列的图形矩阵。其中，0 < N,M,K <= 1000，0 < Ni,Mi <=10组成图形矩阵的所有字符均为大小写字母、数字以及英文标点。
输入结束时以 3个 0 标识结尾。

输出：
对于每一个小图，如果是属于大图中的一部分，输出Yes, 否则，输出No。

样例输入：
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


样例输出：
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

