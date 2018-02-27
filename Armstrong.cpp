#include <iostream>
using namespace std;
int main()
{
    int n,r,sum=0,temp;    
    cout<< "Enter the n value"<<endl;
    cin>>n;
temp=n;  
if(n<=100000)
{
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(temp==sum)    
cout<<"Yes"<<endl;    
else    
cout<<"Not"<<endl;   
}
else
{
    cout<<"Invalid input";
}
return 0;  
    }