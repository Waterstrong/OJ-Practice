// NYOJ975_About521.cpp : 定义控制台应用程序的入口点。
//
/*
关于521
时间限制：1000 ms  |  内存限制：65535 KB
难度：2
描述
Acm队的流年对数学的研究不是很透彻，但是固执的他还是想一头扎进去。
浏览网页的流年忽然看到了网上有人用玫瑰花瓣拼成了521三个数字，顿时觉得好浪漫，因为每个男生都会不经意的成为浪漫的制造者。此后，流年走到哪里都能看到5、2、1三个数字，他怒了，现在他想知道在连续的数中有多少数全部包含了这三个数字。例如12356就算一个，而5111就不算。特别的，如果他看到了521三个数连续出现，会特别的愤怒。例如35210。
输入
多组测试数据：
一行给定两个数a，b（0<a，b<1000000），表示数字的开始和结束。
输出
一行显示他想要知道的数有几个及显示有多少个数字令他特别的愤怒。用空格隔开。
样例输入
200 500
300 900
1 600
样例输出
Case 1:2 0
Case 2:2 1
Case 3:6 1
来源
流年
上传者
ACM_安鹏程*/
#include "stdafx.h"
/*
#include <stdio.h>
int Angryflg;
int min(int x, int y)
{
	return (x<y?x:y);
}
int Judge(int x)
{
	int tmp, angry, oneflag = 0, twoflag = 0, fiveflag = 0;
	while(x)
	{
		tmp = x % 10;
		angry = x % 1000;
		if (angry == 521)
		{
			++Angryflg;
		}
		x /= 10;
		switch (tmp)
		{
		case 1:
			++oneflag;
			break;
		case 2:
			++twoflag;
			break;
		case 5:
			++fiveflag;
			break;
		default:break;
		}
	}
	return min(oneflag, min(twoflag, fiveflag));
}
int main()
{
	int start, end, i, cnt=0, num;
	while(scanf("%d%d", &start, &end)!=EOF)
	{
		++cnt;
		num = 0;
		Angryflg = 0;
		for(i = start; i <= end; ++i)
		{
			num += Judge(i);
		}
		printf("Case %d:%d %d\n", cnt, num, Angryflg);
	}
	return 0;
}
*/


#include <stdio.h>
#define N 1000001
struct FiveTwoOne
{
	int target;
	int angry;
	int tflag;
	int aflag;
};
FiveTwoOne fto[N];

void Judge(int x)
{
	int i = x;
	int tmp, angry, oneflag = 0, twoflag = 0, fiveflag = 0, angryflag = 0;
	while(x)
	{
		tmp = x % 10;
		angry = x % 1000;
		if (angry == 521)
		{
			++angryflag;
			oneflag = twoflag = fiveflag = 1;
			break;
		}
		x /= 10;
		switch (tmp)
		{
		case 1:
			++oneflag;
			break;
		case 2:
			++twoflag;
			break;
		case 5:
			++fiveflag;
			break;
		default:break;
		}
	}
	if (oneflag&&twoflag&&fiveflag)
	{
		fto[i].tflag = 1;
		++fto[i].target;
	}
	if (angryflag)
	{
		fto[i].aflag = 1;
		++fto[i].angry;
	}
}

int main()
{
	int i;
	fto[0].target = 0;
	fto[0].angry = 0;
	fto[0].tflag = 0;
	fto[0].aflag = 0;
	for (i = 1; i < N; ++i)
	{
		fto[i].target = fto[i-1].target;
		fto[i].angry = fto[i-1].angry;
		fto[i].tflag = 0;
		fto[i].aflag = 0;
		Judge(i);
	}

	int start, end, cnt=0, tnum, anum;
	while(scanf("%d%d", &start, &end)!=EOF)
	{
		++cnt;
		tnum = fto[end].target - fto[start].target + fto[start].tflag;
		anum = fto[end].angry - fto[start].angry + fto[start].aflag;
		printf("Case %d:%d %d\n", cnt, tnum, anum);
	}
	return 0;
}


/*
最优代码

#include<stdio.h>
struct AC
{
	int x,y;
}a[1000004];
int main()
{
	int i,j,k=0;a[125].x=1,a[521].y=1;
	for(i=0; i<1000003; i++)
	{
		int c[3]={0};
		if(i%10==5||i%100/10==5||i%1000/100==5||i%10000/1000==5||i%100000/10000==5||i%1000000/100000==5)
			c[2]=1;
		if(i%10==2||i%100/10==2||i%1000/100==2||i%10000/1000==2||i%100000/10000==2||i%1000000/100000==2)
			c[1]=1;
		if(i%10==1||i%100/10==1||i%1000/100==1||i%10000/1000==1||i%100000/10000==1||i%1000000/100000==1)
			c[0]=1;
		if(c[0]&&c[1]&&c[2]) a[i].x=a[i-1].x+1;
		else a[i].x=a[i-1].x;
		if(i%1000==521||i%10000/10==521||i%100000/100==521||i%1000000/1000==521) a[i].y=a[i-1].y+1;
		else a[i].y=a[i-1].y;
	}//printf("%d",l);
	while(~scanf("%d %d",&i,&j))
	{int m;
	k++;
	printf("Case %d:%d %d\n",k,a[j].x-a[i-1].x,a[j].y-a[i-1].y);
	}
}
*/