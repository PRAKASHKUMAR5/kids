#include <iostream>
using namespace std;
int main()
{
int a;
cout<<"Enter the checking year"<<endl;
cin>>a;

if(a%4==0)
{
    cout<<"The given year is leap year";
}
else
{
    cout<<"The given year is not a leap year";
}
return 0;
}