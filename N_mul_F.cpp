#include <iostream>
#include <string>
using namespace std;
int main()
{
  int a,c=1,b;
  cout<<"Enter the value"<<endl;
  cin>>a;
  for(int i=0;i<5;i++)
  {
      b=c*a;
      cout<<b<<" ";
      c++;
  }
      
}
