#include <iostream>
using namespace std;
int main()
{
    int a,c=0;
    cout<<"Enter value :"<<endl;
    cin>>a;
    
     if(a<=1000)
     {
         for(int i=2;i<a/2;i++)
         {
             if(a%i==0)
             {
                 c++;
                 break;
             }
         }
         if(c==0)
         {
             cout<<"Prime";
         }
         else
         {
             cout<<"Not";
         }
     }
    return 0;
}
