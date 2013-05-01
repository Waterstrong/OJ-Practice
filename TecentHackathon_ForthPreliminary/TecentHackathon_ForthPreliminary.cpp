// TecentHackathon_ForthPreliminary.cpp : 定义控制台应用程序的入口点。
//
/*
小Q系列故事——最佳裁判

Time Limit: 500/200 MS (Java/Others)    Memory Limit: 65535/32768 K (Java/Others)
Total Submission(s): 0    Accepted Submission(s): 0


Problem Description
　　过去的2012年对小Ｑ来说是很悲催的一年，失恋了12次，每次都要郁闷1个来月。
  　　好在小Q是个体育迷，在最痛苦的时候，他常常用观看各种体育节目来麻醉自己，比如伦敦奥运会期间，小Q就常常在周末邀上一群单身同事聚在自己的蜗居，一边畅饮啤酒，一边吹牛。
	　　小Q最喜欢看的是跳水，主要原因也是因为这个项目有中国人参加，而且中国队员获胜的几率很大，一般不会再给自己添堵，不然何谈看体育疗情伤呢。
	  　　跳水项目的一个重要环节就是裁判打分，小Q他们有时候会觉得某个裁判不公平，是不是有意在压中国队员的分数。于是每当一个队员跳水完毕，他们几个也像电视上的裁判那样给队员打分，并且规定，谁的分数和最终得分最接近谁就是他们当中的最佳裁判，现场奖励啤酒一杯！
		　　其中，最终得分是这样计算的：N个人打分，去掉一个最高分，去掉一个最低分，然后剩余分数相加，再除以N-2即为最终得分。
		  　　凭借“看体育疗情伤”而练就的专业体育知识，小Q几乎每局必胜，这一夜，小Ｑ注定要烂醉如泥了......


			Input
			　　输入包含多组测试用例。
			  　　每组测试用例首先是一个整数N，表示裁判的人数，然后接着是N个实数，表示N个裁判的打分Pi，N为0时结束输入。
				　　[Technical Specification]
				  　　5 <= N <= 20
					　　0<=Pi<=10


					  Output
					  　　请计算并输出最佳裁判的编号，每组数据输出占一行，若有多人并列最佳裁判，只要求输出编号最小的那个。
						　　特别说明：裁判编号按照打分的顺序从1开始，依次类推，最后一人编号为N。


						  Sample Input
						  5 8.3 9.2 8.7 8.9 9.0
						  0


						  Sample Output
						  4
						  */
#include "stdafx.h"

//#include <iostream>
//#include <string>
//#include <cctype>
//using namespace std;

//#include <stdio.h>
//#include <ctype.h>

// #include <iostream>
// #include <cmath>
// #include <algorithm>
// using namespace std;
// int main()
// {
// 	int i, n;
// 	double arr[21], sum;
// 	while(true)
// 	{
// 		sum = 0;
// 		cin>>n;
// 		if (n == 0)
// 		{
// 			break;
// 		}
// 		for (i = 0; i < n; ++i)
// 		{
// 			cin>>arr[i];
// 			sum += arr[i];
// 		}
// 		sum -= (*min_element(arr, arr + n) + *max_element(arr, arr + n));
// 		sum /= (n - 2);
// 		for (i = 0; i < n; ++i)
// 		{
// 			arr[i] = fabs(arr[i] - sum);
// 		}
// 		cout<<(min_element(arr, arr + n) - arr) + 1<<endl;
// 	}
// 	return 0;
// }
// 





/*
郑厂长系列故事——逃离迷宫

Time Limit: 3000/1000 MS (Java/Others)    Memory Limit: 65535/32768 K (Java/Others)
Total Submission(s): 0    Accepted Submission(s): 0


Problem Description
　　郑厂长没变
  　　还是那个假厂长真码农
	　　改变的是业余爱好
	  　　他现在不研究象棋，改玩游戏了！
		　　
		  　　最近，郑厂长爱上了逃离迷宫这个游戏，他日日夜夜的玩，就是想达到自己的目标：1000万，因为这个数字和他在腾讯的年收入一样多。
			　　不过，在他跑到9999999时，游戏屏幕上突然出现了好多箱子，郑厂长必须要消除所有这些箱子才能继续玩游戏。这些箱子排成一行，每个箱子上都有个数字，每个数字代表这个箱子需要被点击的次数才会消失。每个箱子被点击时对应数字会减1，并且他右边箱子的数字也会同时减1，当箱子数字变成0，则其就就消失了。需要说明的是，如果右边没有箱子或者右边的箱子已经消失了，则无法操作当前的箱子（以上所说的“右边”只是指紧挨着的右边，隔开的不算）。
			  　　现在已知这些箱子的信息，请问郑厂长是否能成功消除所有的箱子然后继续达成他的千万梦想呢？


				Input
				输入首先包含一个正整数T，表示有T组测试样例；
				每组样例有两行，第一行是一个整数n，代表有n个箱子；第二行有n个数字ai，代表每个箱子需要被点击的次数。

				[Technical Specification]
				T<=100
				1 <= n <= 10 ^ 6
				0 <= ai <= 10 ^ 9 （1 <= i <= n）


				Output
				　　对于每个样例，如果郑厂长能成功消除这些箱子成功逃脱，请输出"yeah~ I escaped ^_^"，否则就输出"I will never go out T_T"。


				  Sample Input
				  2
				  2
				  2 2
				  2 
				  1 2


				  Sample Output
				  yeah~ I escaped ^_^
				  I will never go out T_T

*/

