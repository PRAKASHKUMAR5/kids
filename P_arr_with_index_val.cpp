#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter array limits"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter array Element"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" "<<i<<endl;
	}
}