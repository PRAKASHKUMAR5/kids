#include <iostream>
using namespace std;
int main()
{
  char a;
  cout<<"Enter the character"<<endl;
  cin>>a;
  if ((a>= 'a' && a<= 'z') || (a>= 'A' && a<= 'Z'))
  {
     cout<<"Alphabets";
    }
  
  else
  {
    cout<<"NOT";
  }
 return 0;
}