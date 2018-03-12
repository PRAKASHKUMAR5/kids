#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
string s;
cout<<"Enter the input:"<<endl;
getline(cin,s);
int c=0;
int l=s.length();
char a[l];
strcpy(a,s.c_str());
for(int i=0;i<l;i++)
{
    if(a[i]==' ')
    {
        c++;
    }
}
cout<<c;
 return 0;
}
