#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the input:"<<endl;
	cin>>n;
	int a=0,b=0;
	a=n/60;
	b=n%60;
	cout<<a<<" "<<b;
}