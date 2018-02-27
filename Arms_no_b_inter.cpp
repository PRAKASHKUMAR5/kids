#include <iostream>
using namespace std;
int main()
{
  int a,b,i,n,d,s;

  cout << "Enter the intervals:"<<endl;
  cin >>a>>b;
  for(i=a;i<=b;i++)
  {
        s=0;      
        for(n=i;n>0;n/=10)
        {
            d=n%10;
            s=s+d*d*d;
        }
        if(s==i)
        {
            cout<<i<<endl;
        }
  }

  return 0;
}