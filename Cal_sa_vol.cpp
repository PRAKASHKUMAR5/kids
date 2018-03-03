
#include <iostream>
using namespace std;
int main()
{
   int L,B,H,SA,VOL;
   cout<<"Enter the values:"<<endl;
   cin>>L>>B>>H;
   SA=2*(L*B)+2*(L*H)+2*(H*B);
   VOL=L*B*H;
   cout<<"TOTAL SURFACE AREA OF CUBOID="<<SA<<endl;
   cout<<"VOLUME OF CUBOID="<<VOL<<endl;
   return 0;
}
