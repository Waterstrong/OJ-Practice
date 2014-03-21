// NYOJ448_FindMax.cpp : 定义控制台应用程序的入口点。
//
/*贪心算法
寻找最大数
时间限制：1000 ms  |  内存限制：65535 KB
难度：2
描述
请在整数 n 中删除m个数字, 使得余下的数字按原次序组成的新数最大，

比如当n=92081346718538，m=10时，则新的最大数是9888



输入
第一行输入一个正整数T，表示有T组测试数据
每组测试数据占一行，每行有两个数n,m（n可能是一个很大的整数，但其位数不超过100位，并且保证数据首位非0，m小于整数n的位数）
输出
每组测试数据的输出占一行，输出剩余的数字按原次序组成的最大新数
样例输入
2
92081346718538 10
1008908 5
样例输出
9888
98
来源
第六届itat复赛B卷2题改编
上传者
ACM_赵铭浩
*/
#include "stdafx.h"
/*贪心算法
寻找最大数
时间限制：1000 ms  |  内存限制：65535 KB
难度：2
描述
请在整数 n 中删除m个数字, 使得余下的数字按原次序组成的新数最大，

比如当n=92081346718538，m=10时，则新的最大数是9888



输入
第一行输入一个正整数T，表示有T组测试数据
每组测试数据占一行，每行有两个数n,m（n可能是一个很大的整数，但其位数不超过100位，并且保证数据首位非0，m小于整数n的位数）
输出
每组测试数据的输出占一行，输出剩余的数字按原次序组成的最大新数
样例输入
2
92081346718538 10
1008908 5
样例输出
9888
98
来源
第六届itat复赛B卷2题改编
上传者
ACM_赵铭浩

这道题可以理解为：在字符串中找出一个由strlen(str)-m个字符按顺序（不要求连续）拼成的最大数。
其实这是个不断贪心的过程，首先要在str[0]到str[m]（包括str[m]）找到第一个最大的数字（注意哦，是第一个最大数字）作为最高位数（之所以要在0到m间找，是因为至少要留出strlen(str)-m-1位放在最高位后面的低位），假设是str[k]，然后再从str[k+1]到str[m+1]（因为此时已经选了1个，所以留出至少strlen(str)-m-2位放在第二位位后面的低位）找到第一个最大的作为第二位数……一直到strlen(str)-m个数被确定完，这样从最高位到最低位都是所能选择的最大值，所以得到的结果也将是最大值。
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
最优程序
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