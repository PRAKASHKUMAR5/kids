#include <iostream>
#include<bits/stdc++.h>
using namespace std; 
int  main ()
{
    int n;
    cout<<"Enter the number limits";
    cin>>n;
    int arr[n],x;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    x=n/2;
    cout<<arr[x];
    return 0;
}
    
