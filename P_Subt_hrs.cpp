#include<iostream>
using namespace std;
int main()
{
	int a1,a2,b1,b2;
	cout<<"Enter the input"<<endl;
	cin>>a1>>a2>>b1>>b2;
	int x=0,y=0;
	x=a1-b1;
	y=a2-b2;
	x=abs(x);
	y=abs(y);
	cout<<x<<" "<<y;
	}