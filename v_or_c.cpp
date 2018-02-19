#include <iostream>
using namespace std;
int main()
{
  char a;
  cout<<"Enter the character"<<endl;
  cin>>a;
 
  if ((a>= 'a' && a<= 'z') || (a>= 'A' && a<= 'Z'))
  {
    if (a=='a' || a=='A' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O' || a== 'u' || a=='U')
    {
     cout<<"The given character is vowels "; 
    }
    else
    {
      cout<<"The given character is consonant  ";
    }
  }
  else
    cout<<"invalid input";
 return 0;
}