#include <iostream>
using namespace std;
int main()
{
int N,count=0;
cout<<"Enter the N value"<<endl;
cin>>N;
while(N>0)
{
    N=N/10;
    count+=1;
}
cout<<count;
return 0;
}