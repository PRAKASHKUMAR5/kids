#include <iostream>
using namespace std;
int main()
{
int a,b,c,x=0;
cout<<"Enter the input:"<<endl;
cin>>a;  
  if(a>0)
  {
      b=a%10;
      c=10-b;
      x=a+c;
  }
  cout<<x;
 return 0;
}