// #include <stdio.h>
// int main()
// {
// 	int test;
// 	int i, n;
// 	int num, sum;
// 	scanf("%d", &test);
// 	while(test--)
// 	{
// 		sum = 0;
// 		scanf("%d", &n);
// 		for (i = 1; i <= n; ++i)
// 		{
// 			scanf("%d", &num);
// 			if (i % 2 == 0)
// 			{
// 				sum -= num;
// 			}
// 			else
// 			{
// 				sum += num;
// 			}
// 		}
// 		if (sum == 0)
// 		{
// 			printf("yeah~ I escaped ^_^\n");
// 		}
// 		else
// 		{
// 			printf("I will never go out T_T\n");
// 		}
// 	}
// 	return 0;
// }


/*
威威猫系列故事——过生日

Time Limit: 500/200 MS (Java/Others)    Memory Limit: 65535/32768 K (Java/Others)
Total Submission(s): 0    Accepted Submission(s): 0


Problem Description
　　2月29号是威威猫的生日，由于这个日子非常特殊，4年才一次，所以生日这天许多朋友都前往威威猫家祝贺他的生日。
  　　大家给威威猫买了一个非常大非常大的蛋糕，蛋糕的形状是一个有n条边的凸多边形，可是威威猫的审美观有一点奇怪，他只喜欢有m条边的蛋糕，所以他要伙伴们把这个蛋糕切p次，然后给他一个只有m条边的新蛋糕。这下大家急了，这不是坑爹吗，审美观崎岖作怪。
	　　假设蛋糕可看成一个平面含n条边的凸多边形，每一刀必须沿直线切下去，p刀之后能给威威猫切出一个m条边的蛋糕吗？



	  Input
	  多组测试数据，每组占一行，包含3个整数n, m, p（含义如上）。
	  [Technical Specification]
	  3 <= n <= 10^100
	  0 < m <= 10^100
	  0 <= p <= 10^100


	  Output
	  每组测试数据，如果能够切出威威猫喜欢的蛋糕，请输出"YES"，否则请输出"NO"；
	  每组数据输出一行。


	  Sample Input
	  4 5 1


	  Sample Output
	  YES

	  Hint

	  Sample对应的示意图如下：

*/

// string Add(string str1, string str2)
// {
// 	int carry = 0, sum = 0;
// 	string str3;
// 	size_t len1 = str1.length();
// 	size_t len2 = str2.length();
// 	size_t i, j, k = 0;
// 	for (i = len1, j = len2; i >= 0, j >= 0; --i, --j)
// 	{
// 		sum = (int)(str1[i]) + (int)(str2[j]) + carry;
// 		if (sum >= 10)
// 		{
// 			carry = 1;
// 		}
// 		else
// 		{
// 			carry = 0;
// 		}
// 		sum %= 10;
// 		str3[k++] = sum;
// 	}
// 	if (carry > 0)
// 	{
// 		str3[k] = carry;
// 	}
// 	if (len1 > len2)
// 	{
// 		for (i = len1 - k - 1;)
// 		{
// 		}
// 	}
// 	else 
// 	{
// 
// 	}
// 	return "";
// }

//思路：只要n+p>=m 就可以完成要求，前提是m要是多边形，也就是m要>=3

#include <string>
#include <stack>
#include <iostream>
using namespace std;
int Compare(string str1, string str2)
{
	if (str1 == str2)
	{
		return 0;
	}
	size_t i;
	size_t len1 = str1.length();
	size_t len2 = str2.length();
	if (len1 < len2)
	{
		return -1;
	}
	else if (len1 > len2)
	{
		return 1;
	}
	else if (len1 == len2)
	{
		for (i = 0; i < len1; ++i)
		{
			if (str1[i] < str2[i])
			{
				return -1;
			}
			else if (str1[i] > str2[i])
			{
				return 1;
			}
		}
	}
	return 0;
}

string Add(string Str1, string Str2)
{
	// 1
	stack<int>S1;
	// 2
	stack<int>S2;
	// res
	stack<int>S3;
	int i, r, last = 0;
	for(i=0; i<Str1.size(); i++)
		S1.push(Str1[i] - '0');
	for(i=0; i<Str2.size(); i++)
		S2.push(Str2[i] - '0');
	while(!S1.empty() && !S2.empty())
	{
		r = S1.top() + S2.top() +last;
		S3.push(r%10);
		last = r/10;
		S1.pop();
		S2.pop();
	}
	if(!S1.empty())
	{
		while(!S1.empty())
		{
			r = S1.top() + last;
			S3.push(r%10);
			last = r/10;
			S1.pop();
		}
	}
	else if(!S2.empty())
	{
		while(!S2.empty())
		{
			r = S2.top() + last;
			S3.push(r%10);
			last = r/10;
			S2.pop();
		}
	}
	if(last != 0)
		S3.push(last);
	string result;
	while(!S3.empty())
	{
		result += S3.top() + '0';
		S3.pop();
	}
	return result;
}

