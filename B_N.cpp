#include <iostream>
using namespace std;
int main()
{
  int arr[25],c=0;
  int size =sizeof(arr);
  cout<<"Enter the binary num :";
  cin>>arr[25];
  for(int i=0;i<25;i++)
  {
      if(arr[i]==0 || arr[i]==1)
      {
          c++;
      }
  }
  if(c==size)
  {
      cout<<"yes";
  }
  return 0;
}
