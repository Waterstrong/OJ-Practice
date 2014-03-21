// NYOJ484_TheFamousClock.cpp : 定义控制台应用程序的入口点。
//
/*
The Famous Clock
时间限制：1000 ms  |  内存限制：65535 KB
难度：1
描述
Mr. B, Mr. G and Mr. M are now in Warsaw, Poland, for the 2012’s ACM-ICPC World Finals Contest. They’ve decided to take a 5 hours training every day before the contest. Also, they plan to start training at 10:00 each day since the World Final Contest will do so. The scenery in Warsaw is so attractive that Mr. B would always like to take a walk outside for a while after breakfast. However, Mr. B have to go back before training starts, otherwise his teammates will be annoyed. Here is a problem: Mr. B does not have a watch. In order to know the exact time, he has bought a new watch in Warsaw, but all the numbers on that watch are represented in Roman Numerals. Mr. B cannot understand such kind of numbers. Can you translate for him?

输入
Each test case contains a single line indicating a Roman Numerals that to be translated. All the numbers can be found on clocks. That is, each number in the input represents an integer between 1 and 12. Roman Numerals are expressed by strings consisting of uppercase ‘I’, ‘V’ and ‘X’. See the sample input for further information.
输出
For each test case, display a single line containing a decimal number corresponding to the given Roman Numerals.
样例输入
I
II
III
IV
V
VI
VII
VIII
IX
X
XI
XII
样例输出
Case 1: 1
Case 2: 2
Case 3: 3
Case 4: 4
Case 5: 5
Case 6: 6
Case 7: 7
Case 8: 8
Case 9: 9
Case 10: 10
Case 11: 11
Case 12: 12
来源
HDU
上传者
ACM_宋志恒
*/
#include "stdafx.h"

#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
	map<string, int> clock;
	clock["I"] = 1;
	clock["II"] = 2;
	clock["III"] = 3;
	clock["IV"] = 4;
	clock["V"] = 5;
	clock["VI"] = 6;
	clock["VII"] = 7;
	clock["VIII"] = 8;
	clock["IX"] = 9;
	clock["X"] = 10;
	clock["XI"] = 11;
	clock["XII"] = 12;
	int cnt = 1;
	string roman;
	while(cin>>roman)
	{
		cout<<"Case "<<cnt++<<": "<<clock[roman]<<endl;
	}

	return 0;
}

/*
最优程序
#include<map>
#include<iostream>
#include<string>
using namespace std;
map<string,int>m;
int main()
{
	m["I"]=1;
	m["II"]=2;
	m["III"]=3;
	m["IV"]=4;
	m["V"]=5;
	m["VI"]=6;
	m["VII"]=7;
	m["VIII"]=8;
	m["IX"]=9;
	m["X"]=10;
	m["XI"]=11;
	m["XII"]=12;
	string s;
	int c=0;
	while(cin>>s)
		cout<<"Case "<<++c<<": "<<m[s]<<endl;
	return 0;
} 
*/