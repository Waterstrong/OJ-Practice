// TecentHackathon_ForthPreliminary.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
СQϵ�й��¡�����Ѳ���

Time Limit: 500/200 MS (Java/Others)    Memory Limit: 65535/32768 K (Java/Others)
Total Submission(s): 0    Accepted Submission(s): 0


Problem Description
������ȥ��2012���С����˵�Ǻܱ��ߵ�һ�꣬ʧ����12�Σ�ÿ�ζ�Ҫ����1�����¡�
  ��������СQ�Ǹ������ԣ�����ʹ���ʱ���������ùۿ�����������Ŀ�������Լ��������׶ذ��˻��ڼ䣬СQ�ͳ�������ĩ����һȺ����ͬ�¾����Լ����Ͼӣ�һ�߳���ơ�ƣ�һ�ߴ�ţ��
	����СQ��ϲ����������ˮ����Ҫԭ��Ҳ����Ϊ�����Ŀ���й��˲μӣ������й���Ա��ʤ�ļ��ʺܴ�һ�㲻���ٸ��Լ���£���Ȼ��̸�������������ء�
	  ������ˮ��Ŀ��һ����Ҫ���ھ��ǲ��д�֣�СQ������ʱ������ĳ�����в���ƽ���ǲ���������ѹ�й���Ա�ķ���������ÿ��һ����Ա��ˮ��ϣ����Ǽ���Ҳ������ϵĲ�����������Ա��֣����ҹ涨��˭�ķ��������յ÷���ӽ�˭�������ǵ��е���Ѳ��У��ֳ�����ơ��һ����
		�������У����յ÷�����������ģ�N���˴�֣�ȥ��һ����߷֣�ȥ��һ����ͷ֣�Ȼ��ʣ�������ӣ��ٳ���N-2��Ϊ���յ÷֡�
		  ����ƾ�衰�����������ˡ������͵�רҵ����֪ʶ��СQ����ÿ�ֱ�ʤ����һҹ��С��ע��Ҫ����������......


			Input
			������������������������
			  ����ÿ���������������һ������N����ʾ���е�������Ȼ�������N��ʵ������ʾN�����еĴ��Pi��NΪ0ʱ�������롣
				����[Technical Specification]
				  ����5 <= N <= 20
					����0<=Pi<=10


					  Output
					  ��������㲢�����Ѳ��еı�ţ�ÿ���������ռһ�У����ж��˲�����Ѳ��У�ֻҪ����������С���Ǹ���
						�����ر�˵�������б�Ű��մ�ֵ�˳���1��ʼ���������ƣ����һ�˱��ΪN��


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
֣����ϵ�й��¡��������Թ�

Time Limit: 3000/1000 MS (Java/Others)    Memory Limit: 65535/32768 K (Java/Others)
Total Submission(s): 0    Accepted Submission(s): 0


Problem Description
����֣����û��
  ���������Ǹ��ٳ�������ũ
	�����ı����ҵ�మ��
	  ���������ڲ��о����壬������Ϸ�ˣ�
		����
		  ���������֣���������������Թ������Ϸ��������ҹҹ���棬������ﵽ�Լ���Ŀ�꣺1000����Ϊ������ֺ�������Ѷ��������һ���ࡣ
			���������������ܵ�9999999ʱ����Ϸ��Ļ��ͻȻ�����˺ö����ӣ�֣��������Ҫ����������Щ���Ӳ��ܼ�������Ϸ����Щ�����ų�һ�У�ÿ�������϶��и����֣�ÿ�����ִ������������Ҫ������Ĵ����Ż���ʧ��ÿ�����ӱ����ʱ��Ӧ���ֻ��1���������ұ����ӵ�����Ҳ��ͬʱ��1�����������ֱ��0������;���ʧ�ˡ���Ҫ˵�����ǣ�����ұ�û�����ӻ����ұߵ������Ѿ���ʧ�ˣ����޷�������ǰ�����ӣ�������˵�ġ��ұߡ�ֻ��ָ�����ŵ��ұߣ������Ĳ��㣩��
			  ����������֪��Щ���ӵ���Ϣ������֣�����Ƿ��ܳɹ��������е�����Ȼ������������ǧ�������أ�


				Input
				�������Ȱ���һ��������T����ʾ��T�����������
				ÿ�����������У���һ����һ������n��������n�����ӣ��ڶ�����n������ai������ÿ��������Ҫ������Ĵ�����

				[Technical Specification]
				T<=100
				1 <= n <= 10 ^ 6
				0 <= ai <= 10 ^ 9 ��1 <= i <= n��


				Output
				��������ÿ�����������֣�����ܳɹ�������Щ���ӳɹ����ѣ������"yeah~ I escaped ^_^"����������"I will never go out T_T"��


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
����èϵ�й��¡���������

Time Limit: 500/200 MS (Java/Others)    Memory Limit: 65535/32768 K (Java/Others)
Total Submission(s): 0    Accepted Submission(s): 0


Problem Description
����2��29��������è�����գ�����������ӷǳ����⣬4���һ�Σ�������������������Ѷ�ǰ������è��ף���������ա�
  ������Ҹ�����è����һ���ǳ���ǳ���ĵ��⣬�������״��һ����n���ߵ�͹����Σ���������è����������һ����֣���ֻϲ����m���ߵĵ��⣬������Ҫ����ǰ����������p�Σ�Ȼ�����һ��ֻ��m���ߵ��µ��⡣���´�Ҽ��ˣ��ⲻ�ǿӵ���������������֡�
	�������走��ɿ���һ��ƽ�溬n���ߵ�͹����Σ�ÿһ��������ֱ������ȥ��p��֮���ܸ�����è�г�һ��m���ߵĵ�����



	  Input
	  ����������ݣ�ÿ��ռһ�У�����3������n, m, p���������ϣ���
	  [Technical Specification]
	  3 <= n <= 10^100
	  0 < m <= 10^100
	  0 <= p <= 10^100


	  Output
	  ÿ��������ݣ�����ܹ��г�����èϲ���ĵ��⣬�����"YES"�����������"NO"��
	  ÿ���������һ�С�


	  Sample Input
	  4 5 1


	  Sample Output
	  YES

	  Hint

	  Sample��Ӧ��ʾ��ͼ���£�

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

//˼·��ֻҪn+p>=m �Ϳ������Ҫ��ǰ����mҪ�Ƕ���Σ�Ҳ����mҪ>=3

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