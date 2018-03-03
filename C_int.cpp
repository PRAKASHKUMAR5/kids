#include <iostream>
using namespace std;
int main()
{
  int a,c=0;
  cout<<"Enter the num :";
  cin>>a;
  
  while(a>0)
  {    
      a=a/10;
      c++;
  }
  cout<<c;  
  return 0;
}
