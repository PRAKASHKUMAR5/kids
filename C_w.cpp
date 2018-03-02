#include<iostream>
using namespace std; 
int main()
{
    char a[100];
    int i,count=1;    
    cout<<"Enter a string:";
    cin>>a[100];    
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
            count++;
    }    
    cout<<count; 
    return 0;
}