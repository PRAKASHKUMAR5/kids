#include <iostream>
#include <string>
using namespace std;
int main()
{
int a,c=0;
cout<<"Enter the input:"<<endl;
cin>>a;
  for(int i=2;i<a;i++)
  {
      if(a%i==0)
      {
      c++;
      }
  }
  if(c==0)
  {
      cout<<"Yes";
  }
  else
  {
      cout<<"No";
  }
 return 0;
}
