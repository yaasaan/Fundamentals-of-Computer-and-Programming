#include <iostream>
using namespace std;

int main(){

   int a,b,c,d;
   cin >> a >> b >> c >> d;


   if (a == b && a == c && a == d)
   {
       cout << 3 << endl;
       return 0;
   }else if (
       (a == b && a == c) ||
        (a == b && a == d) ||
        (a == c && a == d) ||
        (b == c && b == d))
    {
       cout << 2 << endl;
       return 0;
   }else if (
       (a == b && c == d) ||
       (a == c && b == d) ||
       (a == d && b == c)
    )
   {
     cout << 2 << endl;
     return 0;
   }else if (
       (a == b && c != d) ||
       (a == c && b != d) ||
       (a == d && b != c) ||
       (b == c && a != d) ||
       (b == d && a != c) ||
       (c == d && a != b)
   )
   {
       cout << 1 << endl;
       return 0;
   }else{
       cout << 0 << endl;
       return 0;
   }
}