// NYOJ025_FamousMusicComposer.cpp : 定义控制台应用程序的入口点。
//
/*
A Famous Music Composer
时间限制：1000 ms  |  内存限制：65535 KB
难度：1
描述
Mr. B is a famous music composer. One of his most famous work was his set of preludes. These 24 pieces span the 24 musical keys (there are musically distinct 12 scale notes, and each may use major or minor tonality). The 12 distinct scale notes are: 
A    	A#=Bb 	B      	 C     	 C#=Db	D      	D#=Eb 	E      	F      	 F#=Gb	 G     	 G#=Ab

Five of the notes have two alternate names, as is indicated above with equals sign. Thus, there are 17 possible names of scale notes, but only 12 musically distinct notes. When using one of these as the keynote for a musical key, we can further distinguish between major and minor tonalities. This gives 34 possible keys, of which 24 are musically distinct. 
In naming his preludes, Mr. B used all the keys except the following 10, which were named instead by their alternate names: 
Ab minor	 A# major	A# minor 	C# major 	Db minor
D# major	 D# minor	Gb major 	Gb minor 	G# major 
Write a program that, given the name of a key, give an alternate name if it has one, or report the key name is unique. 
输入
Each test case is described by one line having the format "note tonality", where "note" is one of the 17 names for the scale notes given above, and "tonality" is either "major" or "minor" (quotes for clarify).
输出
For each case output the required answer, following the format of the sample.
样例输入
Ab minor
D# major
G minor
样例输出
Case 1: G# minor
Case 2: Eb major
Case 3: UNIQUE
来源
hdu
上传者
李如兵
最优程序：

#include<iostream>
#include<string>
using namespace std;
string trans(string a){
string b="";
if(a[1]=='#'){
b+=char((a[0]-'A'+1)%7+'A');
b+='b';
}else{
b+=char((a[0]-'A'+6)%7+'A');
b+='#';
}
return b;
}
int main(){
string a,b;
for(int t=1; cin>>a>>b; t++){
cout<<"Case "<<t<<": ";
if(a.length()==1)
cout<<"UNIQUE"<<endl;
else
cout<<trans(a)<<" "<<b<<endl;
}
return 0;
}

*/


#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;
string Alternate(string str)
{
	if (str[1] == '#')
	{

		if (str[0] < 'G')
		{
			str[0] += 1;
		}
		else
		{
			str[0] = 'A';
		}
		str[1] = 'b';
	}
	else
	{
		if (str[0] > 'A')
		{
			str[0] -= 1;
		}
		else
		{
			str[0] = 'G';
		}
		str[1] = '#';
	}
	return str;
}
string Strs[10] = {"Ab minor", "A# major", "A# minor", "C# major", 
	"Db minor", "D# major", "D# minor", "Gb major", "Gb minor", "G# major"};
bool IsInstead(string str)
{
	for (size_t i = 0; i < 10; ++i)
	{
		if (Strs[i] == str)
		{
			return true;
		}
	}
	return false;
}
int main()
{
	int cnt = 1;
	string str1, str2;
	while (cin>>str1>>str2)
	{
		cout<<"Case "<<cnt++<<": ";
		if (str1.size() == 1)
		{
			cout<<"UNIQUE"<<endl;
		}
		else// if (IsInstead(str1 + " "+ str2))
		{
			cout<<Alternate(str1)<<" "<<str2<<endl;
		}
// 		else
// 		{
// 			cout<<str1<<" "<<str2<<endl;
// 		}
	}
	return 0;
}

