#include<iostream>
using namespace std;
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	string b[10]={"one","two","three","four","five","six","seven","eight","nine","ten"}; 
	int n;
	cin>>n;
	for(int i=0;i<10;i++)
	{
		if(a[i]==n)
		{
			cout<<b[i];
		}
	}
}