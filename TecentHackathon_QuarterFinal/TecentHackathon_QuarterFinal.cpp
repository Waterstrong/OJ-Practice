// TecentHackathon_QuarterFinal.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

/*
小Q系列故事——大笨钟

Time Limit: 600/200 MS (Java/Others)    Memory Limit: 65535/32768 K (Java/Others)
Total Submission(s): 0    Accepted Submission(s): 0


Problem Description
　　饱尝情感苦恼的小Q本打算隐居一段时间，但仅仅在3月25号一天没有出现，就有很多朋友想念他，所以，他今天决定再出来一次，正式和大家做个告别。
  　　
	　　小Q近来睡眠情况很差——晚上睡不着，早上又起不来！以前总是全勤的他这个月甚至迟到了好几次，虽然主管没说什么，但是他自己清楚此事的严重性。
	  　　爱情没有了，小Q不想再失去面包，于是他决定买个闹钟，为求质量可靠，特意挑了个最贵的原装进口货！但是，正所谓屋漏偏逢连夜雨、人倒霉的时候喝凉水都塞牙，小Q新买的这个进口闹钟竟然每分钟总是比正确时间慢那么几秒！
		　　可怜的小Ｑ愤愤然道：“真是一个大笨钟！”
		  　　但是为了充分利用大笨钟，小Q还是尽力想办法搞清楚它的性能，希望能将其当作正常时钟使用。
			　　小Q从如下三方面去研究大笨钟：
			  　　1、 假设正常时间走了t分钟，计算大笨钟走的时间；
				　　2、 假设大笨钟走了t分钟，计算正常时间走的时间；
				  　　3、 小Q将大笨钟与当前时间调成正确时间，此时记为第0次，计算第k次大笨钟显示的时间与正确时间相同需要的时间（大笨钟的结构和普通时钟相同，即分为12大格，60小格）。


					Input
					输入数据第一行是一个正整数T，表示总共有T组测试数据；
					接下来的每组数据首先输入正整数x，表示大笨钟每分钟比正常时钟慢x秒；
					接下来一行是一个正整数Q，表示共有Q次询问；
					接下来Q行，每行首先输入询问方式（1、2或3，对应小Q研究大笨钟的三方面），如果输入1或2，接下来输入正整数t，如果输入3，接下来输入正整数k（t和k的含义见题目）。

					[Technical Specification]
					T <= 100
					x < 60
					Q <= 100
					t <= 10000
					k <= 10


					Output
					请输出要计算的答案，以秒为单位，保留两位小数，每次查询输出一行（参见Sample）。


					Sample Input
					1
					1
					3
					1 2
					2 2
					3 1


					Sample Output
					118.00
					122.03
					2592000.00

					Hint

					小Q最后还想说句话：“进口货未必可靠，咱们还是支持国货吧！”*/
// #include <iostream>
// #include <stdio.h>
// using namespace std;
// int main()
// {
// 	int test;
// 	int slow;
// 	int que;
// 	int opt;
// 	int tim;
// 	double res;
// 	cin>>test;
// 	while(test--)
// 	{
// 		cin>>slow>>que;
// 		while(que--)
// 		{
// 			cin>>opt>>tim;
// 			switch(opt)
// 			{
// 			case 1:
// 				res = tim * 60.0 - tim * 60.0 * slow / 60.0;
// 				printf("%.2f\n", res);
// 				break;
// 			case 2:
// 				res = tim * 60.0 + tim * 60.0 * slow / (60.0-slow);
// 				printf("%.2f\n", res);
// 				break;
// 			case 3:
// 				res = tim * 720.0 * 3600.0 / slow;
// 				printf("%.2f\n", res);
// 				break;
// 			}
// 		}
// 	}
// 	return 0;
// }
// 

// #include <stdio.h>
// #include <iostream>
// using namespace std;
// int main()
// {
// 	return 0;
// }


