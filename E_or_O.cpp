#include <iostream>
using namespace std;
int main()
{
int a;
cout<<"Enter the checking value"<<endl;
cin>>a;
if(a>=1 && a<=100000)
{
if(a%2==0)
{
    cout<<"The given number is Even";
}
else 
{
     cout<<"The given number is Odd";
    
}
}
else
cout<<"The given number is value";
return 0;
}