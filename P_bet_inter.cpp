#include <iostream>
using namespace std;
int main()
{
    int i,j,c=0,s,e;
    cout<<"Enter value of intervals:"<<endl;
    cin>>s>>e;
    for(i=s; i<e; i++)
	{
		c=0;
		for(j=2; j<i/2; j++)
		{
			if(i%j==0)
			{
				c++;
				break;
			}
		}
		if(c==0)
		{
			cout<<i<<" ";
		}
	}
    return 0;
}