//#include <iostream>
//using namespace std;
//#define MAX_SIZE 100000
//const int mod = 1000000007;
//int Arr[MAX_SIZE+1];
//int CalcFac(int n)
//{
//	Arr[1]=1;
//	int k=1, i, j;
//	for(i=1;i<=n;i++)
//	{
//		int c = 0;
//		for(j=1;j<=k;j++)
//		{
//			int x=Arr[j]*i+c;
//			c=x/10;
//			Arr[j]=x-c*10;
//		}
//		if(c)
//		{
//			while(c)
//			{
//				Arr[k+1]=c%10;
//				c=c/10;
//				k++;
//			}
//		}
//	}
//	return k;
//}

/*
吉哥系列故事——礼尚往来

Time Limit: 3000/1000 MS (Java/Others)    Memory Limit: 65535/32768 K (Java/Others)
Total Submission(s): 0    Accepted Submission(s): 0


Problem Description
　　吉哥还是那个吉哥
  　　那个江湖人称“叽叽哥”的基哥
	　　
	  　　每当节日来临，女友众多的叽叽哥总是能从全国各地的女友那里收到各种礼物。
		　　有礼物收到当然值得高兴，但回礼确是件麻烦的事！
		  　　无论多麻烦，总不好意思收礼而不回礼，那也不是叽叽哥的风格。
			　　
			  　　现在，即爱面子又抠门的叽叽哥想出了一个绝妙的好办法：他准备将各个女友送来的礼物合理分配，再回送不同女友，这样就不用再花钱买礼物了！
				　　
				  　　假设叽叽哥的n个女友每人送他一个礼物（每个人送的礼物都不相同），现在他需要合理安排，再回送每个女友一份礼物，重点是，回送的礼物不能是这个女友之前送他的那个礼物，不然，叽叽哥可就摊上事了，摊上大事了......
					　　
					  　　现在，叽叽哥想知道总共有多少种满足条件的回送礼物方案呢？ 


						Input
						输入数据第一行是个正整数T，表示总共有T组测试数据（T <= 100）；
						每组数据包含一个正整数n，表示叽叽哥的女友个数为n( 1 <= n <= 100 )。


						Output
						请输出可能的方案数，因为方案数可能比较大，请将结果对10^9 + 7 取模后再输出。
						每组输出占一行。


						Sample Input
						3
						1
						2
						4


						Sample Output
						0
						1
						9*/

// #include <iostream>
// using namespace std;
// #define MAX_SIZE 101
// __int64 data[MAX_SIZE];
// const int mod = 1000000007;
// void CalcDn(int n)
// {
// 	data[0]=0;
// 	data[1]=1;
// 	for(int i=2;i<n;i++)
// 	{
// 		data[i]=i*(data[i-1]+data[i-2]) % mod;
// 	}
// 	//return data[n-1];
// }
// int main()
// {
// 	__int64 n;
// 	int test;
// 	CalcDn(101);
// 	cin>>test;
// 	while(test--)
// 	{
// 		cin>>n;
// 		cout<<data[n-1]<<endl;
// 	}
// 	return 0;
// }

//no
// #include<iostream>
// using namespace std;
// __int64 CalcDn(int n)
// {
// 	if(n<=1)
// 		return 0;
// 	__int64 *data=new __int64[n];//申请一个n元数组，以空间换时间   
// 	data[0]=0;
// 	data[1]=1;
// 	for(int i=2;i<n;i++)
// 		data[i]=i*(data[i-1]+data[i-2]);//以此可以看到，
// 	//用申请所得空间进行中间量保存，可以避免使用递归
// 	__int64 r=data[n-1];
// 	delete []data;
// 	return r;
// }
// int calc_Dn2(int n)
// {
// 	if(n<=1)
// 		return 0;
// 	else if(n==2)
// 		return 1;
// 	return (n-1)*(calc_Dn2(n-1)+calc_Dn2(n-2));
// }
// int main()
// {
// 	while(1)
// 	{
// 		int n;
// 		cout<<"请你输入一个整数，以计算错位排列数Dn："<<endl;
// 		cin>>n;
// 		//cout<<"n="<<n<<"时,Dn="<<calc_Dn(n)<<endl;
// 		cout<<"n="<<n<<"时,Dn="<<calc_Dn2(n)<<endl;//如果n=1000万时，栈溢出，无法得到结果！
// 	}
// }


