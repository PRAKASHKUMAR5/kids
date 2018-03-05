#include <iostream>
using namespace std;
int main()
{
   int a[10],max;
    cout<<"Enter the number "<<endl;
        max=0;
        for(int i=1;i<10;i++)
        {
            cin>>a[i];
            if(max<a[i])
            {
                max=a[i];
            }
        }
        cout<<max;    
        return 0;
}
