#include <iostream>
using namespace std;
int main()
{
   int n,i,a[1000],sum=0;
   cout<<"Enter num:"<<endl;
   cin>>n;  
   for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        cout<<sum;
   return 0;
}