/*
#include <iostream>
#include <cmath>
using namespace std;
int land[101][11];
int col, row;
void IncLand(int posi, int posj)
{
	int i, j;
	for(i = posi - 2; i <= posi + 2; ++i)
	{
		for(j = posj - 2; j <= posj + 2; ++j)
		{
			if(i < 0 || i > row || j < 0 || j > col)
			{
				continue;
			}
			if(abs(i - posi) + abs(j - posj) == 2)
			{
				if (land[i][j] >= 1)
				{
					++land[posi][posj];
				}
			}
		}
	}
}

#include <iostream>
#include <cmath>
using namespace std;
int land[101][11];
int col, row;
void SetLand(int posi, int posj)
{
	int i, j;
	for(i = posi - 2; i <= posi + 2; ++i)
	{
		for(j = posj - 2; j <= posj + 2; ++j)
		{
			if(i < 0 || i > row || j < 0 || j > col)
			{
				continue;
			}
			if(abs(i - posi) + abs(j - posj) == 2)
			{
				if (land[posi][posj] <= land[i][j])
				{
					land[i][j] = 0;
				}
				else
				{

				}
			}
		}
	}
}

int main()
{
	int i, j;
	while(cin>>row>>col)
	{
		for(i = 0; i < row; ++i)
		{
			for(j = 0; j < col; ++j)
			{
				cin>>land[i][j];
			}
		}
		int cnt = 0;
		for(i = 0; i < row; ++i)
		{
			for(j = 0; j < col; ++j)
			{
				if(land[i][j] >= 1)
				{
					IncLand(i, j);
				}
			}
		}
// 		for (i = 0; i < row; ++i)
// 		{
// 			for (j = 0; j < col; ++j)
// 			{
// 				cout<<land[i][j]<<" ";
// 			}
// 			cout<<endl;
// 		}
// 		cout<<endl;
		

	}
	return 0;
}
*/
/*
5 4
0 0 0 0
0 1 0 0
0 0 1 0
0 1 0 1
0 0 0 0
*/


// #include <iostream>
// #include <cmath>
// #include <stdio.h>
// using namespace std;
// int main()
// {
// 	int n, k, i, j;
// 	int diff, minDiff, sum;
// 	int arr[21][11];
// 	while(scanf("%d%d", &n, &k) != EOF)
// 	{
// 		sum = 0;
// 		for (i = 0; i < n; ++i)
// 		{
// 			for (j = 0; j < k; ++j)
// 			{
// 				scanf("%d", &arr[i][j]);
// 			}
// 		}
// 		minDiff = 100000;
// 		int index[11];
// 		int m = 0;
// 		for (i = 0; i < k; ++i)
// 		{
// 			for (j = 0; j < k; ++j)
// 			{
// 				diff = abs(arr[0][i] - arr[1][j]);
// 				if (diff < minDiff)
// 				{
// 					minDiff = diff;
// 					m = 0;
// 					index[m] = j;
// 				}
// 				else if (diff == minDiff)
// 				{
// 					index[m++] = j;
// 				}
// 			}
// 		}
// 		sum += minDiff;
// 		int e;
// 		int index2[11];
// 		int q;
// 		for (i = 1; i < n-1; ++i)
// 		{
// 			minDiff = 100000;
// 			for (e = 0; e < m; ++e)
// 			{
// 				for (j = 0; j < k; ++j)
// 				{
// 					diff = abs(arr[i][index[e]]-arr[i+1][j]);
// 					if (diff < minDiff)
// 					{
// 						minDiff = diff;
// 						q = 0;
// 						index2[q] = j;
// 					}
// 					else if (diff == minDiff)
// 					{
// 						index2[q++] = j;
// 					}
// 				}
// 			}
// 			m = q;
// 			for (e = 0; e < m; ++e)
// 			{
// 				index[e] = index2[e];
// 			}
// 			sum += minDiff;
// 		}
// 		printf("%d\n", minDiff);
// 	}
// 	return 0;
// }





