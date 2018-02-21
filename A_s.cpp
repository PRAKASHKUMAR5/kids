#include <iostream>
using namespace std;
int main()
{
int n,k,a[n],s=0;
cout<<"input"<<endl;
cin>>n>>k;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}    
for(int i=0;i<k;i++)
{
    s=s+a[i];
}
cout<<"output"<<endl<<s;
return 0;
}