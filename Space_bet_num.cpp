#include<iostream>
using namespace std;
int main()
{
int n,count,temp,a[20],i=0,N;
cout<<"enter the number :"<<endl;
cin>>n;
temp=n;
while(n!=0)
{
n=n/10;
count++;
}
N=count;
while(temp!=0)
{
a[--count]=temp%10;
temp/=10;
}
for(i=0;i<N;i++)
{
cout<<a[i]<<" ";
}
    return 0;
}