#include <math.h>
#include <stdio.h>
int main()
{
	int n, k, i, j;
	int diff, minDiff, sum;
	int arr[21][11];
	int index[11];
	int m = 0;
	int e;
	int index2[11];
	int q;
	while(scanf("%d%d", &n, &k) != EOF)
	{
		if (n == 1)
		{
			printf("0\n");
			continue;
		}
		sum = 0;
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < k; ++j)
			{
				scanf("%d", &arr[i][j]);
			}
		}
		
		minDiff = 100000;
		m = 0;
		for (i = 0; i < k; ++i)
		{
			for (j = 0; j < k; ++j)
			{
				diff = abs(arr[0][i] - arr[1][j]);
				if (diff < minDiff)
				{
					minDiff = diff;
					m = 0;
					index[m++] = j;
				}
				else if (diff == minDiff)
				{
					index[m++] = j;
				}
			}
		}
		sum += minDiff;
		q = 0;
		for (i = 1; i < n-1; ++i)
		{
			minDiff = 100000;
			q = 0;
			for (e = 0; e < m; ++e)
			{
				for (j = 0; j < k; ++j)
				{
					diff = abs(arr[i][index[e]]-arr[i+1][j]);
					if (diff < minDiff)
					{
						minDiff = diff;
						q = 0;
						index2[q++] = j;
					}
					else if (diff == minDiff)
					{
						index2[q++] = j;
					}
				}
			}
			m = q;
			for (e = 0; e < m; ++e)
			{
				index[e] = index2[e];
			}
			sum += minDiff;
		}
		printf("%d\n", sum);
	}
	return 0;
}


/*
#include <iostream>
#include <cmath>
using namespace std;
int s[50][50];
int main()
{
	int n, k, i, j;
	int diff, minDiff, sum;
	int arr[22][12];
	while(cin>>n>>k)
	{
		sum = 0;
		for (i = 1; i <= n; ++i)
		{
			for (j = 1; j <= k; ++j)
			{
				cin>>arr[i][j];
			}
		}
		for (i = 1; i <= n; ++i)
		{
			for (j = 1; j <= k; ++j)
			{
				if (j >= c[i])
				{
					s[i][j] = std::max(s[i - 1][j], w[i] + s[i - 1][j - c[i]]);
				}
				else
				{
					s[i][j] = s[i - 1][j];
				}
			}
		}

	}
	return 0;
}


int main()
{
	int i, j, n, v;
	while(true)
	{
		scanf("%d%d", &n, &v);
		if (n == 0 && v == 0)
		{
			break;
		}
		for (i = 0; i <= n; ++i)
		{
			s[i][0] = 0;
		}
		for (i = 0; i <= v; ++i)
		{
			s[0][i] = 0;
		}
		for (i = 1; i <= n; ++i)
		{
			scanf("%d%d",&c[i],&w[i]);
		}
		for (i = 1; i <= n; ++i)
		{
			for (j = 1; j <= v; ++j)
			{
				if (j >= c[i])
				{
					s[i][j] = std::max(s[i - 1][j], w[i] + s[i - 1][j - c[i]]);
				}
				else
				{
					s[i][j] = s[i - 1][j];
				}
			}
		}
		printf("%d\n", s[n][v]);
	}
	return 0;
}
*/

