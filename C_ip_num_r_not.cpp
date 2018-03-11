#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	char	a[50];
	int x=0;
	cout<<"Enter the input:"<<endl;
	cin>>s;
	int l=s.length();
	strcpy(a, s.c_str());
	for(int i=0;i<l;i++)
	{
		if(a[i]>='0'&&a[i]<='9')	
		{
		 x++;
		}
	}
	if(x==l)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
		return 0;
	} 