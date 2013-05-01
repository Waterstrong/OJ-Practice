// TecentHackathon_QuarterFinal.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

/*
СQϵ�й��¡�������

Time Limit: 600/200 MS (Java/Others)    Memory Limit: 65535/32768 K (Java/Others)
Total Submission(s): 0    Accepted Submission(s): 0


Problem Description
����������п��յ�СQ����������һ��ʱ�䣬��������3��25��һ��û�г��֣����кܶ����������������ԣ�����������ٳ���һ�Σ���ʽ�ʹ���������
  ����
	����СQ����˯������ܲ������˯���ţ���������������ǰ����ȫ�ڵ�������������ٵ��˺ü��Σ���Ȼ����û˵ʲô���������Լ�������µ������ԡ�
	  ��������û���ˣ�СQ������ʧȥ���������������������ӣ�Ϊ�������ɿ����������˸�����ԭװ���ڻ������ǣ�����ν��©ƫ����ҹ�ꡢ�˵�ù��ʱ�����ˮ��������СQ���������������Ӿ�Ȼÿ�������Ǳ���ȷʱ������ô���룡
		����������С�ѷ߷�Ȼ����������һ�����ӣ���
		  ��������Ϊ�˳�����ô��ӣ�СQ���Ǿ�����취������������ܣ�ϣ���ܽ��䵱������ʱ��ʹ�á�
			����СQ������������ȥ�о����ӣ�
			  ����1�� ��������ʱ������t���ӣ���������ߵ�ʱ�䣻
				����2�� �����������t���ӣ���������ʱ���ߵ�ʱ�䣻
				  ����3�� СQ�������뵱ǰʱ�������ȷʱ�䣬��ʱ��Ϊ��0�Σ������k�δ�����ʾ��ʱ������ȷʱ����ͬ��Ҫ��ʱ�䣨���ӵĽṹ����ͨʱ����ͬ������Ϊ12���60С�񣩡�


					Input
					�������ݵ�һ����һ��������T����ʾ�ܹ���T��������ݣ�
					��������ÿ��������������������x����ʾ����ÿ���ӱ�����ʱ����x�룻
					������һ����һ��������Q����ʾ����Q��ѯ�ʣ�
					������Q�У�ÿ����������ѯ�ʷ�ʽ��1��2��3����ӦСQ�о����ӵ������棩���������1��2������������������t���������3������������������k��t��k�ĺ������Ŀ����

					[Technical Specification]
					T <= 100
					x < 60
					Q <= 100
					t <= 10000
					k <= 10


					Output
					�����Ҫ����Ĵ𰸣�����Ϊ��λ��������λС����ÿ�β�ѯ���һ�У��μ�Sample����


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

					СQ�����˵�仰�������ڻ�δ�ؿɿ������ǻ���֧�ֹ����ɣ���*/
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
����ϵ�й��¡�����������

Time Limit: 3000/1000 MS (Java/Others)    Memory Limit: 65535/32768 K (Java/Others)
Total Submission(s): 0    Accepted Submission(s): 0


Problem Description
�������绹���Ǹ�����
  �����Ǹ������˳ơ�ߴߴ�硱�Ļ���
	����
	  ����ÿ���������٣�Ů���ڶ��ߴߴ�������ܴ�ȫ�����ص�Ů�������յ��������
		�����������յ���Ȼֵ�ø��ˣ�������ȷ�Ǽ��鷳���£�
		  �������۶��鷳���ܲ�����˼�������������Ҳ����ߴߴ��ķ��
			����
			  �������ڣ����������ֿ��ŵ�ߴߴ�������һ������ĺð취����׼��������Ů�����������������䣬�ٻ��Ͳ�ͬŮ�ѣ������Ͳ����ٻ�Ǯ�������ˣ�
				����
				  ��������ߴߴ���n��Ů��ÿ������һ�����ÿ�����͵����ﶼ����ͬ������������Ҫ�����ţ��ٻ���ÿ��Ů��һ������ص��ǣ����͵����ﲻ�������Ů��֮ǰ�������Ǹ������Ȼ��ߴߴ��ɾ�̯�����ˣ�̯�ϴ�����......
					����
					  �������ڣ�ߴߴ����֪���ܹ��ж��������������Ļ������﷽���أ� 


						Input
						�������ݵ�һ���Ǹ�������T����ʾ�ܹ���T��������ݣ�T <= 100����
						ÿ�����ݰ���һ��������n����ʾߴߴ���Ů�Ѹ���Ϊn( 1 <= n <= 100 )��


						Output
						��������ܵķ���������Ϊ���������ܱȽϴ��뽫�����10^9 + 7 ȡģ���������
						ÿ�����ռһ�С�


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
// 	__int64 *data=new __int64[n];//����һ��nԪ���飬�Կռ任ʱ��   
// 	data[0]=0;
// 	data[1]=1;
// 	for(int i=2;i<n;i++)
// 		data[i]=i*(data[i-1]+data[i-2]);//�Դ˿��Կ�����
// 	//���������ÿռ�����м������棬���Ա���ʹ�õݹ�
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
// 		cout<<"��������һ���������Լ����λ������Dn��"<<endl;
// 		cin>>n;
// 		//cout<<"n="<<n<<"ʱ,Dn="<<calc_Dn(n)<<endl;
// 		cout<<"n="<<n<<"ʱ,Dn="<<calc_Dn2(n)<<endl;//���n=1000��ʱ��ջ������޷��õ������
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