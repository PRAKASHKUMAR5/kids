#include <iostream>
using namespace std; 

int  main ()
{  
    int x,n;
    cout<<"Enter the Limits :"<<endl;
    cin>>n;
    cout << "Enter integer number: " << endl; 
    int array [n], t;
    for ( x=0; x<n; x++)
        {
        
        cin >> array[x]; 
        }
        for (x=0; x<n; x++)
        {
         for (int y=0; y<2; y++)
          {
           if(array[y]>array[y+1])
            {
                 t=array[y];
                 array[y]=array[y+1];
                 array[y+1]=t;
             }
         }
        }
        cout << "Ascending order are : "<<endl;
        for (x=0;x<n;x++)
        {  
           cout <<array[x]<<"  ";
        }
        return 0;  
        } 
