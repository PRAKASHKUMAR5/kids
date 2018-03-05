#include <iostream>
using namespace std;
int main()
{
  int a1=0,a2=1,a3,n;
  cout<<"Enter the calculate num :"<<endl;
  cin>>n;
  cout<<"1"<<" ";
  for(int i=1;i<n;i++)
  {
      a3=a1+a2;
      a1=a2;
      a2=a3;
      cout<<a3<<" ";
  }
  
        return 0;
}
