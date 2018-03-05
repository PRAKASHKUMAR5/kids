#include <iostream>
using namespace std;
int main()
{
 int n;
   int a[n],max;
    cout<<"Enter the limits number & values:"<<endl;
    cin>>n;
        max=0;
        for(int i=0;i<n;i++)
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
