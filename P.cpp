#include <iostream>
using namespace std;
int main()
{
int a,b,p=1;
cout<<"Enter a number & power value"<<endl;
cin>>a>>b;
for(int i=0;i<b;i++)
{
    p=p*a;
}
cout<<p;
return 0;
}