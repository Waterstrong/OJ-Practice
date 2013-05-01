// HOJ4506_HelpXiaoming.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
С��ϵ�й��¡���ʦ�ְ��æ

Time Limit: 3000/1000 MS (Java/Others)    Memory Limit: 65535/32768 K (Java/Others)
Total Submission(s): 1540    Accepted Submission(s): 358


Problem Description
����С���ԴӸ����ACM/ICPC֮�󣬾Ϳ�ʼǱ���о���ѧ�����ˣ�һ�����Ϊ�������Ŀ�����׼�������߿��Խ�˻������һЩͬѧ��������Ư����ʦ�á��ⲻ������Ψһ��Ů������һ����ѧ�������С����С����Ȼ�ܸ��˵ľͽ����ˡ�����������ϸ�����Ժ󣬷����Լ�Ҳ������������С�����ˣ�����ظ�˵�Լ����������Ǻ�û���ӣ�
  �������ԣ�������˽�������æ��������Ŀ����Ŀ�������ģ�
	��������n�����֣��ֱ���a1,a2,a3,a4,a5����an����Щ����ÿ��һ����λʱ��ͻ�ı䣬������һ����λʱ�������Ϊa1��,a2��,a3������an������ô�����λʱ�������a[i] = a[i - 1]�� * K(i == 1��ʱ��a[1] = a[n]�� * K)������KΪ������ϵ����
	  �������ڵ�����������t��λʱ���ʱ����n�����ֱ����ʲô�ˣ��������ֿ��ܻ�ܴ�����ֻҪ��������ֶ�10^9 + 7ȡ���Ժ�Ľ����


		Input
		�����������ݵ�һ����һ��������T����ʾ��T��������ݣ�
		  ����ÿ�����������У���һ�а���������������n, t, k������n�������ָ�����t�����t����λʱ�䣬k����ϵ�����ڶ�������n������ai������ÿ�����ֿ�ʼ��ʱ���Ƕ��١�

			����[Technical Specification]
			  ����T <= 100
				����1 <= n <= 10 ^ 4
				  ����0 <= t <= 10 ^ 9�������� t = 0 ��ʾ��ʼ״̬
					����1 <= k <= 10 ^ 9
					  ����1 <= ai<= 10 ^ 9


						Output
						��������ÿ�������������t��λʱ�����n�����ֱ����ʲô�������ʱ��ÿ��������֮�����һ���ո���ĩ��Ҫ�������Ŀո񣬾����������


						  Sample Input
						  2
						  3 2 5
						  1 2 3
						  3 0 5
						  1 2 3


						  Sample Output
						  50 75 25
						  1 2 3


						  Source
						  2013��Ѷ��������ɳ�����һ����3��21�գ�


						  Recommend
						  liuyiding
						  
						  #include <stdio.h>

						  __int64 quickmod(__int64 a,__int64 b,__int64 m)
						  {
						  __int64 ans = 1;
						  while(b)
						  {
						  if(b&1)
						  {
						  ans = (ans*a)%m;
						  b--;
						  }
						  b/=2;
						  a = a*a%m;
						  }
						  return ans;
						  }

						  int main()
						  {
						  int num;
						  __int64 t,k;
						  __int64 mod = 1000000007;
						  __int64 a[10005],n,i,sum;
						  scanf("%d",&num);
						  while(num--)
						  {
						  scanf("%I64d%I64d%I64d",&n,&t,&k);
						  for(i = 0; i<n; i++)
						  {
						  scanf("%I64d",&a[i]);
						  }
						  sum = quickmod(k,t,mod);
						  t%=n;
						  __int64 x;
						  int y;
						  for(i = 0; i<n; i++)
						  {
						  if(i<t)
						  y = i+n-t;
						  else
						  y = i-t;
						  x = (a[y]*sum)%mod;
						  if(!i)
						  printf("%I64d",x);
						  else
						  printf("% I64d",x);
						  }
						  printf("\n");
						  }

						  return 0;
						  }

		*/
#include "stdafx.h"

#include <stdio.h>
const __int64 mod = 1000000007;
__int64 arr[10005];
__int64 quickmod(__int64 k, __int64 t, __int64 m)
{// k^t
	__int64 ans = 1;
	while(t)
	{
		if(t&1)
		{
			ans = (ans*k)%m;
			t--;
		}
		t/=2;
		k = k*k%m;//��k��t�ηֳ� k��t/2��*k��t/2�Ρ�
	}
	return ans;
}

int main()
{
	int test;
	scanf("%d", &test);
	__int64 i, num, time, keo, sum;
	while(test--)
	{
		scanf("%I64d%I64d%I64d", &num, &time, &keo);
		for (i = 0; i < num; ++i)
		{
			scanf("%I64d", &arr[i]);
		}
		sum = quickmod(keo, time, mod);
		__int64 dis = time%num; // ����time�κ����˶���λ
		for (i = num-dis; i < num; ++i)
		{
			printf("%I64d ", arr[i]*sum%mod);
		}
		for (i = 0; i < num - dis; ++i)
		{
			if (i == num - dis - 1)
			{
				printf("%I64d\n", arr[i]*sum%mod);
			}
			else
			{
				printf("%I64d ", arr[i]*sum%mod);
			}
		}
	}
	return 0;
}