/*
#include <stdio.h>
#include <algorithm>
int c[1001], w[1001];
int s[100003][100003];
int blod[100002];
int main()
{
	int i, j, n, v;
	int n, m;
	int sum;
	while(true)
	{
		sum = 0;
		scanf("%d%d", &n, &m);
		for (i = 1; i <= n; ++i)
		{
			scanf("%d", &blod[i]);
			sum += blod[i];
		}
		for (i = 1; i <= m; ++i)
		{
			scanf("%d%d", &c[i], &w[i]);
		}
		for (i = 0; i <= m; ++i)
		{
			s[i][0] = 0;
		}
		for (i = 0; i <= sum; ++i)
		{
			s[0][i] = 0;
		}
		for (i = 1; i <= n; ++i)
		{
			scanf("%d%d",&c[i],&w[i]);
		}
		for (i = 1; i <= n; ++i)
		{
			for (j = 1; j <= v; ++j)
			{
				if (j >= c[i])
				{
					s[i][j] = std::max(s[i - 1][j], w[i] + s[i - 1][j - c[i]]);
				}
				else
				{
					s[i][j] = s[i - 1][j];
				}
			}
		}
		printf("%d\n", s[n][v]);
	}
	return 0;
}
*/


// #include <iostream>
// #include <map>
// #include <string>
// using namespace std;
// int main()
// {
// 	map<int, string> maps;
// 	maps[0] = "zero";
// 	maps[1] = "one";
// 	maps[2] = "two";
// 	maps[3] = "three";
// 	maps[4] = "four";
// 	maps[5] = "five";
// 	maps[6] = "six";
// 	maps[7] = "seven";
// 	maps[8] = "eight";
// 	maps[9] = "nine";
// 	maps[10] = "ten";
// 	maps[11] = "eleven";
// 	maps[12] = "twelve";
// 	maps[13] = "thirteen";
// 	maps[14] = "fourteen";
// 	maps[15] = "fifteen";
// 	maps[16] = "sixteen";
// 	maps[17] = "seventeen";
// 	maps[18] = "eighteen";
// 	maps[19] = "nineteen";
// 	maps[20] = "twenty";
// 	maps[30] = "thirty";
// 	maps[40] = "forty";
// 	maps[50] = "fifty";
// 	maps[60] = "sixty";
// 	maps[70] = "seventy";
// 	maps[80] = "eighty";
// 	maps[90] = "ninety";
// 	maps[1000] = "googol";
// 	string googol = "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
// 	int n, m, test, i, j;
// 	cin>>test;
// 	for(j = 1; j <= test; ++j)
// 	{
// 		cin>>n>>m;
// 		for (i = 0; i < 100; ++i)
// 		{
// 			if (m == 0)
// 			{
// 				break;
// 			}
// 			if (i <= 20)
// 			{
// 				if (maps[i].length() == n)
// 				{
// 					m--;
// 				}
// 			}
// 			else if (i < 100)
// 			{
// 				int len;
// 				if(i % 10 != 0)
// 				{
// 					len = maps[i-i%10].length() + maps[i%10].length();
// 				}
// 				else
// 				{
// 					len =  maps[i].length();
// 				}
// 				if(len == n)
// 				{
// 					m--;
// 				}
// 			}
// 		}
// 		if (m == 0)
// 		{
// 			cout<<"Case #"<<j<<": "<<i-1<<endl;
// 		}
// 		else
// 		{
// 			for (i = 1; i <= 10; ++i)
// 			{
// 				if (m == 0)
// 				{
// 					break;
// 				}
// 				if (maps[i].length() + maps[1000].length() == n)
// 				{
// 					m--;
// 				}
// 			}	
// 			if (m == 0)
// 			{
// 				cout<<"Case #"<<j<<": "<<i-1<<googol<<endl;
// 			}
// 			else
// 			{
// 				cout<<"Case #"<<j<<": -1"<<endl;
// 			}
// 		}
// 
// 	}
// 	return 0;
// }