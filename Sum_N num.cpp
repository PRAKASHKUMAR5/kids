#include <iostream>
using namespace std;
int main()
{
   int n,sum=0;
   cout<<"Enter n value :"<<endl;
   cin>>n;
   if(n<=100000)
   {
   for(int i=1;i<=n;i++)
   {
       sum=sum+i;
   }
   }
   cout<<sum;
   return 0;
}
