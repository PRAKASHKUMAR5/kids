#include <iostream>
#include<bits/stdc++.h>
using namespace std; 
int  main ()
{
    string str;
    cout<<"Enter the values:"<<endl;
    getline(cin,str);
    int count=0;
    int n=str.length();
    for(int i=0;i<n;i++)
	{
		if(!((str[i]>='0' && str[i]<='9')||(str[i]>='a' && str[i]<='z')||str[i]=='.' || str[i]==' '))
		{
			count=count+1;
		}
	}
	cout<<count;
    return 0;
}
    Count
