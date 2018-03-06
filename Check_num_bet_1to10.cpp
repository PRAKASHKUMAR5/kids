#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    
    for(int i=0;i<=10;i++)
    {
       if(n==i)
       {
           c++;
       }
    }
    if(c==0)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }
     
    return 0;
}
