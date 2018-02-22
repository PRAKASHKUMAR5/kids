#include <iostream>
using namespace std;
int main()
{
     int n, num, digit, rev = 0;
     cout << "Enter a positive number: ";
     cin >> num;
     n = num;
     if(n<=1000)
     {
     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     if (n == rev)
         cout << "Yes";
     else
         cout << "Not Palindrome";
     }

    return 0;
}