int main()
{
	string strn, strm, strp;
	while(cin>>strn>>strm>>strp)
	{
		if (Compare(strm, "2") == 1)
		{
			int res = Compare(Add(strn, strp), strm);
			if (res == 1 || res == 0)
			{
				cout<<"YES"<<endl;
				continue;
			}
		}
		cout<<"NO"<<endl;
	}

return 0;
}



// #include <string>
// #include <stack>
// #include <iostream>
// using namespace std;
// int Compare(string str1, string str2)
// {
// 	if (str1 == str2)
// 	{
// 		return 0;
// 	}
// 	size_t i;
// 	size_t len1 = str1.length();
// 	size_t len2 = str2.length();
// 	if (len1 < len2)
// 	{
// 		return -1;
// 	}
// 	else if (len1 > len2)
// 	{
// 		return 1;
// 	}
// 	else if (len1 == len2)
// 	{
// 		for (i = 0; i < len1; ++i)
// 		{
// 			if (str1[i] < str2[i])
// 			{
// 				return -1;
// 			}
// 			else if (str1[i] > str2[i])
// 			{
// 				return 1;
// 			}
// 		}
// 	}
// 	return 0;
// }
// 
// string Add(string Str1, string Str2)
// {
// 	// 1
// 	stack<int>S1;
// 	// 2
// 	stack<int>S2;
// 	// res
// 	stack<int>S3;
// 	int i, r, last = 0;
// 	for(i=0; i<Str1.size(); i++)
// 		S1.push(Str1[i] - '0');
// 	for(i=0; i<Str2.size(); i++)
// 		S2.push(Str2[i] - '0');
// 	while(!S1.empty() && !S2.empty())
// 	{
// 		r = S1.top() + S2.top() +last;
// 		S3.push(r%10);
// 		last = r/10;
// 		S1.pop();
// 		S2.pop();
// 	}
// 	if(!S1.empty())
// 	{
// 		while(!S1.empty())
// 		{
// 			r = S1.top() + last;
// 			S3.push(r%10);
// 			last = r/10;
// 			S1.pop();
// 		}
// 	}
// 	else if(!S2.empty())
// 	{
// 		while(!S2.empty())
// 		{
// 			r = S2.top() + last;
// 			S3.push(r%10);
// 			last = r/10;
// 			S2.pop();
// 		}
// 	}
// 	if(last != 0)
// 		S3.push(last);
// 	string result;
// 	while(!S3.empty())
// 	{
// 		result += S3.top() + '0';
// 		S3.pop();
// 	}
// 	return result;
// }
// 
// int main()
// {
// 	string strn, strm, strp;
// 	while(cin>>strn>>strm>>strp)
// 	{
// 		if (Compare(strm, "2") != 1)
// 		{
// 			cout<<"NO"<<endl;
// 			continue;
// 		}
// 		int res = Compare(strm, strn);
// 		if (res == -1)
// 		{
// 			if (Compare(strp, "0") == 0)
// 			{
// 				cout<<"NO"<<endl;
// 				continue;
// 			}
// 			if (Compare(Add(strm, strp), strn) == -1)
// 			{
// 				cout<<"NO"<<endl;
// 				continue;
// 			}
// 		}
// 		else if (res == 1)
// 		{
// 			if (Compare(strp, "0") == 0)
// 			{
// 				cout<<"NO"<<endl;
// 				continue;
// 			}
// 		}
// 		cout<<"YES"<<endl;
// 	}
// 
// 	return 0;
// }





// #include <string>
// #include <iostream>
// using namespace std;
// int Compare(string str1, string str2)
// {
// 	if (str1 == str2)
// 	{
// 		return 0;
// 	}
// 	size_t i;
// 	size_t len1 = str1.length();
// 	size_t len2 = str2.length();
// 	if (len1 < len1)
// 	{
// 		return -1;
// 	}
// 	else if (len1 > len2)
// 	{
// 		return 1;
// 	}
// 	else if (len1 == len2)
// 	{
// 		for (i = 0; i < len1; ++i)
// 		{
// 			if (str1[i] < str2[i])
// 			{
// 				return -1;
// 			}
// 			else if (str1[i] > str2[i])
// 			{
// 				return 1;
// 			}
// 		}
// 	}
// 	return 0;
// }
// 
// int main()
// {
// 	string strn, strm, strp;
// 	while(cin>>strn>>strm>>strp)
// 	{
// 		int res = Compare(strm, strn);
// 		if (res == -1)
// 		{
// 			if (Compare(strp, "0") == 0)
// 			{
// 				cout<<"NO"<<endl;
// 				continue;
// 			}
// 		}
// 		cout<<"YES"<<endl;
// 	}
// 
// 	return 0;
// }