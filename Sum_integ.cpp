#include <iostream>
using namespace std;
int main()
{
  int a,b,c=0;
  cout<<"Enter the num:"<<endl;
  cin>>a;
  while(a>0)
  {
      b=a%10;
      c=c+b;
      a=a/10;
  }
  cout<<c;
        return 0;
}
